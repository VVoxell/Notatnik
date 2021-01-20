#pragma once
#include <fstream>
#include <stdio.h>
#include <string>
#include "Note.h"

namespace Notatnik2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	string temp;
	/// <summary>
	/// Podsumowanie informacji o Okno3
	/// </summary>
	public ref class Okno3 : public System::Windows::Forms::Form
	{
	public:
		Okno3(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		void zapis_rich(string w)
		{
			String^ linijka;
			linijka = gcnew String(w.c_str());
			richTextBox1->Text += linijka + "\n";
		}
		void MarshalString(String^ s, string& os)
		{

			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
		
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(-1, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1117, 728);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// Okno3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 728);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Okno3";
			this->Text = L"Okno3";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Okno3::Okno3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Okno3::Okno3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Okno3_Load(System::Object^ sender, System::EventArgs^ e) {
		MarshalString(richTextBox1->Text, temp);
	}
	private: System::Void Okno3_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		System::Windows::Forms::DialogResult odp = MessageBox::Show("Czy chcesz zapisaæ zmiany?", "Zamykanie edytora", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
		
		string nazwa;
		MarshalString(this->Text, nazwa);
		ofstream plik(nazwa + ".txt");
		string notka;
		MarshalString(richTextBox1->Text, notka);
		
		switch (odp) 
		{
		case System::Windows::Forms::DialogResult::Yes:
			plik << notka;
			plik.close();
			break;
		case System::Windows::Forms::DialogResult::No:
			plik << temp;
			plik.close();
			break;
		case System::Windows::Forms::DialogResult::Cancel:
			e->Cancel = true;
			break;
		}
		
	}
	
};
}
