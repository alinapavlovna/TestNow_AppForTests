#include "MainForm.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#undef WIN32_LEAN_AND_MEAN
using namespace FinalProjectKyselova;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MainForm);
    return 0;
}

System::Void FinalProjectKyselova::MainForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ sign_in = gcnew LoginForm(this);
	sign_in->Show();
	Hide();
}

System::Void FinalProjectKyselova::MainForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {

	RegistrationForm^ reg = gcnew RegistrationForm(this);
	reg->Show();
	Hide();
}

System::Void FinalProjectKyselova::MainForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Application::Exit();
	Environment::Exit(0);
}

System::Void FinalProjectKyselova::MainForm::MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Environment::Exit(0);

}