#include "MyForm.h"
#include <fstream>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	lift_3::MyForm form;
	Application::Run(%form);
}
