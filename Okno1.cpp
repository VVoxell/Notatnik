#include "Okno1.h"
#include <fstream>
#include <stdio.h>
#include <string>
#include "Okno3.h"
#include "Okno2.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace std;
[STAThread]

void Main()
{
	
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Notatnik2::Okno1 form;
	Application::Run(% form);
}

void Notatnik2::Okno1::MarshalString(String^ s, string& os)
{

	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void Notatnik2::Okno1::Odczyt2()
{
	List<Note^> ReadNotes;
	string line;
	ifstream plik("Notes_data.txt");

	if (plik.is_open())
	{
		
		String^ name;
		DateTime creation;
		DateTime edition;

		int lineNum = 0;
		while (getline(plik, line))
		{
			switch (lineNum)
			{
			case 0:
				name = gcnew String(line.c_str());
				break;
			case 1:
				creation = DateTime::Parse(gcnew String(line.c_str()));
				break;
			case 2:
				edition = DateTime::Parse(gcnew String(line.c_str()));
				break;
			}
			lineNum++;

			if (lineNum > 2)
			{
				lineNum = 0;
				Note^ newNote = gcnew Note(name);
				newNote->czas_utworzenia = creation;
				newNote->czas_edycji = edition;
				ReadNotes.Add(newNote);
			}
				
		}
		plik.close();
		for each (Note ^ e in ReadNotes)
		{
			listBox1->Items->Add(e->nazwa);
			NoteList.Add(e);
		}
	}
}

void Notatnik2::Okno1::Delete(Note^ e)
{
	listBox1->Items->Clear();
	NoteList.Remove(e);
	
	ofstream plik("Notes_data.txt");

	for each (Note ^ e in NoteList)
	{
		string creation, edition, name;
		MarshalString(e->nazwa, name);
		MarshalString(e->czas_utworzenia.ToString(), creation);
		MarshalString(e->czas_edycji.ToString(), edition);
		plik <<
			name + "\n" +
			creation + "\n" +
			edition + "\n";

	}
	plik.close();
}