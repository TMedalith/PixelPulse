#include "menu.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MC08::menu());
	return 0;
}
