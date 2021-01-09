#include "Okno2.h"
#include <fstream>
#include <stdio.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text;
using namespace System::IO;
using namespace std;
[STAThread]

void MarshalString(String^ s, string& os) {

	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
void Notatnik2::Okno2::Zapis_Danych(Note^ x)
{
	string nazwa;
	string utworzenie;
	string edycja;
	MarshalString(x->czas_utworzenia.ToString(), utworzenie);
	MarshalString(x->czas_edycji.ToString(), edycja);
	MarshalString(x->nazwa, nazwa);
	ofstream dane("Notes_data.txt", ofstream::app);
	dane <<
		nazwa + "\n" +
		utworzenie + "\n" +
		edycja + "\n";
	dane.close();
}
void Notatnik2::Okno2::Zapis_Listy(Note^ x)
{
	string nazwa_notki;
	MarshalString(x->nazwa, nazwa_notki);
	ofstream notka("Lista.txt", ofstream::app);
	notka << nazwa_notki + "\n";
	notka.close();
}
