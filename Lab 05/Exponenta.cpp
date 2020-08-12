#include "Exponenta.h"
#include <Windows.h>
using namespace My5Exponenta;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Exponenta);
	return 0;
}