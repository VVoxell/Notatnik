#pragma once
#include "Okno2.h"
#include "Note.h"


namespace Notatnik2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
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
		
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
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
	private: System::Windows::Forms::ToolStripMenuItem^ usuñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
		Okno2^ druga_forma;
		void Odczyt(String^ y,StreamReader^ x);
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edytujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(283, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Za³aduj listê notatek";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Okno1::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(283, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 39);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Dodaj Notatkê";
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
					this->edytujToolStripMenuItem, this->usuñToolStripMenuItem
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
			// 
			// edytujToolStripMenuItem
			// 
			this->edytujToolStripMenuItem->Name = L"edytujToolStripMenuItem";
			this->edytujToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->edytujToolStripMenuItem->Text = L"Otwórz";
			// 
			// usuñToolStripMenuItem
			// 
			this->usuñToolStripMenuItem->Name = L"usuñToolStripMenuItem";
			this->usuñToolStripMenuItem->Size = System::Drawing::Size(140, 26);
			this->usuñToolStripMenuItem->Text = L"Usuñ";
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
			this->button4->Location = System::Drawing::Point(285, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 39);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Wyczyœæ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Okno1::button4_Click);
			// 
			// Okno1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 451);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Okno1";
			this->Text = L"Okno1";
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
			String^ tekst;
			StreamReader^ plik = gcnew StreamReader("Lista.txt", System::Text::Encoding::ASCII);
			do
			{
				Odczyt(tekst, plik);
			} while (tekst != " ");
			plik->Close();
			
		}
		catch (...)
		{
			StreamWriter^ plik = gcnew StreamWriter("Lista.txt");
			plik->Close();
		}
		
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	druga_forma = gcnew Okno2;
	druga_forma->ShowDialog();
	String^ x;
	x = druga_forma->Zwrot_textbox1();
	listBox1->Items->Add(x);
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
}
};
}
