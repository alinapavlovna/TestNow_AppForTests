#pragma once

#include "TestNow.h"
#include <string.h>
#include "MainForm.h"

namespace FinalProjectKyselova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Windows::Forms::DataVisualization::Charting;


	/// <summary>
	/// Ñâîäêà äëÿ InformationForm
	/// </summary>
	public ref class InformationForm : public System::Windows::Forms::Form
	{
		Form^ main_form;
	public:
		InformationForm(Form^ main_form)
		{
			this->main_form = main_form;
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~InformationForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğÒåñòóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğÊîì³ğîêToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğÇàãîëîâêóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãğàô³êToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğÃğàô³êàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TabControl^ tabControl1;




	public:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîë³ğÒåñòóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîë³ğÊîì³ğîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîë³ğÇàãîëîâêóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğàô³êToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîë³ğÃğàô³êàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîë³ğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem1,
					this->âèäToolStripMenuItem, this->äîâ³äêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(503, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem1
			// 
			this->ôàéëToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->âèõ³äToolStripMenuItem1 });
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem1->Text = L"Ôàéë";
			// 
			// âèõ³äToolStripMenuItem1
			// 
			this->âèõ³äToolStripMenuItem1->Name = L"âèõ³äToolStripMenuItem1";
			this->âèõ³äToolStripMenuItem1->Size = System::Drawing::Size(129, 26);
			this->âèõ³äToolStripMenuItem1->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem1->Click += gcnew System::EventHandler(this, &InformationForm::QuitToolStripMenuItem1_Click);
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òàáëèöÿToolStripMenuItem,
					this->ãğàô³êToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// òàáëèöÿToolStripMenuItem
			// 
			this->òàáëèöÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->êîë³ğÒåñòóToolStripMenuItem,
					this->êîë³ğÊîì³ğîêToolStripMenuItem, this->ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem, this->êîë³ğÇàãîëîâêóToolStripMenuItem
			});
			this->òàáëèöÿToolStripMenuItem->Name = L"òàáëèöÿToolStripMenuItem";
			this->òàáëèöÿToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->òàáëèöÿToolStripMenuItem->Text = L"Òàáëèöÿ";
			// 
			// êîë³ğÒåñòóToolStripMenuItem
			// 
			this->êîë³ğÒåñòóToolStripMenuItem->Name = L"êîë³ğÒåñòóToolStripMenuItem";
			this->êîë³ğÒåñòóToolStripMenuItem->Size = System::Drawing::Size(302, 26);
			this->êîë³ğÒåñòóToolStripMenuItem->Text = L"Êîë³ğ òåñòó";
			this->êîë³ğÒåñòóToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::TextColorToolStripMenuItem_Click);
			// 
			// êîë³ğÊîì³ğîêToolStripMenuItem
			// 
			this->êîë³ğÊîì³ğîêToolStripMenuItem->Name = L"êîë³ğÊîì³ğîêToolStripMenuItem";
			this->êîë³ğÊîì³ğîêToolStripMenuItem->Size = System::Drawing::Size(302, 26);
			this->êîë³ğÊîì³ğîêToolStripMenuItem->Text = L"Êîë³ğ êîì³ğîê";
			this->êîë³ğÊîì³ğîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::CellColorToolStripMenuItem_Click);
			// 
			// ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem
			// 
			this->ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem->Name = L"ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem";
			this->ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem->Size = System::Drawing::Size(302, 26);
			this->ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem->Text = L"Ïàğàìåòğè øğèôòó çàãîëîâêà";
			this->ïàğàìåòğèØğèôòóÇàãîëîâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::HeaderFontToolStripMenuItem_Click);
			// 
			// êîë³ğÇàãîëîâêóToolStripMenuItem
			// 
			this->êîë³ğÇàãîëîâêóToolStripMenuItem->Name = L"êîë³ğÇàãîëîâêóToolStripMenuItem";
			this->êîë³ğÇàãîëîâêóToolStripMenuItem->Size = System::Drawing::Size(302, 26);
			this->êîë³ğÇàãîëîâêóToolStripMenuItem->Text = L"Êîë³ğ çàãîëîâêó";
			this->êîë³ğÇàãîëîâêóToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::HeaderColorToolStripMenuItem_Click);
			// 
			// ãğàô³êToolStripMenuItem
			// 
			this->ãğàô³êToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->êîë³ğÃğàô³êàToolStripMenuItem,
					this->êîë³ğToolStripMenuItem
			});
			this->ãğàô³êToolStripMenuItem->Name = L"ãğàô³êToolStripMenuItem";
			this->ãğàô³êToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->ãğàô³êToolStripMenuItem->Text = L"Ãğàô³ê";
			// 
			// êîë³ğÃğàô³êàToolStripMenuItem
			// 
			this->êîë³ğÃğàô³êàToolStripMenuItem->Name = L"êîë³ğÃğàô³êàToolStripMenuItem";
			this->êîë³ğÃğàô³êàToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->êîë³ğÃğàô³êàToolStripMenuItem->Text = L"Êîë³ğ ãğàô³êà";
			this->êîë³ğÃğàô³êàToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::ChartColorToolStripMenuItem_Click);
			// 
			// êîë³ğToolStripMenuItem
			// 
			this->êîë³ğToolStripMenuItem->Name = L"êîë³ğToolStripMenuItem";
			this->êîë³ğToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->êîë³ğToolStripMenuItem->Text = L"Êîë³ğ ôîíó ãğàô³êà";
			this->êîë³ğToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::BackChartColorToolStripMenuItem_Click);
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			this->äîâ³äêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &InformationForm::InfoToolStripMenuItem1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ÊÁ-21", L"ÊÁ-22", L"ÊÁ-23" });
			this->comboBox1->Location = System::Drawing::Point(176, 100);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &InformationForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(86, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 40);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Îáåğ³òü ãğóïó, ñòàòèñòèêó ÿêî¿ âè \r\n            õî÷åòå ïîáà÷èòè";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(482, 271);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ä³àãğàìà çà áàëàìè";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(476, 265);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(482, 271);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Æóğíàë îö³íîê";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label2->Location = System::Drawing::Point(90, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(310, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ğåçóëüòàòè êîæíîãî ñòóäåíòà";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(9, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(470, 208);
			this->dataGridView1->TabIndex = 1;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(4, 161);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(490, 300);
			this->tabControl1->TabIndex = 0;
			// 
			// InformationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(503, 466);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"InformationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TESTnow! - äëÿ âèêëàäà÷³â";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &InformationForm::InformationForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void CellColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void HeaderFontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void HeaderColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ChartColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void BackChartColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void QuitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void TextColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void InfoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void InformationForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
		private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	};
}

