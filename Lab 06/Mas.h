#pragma once
#include <ctime>
#include <iostream>
#include <string>
#include <sstream>

namespace My6Massive {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Mas
	/// </summary>
	public ref class Mas : public System::Windows::Forms::Form
	{
	public:
		Mas(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Mas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxInputData;
	private: System::Windows::Forms::Label^  labelMaxMas;
	private: System::Windows::Forms::Label^  labelMinMas;
	private: System::Windows::Forms::Label^  labelNumberMas;
	private: System::Windows::Forms::TextBox^  txtBoxInputNumberMas;
	private: System::Windows::Forms::TextBox^  txtBoxInputMaxMas;
	private: System::Windows::Forms::TextBox^  txtBoxInputMinMas;
	private: System::Windows::Forms::Label^  labelSourceMas;
	private: System::Windows::Forms::TextBox^  txtBoxSourceMas;
	private: System::Windows::Forms::GroupBox^  groupBoxInputAction;
	private: System::Windows::Forms::RadioButton^  radioBtn1;
	private: System::Windows::Forms::RadioButton^  radioBtn2;
	private: System::Windows::Forms::RadioButton^  radioBtn3;
	private: System::Windows::Forms::RadioButton^  radioBtn4;
	private: System::Windows::Forms::RadioButton^  radioBtn5;
	private: System::Windows::Forms::RadioButton^  radioBtn6;
	private: System::Windows::Forms::RadioButton^  radioBtn7;
	private: System::Windows::Forms::RadioButton^  radioBtn8;
	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::TextBox^  txtBoxResult;
	private: System::Windows::Forms::Button^  btnGenerationMas;
	private: System::Windows::Forms::Button^  btnOpenFile;
	private: System::Windows::Forms::Label^  labelOpenFilePath;
	private: System::Windows::Forms::Button^  btnAction;
	private: System::Windows::Forms::Button^  btnSaveFile;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Label^  labelSaveFilePath;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxInputData = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxInputMaxMas = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxInputMinMas = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxInputNumberMas = (gcnew System::Windows::Forms::TextBox());
			this->labelMaxMas = (gcnew System::Windows::Forms::Label());
			this->labelMinMas = (gcnew System::Windows::Forms::Label());
			this->labelNumberMas = (gcnew System::Windows::Forms::Label());
			this->labelSourceMas = (gcnew System::Windows::Forms::Label());
			this->txtBoxSourceMas = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxInputAction = (gcnew System::Windows::Forms::GroupBox());
			this->radioBtn8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->txtBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerationMas = (gcnew System::Windows::Forms::Button());
			this->btnOpenFile = (gcnew System::Windows::Forms::Button());
			this->labelOpenFilePath = (gcnew System::Windows::Forms::Label());
			this->btnAction = (gcnew System::Windows::Forms::Button());
			this->btnSaveFile = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->labelSaveFilePath = (gcnew System::Windows::Forms::Label());
			this->groupBoxInputData->SuspendLayout();
			this->groupBoxInputAction->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxInputData
			// 
			this->groupBoxInputData->Controls->Add(this->txtBoxInputMaxMas);
			this->groupBoxInputData->Controls->Add(this->txtBoxInputMinMas);
			this->groupBoxInputData->Controls->Add(this->txtBoxInputNumberMas);
			this->groupBoxInputData->Controls->Add(this->labelMaxMas);
			this->groupBoxInputData->Controls->Add(this->labelMinMas);
			this->groupBoxInputData->Controls->Add(this->labelNumberMas);
			this->groupBoxInputData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBoxInputData->Location = System::Drawing::Point(13, 13);
			this->groupBoxInputData->Name = L"groupBoxInputData";
			this->groupBoxInputData->Size = System::Drawing::Size(440, 130);
			this->groupBoxInputData->TabIndex = 0;
			this->groupBoxInputData->TabStop = false;
			this->groupBoxInputData->Text = L"�������� ������";
			// 
			// txtBoxInputMaxMas
			// 
			this->txtBoxInputMaxMas->Location = System::Drawing::Point(275, 95);
			this->txtBoxInputMaxMas->Name = L"txtBoxInputMaxMas";
			this->txtBoxInputMaxMas->Size = System::Drawing::Size(150, 23);
			this->txtBoxInputMaxMas->TabIndex = 5;
			this->txtBoxInputMaxMas->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Mas::txtBoxInputMaxMas_TextChanged);
			// 
			// txtBoxInputMinMas
			// 
			this->txtBoxInputMinMas->Location = System::Drawing::Point(275, 60);
			this->txtBoxInputMinMas->Name = L"txtBoxInputMinMas";
			this->txtBoxInputMinMas->Size = System::Drawing::Size(150, 23);
			this->txtBoxInputMinMas->TabIndex = 4;
			this->txtBoxInputMinMas->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Mas::txtBoxInputMinMas_TextChanged);
			// 
			// txtBoxInputNumberMas
			// 
			this->txtBoxInputNumberMas->Location = System::Drawing::Point(275, 25);
			this->txtBoxInputNumberMas->Name = L"txtBoxInputNumberMas";
			this->txtBoxInputNumberMas->Size = System::Drawing::Size(150, 23);
			this->txtBoxInputNumberMas->TabIndex = 3;
			this->txtBoxInputNumberMas->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Mas::txtBoxInputNumberMas_TextChanged);
			// 
			// labelMaxMas
			// 
			this->labelMaxMas->Location = System::Drawing::Point(10, 95);
			this->labelMaxMas->Name = L"labelMaxMas";
			this->labelMaxMas->Size = System::Drawing::Size(260, 20);
			this->labelMaxMas->TabIndex = 2;
			this->labelMaxMas->Text = L"������������ �������� ���������:";
			this->labelMaxMas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMinMas
			// 
			this->labelMinMas->Location = System::Drawing::Point(10, 60);
			this->labelMinMas->Name = L"labelMinMas";
			this->labelMinMas->Size = System::Drawing::Size(245, 20);
			this->labelMinMas->TabIndex = 1;
			this->labelMinMas->Text = L"����������� �������� ���������:";
			this->labelMinMas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelNumberMas
			// 
			this->labelNumberMas->Location = System::Drawing::Point(10, 25);
			this->labelNumberMas->Name = L"labelNumberMas";
			this->labelNumberMas->Size = System::Drawing::Size(230, 20);
			this->labelNumberMas->TabIndex = 0;
			this->labelNumberMas->Text = L"���������� ��������� �������:";
			this->labelNumberMas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelSourceMas
			// 
			this->labelSourceMas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelSourceMas->Location = System::Drawing::Point(13, 150);
			this->labelSourceMas->Name = L"labelSourceMas";
			this->labelSourceMas->Size = System::Drawing::Size(130, 20);
			this->labelSourceMas->TabIndex = 1;
			this->labelSourceMas->Text = L"�������� ������:";
			this->labelSourceMas->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtBoxSourceMas
			// 
			this->txtBoxSourceMas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txtBoxSourceMas->Location = System::Drawing::Point(13, 180);
			this->txtBoxSourceMas->Name = L"txtBoxSourceMas";
			this->txtBoxSourceMas->Size = System::Drawing::Size(440, 23);
			this->txtBoxSourceMas->TabIndex = 2;
			this->txtBoxSourceMas->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Mas::txtBoxSourceMas_TextChanged);
			// 
			// groupBoxInputAction
			// 
			this->groupBoxInputAction->Controls->Add(this->radioBtn8);
			this->groupBoxInputAction->Controls->Add(this->radioBtn7);
			this->groupBoxInputAction->Controls->Add(this->radioBtn6);
			this->groupBoxInputAction->Controls->Add(this->radioBtn5);
			this->groupBoxInputAction->Controls->Add(this->radioBtn4);
			this->groupBoxInputAction->Controls->Add(this->radioBtn3);
			this->groupBoxInputAction->Controls->Add(this->radioBtn2);
			this->groupBoxInputAction->Controls->Add(this->radioBtn1);
			this->groupBoxInputAction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBoxInputAction->Location = System::Drawing::Point(13, 220);
			this->groupBoxInputAction->Name = L"groupBoxInputAction";
			this->groupBoxInputAction->Size = System::Drawing::Size(440, 155);
			this->groupBoxInputAction->TabIndex = 3;
			this->groupBoxInputAction->TabStop = false;
			this->groupBoxInputAction->Text = L"�������� � ���������";
			// 
			// radioBtn8
			// 
			this->radioBtn8->AutoSize = true;
			this->radioBtn8->Location = System::Drawing::Point(215, 120);
			this->radioBtn8->Name = L"radioBtn8";
			this->radioBtn8->Size = System::Drawing::Size(194, 21);
			this->radioBtn8->TabIndex = 7;
			this->radioBtn8->Text = L"���������� �� ��������";
			this->radioBtn8->UseVisualStyleBackColor = true;
			this->radioBtn8->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn8_CheckedChanged);
			// 
			// radioBtn7
			// 
			this->radioBtn7->AutoSize = true;
			this->radioBtn7->Location = System::Drawing::Point(215, 90);
			this->radioBtn7->Name = L"radioBtn7";
			this->radioBtn7->Size = System::Drawing::Size(214, 21);
			this->radioBtn7->TabIndex = 6;
			this->radioBtn7->Text = L"���������� �� �����������";
			this->radioBtn7->UseVisualStyleBackColor = true;
			this->radioBtn7->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn7_CheckedChanged);
			// 
			// radioBtn6
			// 
			this->radioBtn6->AutoSize = true;
			this->radioBtn6->Location = System::Drawing::Point(215, 60);
			this->radioBtn6->Name = L"radioBtn6";
			this->radioBtn6->Size = System::Drawing::Size(162, 21);
			this->radioBtn6->TabIndex = 5;
			this->radioBtn6->Text = L"�������� ��������";
			this->radioBtn6->UseVisualStyleBackColor = true;
			this->radioBtn6->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn6_CheckedChanged);
			// 
			// radioBtn5
			// 
			this->radioBtn5->AutoSize = true;
			this->radioBtn5->Location = System::Drawing::Point(215, 30);
			this->radioBtn5->Name = L"radioBtn5";
			this->radioBtn5->Size = System::Drawing::Size(146, 21);
			this->radioBtn5->TabIndex = 4;
			this->radioBtn5->Text = L"׸���� ��������";
			this->radioBtn5->UseVisualStyleBackColor = true;
			this->radioBtn5->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn5_CheckedChanged);
			// 
			// radioBtn4
			// 
			this->radioBtn4->AutoSize = true;
			this->radioBtn4->Location = System::Drawing::Point(15, 120);
			this->radioBtn4->Name = L"radioBtn4";
			this->radioBtn4->Size = System::Drawing::Size(184, 21);
			this->radioBtn4->TabIndex = 3;
			this->radioBtn4->Text = L"������������ �������";
			this->radioBtn4->UseVisualStyleBackColor = true;
			this->radioBtn4->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn4_CheckedChanged);
			// 
			// radioBtn3
			// 
			this->radioBtn3->AutoSize = true;
			this->radioBtn3->Location = System::Drawing::Point(15, 90);
			this->radioBtn3->Name = L"radioBtn3";
			this->radioBtn3->Size = System::Drawing::Size(178, 21);
			this->radioBtn3->TabIndex = 2;
			this->radioBtn3->Text = L"����������� �������";
			this->radioBtn3->UseVisualStyleBackColor = true;
			this->radioBtn3->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn3_CheckedChanged);
			// 
			// radioBtn2
			// 
			this->radioBtn2->AutoSize = true;
			this->radioBtn2->Location = System::Drawing::Point(15, 60);
			this->radioBtn2->Name = L"radioBtn2";
			this->radioBtn2->Size = System::Drawing::Size(150, 21);
			this->radioBtn2->TabIndex = 1;
			this->radioBtn2->Text = L"������� ��������";
			this->radioBtn2->UseVisualStyleBackColor = true;
			this->radioBtn2->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn2_CheckedChanged);
			// 
			// radioBtn1
			// 
			this->radioBtn1->AutoSize = true;
			this->radioBtn1->Checked = true;
			this->radioBtn1->Location = System::Drawing::Point(15, 30);
			this->radioBtn1->Name = L"radioBtn1";
			this->radioBtn1->Size = System::Drawing::Size(142, 21);
			this->radioBtn1->TabIndex = 0;
			this->radioBtn1->TabStop = true;
			this->radioBtn1->Text = L"����� ���������";
			this->radioBtn1->UseVisualStyleBackColor = true;
			this->radioBtn1->CheckedChanged += gcnew System::EventHandler(this, &Mas::radioBtn1_CheckedChanged);
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelResult->Location = System::Drawing::Point(13, 385);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(148, 17);
			this->labelResult->TabIndex = 4;
			this->labelResult->Text = L"��������� ��������:";
			// 
			// txtBoxResult
			// 
			this->txtBoxResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txtBoxResult->Location = System::Drawing::Point(13, 415);
			this->txtBoxResult->Name = L"txtBoxResult";
			this->txtBoxResult->ReadOnly = true;
			this->txtBoxResult->Size = System::Drawing::Size(440, 23);
			this->txtBoxResult->TabIndex = 5;
			// 
			// btnGenerationMas
			// 
			this->btnGenerationMas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnGenerationMas->Location = System::Drawing::Point(474, 24);
			this->btnGenerationMas->Name = L"btnGenerationMas";
			this->btnGenerationMas->Size = System::Drawing::Size(160, 30);
			this->btnGenerationMas->TabIndex = 6;
			this->btnGenerationMas->Text = L"��������� �������";
			this->btnGenerationMas->UseVisualStyleBackColor = true;
			this->btnGenerationMas->Click += gcnew System::EventHandler(this, &Mas::btnGenerationMas_Click);
			// 
			// btnOpenFile
			// 
			this->btnOpenFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnOpenFile->Location = System::Drawing::Point(474, 65);
			this->btnOpenFile->Name = L"btnOpenFile";
			this->btnOpenFile->Size = System::Drawing::Size(160, 30);
			this->btnOpenFile->TabIndex = 7;
			this->btnOpenFile->Text = L"���� �� �����";
			this->btnOpenFile->UseVisualStyleBackColor = true;
			this->btnOpenFile->Click += gcnew System::EventHandler(this, &Mas::btnOpenFile_Click);
			// 
			// labelOpenFilePath
			// 
			this->labelOpenFilePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelOpenFilePath->Location = System::Drawing::Point(471, 105);
			this->labelOpenFilePath->Name = L"labelOpenFilePath";
			this->labelOpenFilePath->Size = System::Drawing::Size(163, 98);
			this->labelOpenFilePath->TabIndex = 8;
			this->labelOpenFilePath->Text = L"��� ����� �����:";
			// 
			// btnAction
			// 
			this->btnAction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnAction->Location = System::Drawing::Point(474, 220);
			this->btnAction->Name = L"btnAction";
			this->btnAction->Size = System::Drawing::Size(160, 30);
			this->btnAction->TabIndex = 9;
			this->btnAction->Text = L"���������";
			this->btnAction->UseVisualStyleBackColor = true;
			this->btnAction->Click += gcnew System::EventHandler(this, &Mas::btnAction_Click);
			// 
			// btnSaveFile
			// 
			this->btnSaveFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnSaveFile->Location = System::Drawing::Point(474, 260);
			this->btnSaveFile->Name = L"btnSaveFile";
			this->btnSaveFile->Size = System::Drawing::Size(160, 30);
			this->btnSaveFile->TabIndex = 10;
			this->btnSaveFile->Text = L"��������� � ����";
			this->btnSaveFile->UseVisualStyleBackColor = true;
			this->btnSaveFile->Click += gcnew System::EventHandler(this, &Mas::btnSaveFile_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnClose->Location = System::Drawing::Point(474, 411);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(160, 30);
			this->btnClose->TabIndex = 11;
			this->btnClose->Text = L"�������";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Mas::btnClose_Click);
			// 
			// labelSaveFilePath
			// 
			this->labelSaveFilePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelSaveFilePath->Location = System::Drawing::Point(471, 300);
			this->labelSaveFilePath->Name = L"labelSaveFilePath";
			this->labelSaveFilePath->Size = System::Drawing::Size(163, 98);
			this->labelSaveFilePath->TabIndex = 12;
			this->labelSaveFilePath->Text = L"��� ����� ������:";
			// 
			// Mas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 451);
			this->Controls->Add(this->labelSaveFilePath);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSaveFile);
			this->Controls->Add(this->btnAction);
			this->Controls->Add(this->labelOpenFilePath);
			this->Controls->Add(this->btnOpenFile);
			this->Controls->Add(this->btnGenerationMas);
			this->Controls->Add(this->txtBoxResult);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->groupBoxInputAction);
			this->Controls->Add(this->txtBoxSourceMas);
			this->Controls->Add(this->labelSourceMas);
			this->Controls->Add(this->groupBoxInputData);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Mas";
			this->Text = L"��������� �������";
			this->groupBoxInputData->ResumeLayout(false);
			this->groupBoxInputData->PerformLayout();
			this->groupBoxInputAction->ResumeLayout(false);
			this->groupBoxInputAction->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	const size_t MAX_COUNT = 1024;
	array<Int32>^ a = gcnew array<Int32>(MAX_COUNT); //����������� ������
	int NumberOfElements = 0; //���������� ��������� �������
	int TabIndexOfRadioButton = 0; //������ �������������
	System::String^ ChoosenAction = "����� ���������"; //��� ������ � ���� ���������� ��������
	System::String^ Input = ""; //������ ��������� �������
	System::String^ Result = ""; //������ ����������

	//���������� �������� ����������
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "�� �������, ��� ������ �����?", "�����",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}

	//������ �� ������
	private: System::Void funcRestrictionOfInput(System::Windows::Forms::TextBox^ object, System::Windows::Forms::KeyPressEventArgs^  input) {
		if ((!Char::IsDigit(input->KeyChar)) && ((input->KeyChar != '-' || object->Text->IndexOf('-') != -1) && object != txtBoxSourceMas) && (input->KeyChar != ' ') && (input->KeyChar != (char)Keys::Back)) input->Handled = true;
		if ((input->KeyChar == (char)Keys::D0 || input->KeyChar == (char)Keys::NumPad0) && (object->Text->Length >= 1) && (object->Text[0] == '0' && object->SelectionStart < 2)) input->Handled = true;
		if (object == txtBoxInputNumberMas && (input->KeyChar == '-')) input->Handled = true; //���������� �� ����� ���� �������������
		if (object->Text->IndexOf('-') == 0) {
			if (object->SelectionStart == 0) {
				input->Handled = true;
			}
			if ((object->SelectionStart == 2) && (input->KeyChar == '0')) {
				input->Handled = true;
			}
		}
		if (input->KeyChar == '-' && object->Text->IndexOf('-') == -1) object->SelectionStart = 0;
		else {
			txtBoxResult->Text = "";
			labelSaveFilePath->Text = L"��� ����� ������:";
			txtBoxSourceMas->Text = "";
		}
	}

	//������� ������ radioButton
	private: System::Void ChoiceOfAction(System::Windows::Forms::RadioButton^ object){
		int a = object->TabIndex;
		ChoosenAction = object->Text;
		if (a != TabIndexOfRadioButton) {
			txtBoxResult->Text = "";
			labelSaveFilePath->Text = L"��� ����� ������:";
			TabIndexOfRadioButton = a;
		}
	}

	private: System::Void txtBoxInputNumberMas_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxInputNumberMas, e);
	}

	private: System::Void txtBoxInputMinMas_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxInputMinMas, e);
	}

	private: System::Void txtBoxInputMaxMas_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxInputMaxMas, e);
	}

	private: System::Void txtBoxSourceMas_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-') && (e->KeyChar != ' ') && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		else {
			txtBoxResult->Text = "";
			labelSaveFilePath->Text = L"��� ����� ������:";
			txtBoxInputNumberMas->Text = "";
			txtBoxInputMinMas->Text = "";
			txtBoxInputMaxMas->Text = "";
		}
	}

	private: System::Void radioBtn1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn1);
		ChoosenAction = "����� ���������";
	}

	private: System::Void radioBtn2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn2);
		ChoosenAction = "������� ��������";
	}

	private: System::Void radioBtn3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn3);
		ChoosenAction = "����������� �������";
	}

	private: System::Void radioBtn4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn4);
		ChoosenAction = "������������ �������";
	}

	private: System::Void radioBtn5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn5);
		ChoosenAction = "׸���� ��������";
	}

	private: System::Void radioBtn6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn6);
		ChoosenAction = "�������� ��������";
	}

	private: System::Void radioBtn7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn7);
		ChoosenAction = "���������� �� �����������";
	}

	private: System::Void radioBtn8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ChoiceOfAction(radioBtn8);
		ChoosenAction = "���������� �� ��������";
	}

	//������� ������ �������� ����� (��������)
	private: System::String^ StringCleanUp(System::String^ str) {
		System::String^ str2 = "";
		for (int i = 0; i < str->Length; i++) {
			if (!Char::IsDigit(str[i]) && str[i] != ' ' && str[i] != '-') continue;
			else {
				if (i > 0 && i < (str->Length - 1)) {
					if (str[i] == ' ' && str[i+1] == ' ') continue;
					else if (str[i] == '-' && (Char::IsDigit(str[i-1]) && Char::IsDigit(str[i+1]))) str2 = str2 + " -";
					else if (str[i] == '-' && ((str[i-1] == '-' || str[i+1] == '-') || str[i+1] == ' ' || Char::IsDigit(str[i-1]))) continue;
					else str2 = str2 + str[i];
				}
				else if (i == 0 && str[i] == '-') {
					if (str->Length > 2 && (str[i + 1] == ' ') || Char::IsDigit(str[i])) continue;
					else str2 = str2 + str[i];
				}
				else if (i == 0 && Char::IsDigit(str[i])) str2 = str2 + str[i];
				else if ((str->Length == 1 || str->Length == 2) && Char::IsDigit(str[i])) str2 = str2 + str[i];
			}
		}
		return str2;
	}

	//��� ������ � ��������� �����
	private: System::String^ StringSeparator(array<String^>^ string) {
		System::String^ str1 = "";
		System::String^ str2 = "";
		System::String^ str3 = "";
		for (int i = 0; i < string->Length; i++) {
			str1 = StringCleanUp(string [i]);
			str2 = str2 + str1 + " ";
			str1 = "";
		}
		for (int i = 0; i < str2->Length; i++) {
			if (i > 0 && i < (str2->Length - 1)) {
				if (str2[i] == ' ' && str2[i + 1] == ' ') continue;
				else str3 = str3 + str2[i];
			}
		}
		return str3;
	}

	//������ �������� �����, ��� ����������
	private: System::Void btnOpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ OpenFileDlg = gcnew OpenFileDialog;
		OpenFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //������ ����������� ������ �� ��������
		OpenFileDlg->InitialDirectory = "E:\\"; //��������� ����������
		if (OpenFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			labelOpenFilePath->Text = L"��� ����� �����:";
			System::String^ fileName = OpenFileDlg->FileName;
			labelOpenFilePath->Text = labelOpenFilePath->Text + "\n" + fileName;
			array<String^>^ str = gcnew array<String^>(100);
			str = System::IO::File::ReadAllLines(fileName, System::Text::Encoding::UTF8);
			String^ fileText = StringSeparator(str); //��������� ������
			txtBoxSourceMas->Text = fileText;
			txtBoxResult->Text = L"";
		}
	}

	//���������� ��������� �������
	private: System::Void btnGenerationMas_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBoxInputNumberMas->Text == "" || txtBoxInputMaxMas->Text == "" || txtBoxInputMinMas->Text == ""
		|| txtBoxInputMaxMas->Text == "-" || txtBoxInputMinMas->Text == "-") {
			MessageBox::Show(this, "������� �����!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if ((Convert::ToInt32(txtBoxInputNumberMas->Text)) == 0) {
			MessageBox::Show(this, "������� ���������� ����� ��������� ��������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if ((Convert::ToInt32(txtBoxInputMinMas->Text)) > (Convert::ToInt32(txtBoxInputMaxMas->Text))) {
			MessageBox::Show(this, "����������� �������� ������� ������ ������������� ��������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if ((Convert::ToInt32(txtBoxInputMinMas->Text)) == (Convert::ToInt32(txtBoxInputMaxMas->Text))) {
			MessageBox::Show(this, "����������� � ������������ �������� ������� �����!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			int i;
			srand(time(0)); //������������ �� �������
			txtBoxSourceMas->Text = L"";
			NumberOfElements = Convert::ToInt32(txtBoxInputNumberMas->Text);
			for (i = 0; i < NumberOfElements; i++) {
				Random^ temp = gcnew Random(i + rand()); //������ CLR � ������ �������
				a[i] = temp->Next((Convert::ToInt32(txtBoxInputMinMas->Text)), (Convert::ToInt32(txtBoxInputMaxMas->Text)+1));
				txtBoxSourceMas->Text = txtBoxSourceMas->Text + " " + Convert::ToString(a[i]);
			}
			txtBoxInputNumberMas->Text = "";
			txtBoxInputMinMas->Text = "";
			txtBoxInputMaxMas->Text = "";
			labelOpenFilePath->Text = "��� ����� �����:";
			labelSaveFilePath->Text = "��� ����� ������:";
		}
	}

	//������� ��� ���������� ����� (�������� �������)
	private: System::Void SaveFileFunc(String^ file) {
		int i;
		const int size = 3;
		array<String^>^ str = gcnew array<String^>(size); //������ �����
		for (i = 0; i < size; i++) {
			str[i] = "";
		}
		str[0] = "�������� ������: " + txtBoxSourceMas->Text;
		str[1] = "��������: " + ChoosenAction;
		str[2] = "���������: " + txtBoxResult->Text;
		String^ str1 = txtBoxSourceMas->Text;
		String^ str2 = txtBoxResult->Text;
		if (str1 == "" || str2 == "") {
			MessageBox::Show(this, "������ ��� ���������� �����������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!System::IO::File::Exists(file)) {
				System::IO::File::WriteAllLines(file, str); //�������� � �������� �����
				Input = str1;
				Result = str2;
			}
			else {
				if (str1 != Input){
					System::IO::File::AppendAllText(file, "\r\n" + str[0] + "\r\n");
					Input = str1;
				}
				if (str2 != Result) {
					System::IO::File::AppendAllText(file, str[1] + "\r\n");
					System::IO::File::AppendAllText(file, str[2] + "\r\n");
					Result = str2;
				}
			}
		}
	}

	//������ ���������� �����
	private: System::Void btnSaveFile_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ SaveFileDlg = gcnew SaveFileDialog;
		SaveFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //������ ����������� ������ �� ��������
		SaveFileDlg->InitialDirectory = "E:\\"; //��������� ����������
		SaveFileDlg->OverwritePrompt = false;
		if (SaveFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			labelSaveFilePath->Text = L"��� ����� ������:";
			System::String^ fileName = SaveFileDlg->FileName;
			labelSaveFilePath->Text = labelSaveFilePath->Text + "\n" + fileName;
			SaveFileFunc(fileName);
		}
	}

	//������� ����� ������� ����� ������ (���������)
	private: System::Void funcConvertation(System::String^ str) {
		int i, counter = 0;
		System::String^ str1 = StringCleanUp(str) + str[str->Length - 1];
		System::String^ tempStr = "";
		for (i = 0; i < (str1->Length); i++) {
			if ((!Char::IsDigit(str1[i]) && str1[i] != ' ' && str1[i] != '-') || (str1[i] == ' ' && i == 0)) continue;
			if (Char::IsDigit(str1[i]) || str1[i] == '-') tempStr = tempStr + str1[i];
			if (str1[i] == ' ' && tempStr != "" && tempStr != "-") {
				a[counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
			if (i == (str1->Length - 1) && tempStr != "" && tempStr != "-") {
				if (tempStr[tempStr->Length - 1] == '-') tempStr = tempStr->Remove(tempStr->Length - 1, 1);
				a[counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
		}
		NumberOfElements = counter;
		txtBoxSourceMas->Text = "";
		for (i = 0; i < NumberOfElements; i++) {
			txtBoxSourceMas->Text = txtBoxSourceMas->Text + " " + Convert::ToString(a[i]);
		}
	}

	//������� ����� ��������� �������
	System::Void funcSumOfMas(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr) {
		long long sum = 0;
		int i;
		for (i = 0; i < NumberOfElements; i++) {
			sum = sum + arr[i];
		}
		TxtBox->Text = Convert::ToString(sum);
	}

	//������� �������� ���������
	System::Void funcAverage(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr){
		funcSumOfMas(TxtBox, arr);
		double sum = Convert::ToInt32(TxtBox->Text);
		double result = sum / NumberOfElements;
		TxtBox->Text = Convert::ToString(result);
	}

	//������� ���������� ������������ �������� �������
	System::Void funcMinOfMas(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr) {
		int minOfMas = 1000000000;
		for (int i = 0; i < NumberOfElements; i++) {
			if (arr[i] < minOfMas)minOfMas = arr[i];
		}
		TxtBox->Text = Convert::ToString(minOfMas);
	}

	//������� ���������� ������������� �������� �������
	System::Void funcMaxOfMas(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr) {
		int maxOfMas = -1000000000;
		for (int i = 0; i < NumberOfElements; i++) {
			if (arr[i] > maxOfMas) maxOfMas = arr[i];
		}
		TxtBox->Text = Convert::ToString(maxOfMas);
	}

	//������� ������ ������ �����
	System::Void funcEvenNumbers(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr){
		TxtBox->Text = "";
		for (int i = 0; i < NumberOfElements; i++) {
			if (arr[i] % 2 == 0) {
				TxtBox->Text = TxtBox->Text + " " + Convert::ToString(arr[i]);
			}
		}
	}

	//������� ������ �������� �����
	System::Void funcUnevenNumbers(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr){
		TxtBox->Text = "";
		for (int i = 0; i < NumberOfElements; i++) {
			if (arr[i] % 2 != 0) {
				TxtBox->Text = TxtBox->Text + " " + Convert::ToString(arr[i]);
			}
		}
	}

	//���������� �� �����������
	System::Void funcSortOfMas1(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr){
		int a, b, i;
		TxtBox->Text = "";
		// ���������� ������ ����������� ����������.
		for (a = 1; a < NumberOfElements; a++)
		for (b = NumberOfElements - 1; b >= a; b--) {
			if (arr[b - 1] > arr[b]) { //�������� �������������.
				//������ �������� �������.
				i = arr[b - 1];
				arr[b - 1] = arr[b];
				arr[b] = i;
			}
		}
		//����� ����������� ����������.
		for (i = 0; i < NumberOfElements; i++) {
			TxtBox->Text = TxtBox->Text + " " + Convert::ToString(arr[i]); //�����
		}
	}

	//���������� �� ��������
	System::Void funcSortOfMas2(System::Windows::Forms::TextBox^ TxtBox, array<Int32>^ arr){
		funcSortOfMas1(TxtBox, arr);
		TxtBox->Text = "";
		for (int i = NumberOfElements - 1; i >= 0; i--) {
			TxtBox->Text = TxtBox->Text + " " + Convert::ToString(arr[i]); //�����
		}
	}

	//����� �������� ����� ������� ������
	private: System::Void btnAction_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBoxSourceMas->Text == L"") {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "������� �������� �������!", "������!",
			MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		}
		else {
			funcConvertation(txtBoxSourceMas->Text); //��������
			switch (TabIndexOfRadioButton) {
			case 0:
				funcSumOfMas(txtBoxResult, a);
				break;
			case 1:
				funcAverage(txtBoxResult, a);
				break;
			case 2:
				funcMinOfMas(txtBoxResult, a);
				break;
			case 3:
				funcMaxOfMas(txtBoxResult, a);
				break;
			case 4:
				funcEvenNumbers(txtBoxResult, a);
				break;
			case 5:
				funcUnevenNumbers(txtBoxResult, a);
				break;
			case 6:
				funcSortOfMas1(txtBoxResult, a);
				break;
			case 7:
				funcSortOfMas2(txtBoxResult, a);
				break;
			}
		}
	}
};
}
