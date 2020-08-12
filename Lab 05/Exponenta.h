#pragma once

#include <cmath>
#include <string>

namespace My5Exponenta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Exponenta
	/// </summary>
	public ref class Exponenta : public System::Windows::Forms::Form
	{
	public:
		Exponenta(void)
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
		~Exponenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBoxInputX;
	private: System::Windows::Forms::Label^  LabelXEqual;
	private: System::Windows::Forms::TextBox^  txtBoxInputX;
	private: System::Windows::Forms::GroupBox^  groupBoxInputPrecision;
	private: System::Windows::Forms::RadioButton^  radioBtn1;
	private: System::Windows::Forms::RadioButton^  radioBtn2;
	private: System::Windows::Forms::RadioButton^  radioBtn3;
	private: System::Windows::Forms::RadioButton^  radioBtn4;
	private: System::Windows::Forms::RadioButton^  radioBtn5;
	private: System::Windows::Forms::RadioButton^  radioBtn6;
	private: System::Windows::Forms::Button^  btnAction;
	private: System::Windows::Forms::GroupBox^  groupBoxOtputSolve;
	private: System::Windows::Forms::Label^  labelInputX;
	private: System::Windows::Forms::Label^  labelTerms;
	private: System::Windows::Forms::Label^  labelMathExp;
	private: System::Windows::Forms::Label^  labelInputPrecision;
	private: System::Windows::Forms::Label^  labelTheSum;
	private: System::Windows::Forms::Label^  lblTheSum;
	private: System::Windows::Forms::Label^  lblTerms;
	private: System::Windows::Forms::Label^  lblMathExp;
	private: System::Windows::Forms::Label^  lblInputPrecision;
	private: System::Windows::Forms::Label^  lblInputX;
	private: System::Windows::Forms::Button^  btnClose;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Exponenta::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxInputX = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxInputX = (gcnew System::Windows::Forms::TextBox());
			this->LabelXEqual = (gcnew System::Windows::Forms::Label());
			this->groupBoxInputPrecision = (gcnew System::Windows::Forms::GroupBox());
			this->radioBtn6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioBtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->btnAction = (gcnew System::Windows::Forms::Button());
			this->groupBoxOtputSolve = (gcnew System::Windows::Forms::GroupBox());
			this->lblTheSum = (gcnew System::Windows::Forms::Label());
			this->lblTerms = (gcnew System::Windows::Forms::Label());
			this->lblMathExp = (gcnew System::Windows::Forms::Label());
			this->lblInputPrecision = (gcnew System::Windows::Forms::Label());
			this->lblInputX = (gcnew System::Windows::Forms::Label());
			this->labelTheSum = (gcnew System::Windows::Forms::Label());
			this->labelTerms = (gcnew System::Windows::Forms::Label());
			this->labelMathExp = (gcnew System::Windows::Forms::Label());
			this->labelInputPrecision = (gcnew System::Windows::Forms::Label());
			this->labelInputX = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxInputX->SuspendLayout();
			this->groupBoxInputPrecision->SuspendLayout();
			this->groupBoxOtputSolve->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(470, 80);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBoxInputX
			// 
			this->groupBoxInputX->Controls->Add(this->txtBoxInputX);
			this->groupBoxInputX->Controls->Add(this->LabelXEqual);
			this->groupBoxInputX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->groupBoxInputX->Location = System::Drawing::Point(13, 100);
			this->groupBoxInputX->Name = L"groupBoxInputX";
			this->groupBoxInputX->Size = System::Drawing::Size(470, 74);
			this->groupBoxInputX->TabIndex = 1;
			this->groupBoxInputX->TabStop = false;
			this->groupBoxInputX->Text = L"Ввод значения Х (-13 ≤ Х ≤ 20)";
			// 
			// txtBoxInputX
			// 
			this->txtBoxInputX->Location = System::Drawing::Point(50, 30);
			this->txtBoxInputX->Name = L"txtBoxInputX";
			this->txtBoxInputX->Size = System::Drawing::Size(410, 26);
			this->txtBoxInputX->TabIndex = 1;
			this->txtBoxInputX->Text = L"1";
			this->txtBoxInputX->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtBoxInputX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Exponenta::txtBoxInputX_TextChanged);
			// 
			// LabelXEqual
			// 
			this->LabelXEqual->Location = System::Drawing::Point(5, 30);
			this->LabelXEqual->Name = L"LabelXEqual";
			this->LabelXEqual->Size = System::Drawing::Size(35, 26);
			this->LabelXEqual->TabIndex = 0;
			this->LabelXEqual->Text = L"X =";
			this->LabelXEqual->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBoxInputPrecision
			// 
			this->groupBoxInputPrecision->Controls->Add(this->radioBtn6);
			this->groupBoxInputPrecision->Controls->Add(this->radioBtn4);
			this->groupBoxInputPrecision->Controls->Add(this->radioBtn5);
			this->groupBoxInputPrecision->Controls->Add(this->radioBtn1);
			this->groupBoxInputPrecision->Controls->Add(this->radioBtn3);
			this->groupBoxInputPrecision->Controls->Add(this->radioBtn2);
			this->groupBoxInputPrecision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->groupBoxInputPrecision->Location = System::Drawing::Point(13, 180);
			this->groupBoxInputPrecision->Name = L"groupBoxInputPrecision";
			this->groupBoxInputPrecision->Size = System::Drawing::Size(470, 110);
			this->groupBoxInputPrecision->TabIndex = 2;
			this->groupBoxInputPrecision->TabStop = false;
			this->groupBoxInputPrecision->Text = L"Выбор точности";
			// 
			// radioBtn6
			// 
			this->radioBtn6->Location = System::Drawing::Point(350, 70);
			this->radioBtn6->Name = L"radioBtn6";
			this->radioBtn6->Size = System::Drawing::Size(100, 25);
			this->radioBtn6->TabIndex = 5;
			this->radioBtn6->TabStop = true;
			this->radioBtn6->Text = L"0,000001";
			this->radioBtn6->UseVisualStyleBackColor = true;
			this->radioBtn6->CheckedChanged += gcnew System::EventHandler(this, &Exponenta::radioBtn6_CheckedChanged);
			// 
			// radioBtn4
			// 
			this->radioBtn4->Location = System::Drawing::Point(180, 70);
			this->radioBtn4->Name = L"radioBtn4";
			this->radioBtn4->Size = System::Drawing::Size(80, 25);
			this->radioBtn4->TabIndex = 4;
			this->radioBtn4->TabStop = true;
			this->radioBtn4->Text = L"0,0001";
			this->radioBtn4->UseVisualStyleBackColor = true;
			this->radioBtn4->CheckedChanged += gcnew System::EventHandler(this, &Exponenta::radioBtn4_CheckedChanged);
			// 
			// radioBtn5
			// 
			this->radioBtn5->Location = System::Drawing::Point(350, 30);
			this->radioBtn5->Name = L"radioBtn5";
			this->radioBtn5->Size = System::Drawing::Size(90, 25);
			this->radioBtn5->TabIndex = 3;
			this->radioBtn5->TabStop = true;
			this->radioBtn5->Text = L"0,00001";
			this->radioBtn5->UseVisualStyleBackColor = true;
			this->radioBtn5->CheckedChanged += gcnew System::EventHandler(this, &Exponenta::radioBtn5_CheckedChanged);
			// 
			// radioBtn1
			// 
			this->radioBtn1->Checked = true;
			this->radioBtn1->Location = System::Drawing::Point(10, 30);
			this->radioBtn1->Name = L"radioBtn1";
			this->radioBtn1->Size = System::Drawing::Size(50, 25);
			this->radioBtn1->TabIndex = 2;
			this->radioBtn1->TabStop = true;
			this->radioBtn1->Text = L"0,1";
			this->radioBtn1->UseVisualStyleBackColor = true;
			this->radioBtn1->CheckedChanged += gcnew System::EventHandler(this, &Exponenta::radioBtn1_CheckedChanged);
			// 
			// radioBtn3
			// 
			this->radioBtn3->Location = System::Drawing::Point(180, 30);
			this->radioBtn3->Name = L"radioBtn3";
			this->radioBtn3->Size = System::Drawing::Size(70, 25);
			this->radioBtn3->TabIndex = 1;
			this->radioBtn3->TabStop = true;
			this->radioBtn3->Text = L"0,001";
			this->radioBtn3->UseVisualStyleBackColor = true;
			this->radioBtn3->CheckedChanged += gcnew System::EventHandler(this, &Exponenta::radioBtn3_CheckedChanged);
			// 
			// radioBtn2
			// 
			this->radioBtn2->Location = System::Drawing::Point(10, 70);
			this->radioBtn2->Name = L"radioBtn2";
			this->radioBtn2->Size = System::Drawing::Size(60, 25);
			this->radioBtn2->TabIndex = 0;
			this->radioBtn2->TabStop = true;
			this->radioBtn2->Text = L"0,01";
			this->radioBtn2->UseVisualStyleBackColor = true;
			this->radioBtn2->CheckedChanged += gcnew System::EventHandler(this, &Exponenta::radioBtn2_CheckedChanged);
			// 
			// btnAction
			// 
			this->btnAction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAction->Location = System::Drawing::Point(13, 310);
			this->btnAction->Name = L"btnAction";
			this->btnAction->Size = System::Drawing::Size(470, 45);
			this->btnAction->TabIndex = 3;
			this->btnAction->Text = L"Расчёт exp(x)";
			this->btnAction->UseVisualStyleBackColor = true;
			this->btnAction->Click += gcnew System::EventHandler(this, &Exponenta::btnAction_Click);
			// 
			// groupBoxOtputSolve
			// 
			this->groupBoxOtputSolve->Controls->Add(this->lblTheSum);
			this->groupBoxOtputSolve->Controls->Add(this->lblTerms);
			this->groupBoxOtputSolve->Controls->Add(this->lblMathExp);
			this->groupBoxOtputSolve->Controls->Add(this->lblInputPrecision);
			this->groupBoxOtputSolve->Controls->Add(this->lblInputX);
			this->groupBoxOtputSolve->Controls->Add(this->labelTheSum);
			this->groupBoxOtputSolve->Controls->Add(this->labelTerms);
			this->groupBoxOtputSolve->Controls->Add(this->labelMathExp);
			this->groupBoxOtputSolve->Controls->Add(this->labelInputPrecision);
			this->groupBoxOtputSolve->Controls->Add(this->labelInputX);
			this->groupBoxOtputSolve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxOtputSolve->Location = System::Drawing::Point(13, 370);
			this->groupBoxOtputSolve->Name = L"groupBoxOtputSolve";
			this->groupBoxOtputSolve->Size = System::Drawing::Size(470, 190);
			this->groupBoxOtputSolve->TabIndex = 4;
			this->groupBoxOtputSolve->TabStop = false;
			this->groupBoxOtputSolve->Text = L"Результаты расчёта";
			// 
			// lblTheSum
			// 
			this->lblTheSum->AutoSize = true;
			this->lblTheSum->Location = System::Drawing::Point(210, 120);
			this->lblTheSum->Name = L"lblTheSum";
			this->lblTheSum->Size = System::Drawing::Size(0, 20);
			this->lblTheSum->TabIndex = 9;
			// 
			// lblTerms
			// 
			this->lblTerms->AutoSize = true;
			this->lblTerms->Location = System::Drawing::Point(170, 150);
			this->lblTerms->Name = L"lblTerms";
			this->lblTerms->Size = System::Drawing::Size(0, 20);
			this->lblTerms->TabIndex = 8;
			// 
			// lblMathExp
			// 
			this->lblMathExp->AutoSize = true;
			this->lblMathExp->Location = System::Drawing::Point(210, 90);
			this->lblMathExp->Name = L"lblMathExp";
			this->lblMathExp->Size = System::Drawing::Size(0, 20);
			this->lblMathExp->TabIndex = 7;
			// 
			// lblInputPrecision
			// 
			this->lblInputPrecision->AutoSize = true;
			this->lblInputPrecision->Location = System::Drawing::Point(110, 60);
			this->lblInputPrecision->Name = L"lblInputPrecision";
			this->lblInputPrecision->Size = System::Drawing::Size(0, 20);
			this->lblInputPrecision->TabIndex = 6;
			// 
			// lblInputX
			// 
			this->lblInputX->AutoSize = true;
			this->lblInputX->Location = System::Drawing::Point(200, 30);
			this->lblInputX->Name = L"lblInputX";
			this->lblInputX->Size = System::Drawing::Size(0, 20);
			this->lblInputX->TabIndex = 5;
			// 
			// labelTheSum
			// 
			this->labelTheSum->AutoSize = true;
			this->labelTheSum->Location = System::Drawing::Point(10, 120);
			this->labelTheSum->Name = L"labelTheSum";
			this->labelTheSum->Size = System::Drawing::Size(159, 20);
			this->labelTheSum->TabIndex = 4;
			this->labelTheSum->Text = L"Сумма ряда exp(x) =";
			// 
			// labelTerms
			// 
			this->labelTerms->AutoSize = true;
			this->labelTerms->Location = System::Drawing::Point(10, 150);
			this->labelTerms->Name = L"labelTerms";
			this->labelTerms->Size = System::Drawing::Size(155, 20);
			this->labelTerms->TabIndex = 3;
			this->labelTerms->Text = L"Число слагаемых =";
			// 
			// labelMathExp
			// 
			this->labelMathExp->AutoSize = true;
			this->labelMathExp->Location = System::Drawing::Point(10, 90);
			this->labelMathExp->Name = L"labelMathExp";
			this->labelMathExp->Size = System::Drawing::Size(197, 20);
			this->labelMathExp->TabIndex = 2;
			this->labelMathExp->Text = L"Точное значение exp(x) =";
			// 
			// labelInputPrecision
			// 
			this->labelInputPrecision->AutoSize = true;
			this->labelInputPrecision->Location = System::Drawing::Point(10, 60);
			this->labelInputPrecision->Name = L"labelInputPrecision";
			this->labelInputPrecision->Size = System::Drawing::Size(93, 20);
			this->labelInputPrecision->TabIndex = 1;
			this->labelInputPrecision->Text = L"Точность =";
			// 
			// labelInputX
			// 
			this->labelInputX->AutoSize = true;
			this->labelInputX->Location = System::Drawing::Point(10, 30);
			this->labelInputX->Name = L"labelInputX";
			this->labelInputX->Size = System::Drawing::Size(185, 20);
			this->labelInputX->TabIndex = 0;
			this->labelInputX->Text = L"Исходное значение Х =";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(13, 580);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(470, 45);
			this->btnClose->TabIndex = 5;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Exponenta::btnClose_Click);
			// 
			// Exponenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(494, 641);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->groupBoxOtputSolve);
			this->Controls->Add(this->btnAction);
			this->Controls->Add(this->groupBoxInputPrecision);
			this->Controls->Add(this->groupBoxInputX);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Exponenta";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Расчет exp(x)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxInputX->ResumeLayout(false);
			this->groupBoxInputX->PerformLayout();
			this->groupBoxInputPrecision->ResumeLayout(false);
			this->groupBoxOtputSolve->ResumeLayout(false);
			this->groupBoxOtputSolve->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		int x1;
		double x3;
		double precision = 0.1, x = 1; //точность и х
		int UsedPrec = 1; //точность для функции Math::Round
		System::String^ precisionText = "0,1";
		int terms; //число слагаемых
		double approximateExp; //сумма ряда
		double mathExp; //точное значение через библиотеку

	//Защита от дурака
	private: System::Void txtBoxInputX_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-' || txtBoxInputX->Text->IndexOf('-') != -1) && (e->KeyChar != ',' || txtBoxInputX->Text->IndexOf(',') != -1) && (e->KeyChar != (char)Keys::Back) && (e->KeyChar != '.' || txtBoxInputX->Text->IndexOf(',') != -1)) e->Handled = true;
		if (e->KeyChar == '.') {
			e->KeyChar = ',';
		}
		if ((e->KeyChar == (char)Keys::D0 || e->KeyChar == (char)Keys::NumPad0) && (txtBoxInputX->Text->Length >= 1) && (txtBoxInputX->Text[0] == '0' && txtBoxInputX->SelectionStart < 2)) e->Handled = true;
		if (txtBoxInputX->Text->IndexOf('-') == 0) {
			if (txtBoxInputX->SelectionStart == 0) {
				e->Handled = true;
			}
			if ((txtBoxInputX->SelectionStart == 2) && (e->KeyChar == '0')) {
				e->Handled = true;
			}
			if ((txtBoxInputX->SelectionStart == 1) && (e->KeyChar == ',')) {
				e->Handled = true;
			}
		}
		if (e->KeyChar == ',') {
			x1 = 0;
			if (txtBoxInputX->Text != "" && txtBoxInputX->Text[0] == '-') x1 = 1;
			if (txtBoxInputX->Text->IndexOf(',') == -1 && txtBoxInputX->SelectionStart == x1) {
				txtBoxInputX->Text = txtBoxInputX->Text->Insert(x1, "0");
				txtBoxInputX->SelectionStart = x1 + 1;
			}
		}
		if (e->KeyChar == '-' && txtBoxInputX->Text->IndexOf('-') == -1) txtBoxInputX->SelectionStart = 0;
		if (txtBoxInputX->Text != (Convert::ToString(x)) && ((txtBoxInputX->Text != "," || txtBoxInputX->Text != "" || txtBoxInputX->Text != "-" || txtBoxInputX->Text != "-,") || txtBoxInputX->Text->IndexOf(',') != 0 || txtBoxInputX->Text->IndexOf('-') != 0)) {
			x = 0;
		}
		else {
			x = Convert::ToDouble(txtBoxInputX->Text);
			funcLabelsCleanup();
		}
	}

	//Функция очищения результатов
	void funcLabelsCleanup() {
		this->lblTheSum->Text = L"";
		this->lblTerms->Text = L"";
		this->lblMathExp->Text = L"";
		this->lblInputPrecision->Text = L"";
		this->lblInputX->Text = L"";
	}

	//Нормальное форматирование числа в строку
	private: System::String^ DigitOutput(double num, int precision) {
		String^ str2 = num.ToString("0.#######");
		if ((str2->Length) - (str2->IndexOf(",") + 1) < (precision + 1)) {
			int n = (precision + 1) - ((str2->Length) - (str2->IndexOf(","))) + 1;
			if (str2->IndexOf(",") == -1) str2 = str2 + ",";
			while (n > 0) {
				str2 = str2 + "0";
				n = n - 1;
			}
			return str2;
		}
		else {
			return str2;
		}
	}

	//дополнительная подфункция для функции verifications()
	//активирует RadioButton в зависимости от выбора точности
	private: void ActivateRadioButtons(int precision) {
		switch (precision) {
		case 2:
			radioBtn2->Checked = true;
			break;
		case 3:
			radioBtn3->Checked = true;
			break;
		case 4:
			radioBtn4->Checked = true;
			break;
		case 5:
			radioBtn5->Checked = true;
			break;
		case 6:
			radioBtn6->Checked = true;
			break;
		default:
			MessageBox::Show(this, "Произошла ошибка, введите данные заново!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
	}

	//дополнительная подфункция для функции verifications()
	//возвращает точность для округления по х
	private: double ChoiceOfPrecision(int precision) {
		switch (precision) {
		case 2:
			return 0.01;
			break;
		case 3:
			return 0.001;
			break;
		case 4:
			return 0.0001;
			break;
		case 5:
			return 0.00001;
			break;
		case 6:
			return 0.000001;
			break;
		default:
			MessageBox::Show(this, "Произошла ошибка, введите данные заново!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
	}

	//Проверка на округление (чтобы exp(x) было не равно нулю)
	private: void verifications(double num, int precision) {
		if (num == 0) {
			while (num == 0) {
				precision = precision + 1;
				num = Math::Exp(x);
				num = Math::Round(num, (precision + 1));
			}
			double prec = ChoiceOfPrecision(precision);
			double MyExp = funcExponenta(x, prec);
			MyExp = Math::Round(MyExp, (precision + 1));
			approximateExp = MyExp;
			mathExp = num;
			ActivateRadioButtons(precision);
		}
	}

	//Вычисление суммы ряда
	double funcExponenta(double inputX, double inputPrecision) {
		double sum = 0, term = 1;
		terms = 1;
		sum = sum + term;
		//Подсчёт суммы ряда в рекуррентном виде
		while (fabs(term) > inputPrecision && inputX != 0) {
			term = term * (inputX / terms);
			sum = sum + term;
			terms = terms + 1;
		}
		return sum;
	}

	private: System::Void radioBtn1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioBtn1->Checked == true) {
			precision = 0.1;
			UsedPrec = 1;
			precisionText = radioBtn1->Text;
		}
		else {
			funcLabelsCleanup();
		}
	}

	private: System::Void radioBtn2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioBtn2->Checked == true) {
			precision = 0.01;
			UsedPrec = 2;
			precisionText = radioBtn2->Text;
		}
		else {
			funcLabelsCleanup();
		}
	}

	private: System::Void radioBtn3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioBtn3->Checked == true) {
			precision = 0.001;
			UsedPrec = 3;
			precisionText = radioBtn3->Text;
		}
		else {
			funcLabelsCleanup();
		}
	}

	private: System::Void radioBtn4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioBtn4->Checked == true) {
			precision = 0.0001;
			UsedPrec = 4;
			precisionText = radioBtn4->Text;
		}
		else {
			funcLabelsCleanup();
		}
	}

	private: System::Void radioBtn5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioBtn5->Checked == true) {
			precision = 0.00001;
			UsedPrec = 5;
			precisionText = radioBtn5->Text;
		}
		else {
			funcLabelsCleanup();
		}
	}

	private: System::Void radioBtn6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioBtn6->Checked == true) {
			precision = 0.000001;
			UsedPrec = 6;
			precisionText = radioBtn6->Text;
		}
		else {
			funcLabelsCleanup();
		}
	}
	
	//Обработчик кнопки расчета
	private: System::Void btnAction_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBoxInputX->Text != "" && txtBoxInputX->Text != "-" && txtBoxInputX->Text != "-0" 
			&& txtBoxInputX->Text != "-0," && txtBoxInputX->Text != "-,") {
			x = Convert::ToDouble(this->txtBoxInputX->Text);
			if (x > 20 || x < -13) {
				MessageBox::Show(this, "Введите данные в указанном диапазоне!", "Ошибка!",
				MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
			}
			else {
				approximateExp = funcExponenta(x, precision); //сумма ряда
				mathExp = Math::Exp(x); //точное значение
				approximateExp = round(approximateExp * (pow(10, UsedPrec + 1))) / (pow(10, UsedPrec + 1)); //округление суммы ряда
				mathExp = round(mathExp * (pow(10, UsedPrec + 1))) / (pow(10, UsedPrec + 1)); //округление точного значения
				verifications(mathExp, UsedPrec); //verification (проверка)
				//Вывод данных в лейблы
				this->lblTheSum->Text = DigitOutput(approximateExp, UsedPrec);
				this->lblTerms->Text = Convert::ToString(terms);
				this->lblMathExp->Text = DigitOutput(mathExp, UsedPrec);
				this->lblInputPrecision->Text = precisionText;
				this->lblInputX->Text = Convert::ToString(x);
			}
		}
		else {
			MessageBox::Show(this, "Введите корректные данные!", "Ошибка!",
			MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
		}
	}

	//Обработчик кнопки закрытия приложения
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите выйти?", "Выход",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}
};
}