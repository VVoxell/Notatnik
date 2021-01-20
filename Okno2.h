#pragma once
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
	/// Podsumowanie informacji o Okno2
	/// </summary>
	public ref class Okno2 : System::Windows::Forms::Form
	{
	public:
		Note^ nowa;
		Okno2(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

		}
		String^ Zwrot_textbox1()
		{
			return textBox1->Text;
		}
		Note^ ZwrotNowej()
		{
			return nowa;
		}
		
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		
		
		~Okno2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		
		
		void Zapis_Danych(Note^ x);
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tworzysz nowa notatke:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 134);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nazwa:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 52);
			this->button1->TabIndex = 3;
			this->button1->Text = L"UTWORZ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Okno2::button1_Click);
			// 
			// Okno2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(273, 291);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Okno2";
			this->Text = L"Okno2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		nowa = gcnew Note(textBox1->Text);
		nowa->czas_utworzenia = DateTime::Now;
		nowa->czas_edycji = DateTime::Now;
		Zapis_Danych(nowa);
		Okno2::Close();
	}
	
};
}
