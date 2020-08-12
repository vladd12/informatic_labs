#include "HardCalcForm.h"
#include <Windows.h>
using namespace HardCalc;  // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew HardCalcForm);
	return 0;
}