#pragma once
using namespace System;
class TestNow
{
public:
	bool checkUser(String^ login, String^ pass, String^ file_log, String^ file_pass);
	bool checkLogin(String^ login);
	void writeNewData(String^ login, String^ pass);
	void writeLoginsStud(String^ login, String^ group);
	void writeLoginsAdm(String^ login);
	
};
