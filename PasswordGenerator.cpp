#include "PasswordGenerator.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

String^ generate(String^ pass) {

	Random^ rand = gcnew Random();
	int num;
	int count = 0;

	while (count <= 12) {
		
		num = rand->Next(48, 57); //цифры
		pass += Char(num).ToString();

		num = rand->Next(65, 90); //заглавные
		pass += Char(num).ToString();

		num = rand->Next(97, 122); // строчные
		pass += Char(num).ToString();

		num = rand->Next(91, 95); // символы
		pass += Char(num).ToString();

		count += 4;
	}

	return pass;
}