#pragma once
#include "Okno2.h"
#include "Note.h"
#include "Okno3.h"




namespace Notatnik2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Podsumowanie informacji o Okno1
	/// </summary>
	public ref class Okno1 : public System::Windows::Forms::Form
	{
	public:
		Okno1(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		void MarshalString(String^ s, string& os);
	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Okno1()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edytujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuńToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;

	private:
		
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
		Okno2^ druga_forma;
		Okno3^ edytor;
		void Odczyt2();
		void Delete(Note^ e);
		List <Note^> NoteList;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edytujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuńToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(283, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Załaduj listę notatek";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Okno1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(283, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 39);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Dodaj Notatkę";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Okno1::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(438, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dodajToolStripMenuItem,
					this->edytujToolStripMenuItem, this->usuńToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// dodajToolStripMenuItem
			// 
			this->dodajToolStripMenuItem->Name = L"dodajToolStripMenuItem";
			this->dodajToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->dodajToolStripMenuItem->Text = L"Dodaj";
			this->dodajToolStripMenuItem->Click += gcnew System::EventHandler(this, &Okno1::dodajToolStripMenuItem_Click);
			// 
			// edytujToolStripMenuItem
			// 
			this->edytujToolStripMenuItem->Name = L"edytujToolStripMenuItem";
			this->edytujToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->edytujToolStripMenuItem->Text = L"Otwórz";
			this->edytujToolStripMenuItem->Click += gcnew System::EventHandler(this, &Okno1::edytujToolStripMenuItem_Click);
			// 
			// usuńToolStripMenuItem
			// 
			this->usuńToolStripMenuItem->Name = L"usuńToolStripMenuItem";
			this->usuńToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->usuńToolStripMenuItem->Text = L"Usuń";
			this->usuńToolStripMenuItem->Click += gcnew System::EventHandler(this, &Okno1::usuńToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Lista notatek:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(10, 79);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(255, 340);
			this->listBox1->TabIndex = 8;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Okno1::listBox1_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(283, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 39);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Wyczyść";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Okno1::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(283, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 39);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Edytuj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Okno1::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(283, 335);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 39);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Usuń";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Okno1::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 452);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 17);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Czas utworzenia:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 496);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Czas edycji:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(167, 452);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(167, 496);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 15;
			// 
			// Okno1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 542);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Okno1";
			this->Text = L"Okno1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Okno1::Okno1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Okno1::Okno1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Okno1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try
		{
			listBox1->Items->Clear();
			Odczyt2();
		}
		catch (FileNotFoundException^)
		{
			MessageBox::Show("Nie utworzono listy! \n Tworzenie listy", "Brak pliku", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);
			StreamWriter^ plik = gcnew StreamWriter("Notes_data.txt");
			plik->Close();
		}
		catch (...)
		{

		}
		
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	druga_forma = gcnew Okno2;
	druga_forma->ShowDialog();
	String^ x;
	x = druga_forma->Zwrot_textbox1();
	listBox1->Items->Add(x);
	NoteList.Add(druga_forma->ZwrotNowej());
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Visible = true;
	this->button5->Visible = true;
	this->label4->Text = NoteList[listBox1->SelectedIndex]->czas_utworzenia.ToString();
	this->label5->Text = NoteList[listBox1->SelectedIndex]->czas_edycji.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	this->button2->Visible = false;
	this->button5->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Note^ Wybrana = NoteList[listBox1->SelectedIndex];
		string line;
		string tekst;
		string nazwa_pliku;
		MarshalString(Wybrana->nazwa, nazwa_pliku);
		ifstream plik(nazwa_pliku + ".txt");
		edytor = gcnew Okno3;
		edytor->Text = Wybrana->nazwa;
		while (getline(plik, line))
		{

			tekst = tekst + line + "\n";

		}
		edytor->zapis_rich(tekst);
		plik.close();
		edytor->ShowDialog();
		Wybrana->czas_edycji = DateTime::Now;
	}
	catch(ArgumentOutOfRangeException^)
	{
		MessageBox::Show("Proszę wybrać notatkę do edycji", "Nie wybrano notatki", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Note^ Wybrana = NoteList[listBox1->SelectedIndex];
		Delete(Wybrana);
	}
	catch (ArgumentOutOfRangeException^)
	{
		MessageBox::Show("Proszę wybrać notatkę do usunięcia", "Nie wybrano notatki", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);
	}
}
private: System::Void dodajToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button3_Click(sender, e);
}
	private: System::Void edytujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		button2_Click(sender, e);
	}
private: System::Void usuńToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		button5_Click(sender, e);
	
}
private: System::Void Okno1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	ofstream plik("Notes_data.txt", ofstream::trunc);
	for each (Note ^ e in NoteList)
	{
		string name, creation, edition;
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
};
}
