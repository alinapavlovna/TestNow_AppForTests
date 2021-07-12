#include "LoginForm.h"

System::Void FinalProjectKyselova::LoginForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login;
	String^ password;
	String^ file_log = "logins.txt";
	String^ file_pass = "passwords.txt";
	String^ group = comboBox1->Text;
	TestNow user;

	array <String^>^ res = File::ReadAllLines("results.txt");

	try {
		login = textBox1->Text;
		password = textBox2->Text;
		group = comboBox1->Text;

		if (user.checkUser(login, password, file_log, file_pass) && group != "") {

			bool flag;
			for (int i = 0; i < res->Length; i++) {
				flag = res[i]->Contains(login);
				if (flag) {
					MessageBox::Show("Даний тест доступний на проходження тільки один раз.",
						"Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					Hide();
					main_form->Show();
					break;
				}
			}

			if (!flag) {
				Hide();
				TestingForm^ ready = gcnew TestingForm();
				ready->ShowDialog();
				File::AppendAllText("results.txt", login + " " + group + "\n");
				user.writeLoginsStud(login, group);
			}
		}
		else {
			MessageBox::Show("Такого користувача в системі не знайдено. Перевірте правильність введення даних і заповніть всі поля. ",
				"Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show("Причина помилки: " + ex->Message->ToString() +
			"\nВведіть свій логін, пароль і групу!", "Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		textBox1->Clear();
		textBox2->Clear();

	}

}


System::Void FinalProjectKyselova::LoginForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	main_form->Show();
}


System::Void FinalProjectKyselova::LoginForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login;
	String^ password;
	String^ file_log = "logins_adm.txt";
	String^ file_pass = "passwords_adm.txt";

	TestNow user;

	try {
		login = textBox1->Text;
		password = textBox2->Text;

		if (user.checkUser(login, password, file_log, file_pass)) {
			Hide();
			user.writeLoginsAdm(login);
			InformationForm^ test = gcnew InformationForm(this);
			test->ShowDialog();
		}
		else {
			MessageBox::Show("Перевірте правильність введення даних. Такого користувача в системі не знайдено.",
				"Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show("Причина помилки: " + ex->Message->ToString() +
			"\nВведіть свій логін і пароль!", "Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		textBox1->Clear();
		textBox2->Clear();
	}
}

System::Void FinalProjectKyselova::LoginForm::button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = false;
}

System::Void FinalProjectKyselova::LoginForm::button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = true;
}

System::Void FinalProjectKyselova::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	MainForm^ main_form = gcnew MainForm();
	main_form->Show();
}