#include "TestingForm.h"

using namespace System;
using namespace std;

int temp = 0, i;
int timerCounter;
int finalTime = 0;


System::Void FinalProjectKyselova::TestingForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	array <String^>^ quest = File::ReadAllLines("questions.txt");
	array <String^>^ answ = File::ReadAllLines("answers.txt");

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;

	groupBox1->Visible = true;

	timerCounter = 600;
	timer1->Enabled = true;

	button3->Visible = true;

	i = temp;

	label1->Text = System::Convert::ToString(quest[i / 3]);
	radioButton1->Text = System::Convert::ToString(answ[i]);
	radioButton2->Text = System::Convert::ToString(answ[++i]);
	radioButton3->Text = System::Convert::ToString(answ[++i]);

	button4->Visible = false;
}

 System::Void FinalProjectKyselova::TestingForm::timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	 --timerCounter;
	 try {
		 if (timerCounter <= 0) {
			 timer1->Stop();
			// button1->Visible = false;
			 button3->Visible = false;

			 throw gcnew TimeoutException();

		 }
	 }
	 catch (TimeoutException^ ex) {
		 MessageBox::Show("На жаль, час на написання тесту закінчився. Натисніть кнопку \"Завершити тест\", щоб подивитися результат",
			 "Час вичерпано", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	 }

	 if (timerCounter < 60) {
		 label4->Text = (timerCounter).ToString();
		 label3->Text = "0";

	 }
	 if (timerCounter >= 60) {
		 int hour = (timerCounter / 60 / 60);
		 int minutes = (timerCounter - hour * 3600) / 60;
		 int seconds = (timerCounter - hour * 3600 - minutes * 60) % 60;

		 label2->Text = (hour).ToString();
		 label3->Text = (minutes).ToString();
		 label4->Text = (seconds).ToString();

	 }
 }

 int count = 3; 

System::Void FinalProjectKyselova::TestingForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {

	array <String^>^ quest = File::ReadAllLines("questions.txt"); 
	array <String^>^ answ = File::ReadAllLines("answers.txt");

	if (!radioButton1->Checked && !radioButton2->Checked && !radioButton3->Checked) {
		MessageBox::Show("Оберіть варіант відповіді", "Помилка",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);

		count -= 3;
	}

	//записываем выбранные пользователем ответы в файл
	if (radioButton1->Checked) {
		File::AppendAllText("answers_stud.txt", radioButton1->Text + "\n");
	}
	if (radioButton2->Checked) {
		File::AppendAllText("answers_stud.txt", radioButton2->Text + "\n");
	}
	if (radioButton3->Checked) {
		File::AppendAllText("answers_stud.txt", radioButton3->Text + "\n");
	}

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;

	i = count;

	try {
		label1->Text = System::Convert::ToString(quest[i / 3]);
		radioButton1->Text = System::Convert::ToString(answ[i]);
		radioButton2->Text = System::Convert::ToString(answ[++i]);
	 	radioButton3->Text = System::Convert::ToString(answ[++i]);

		count += 3;
	}
	catch (Exception^ ex) {
		MessageBox::Show("Ви відповіли на всі питання. Щоб подивитися результати, натисніть кнопку \"Завершити тест\" ", "Тест",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		button3->Visible = false;

	}
}

System::Void FinalProjectKyselova::TestingForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	ResultForm^ res = gcnew ResultForm(this);
	res->ShowDialog();
}

System::Void FinalProjectKyselova::TestingForm::TestingForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	if (e->CloseReason == CloseReason::UserClosing)
	{
		//устанавливает флаг отмены события в истину
		e->Cancel = true;
		MessageBox::Show("Ви впевнені, що хочете припинити тест? Щоб вийти, натисніть кнопку \"Завершити тест\" ", "Тест",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

System::Void FinalProjectKyselova::TestingForm::InfoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Дана програма написана студенкою другого курсу кафедри кібербезпеки та захисту інформації\nФакультету інформаційних технологій КНУ ім. Шевченка Кисельовою Аліною. \nДане програмне забезпечення може використовуватися в освітніх цілях",
		"Довідка про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

System::Void FinalProjectKyselova::TestingForm::QuitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ви впевнені, що хочете припинити тест? Щоб вийти, натисніть кнопку \"Завершити тест\" ", "Тест",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
}




	 
