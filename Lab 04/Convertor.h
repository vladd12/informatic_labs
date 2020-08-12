#pragma once
#include <math.h>

namespace My4Сurrencyсonverter {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Convertor
	/// </summary>
	public ref class Convertor : public System::Windows::Forms::Form
	{
	public:
		Convertor(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Convertor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lblExchangeRate;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  lblTo;
	private: System::Windows::Forms::TextBox^  txtResult2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lblFrom;
	private: System::Windows::Forms::TextBox^  txtResult1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioBtn4;
	private: System::Windows::Forms::RadioButton^  radioBtn3;
	private: System::Windows::Forms::RadioButton^  radioBtn2;
	private: System::Windows::Forms::RadioButton^  radioBtn1;
	private: System::Windows::Forms::Button^  btnAction;
	private: System::Windows::Forms::Button^  btnClose;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lblExchangeRate = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTo = (gcnew System::Windows::Forms::Label());
			this->txtResult2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->txtResult1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioBtn4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->btnAction = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->lblExchangeRate);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 130);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(190, 80);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(130, 23);
			this->txt2->TabIndex = 3;
			this->txt2->Text = L"63,54";
			this->txt2->TextChanged += gcnew System::EventHandler(this, &Convertor::txt2_Changed);
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Convertor::txt2_TextChanged);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(190, 40);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(130, 23);
			this->txt1->TabIndex = 2;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Convertor::txt1_TextChanged);
			// 
			// lblExchangeRate
			// 
			this->lblExchangeRate->Location = System::Drawing::Point(10, 80);
			this->lblExchangeRate->Name = L"lblExchangeRate";
			this->lblExchangeRate->Size = System::Drawing::Size(170, 20);
			this->lblExchangeRate->TabIndex = 1;
			this->lblExchangeRate->Text = L"Курс обмена (руб./$):";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(10, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сумма для конвертации";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblTo);
			this->groupBox2->Controls->Add(this->txtResult2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->lblFrom);
			this->groupBox2->Controls->Add(this->txtResult1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox2->Location = System::Drawing::Point(13, 150);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(340, 70);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результат конвертации";
			// 
			// lblTo
			// 
			this->lblTo->Location = System::Drawing::Point(280, 30);
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(40, 20);
			this->lblTo->TabIndex = 7;
			this->lblTo->Text = L"руб.";
			// 
			// txtResult2
			// 
			this->txtResult2->Location = System::Drawing::Point(170, 30);
			this->txtResult2->Name = L"txtResult2";
			this->txtResult2->ReadOnly = true;
			this->txtResult2->Size = System::Drawing::Size(100, 23);
			this->txtResult2->TabIndex = 6;
			this->txtResult2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(150, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"=";
			// 
			// lblFrom
			// 
			this->lblFrom->Location = System::Drawing::Point(110, 30);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(20, 20);
			this->lblFrom->TabIndex = 4;
			this->lblFrom->Text = L"$";
			// 
			// txtResult1
			// 
			this->txtResult1->Location = System::Drawing::Point(10, 30);
			this->txtResult1->Name = L"txtResult1";
			this->txtResult1->ReadOnly = true;
			this->txtResult1->Size = System::Drawing::Size(95, 23);
			this->txtResult1->TabIndex = 4;
			this->txtResult1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioBtn4);
			this->groupBox3->Controls->Add(this->radioBtn3);
			this->groupBox3->Controls->Add(this->radioBtn2);
			this->groupBox3->Controls->Add(this->radioBtn1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBox3->Location = System::Drawing::Point(370, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(230, 130);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Направление конвертации";
			// 
			// radioBtn4
			// 
			this->radioBtn4->Location = System::Drawing::Point(10, 100);
			this->radioBtn4->Name = L"radioBtn4";
			this->radioBtn4->Size = System::Drawing::Size(150, 20);
			this->radioBtn4->TabIndex = 3;
			this->radioBtn4->TabStop = true;
			this->radioBtn4->Text = L"Рубли в евро";
			this->radioBtn4->UseVisualStyleBackColor = true;
			this->radioBtn4->CheckedChanged += gcnew System::EventHandler(this, &Convertor::radioBtn4_CheckedChanged);
			// 
			// radioBtn3
			// 
			this->radioBtn3->Location = System::Drawing::Point(10, 75);
			this->radioBtn3->Name = L"radioBtn3";
			this->radioBtn3->Size = System::Drawing::Size(150, 20);
			this->radioBtn3->TabIndex = 2;
			this->radioBtn3->TabStop = true;
			this->radioBtn3->Text = L"Евро в рубли";
			this->radioBtn3->UseVisualStyleBackColor = true;
			this->radioBtn3->CheckedChanged += gcnew System::EventHandler(this, &Convertor::radioBtn3_CheckedChanged);
			// 
			// radioBtn2
			// 
			this->radioBtn2->Location = System::Drawing::Point(10, 50);
			this->radioBtn2->Name = L"radioBtn2";
			this->radioBtn2->Size = System::Drawing::Size(150, 20);
			this->radioBtn2->TabIndex = 1;
			this->radioBtn2->TabStop = true;
			this->radioBtn2->Text = L"Рубли в доллары";
			this->radioBtn2->UseVisualStyleBackColor = true;
			this->radioBtn2->CheckedChanged += gcnew System::EventHandler(this, &Convertor::radioBtn2_CheckedChanged);
			// 
			// radioBtn1
			// 
			this->radioBtn1->Checked = true;
			this->radioBtn1->Location = System::Drawing::Point(10, 25);
			this->radioBtn1->Name = L"radioBtn1";
			this->radioBtn1->Size = System::Drawing::Size(150, 20);
			this->radioBtn1->TabIndex = 0;
			this->radioBtn1->TabStop = true;
			this->radioBtn1->Text = L"Доллары в рубли";
			this->radioBtn1->UseVisualStyleBackColor = true;
			this->radioBtn1->CheckedChanged += gcnew System::EventHandler(this, &Convertor::radioBtn1_CheckedChanged);
			// 
			// btnAction
			// 
			this->btnAction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnAction->Location = System::Drawing::Point(370, 150);
			this->btnAction->Name = L"btnAction";
			this->btnAction->Size = System::Drawing::Size(137, 70);
			this->btnAction->TabIndex = 3;
			this->btnAction->Text = L"Конвертировать";
			this->btnAction->UseVisualStyleBackColor = true;
			this->btnAction->Click += gcnew System::EventHandler(this, &Convertor::btnAction_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnClose->Location = System::Drawing::Point(520, 150);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(80, 70);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Выход";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Convertor::btnClose_Click);
			// 
			// Convertor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 231);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnAction);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Convertor";
			this->Text = L"АРМ оператора обменного пункта";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите выйти?", "Выход",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}

	private:
		int x1;
		double x3;
		//переменные для валюты
		double RubToDol = 0.016, DolToRub = 63.54, RubToEuro = 0.014, EuroToRub = 70.45;

	private: System::Void txt1_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != ',' || txt1->Text->IndexOf(',') != -1) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		if ((e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0) && (txt1->Text->Length >= 1) && (txt1->Text[0] == '0' && txt1->SelectionStart < 2)) e->Handled = true;
		if (e->KeyChar == ',') {
			x1 = 0;
			if (txt1->Text->IndexOf(',') == -1 && txt1->SelectionStart == x1) {
				txt1->Text = txt1->Text->Insert(x1, "0");
				txt1->SelectionStart = x1 + 1;
			}
		}
	}

	private: System::Void txt2_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != ',' || txt2->Text->IndexOf(',') != -1) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		if ((e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0) && (txt2->Text->Length >= 1) && (txt2->Text[0] == '0' && txt2->SelectionStart < 2)) e->Handled = true;
		if (e->KeyChar == ',') {
			x1 = 0;
			if (txt2->Text->IndexOf(',') == -1 && txt2->SelectionStart == x1) {
				txt2->Text = txt2->Text->Insert(x1, "0");
				txt2->SelectionStart = x1 + 1;
			}
		}
	}

	private: System::Void txt2_Changed(System::Object^  sender, System::EventArgs^  e) {
		if (txt2->Text !=(Convert::ToString(DolToRub)) && radioBtn1->Checked == true) {
			if (txt2->Text == "" || txt2->Text == ",") {
				DolToRub = 0;
			}
			else {
				DolToRub = Convert::ToDouble(txt2->Text);
			}
		}
		else if (txt2->Text != (Convert::ToString(RubToDol)) && radioBtn2->Checked == true) {
			if (txt2->Text == "" || txt2->Text == ",") {
				RubToDol = 0;
			}
			else {
				RubToDol = Convert::ToDouble(txt2->Text);
			}
		}
		else if (txt2->Text != (Convert::ToString(EuroToRub)) && radioBtn3->Checked == true) {
			if (txt2->Text == "" || txt2->Text == ",") {
				EuroToRub = 0;
			}
			else {
				EuroToRub = Convert::ToDouble(txt2->Text);
			}
		}
		else if (txt2->Text != (Convert::ToString(RubToEuro)) && radioBtn4->Checked == true){
			if (txt2->Text == "" || txt2->Text == ",") {
				RubToEuro = 0;
			}
			else {
				RubToEuro = Convert::ToDouble(txt2->Text);
			}
		}
		/*else {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Произошла непредвиденная ошибка, программа будет закрыта, компьютер взорван, а Вы - расстреляны!", "Fatal Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			if (result == System::Windows::Forms::DialogResult::OK) {
				this->Close();
			}
		}*/
	}


	private: System::Void btnAction_Click(System::Object^  sender, System::EventArgs^  e) {
		double count, value, result;
		if ((txt1->Text == "," || txt1->Text == "" || txt1->Text == "0") || (txt2->Text == "," || txt2->Text == "" || txt2->Text == "0") || (txt1->Text->IndexOf(',') == 0 || txt2->Text->IndexOf(',') == 0)) {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Введите корректные значения в текстовые поля.", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button1);
		}
		else {
			count = Convert::ToDouble(txt1->Text);
			count = Math::Round(count, 2);
			value = Convert::ToDouble(txt2->Text);
			result = count * value;
			result = floor(result * 100) / 100;
			txt1->Text = Convert::ToString(count);
			txtResult1->Text = Convert::ToString(count);
			txtResult2->Text = Convert::ToString(result);
		}
	}

	private: System::Void radioBtn1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->radioBtn1->Checked == true) {
			txt2->Text = Convert::ToString(DolToRub);
			this->lblExchangeRate->Text = L"Курс обмена ($/руб.):";
			this->lblFrom->Text = L"$";
			this->lblTo->Text = L"руб.";
		}
		else {
			txtResult1->Text = L"";
			txtResult2->Text = L"";
			txt1->Text = L"";
		}
	}

	private: System::Void radioBtn2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->radioBtn2->Checked == true) {
			txt2->Text = Convert::ToString(RubToDol);
			this->lblExchangeRate->Text = L"Курс обмена (руб./$):";
			this->lblFrom->Text = L"р.";
			this->lblTo->Text = L"$";
		}
		else {
			txtResult1->Text = L"";
			txtResult2->Text = L"";
			txt1->Text = L"";
		}
	}

	private: System::Void radioBtn3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->radioBtn3->Checked == true) {
			txt2->Text = Convert::ToString(EuroToRub);
			this->lblExchangeRate->Text = L"Курс обмена (€/руб.):";
			this->lblFrom->Text = L"€";
			this->lblTo->Text = L"руб.";
		}
		else {
			txtResult1->Text = L"";
			txtResult2->Text = L"";
			txt1->Text = L"";
		}
	}

	private: System::Void radioBtn4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->radioBtn4->Checked == true) {
			txt2->Text = Convert::ToString(RubToEuro);
			this->lblExchangeRate->Text = L"Курс обмена (руб./€):";
			this->lblFrom->Text = L"р.";
			this->lblTo->Text = L"€";
		}
		else {
			txtResult1->Text = L"";
			txtResult2->Text = L"";
			txt1->Text = L"";
		}
	}
};
}
