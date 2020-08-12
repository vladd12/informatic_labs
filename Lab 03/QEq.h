#pragma once

#include <cmath>

namespace My3QuadraticEquation {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt3;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtRes1;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtRes2;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblRes;
	private: System::Windows::Forms::Button^  btnRes;
	private: System::Windows::Forms::Button^  btnAction;



	private: System::Windows::Forms::Button^  btnCls;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtRes1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtRes2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblRes = (gcnew System::Windows::Forms::Label());
			this->btnRes = (gcnew System::Windows::Forms::Button());
			this->btnAction = (gcnew System::Windows::Forms::Button());
			this->btnCls = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(10, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэффициенты уравнения";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(10, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a = ";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(10, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"b = ";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(10, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"c = ";
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txt1->Location = System::Drawing::Point(60, 50);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(140, 23);
			this->txt1->TabIndex = 4;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txt1_TextChanged);
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txt2->Location = System::Drawing::Point(60, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(140, 23);
			this->txt2->TabIndex = 5;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txt2_TextChanged);
			// 
			// txt3
			// 
			this->txt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txt3->Location = System::Drawing::Point(60, 130);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(140, 23);
			this->txt3->TabIndex = 6;
			this->txt3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txt3_TextChanged);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(220, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"x1 = ";
			// 
			// txtRes1
			// 
			this->txtRes1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txtRes1->Location = System::Drawing::Point(270, 50);
			this->txtRes1->Name = L"txtRes1";
			this->txtRes1->ReadOnly = true;
			this->txtRes1->Size = System::Drawing::Size(140, 23);
			this->txtRes1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(440, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"x2 = ";
			// 
			// txtRes2
			// 
			this->txtRes2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->txtRes2->Location = System::Drawing::Point(490, 50);
			this->txtRes2->Name = L"txtRes2";
			this->txtRes2->ReadOnly = true;
			this->txtRes2->Size = System::Drawing::Size(140, 23);
			this->txtRes2->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(270, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(360, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Корни уравнения";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblRes
			// 
			this->lblRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lblRes->Location = System::Drawing::Point(270, 90);
			this->lblRes->Name = L"lblRes";
			this->lblRes->Size = System::Drawing::Size(363, 60);
			this->lblRes->TabIndex = 12;
			this->lblRes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRes
			// 
			this->btnRes->Location = System::Drawing::Point(60, 170);
			this->btnRes->Name = L"btnRes";
			this->btnRes->Size = System::Drawing::Size(140, 40);
			this->btnRes->TabIndex = 13;
			this->btnRes->Text = L"Сброс";
			this->btnRes->UseVisualStyleBackColor = true;
			this->btnRes->Click += gcnew System::EventHandler(this, &MainForm::btnReset);
			// 
			// btnAction
			// 
			this->btnAction->Location = System::Drawing::Point(270, 170);
			this->btnAction->Name = L"btnAction";
			this->btnAction->Size = System::Drawing::Size(140, 40);
			this->btnAction->TabIndex = 14;
			this->btnAction->Text = L"Решить";
			this->btnAction->UseVisualStyleBackColor = true;
			this->btnAction->Click += gcnew System::EventHandler(this, &MainForm::btnAction_Click);
			// 
			// btnCls
			// 
			this->btnCls->Location = System::Drawing::Point(470, 170);
			this->btnCls->Name = L"btnCls";
			this->btnCls->Size = System::Drawing::Size(140, 40);
			this->btnCls->TabIndex = 15;
			this->btnCls->Text = L"Закрыть";
			this->btnCls->UseVisualStyleBackColor = true;
			this->btnCls->Click += gcnew System::EventHandler(this, &MainForm::btnClose);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 231);
			this->Controls->Add(this->btnCls);
			this->Controls->Add(this->btnAction);
			this->Controls->Add(this->btnRes);
			this->Controls->Add(this->lblRes);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtRes2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtRes1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Решение квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		int x1;
		double x3;

	private: System::Void txt1_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
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

	private: System::Void txt2_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
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

	private: System::Void txt3_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-' || txt3->Text->IndexOf('-') != -1) && (e->KeyChar != ',' || txt3->Text->IndexOf(',') != -1) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		if ((e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0) && (txt3->Text->Length >= 1) && (txt3->Text[0] == '0' && txt3->SelectionStart < 2)) e->Handled = true;
		if (txt3->Text->IndexOf('-') == 0) {
			if (txt3->SelectionStart == 0) {
				e->Handled = true;
			}
			if ((txt3->SelectionStart == 2) && (e->KeyChar == '0')) {
				e->Handled = true;
			}
			if ((txt3->SelectionStart == 1) && (e->KeyChar == ',')) {
				e->Handled = true;
			}
		}
		if (e->KeyChar == ',') {
			x1 = 0;
			if (txt3->Text != "" && txt3->Text[0] == '-') x1 = 1;
			if (txt3->Text->IndexOf(',') == -1 && txt3->SelectionStart == x1) {
				txt3->Text = txt3->Text->Insert(x1, "0");
				txt3->SelectionStart = x1 + 1;
			}
		}
		if (e->KeyChar == '-' && txt3->Text->IndexOf('-') == -1) txt3->SelectionStart = 0;
	}

	private: System::Void btnReset(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите сбросить поля?", "Сброс",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->lblRes->Text = L"";
			this->txt1->Text = L"";
			this->txt2->Text = L"";
			this->txt3->Text = L"";
			this->txtRes1->Text = L"";
			this->txtRes2->Text = L"";
		}
	}

	private: System::Void btnClose(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите выйти?", "Выход",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}

	private: System::Void btnAction_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txt1->Text == "" || txt2->Text == "" || txt3->Text == "" || txt1->Text == "," || txt2->Text == "," || txt3->Text == "," || txt1->Text == "-" || txt2->Text == "-" || txt3->Text == "-") {
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Введите текст!", "Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		}
		else {
			double a, b, c, D, x1, x2;
			this->lblRes->Text = L"";
			this->txtRes1->Text = "";
			this->txtRes2->Text = "";
			a = Convert::ToDouble(txt1->Text);
			b = Convert::ToDouble(txt2->Text);
			c = Convert::ToDouble(txt3->Text);
			D = (b*b) - (4 * a*c);
			if ((a == 0 || a == -0) && (b == 0 || b == -0) && (c == 0 || c == -0)) {
				this->lblRes->Text = L"Выражение тождественно (0 = 0).";
			}
			else if (a == 0 && b == 0 && c != 0) {
				this->lblRes->Text = L"Уравнение не имеет действительных корней.";
			}
			else if (a == 0) {
				x1 = (-c) / b;
				this->txtRes1->Text = Convert::ToString(x1);
				this->lblRes->Text = L"Линейное уравнение – имеет один корень.";
			}
			else if (D < 0) {
				this->lblRes->Text = L"Дискриминант < 0. Уравнение не имеет действительных корней.";
			}
			else if (D == 0) {
				x1 = -b / (2 * a);
				x2 = x1;
				this->txtRes1->Text = Convert::ToString(x1);
				this->txtRes2->Text = Convert::ToString(x2);
				this->lblRes->Text = L"Дискриминант = 0. Уравнение имеет два одинаковых корня.";
			}
			else if (D > 0) {
				D = sqrt(D);
				x1 = (-b + D) / (2 * a);
				x2 = (-b - D) / (2 * a);
				this->txtRes1->Text = Convert::ToString(x1);
				this->txtRes2->Text = Convert::ToString(x2);
				this->lblRes->Text = L"Дискриминант > 0. Уравнение имеет два корня.";
			}
		}
	}
};
}
