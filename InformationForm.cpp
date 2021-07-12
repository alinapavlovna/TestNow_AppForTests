#include "InformationForm.h"


System::Void FinalProjectKyselova::InformationForm::CellColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	dataGridView1->RowsDefaultCellStyle->BackColor = colorDialog1->Color;
}

System::Void FinalProjectKyselova::InformationForm::HeaderFontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->ShowDialog();
	dataGridView1->Columns[0]->HeaderCell->Style->Font = fontDialog1->Font;
	dataGridView1->Columns[1]->HeaderCell->Style->Font = fontDialog1->Font;
}

System::Void FinalProjectKyselova::InformationForm::HeaderColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();

	dataGridView1->Columns[0]->HeaderCell->Style->ForeColor = colorDialog1->Color;
	dataGridView1->Columns[1]->HeaderCell->Style->ForeColor = colorDialog1->Color;
}

System::Void FinalProjectKyselova::InformationForm::ChartColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	chart1->Series[0]->Color = colorDialog1->Color;
}

System::Void FinalProjectKyselova::InformationForm::BackChartColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	chart1->ChartAreas["ChartArea1"]->BackColor = colorDialog1->Color;
}

System::Void FinalProjectKyselova::InformationForm::QuitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Hide();
	main_form->Show();
}

System::Void FinalProjectKyselova::InformationForm::TextColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	dataGridView1->ForeColor = colorDialog1->Color;
}

System::Void FinalProjectKyselova::InformationForm::InfoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Дана програма написана студенкою другого курсу кафедри кібербезпеки та захисту інформації\nФакультету інформаційних технологій КНУ ім. Шевченка Кисельовою Аліною. \nДане програмне забезпечення може використовуватися в освітніх цілях",
		"Довідка про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


System::Void FinalProjectKyselova::InformationForm::InformationForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	MainForm^ main_form = gcnew MainForm();
	main_form->Show();
}


 System::Void FinalProjectKyselova::InformationForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	array <String^>^ results = File::ReadAllLines("results.txt");
	String^ group = comboBox1->Text;

	if (group == "") {
		MessageBox::Show("\nОберіть групу, інформація про яку вам потрібна", "Помилка входу",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	dataGridView1->Columns->Clear();
	dataGridView1->ColumnCount = 2;
	dataGridView1->RowCount = 1;

	dataGridView1->Columns[0]->Name = "Студент";
	dataGridView1->Columns[1]->Name = "Бал";

	//надо найти есть ли в элементе массива(строке) подстрока с номером группы
	//создаем график и заполняем таблицу

	chart1->Series[0]->Points->Clear();

	int j = 0;
	Series^ plot = chart1->Series[0];

	for (int i = 0; i < results->Length; i++) {
		if (i % 2 != 0) {
			if (results[i]->Contains(group)) {
				dataGridView1->Rows->Add();
				dataGridView1->Rows[j]->Cells[0]->Value = results[i];
				dataGridView1->Rows[j]->Cells[1]->Value = results[i - 1];
				plot->Points->AddXY(results[i], results[i - 1]);

				j++;
			}
		}
	}
}