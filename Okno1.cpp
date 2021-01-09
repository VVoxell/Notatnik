#include "Okno1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text;
using namespace System::IO;
[STAThread]
void Main(array<String^>^ args)
{
	
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Notatnik2::Okno1 form;
	Application::Run(% form);
}

void Notatnik2::Okno1::Odczyt(String^ y,StreamReader^ x)
{
	y = x->ReadLine();
	listBox1->Items->Add(y);
}
