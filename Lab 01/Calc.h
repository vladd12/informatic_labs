#pragma once

namespace Calc {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Label^  lblOper;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Button^  btnDeduct;
	private: System::Windows::Forms::Button^  btnMul;
	private: System::Windows::Forms::Button^  btnDiv;

	protected:

	protected:

	protected:

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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnDeduct = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(240, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(240, 10);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(240, 150);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(110, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 17);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(77, 13);
			this->lbl1->TabIndex = 4;
			this->lbl1->Text = L"Первое число";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
static_cast<System::Byte>(204)));
			this->lbl2->Location = System::Drawing::Point(10, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(75, 13);
			this->lbl2->TabIndex = 5;
			this->lbl2->Text = L"Второе число";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Результат";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 20);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextChanged);
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 20);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextChanged2);
			// 
			// txtResult
			// 
			this->txtResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 20);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnDeduct
			// 
			this->btnDeduct->Location = System::Drawing::Point(240, 45);
			this->btnDeduct->Name = L"btnDeduct";
			this->btnDeduct->Size = System::Drawing::Size(100, 30);
			this->btnDeduct->TabIndex = 10;
			this->btnDeduct->Text = L"Вычесть";
			this->btnDeduct->UseVisualStyleBackColor = true;
			this->btnDeduct->Click += gcnew System::EventHandler(this, &MyForm::btnDeduct_Click);
			// 
			// btnMul
			// 
			this->btnMul->Location = System::Drawing::Point(240, 80);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(100, 30);
			this->btnMul->TabIndex = 11;
			this->btnMul->Text = L"Умножить";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::btnMul_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(240, 115);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(100, 30);
			this->btnDiv->TabIndex = 12;
			this->btnDiv->Text = L"Разделить";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 221);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnDeduct);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите выйти?", "Выход",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		double i1, i2, i3;
		this->txtResult->Text = "";
		this->lblOper->Text = L" ";
		if (txt1->Text == "" || txt2->Text == "" || txt1->Text == "," || txt2->Text == "," || txt1->Text == "-" || txt2->Text == "-") {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Введите числа!", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			if (result == System::Windows::Forms::DialogResult::OK) {
				this->txtResult->Text = "";
			}
		}
		else {
			this->lblOper->Text = L"Сложение";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 + i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
	}
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите сбросить поля?", "Сброс",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->lblOper->Text = L"";
			this->txt1->Text = L"";
			this->txt2->Text = L"";
			this->txtResult->Text = L"";
		}
	}
	private: System::Void btnDeduct_Click(System::Object^  sender, System::EventArgs^  e) {
		double i1, i2, i3;
		this->txtResult->Text = "";
		this->lblOper->Text = L" ";
		if (txt1->Text == "" || txt2->Text == "" || txt1->Text == "," || txt2->Text == "," || txt1->Text == "-" || txt2->Text == "-") {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Введите числа!", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			if (result == System::Windows::Forms::DialogResult::OK) {
				this->txtResult->Text = "";
			}
		}
		else {
			this->lblOper->Text = L"Вычитание";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 - i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
	}
	private: System::Void btnMul_Click(System::Object^  sender, System::EventArgs^  e) {
		double i1, i2, i3;
		this->txtResult->Text = "";
		this->lblOper->Text = L" ";
		if (txt1->Text == "" || txt2->Text == "" || txt1->Text == "," || txt2->Text == "," || txt1->Text == "-" || txt2->Text == "-") {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Введите числа!", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			if (result == System::Windows::Forms::DialogResult::OK) {
				this->txtResult->Text = "";
			}
		}
		else {
			this->lblOper->Text = L"Умножение";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
}
	private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
		double i1, i2, i3;
		this->txtResult->Text = "";
		this->lblOper->Text = L" ";
		if (txt1->Text == "" || txt2->Text == "" || txt1->Text == "," || txt2->Text == "," || txt1->Text == "-" || txt2->Text == "-") {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Введите числа!", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error , MessageBoxDefaultButton::Button1);
			if (result == System::Windows::Forms::DialogResult::OK) {
				this->txtResult->Text = "";
			}
		}
		else {
			this->lblOper->Text = L"Деление";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			if (i2 == 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "На 0 нельзя делить!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
				if (result == System::Windows::Forms::DialogResult::OK) {
					this->txtResult->Text = "";
					this->lblOper->Text = L"";
				}
			}
			else {
				i3 = i1 / i2;
				this->txtResult->Text = Convert::ToString(i3);
			}
		}
	}

	int x1;
	double x3;

	private: System::Void TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-' || txt1->Text->IndexOf('-') != -1) && (e->KeyChar != ',' || txt1->Text->IndexOf(',') != -1) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		if ((e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0) && (txt1->Text->Length >= 1) && (txt1->Text[0] == '0' && txt1->SelectionStart < 2)) e->Handled = true;
		if (txt1->Text->IndexOf('-') == 0) {
			if (txt1->SelectionStart == 0) {
				e->Handled = true;
			}
			if ((txt1->SelectionStart == 2) && (e->KeyChar == '0')) {
				e->Handled = true;
			}
			if ((txt1->SelectionStart == 1) && (e->KeyChar == ',')) {
				e->Handled = true;
			}
		}
		if (e->KeyChar == ',') {
			x1 = 0;
			if (txt1->Text != "" && txt1->Text[0] == '-') x1 = 1;
			if (txt1->Text->IndexOf(',') == -1 && txt1->SelectionStart == x1) {
				txt1->Text = txt1->Text->Insert(x1, "0");
				txt1->SelectionStart = x1 + 1;
			}
		}
		if (e->KeyChar == '-' && txt1->Text->IndexOf('-') == -1) txt1->SelectionStart = 0;
	}

	private: System::Void TextChanged2(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-' || txt2->Text->IndexOf('-') != -1) && (e->KeyChar != ',' || txt2->Text->IndexOf(',') != -1) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		if ((e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0) && (txt2->Text->Length >= 1) && (txt2->Text[0] == '0' && txt2->SelectionStart < 2)) e->Handled = true;
		if (txt2->Text->IndexOf('-') == 0) {
			if (txt2->SelectionStart == 0) {
				e->Handled = true;
			}
			if ((txt2->SelectionStart == 2) && (e->KeyChar == '0')) {
				e->Handled = true;
			}
			if ((txt2->SelectionStart == 1) && (e->KeyChar == ',')) {
				e->Handled = true;
			}
		}
		if (e->KeyChar == ',') {
			x1 = 0;
			if (txt2->Text != "" && txt2->Text[0] == '-') x1 = 1;
			if (txt2->Text->IndexOf(',') == -1 && txt2->SelectionStart == x1) {
				txt2->Text = txt2->Text->Insert(x1, "0");
				txt2->SelectionStart = x1 + 1;
			}
		}
		if (e->KeyChar == '-' && txt2->Text->IndexOf('-') == -1) txt2->SelectionStart = 0;
	}
};
}