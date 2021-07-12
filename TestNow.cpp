#include "TestNow.h"
#include <stdlib.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

bool TestNow::checkUser(String^ login, String^ pass, String^ file_log, String^ file_pass) {
	array <String^>^ logins;
	array <String^>^ passwords;
	bool res = false;

	logins = File::ReadAllLines(file_log);
	passwords = File::ReadAllLines(file_pass);

	for (int i = 0, j = 0; i < logins->Length, j < passwords->Length; i++, j++) {
		if (login == logins[i] && pass == passwords[j]) {
			res = true;
			break;
		}
	}
	return res;

}
bool TestNow::checkLogin(String^ login) {
	bool res = false;
	array <String^>^ logins;
	logins = File::ReadAllLines("logins.txt");

	for (int i = 0; i < logins->Length; i++) {
		if (login == logins[i]) {
			res = true;
			break;
		}
	}
	return res;
}
void TestNow::writeNewData(String^ login, String^ pass) {
	File::AppendAllText("logins.txt", login + "\n");
	File::AppendAllText("passwords.txt", pass + "\n");
}

void TestNow::writeLoginsStud(String^ login, String^ group) {
	DateTime date = DateTime::Now;
	String^ auditInfo = login + "\n" + group + "\n" + "Student" + "\n\n";
	File::AppendAllText("audit.txt", date + "\n" + auditInfo);
}

void TestNow::writeLoginsAdm(String^ login) {
	DateTime date = DateTime::Now;
	String^ auditInfo = login + "\n" + "Teacher" + "\n\n";
	File::AppendAllText("audit.txt", date + "\n" + auditInfo);
}
