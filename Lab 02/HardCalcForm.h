#pragma once

#include <cmath>

namespace HardCalc {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HardCalcForm : public System::Windows::Forms::Form
	{
	public:
		HardCalcForm(void)
		{
			InitializeComponent();
		}

	protected:
		~HardCalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtBox;
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::Button^  btnCE;
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnSeparator;
	private: System::Windows::Forms::Button^  btnPlusMinus;
	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnSqrt;
	private: System::Windows::Forms::Button^  btnMult;
	private: System::Windows::Forms::Button^  btnDeduct;
	private: System::Windows::Forms::Button^  btnSum;
	private: System::Windows::Forms::Button^  btnMod;
	private: System::Windows::Forms::Button^  btnInverse;
	private: System::Windows::Forms::Button^  btnResult;
	private: System::Windows::Forms::Label^  lblTemp;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
void InitializeComponent(void)
{
	this->txtBox = (gcnew System::Windows::Forms::TextBox());
	this->btnBackspace = (gcnew System::Windows::Forms::Button());
	this->btnCE = (gcnew System::Windows::Forms::Button());
	this->btnC = (gcnew System::Windows::Forms::Button());
	this->btn7 = (gcnew System::Windows::Forms::Button());
	this->btn8 = (gcnew System::Windows::Forms::Button());
	this->btn9 = (gcnew System::Windows::Forms::Button());
	this->btn4 = (gcnew System::Windows::Forms::Button());
	this->btn5 = (gcnew System::Windows::Forms::Button());
	this->btn6 = (gcnew System::Windows::Forms::Button());
	this->btn1 = (gcnew System::Windows::Forms::Button());
	this->btn2 = (gcnew System::Windows::Forms::Button());
	this->btn3 = (gcnew System::Windows::Forms::Button());
	this->btn0 = (gcnew System::Windows::Forms::Button());
	this->btnSeparator = (gcnew System::Windows::Forms::Button());
	this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
	this->btnDiv = (gcnew System::Windows::Forms::Button());
	this->btnSqrt = (gcnew System::Windows::Forms::Button());
	this->btnMult = (gcnew System::Windows::Forms::Button());
	this->btnDeduct = (gcnew System::Windows::Forms::Button());
	this->btnSum = (gcnew System::Windows::Forms::Button());
	this->btnMod = (gcnew System::Windows::Forms::Button());
	this->btnInverse = (gcnew System::Windows::Forms::Button());
	this->btnResult = (gcnew System::Windows::Forms::Button());
	this->lblTemp = (gcnew System::Windows::Forms::Label());
	this->SuspendLayout();
	// 
	// txtBox
	// 
	this->txtBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
	this->txtBox->Location = System::Drawing::Point(13, 13);
	this->txtBox->Name = L"txtBox";
	this->txtBox->ReadOnly = true;
	this->txtBox->Size = System::Drawing::Size(340, 26);
	this->txtBox->TabIndex = 23;
	this->txtBox->Text = L"0";
	this->txtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	this->txtBox->TextChanged += gcnew System::EventHandler(this, &HardCalcForm::txtBox_TextChanged);
	// 
	// btnBackspace
	// 
	this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnBackspace->Location = System::Drawing::Point(13, 45);
	this->btnBackspace->Name = L"btnBackspace";
	this->btnBackspace->Size = System::Drawing::Size(160, 40);
	this->btnBackspace->TabIndex = 1;
	this->btnBackspace->Text = L"Backspace";
	this->btnBackspace->UseVisualStyleBackColor = true;
	this->btnBackspace->Click += gcnew System::EventHandler(this, &HardCalcForm::btnBackspace_Click);
	// 
	// btnCE
	// 
	this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnCE->Location = System::Drawing::Point(180, 45);
	this->btnCE->Name = L"btnCE";
	this->btnCE->Size = System::Drawing::Size(80, 40);
	this->btnCE->TabIndex = 2;
	this->btnCE->Text = L"CE";
	this->btnCE->UseVisualStyleBackColor = true;
	this->btnCE->Click += gcnew System::EventHandler(this, &HardCalcForm::btnCE_Click);
	// 
	// btnC
	// 
	this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnC->Location = System::Drawing::Point(268, 45);
	this->btnC->Name = L"btnC";
	this->btnC->Size = System::Drawing::Size(85, 40);
	this->btnC->TabIndex = 3;
	this->btnC->Text = L"C";
	this->btnC->UseVisualStyleBackColor = true;
	this->btnC->Click += gcnew System::EventHandler(this, &HardCalcForm::btnC_Click);
	// 
	// btn7
	// 
	this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn7->Location = System::Drawing::Point(13, 90);
	this->btn7->Name = L"btn7";
	this->btn7->Size = System::Drawing::Size(60, 40);
	this->btn7->TabIndex = 4;
	this->btn7->Text = L"7";
	this->btn7->UseVisualStyleBackColor = true;
	this->btn7->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn8
	// 
	this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn8->Location = System::Drawing::Point(83, 90);
	this->btn8->Name = L"btn8";
	this->btn8->Size = System::Drawing::Size(60, 40);
	this->btn8->TabIndex = 5;
	this->btn8->Text = L"8";
	this->btn8->UseVisualStyleBackColor = true;
	this->btn8->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn9
	// 
	this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn9->Location = System::Drawing::Point(153, 90);
	this->btn9->Name = L"btn9";
	this->btn9->Size = System::Drawing::Size(60, 40);
	this->btn9->TabIndex = 6;
	this->btn9->Text = L"9";
	this->btn9->UseVisualStyleBackColor = true;
	this->btn9->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn4
	// 
	this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn4->Location = System::Drawing::Point(13, 135);
	this->btn4->Name = L"btn4";
	this->btn4->Size = System::Drawing::Size(60, 40);
	this->btn4->TabIndex = 7;
	this->btn4->Text = L"4";
	this->btn4->UseVisualStyleBackColor = true;
	this->btn4->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn5
	// 
	this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn5->Location = System::Drawing::Point(83, 135);
	this->btn5->Name = L"btn5";
	this->btn5->Size = System::Drawing::Size(60, 40);
	this->btn5->TabIndex = 8;
	this->btn5->Text = L"5";
	this->btn5->UseVisualStyleBackColor = true;
	this->btn5->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn6
	// 
	this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn6->Location = System::Drawing::Point(153, 135);
	this->btn6->Name = L"btn6";
	this->btn6->Size = System::Drawing::Size(60, 40);
	this->btn6->TabIndex = 9;
	this->btn6->Text = L"6";
	this->btn6->UseVisualStyleBackColor = true;
	this->btn6->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn1
	// 
	this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn1->Location = System::Drawing::Point(13, 180);
	this->btn1->Name = L"btn1";
	this->btn1->Size = System::Drawing::Size(60, 40);
	this->btn1->TabIndex = 10;
	this->btn1->Text = L"1";
	this->btn1->UseVisualStyleBackColor = true;
	this->btn1->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn2
	// 
	this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn2->Location = System::Drawing::Point(83, 180);
	this->btn2->Name = L"btn2";
	this->btn2->Size = System::Drawing::Size(60, 40);
	this->btn2->TabIndex = 11;
	this->btn2->Text = L"2";
	this->btn2->UseVisualStyleBackColor = true;
	this->btn2->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn3
	// 
	this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn3->Location = System::Drawing::Point(153, 180);
	this->btn3->Name = L"btn3";
	this->btn3->Size = System::Drawing::Size(60, 40);
	this->btn3->TabIndex = 12;
	this->btn3->Text = L"3";
	this->btn3->UseVisualStyleBackColor = true;
	this->btn3->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btn0
	// 
	this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btn0->Location = System::Drawing::Point(13, 225);
	this->btn0->Name = L"btn0";
	this->btn0->Size = System::Drawing::Size(60, 40);
	this->btn0->TabIndex = 13;
	this->btn0->Text = L"0";
	this->btn0->UseVisualStyleBackColor = true;
	this->btn0->Click += gcnew System::EventHandler(this, &HardCalcForm::btnNum_Click);
	// 
	// btnSeparator
	// 
	this->btnSeparator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnSeparator->Location = System::Drawing::Point(83, 225);
	this->btnSeparator->Name = L"btnSeparator";
	this->btnSeparator->Size = System::Drawing::Size(60, 40);
	this->btnSeparator->TabIndex = 14;
	this->btnSeparator->Text = L",";
	this->btnSeparator->UseVisualStyleBackColor = true;
	this->btnSeparator->Click += gcnew System::EventHandler(this, &HardCalcForm::btnSeparator_Click);
	// 
	// btnPlusMinus
	// 
	this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnPlusMinus->Location = System::Drawing::Point(153, 225);
	this->btnPlusMinus->Name = L"btnPlusMinus";
	this->btnPlusMinus->Size = System::Drawing::Size(60, 40);
	this->btnPlusMinus->TabIndex = 15;
	this->btnPlusMinus->Text = L"+/-";
	this->btnPlusMinus->UseVisualStyleBackColor = true;
	this->btnPlusMinus->Click += gcnew System::EventHandler(this, &HardCalcForm::btnPlusMinus_Click);
	// 
	// btnDiv
	// 
	this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnDiv->ForeColor = System::Drawing::Color::Red;
	this->btnDiv->Location = System::Drawing::Point(223, 90);
	this->btnDiv->Name = L"btnDiv";
	this->btnDiv->Size = System::Drawing::Size(60, 40);
	this->btnDiv->TabIndex = 16;
	this->btnDiv->Text = L"/";
	this->btnDiv->UseVisualStyleBackColor = true;
	this->btnDiv->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnSqrt
	// 
	this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnSqrt->Location = System::Drawing::Point(293, 90);
	this->btnSqrt->Name = L"btnSqrt";
	this->btnSqrt->Size = System::Drawing::Size(60, 40);
	this->btnSqrt->TabIndex = 17;
	this->btnSqrt->Text = L"sqrt";
	this->btnSqrt->UseVisualStyleBackColor = true;
	this->btnSqrt->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnMult
	// 
	this->btnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnMult->ForeColor = System::Drawing::Color::Red;
	this->btnMult->Location = System::Drawing::Point(223, 135);
	this->btnMult->Name = L"btnMult";
	this->btnMult->Size = System::Drawing::Size(60, 40);
	this->btnMult->TabIndex = 18;
	this->btnMult->Text = L"*";
	this->btnMult->UseVisualStyleBackColor = true;
	this->btnMult->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnDeduct
	// 
	this->btnDeduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnDeduct->ForeColor = System::Drawing::Color::Red;
	this->btnDeduct->Location = System::Drawing::Point(223, 180);
	this->btnDeduct->Name = L"btnDeduct";
	this->btnDeduct->Size = System::Drawing::Size(60, 40);
	this->btnDeduct->TabIndex = 19;
	this->btnDeduct->Text = L"-";
	this->btnDeduct->UseVisualStyleBackColor = true;
	this->btnDeduct->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnSum
	// 
	this->btnSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnSum->ForeColor = System::Drawing::Color::Red;
	this->btnSum->Location = System::Drawing::Point(223, 225);
	this->btnSum->Name = L"btnSum";
	this->btnSum->Size = System::Drawing::Size(60, 40);
	this->btnSum->TabIndex = 20;
	this->btnSum->Text = L"+";
	this->btnSum->UseVisualStyleBackColor = true;
	this->btnSum->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnMod
	// 
	this->btnMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnMod->Location = System::Drawing::Point(293, 135);
	this->btnMod->Name = L"btnMod";
	this->btnMod->Size = System::Drawing::Size(60, 40);
	this->btnMod->TabIndex = 21;
	this->btnMod->Text = L"%";
	this->btnMod->UseVisualStyleBackColor = true;
	this->btnMod->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnInverse
	// 
	this->btnInverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnInverse->Location = System::Drawing::Point(293, 180);
	this->btnInverse->Name = L"btnInverse";
	this->btnInverse->Size = System::Drawing::Size(60, 40);
	this->btnInverse->TabIndex = 22;
	this->btnInverse->Text = L"1/x";
	this->btnInverse->UseVisualStyleBackColor = true;
	this->btnInverse->Click += gcnew System::EventHandler(this, &HardCalcForm::btnMath_Click);
	// 
	// btnResult
	// 
	this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->btnResult->ForeColor = System::Drawing::Color::Red;
	this->btnResult->Location = System::Drawing::Point(293, 225);
	this->btnResult->Name = L"btnResult";
	this->btnResult->Size = System::Drawing::Size(60, 40);
	this->btnResult->TabIndex = 0;
	this->btnResult->Text = L"=";
	this->btnResult->UseVisualStyleBackColor = true;
	this->btnResult->Click += gcnew System::EventHandler(this, &HardCalcForm::btnResult_Click);
	// 
	// lblTemp
	// 
	this->lblTemp->AutoSize = true;
	this->lblTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
	this->lblTemp->Location = System::Drawing::Point(20, 19);
	this->lblTemp->Name = L"lblTemp";
	this->lblTemp->Size = System::Drawing::Size(0, 17);
	this->lblTemp->TabIndex = 24;
	// 
	// HardCalcForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(364, 276);
	this->Controls->Add(this->lblTemp);
	this->Controls->Add(this->btnResult);
	this->Controls->Add(this->btnInverse);
	this->Controls->Add(this->btnMod);
	this->Controls->Add(this->btnSum);
	this->Controls->Add(this->btnDeduct);
	this->Controls->Add(this->btnMult);
	this->Controls->Add(this->btnSqrt);
	this->Controls->Add(this->btnDiv);
	this->Controls->Add(this->btnPlusMinus);
	this->Controls->Add(this->btnSeparator);
	this->Controls->Add(this->btn0);
	this->Controls->Add(this->btn3);
	this->Controls->Add(this->btn2);
	this->Controls->Add(this->btn1);
	this->Controls->Add(this->btn6);
	this->Controls->Add(this->btn5);
	this->Controls->Add(this->btn4);
	this->Controls->Add(this->btn9);
	this->Controls->Add(this->btn8);
	this->Controls->Add(this->btn7);
	this->Controls->Add(this->btnC);
	this->Controls->Add(this->btnCE);
	this->Controls->Add(this->btnBackspace);
	this->Controls->Add(this->txtBox);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
	this->MaximizeBox = false;
	this->MinimizeBox = false;
	this->Name = L"HardCalcForm";
	this->Text = L"Hard Calc";
	this->ResumeLayout(false);
	this->PerformLayout();

}
#pragma endregion

	double firstnum, secondnum, result;
	String^ temp;

	private: System::Void txtBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (txtBox->Text == "") {
			txtBox->Text = "0";
		}
	}

	private: System::Void btnBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBox->Text->Length >0) {
			txtBox->Text = txtBox->Text->Remove(txtBox->Text->Length -1 ,1);
		}
	}

	private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
		txtBox->Text = "0";
		lblTemp->Text = "0";
	}

	private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
		txtBox->Text = "0";
	}

	private: System::Void btnSeparator_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!txtBox->Text->Contains(",")) {
			txtBox->Text = txtBox->Text + ",";
		}
	}

	private: System::Void btnPlusMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBox->Text->Contains("-")){
			txtBox->Text = txtBox->Text-> Remove(0,1);
		}
		else {
			txtBox->Text = "-" + txtBox->Text;
		}
	}

	private: System::Void btnResult_Click(System::Object^  sender, System::EventArgs^  e) {
		secondnum = Double::Parse(txtBox->Text);
		lblTemp->Text = L"";
		if (temp == "+") {
			result = firstnum + secondnum;
			txtBox->Text = System::Convert::ToString(result);
		}
		else if  (temp == "-") {
			result = firstnum - secondnum;
			txtBox->Text = System::Convert::ToString(result);
		}
		else if  (temp == "*") {
			result = firstnum * secondnum;
			txtBox->Text = System::Convert::ToString(result);
		}
		else if  (temp == "/") {
			if (secondnum == 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "На 0 не делят!", "Ошибка!",
				MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
				if (result == System::Windows::Forms::DialogResult::OK) {
					txtBox->Text = "0";
					lblTemp->Text = "0";
				}
			}
			else {
				result = firstnum / secondnum;
				txtBox->Text = System::Convert::ToString(result);
			}
		}
		else if  (temp == "%") {
			result = firstnum *0.01* secondnum;
			txtBox->Text = System::Convert::ToString(result);
		}
		else {
			txtBox->Text = System::Convert::ToString(secondnum);
			lblTemp->Text = "";
		}
		temp = "";
	}

	private: System::Void btnNum_Click(System::Object^  sender, System::EventArgs^  e) {
		Button ^ Numbers = safe_cast<Button^>(sender);
		if (txtBox->Text =="0") {
			txtBox->Text = Numbers->Text;
		}
		else txtBox->Text = txtBox->Text + Numbers->Text;
	}

	private: System::Void btnMath_Click(System::Object^  sender, System::EventArgs^  e) {
		Button ^ op = safe_cast<Button^>(sender);
		firstnum = Double::Parse(txtBox->Text);
		temp = op->Text;
		if (temp == "sqrt") {
			if (firstnum < 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Корень из отрицательного числа не найден.", "Ошибка!",
				MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
				if (result == System::Windows::Forms::DialogResult::OK) {
					txtBox->Text = "0";
				}
			}
			else {
				txtBox->Text = "";
				double sqrt_result = Math::Sqrt(firstnum);
				txtBox->Text = System::Convert::ToString(sqrt_result);
				lblTemp->Text = L"";
			}
		}
		else if (temp == "1/x") {
			if (firstnum == 0) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "На 0 не делят!", "Ошибка!",
				MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
				if (result == System::Windows::Forms::DialogResult::OK) {
					txtBox->Text = "0";
				}
			}
			else {
				result = 1 / firstnum;
				txtBox->Text = System::Convert::ToString(result);
				lblTemp->Text = L"";
			}
		}
		else {
			txtBox->Text = "";
			lblTemp->Text = System::Convert::ToString(firstnum) + " " + temp;
		}
	}
};
}
