#include "RegistrationForm.h"

using namespace std;
using namespace System;


System::Void FinalProjectKyselova::RegistrationForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ login;
	String^ password;
	String^ password_again;
	TestNow user;


	try {

		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") throw gcnew FormatException();
		else {
			login = textBox1->Text;
			password = textBox2->Text;
			password_again = textBox3->Text;

			int len = password->Length;

			if (len < 8 || len > 16) throw gcnew ArgumentOutOfRangeException();

			if (!user.checkLogin(login)) {
				if (password == password_again) {
					user.writeNewData(login, password);

					MessageBox::Show("Реєстрація пройшла успішно. Ввійдіть в аккаунт",
						"Підтвердження реєстрації", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Hide();
					main_form->Show();
				}
				else {
					MessageBox::Show("Перевірте правильність введення даних. Паролі не співпадають",
						"Помилка реєстрації", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Користувач з таким іменем вже існує. Оберіть інше або ввійдіть в аккаунт",
					"Помилка реєстрації", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
	}

	catch (ArgumentOutOfRangeException^ ex) {
		if (password->Length < 8) {
			MessageBox::Show("\nВаш пароль має бути не менше 8 символів. Рекомендується застосовувати цифри, символи, латинські літери у верхньому та нижньому регістрах",
				"Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			textBox2->Clear();
			textBox3->Clear();
		}
		if (password->Length > 16) {
			MessageBox::Show("\nВаш пароль має бути не більше 16 символів. Рекомендується застосовувати цифри, символи, латинські літери у верхньому та нижньому регістрах",
				"Помилка входу", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			textBox2->Clear();
			textBox3->Clear();
		}
	}

	catch (FormatException^ ex) {
		MessageBox::Show("Заповніть усі поля!",
			"Помилка вводу даних", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();

	}
}

System::Void FinalProjectKyselova::RegistrationForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	main_form->Show();
}

System::Void FinalProjectKyselova::RegistrationForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ genPass;
	String^ pass = generate(genPass);

	MessageBox::Show("Увага! Ваш згенерований пароль - \n" + pass + "\nОбов'язково запам'ятайте або збережіть в надійному місці згенерований пароль!",
		"Повідомлення", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	textBox2->Text = pass;
	textBox3->Text = pass;


}

System::Void FinalProjectKyselova::RegistrationForm::button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = false;
	textBox3->UseSystemPasswordChar = false;

}

System::Void FinalProjectKyselova::RegistrationForm::button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = true;
	textBox3->UseSystemPasswordChar = true;

}

System::Void FinalProjectKyselova::RegistrationForm::RegistrationForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	MainForm^ main_form = gcnew MainForm();
	main_form->Show();
}