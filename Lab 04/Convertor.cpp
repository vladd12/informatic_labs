#include "Convertor.h"

#include <Windows.h>
using namespace My4�urrency�onverter;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Convertor);
	return 0;
}