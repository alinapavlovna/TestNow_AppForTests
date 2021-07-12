#include "ResultForm.h"

System::Void FinalProjectKyselova::ResultForm::ResultForm_Load(System::Object^ sender, System::EventArgs^ e) {
	int count = 0;
	array <String^>^ answ_stud;
	array <String^>^ answ_right;

	answ_stud = File::ReadAllLines("answers_stud.txt");
	answ_right = File::ReadAllLines("answers_right.txt");

	//подсчитываем количество правильных ответов
	for (int i = 0; i < answ_stud->Length; i++) {
		for (int j = 0; j < answ_right->Length; j++) {
			if (answ_stud[i] == answ_right[j])
				count++;
		}
	}

	label2->Text = System::Convert::ToString(count);
	label4->Text = System::Convert::ToString(answ_right->Length);

	//записываем результат в файл
	File::AppendAllText("results.txt", count + "\n");
}

System::Void FinalProjectKyselova::ResultForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//удаляем ответы текущего пользователя
	File::Create("answers_stud.txt"); //создает или перезаписывает! файл
	Application::Exit();

}

System::Void FinalProjectKyselova::ResultForm::ResultForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	File::Create("answers_stud.txt"); //создает или перезаписывает! файл
	Application::Exit();
}