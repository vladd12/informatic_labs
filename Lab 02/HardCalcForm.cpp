#include "HardCalcForm.h"
#include <Windows.h>
using namespace HardCalc;  // �������� �������

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew HardCalcForm);
	return 0;
}