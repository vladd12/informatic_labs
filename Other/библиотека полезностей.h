/*
//Нормальное форматирование числа в строку
private: System::String^ DigitOutput(long double num) { //DoubleToStringNormalize
	 std::string s1 = std::to_string(num);
	 String^ str1 = gcnew String(s1.c_str());
	 str1->Replace('.', ',');
	 return str1;
}
*/

/*
//Форматиирование числа в строку 
private: System::String^ DigitOutput(double num, int precision) {
        String^ str1 = Convert::ToString(num);
        int length = str1->Length;
        if (str1->IndexOf("E") != -1) {
            String^ s1 = str1[0] + " ";
            String^ s2 = str1[length-1] + ",";
            double a = Convert::ToDouble(s2);
            String^ str_final = "0,";
            for (int i = 0; i < (a - 1); i++) {
                str_final = str_final + "0";
            }
            str_final = str_final + s1;
            return str_final;
        }
        else {
            if ((str1->Length) - (str1->IndexOf(",") + 1) < (precision + 1)) {
                int n = (precision + 1) - ((str1->Length) - (str1->IndexOf(","))) + 1;
                while (n > 0) {
                    str1 = str1 + "0";
                    n = n - 1;
                }
                return str1;
            }
            else {
                return str1;
            }
        }
}
*/

/*
//Функция вычисления факториала
double funcFact(int number) {
	if (number == 0) {
		return 1;
	}
	else {
		int n = number;
		double result = 1;
		while (n > 0) {
			result = result * n;
			n = n - 1;
		}
		return result;
	}
}

//Функция возведения числа в степень
double funcPow(double a, double b) {
	double counter = 1;
	if (b == 0) {
		return 1;
	}
	else {
		while (b > 0) {
			counter = counter * a;
			b = b - 1;
		}
		return counter;
	}
}
*/

/*
//правильная защита ввода
	//Защита от дурки
	System::Void funcRestrictionOfInput(System::Windows::Forms::TextBox^ object, System::Windows::Forms::KeyPressEventArgs^  input) {
		int x1;
		if ((!Char::IsDigit(input->KeyChar)) && (input->KeyChar != '-' || object->Text->IndexOf('-') != -1) && (input->KeyChar != ',' || object->Text->IndexOf(',') != -1) && (input->KeyChar != (char)Keys::Back) && (input->KeyChar != '.' || object->Text->IndexOf(',') != -1)) input->Handled = true;
		if (input->KeyChar == '.') input->KeyChar = ',';
		if ((input->KeyChar == (char)Keys::D0 || input->KeyChar == (char)Keys::NumPad0) && (object->Text->Length >= 1) && (object->Text[0] == '0' && object->SelectionStart < 2)) input->Handled = true;
		if (object == txtBoxInputNumberMas && (input->KeyChar == ',' || input->KeyChar == '-' || input->KeyChar == '.')) input->Handled = true;
		if (object->Text->IndexOf('-') == 0) {
			if (object->SelectionStart == 0) {
				input->Handled = true;
			}
			if ((object->SelectionStart == 2) && (input->KeyChar == '0')) {
				input->Handled = true;
			}
			if ((object->SelectionStart == 1) && (input->KeyChar == ',')) {
				input->Handled = true;
			}
		}
		if (input->KeyChar == ',') {
			x1 = 0;
			if (object->Text != "" && object->Text[0] == '-') x1 = 1;
			if (object->Text->IndexOf(',') == -1 && object->SelectionStart == x1) {
				object->Text = object->Text->Insert(x1, "0");
				object->SelectionStart = x1 + 1;
			}
		}
		if (input->KeyChar == '-' && object->Text->IndexOf('-') == -1) object->SelectionStart = 0;
	}
*/

/*
//Вывод сообщения
double a = 485165195.40979028;
a = a + a;
MessageBox::Show(this, Convert::ToString(a), "Ошибка!",
MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
*/

/*
System::Void funcConvertation(System::String^ str) {
	int i, counter = 0;
	System::String^ tempStr;
	for (i = 0; i < (str->Length); i++) {
		if ((!Char::IsDigit(str[i]) && str[i] != ' ' && str[i] != '-') || (str[i] == ' ' && str[i + 1] == ' ') ||
			(str[i] == ' ' && i == 0) || (str[i] == '-' && Char::IsDigit(str[i-1]))) {
			continue;
		}
		else if ((Char::IsDigit(str[i]) || (str[i] == '-' && Char::IsDigit(str[i + 1]))) && str[i] != ' ') {
			tempStr = tempStr + str[i];
			if (i == (str->Length-1)) {
				a[counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
		}
		else {
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
*/

/*
//Функция ввода массива через пробел (текстбокс)
	System::Void funcConvertation(System::String^ str) {
		int i, counter = 0;
		System::String^ str1 = StringCleanUp(str);
		System::String^ tempStr = "";
		for (i = 0; i < (str->Length); i++) {
			if ((!Char::IsDigit(str[i]) && str[i] != ' ' && str[i] != '-') || (str[i] == ' ' && i == 0)) continue;
			if (i > 0 && i < (str->Length - 1)) {
				if (str[i] == ' ' && str[i + 1] == ' ') continue;
				if (str[i] == ' ' && str[i + 1] == ' ' && str[i - 1] == ' ') continue;
				if (str[i] == '-' && str[i + 1] == '-' || (str[i] == '-' && str[i + 1] == ' ')) continue;
			}
			if ((Char::IsDigit(str[i]) || str[i] == '-') && str[i] != ' ') {
				tempStr = tempStr + str[i];
				if (i == (str->Length - 1) && (Char::IsDigit(str[i]) || str[i] != ' ')) {
					if (tempStr != "") {
						a[counter] = Convert::ToInt32(tempStr);
						tempStr = "";
						counter = counter + 1;
					}
				}
				if (i > 0 && str[i] == ' ' && str[i - 1] == ' ') continue;
			}
			else {
				if (tempStr != "") {
					a[counter] = Convert::ToInt32(tempStr);
					tempStr = "";
					counter = counter + 1;
				}
			}
		}
		NumberOfElements = counter;
		txtBoxSourceMas->Text = "";
		for (i = 0; i < NumberOfElements; i++) {
			txtBoxSourceMas->Text = txtBoxSourceMas->Text + " " + Convert::ToString(a[i]);
		}
	}
*/