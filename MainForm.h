#pragma once



namespace Kalkulator
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	double Liczba2 = 0, Liczba1 = 0, Liczba = 0, Wynik = 0; 
	int Licznik = 0; 
	int Operator1 = 0, Operator = 0; 
	bool textBox2_Wynik = 0; 
	bool dzielenie_przez_zero = 0; 
	/// <summary>
	/// Podsumowanie informacji o MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  Przycisk1;
	private: System::Windows::Forms::Button^  Przycisk2;
	private: System::Windows::Forms::Button^  Przycisk3;
	private: System::Windows::Forms::Button^  Przycisk4;
	private: System::Windows::Forms::Button^  Przycisk5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^ button18;


	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Przycisk1 = (gcnew System::Windows::Forms::Button());
			this->Przycisk2 = (gcnew System::Windows::Forms::Button());
			this->Przycisk3 = (gcnew System::Windows::Forms::Button());
			this->Przycisk4 = (gcnew System::Windows::Forms::Button());
			this->Przycisk5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(30, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(231, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(30, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(231, 26);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Przycisk1
			// 
			this->Przycisk1->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Przycisk1->Location = System::Drawing::Point(4, 235);
			this->Przycisk1->Name = L"Przycisk1";
			this->Przycisk1->Size = System::Drawing::Size(63, 38);
			this->Przycisk1->TabIndex = 2;
			this->Przycisk1->Text = L"1";
			this->Przycisk1->UseVisualStyleBackColor = true;
			this->Przycisk1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// Przycisk2
			// 
			this->Przycisk2->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Przycisk2->Location = System::Drawing::Point(73, 235);
			this->Przycisk2->Name = L"Przycisk2";
			this->Przycisk2->Size = System::Drawing::Size(63, 38);
			this->Przycisk2->TabIndex = 3;
			this->Przycisk2->Text = L"2";
			this->Przycisk2->UseVisualStyleBackColor = true;
			this->Przycisk2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// Przycisk3
			// 
			this->Przycisk3->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Przycisk3->Location = System::Drawing::Point(142, 235);
			this->Przycisk3->Name = L"Przycisk3";
			this->Przycisk3->Size = System::Drawing::Size(63, 38);
			this->Przycisk3->TabIndex = 4;
			this->Przycisk3->Text = L"3";
			this->Przycisk3->UseVisualStyleBackColor = true;
			this->Przycisk3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// Przycisk4
			// 
			this->Przycisk4->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Przycisk4->Location = System::Drawing::Point(142, 191);
			this->Przycisk4->Name = L"Przycisk4";
			this->Przycisk4->Size = System::Drawing::Size(63, 38);
			this->Przycisk4->TabIndex = 7;
			this->Przycisk4->Text = L"6";
			this->Przycisk4->UseVisualStyleBackColor = true;
			this->Przycisk4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// Przycisk5
			// 
			this->Przycisk5->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Przycisk5->Location = System::Drawing::Point(73, 191);
			this->Przycisk5->Name = L"Przycisk5";
			this->Przycisk5->Size = System::Drawing::Size(63, 38);
			this->Przycisk5->TabIndex = 6;
			this->Przycisk5->Text = L"5";
			this->Przycisk5->UseVisualStyleBackColor = true;
			this->Przycisk5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(4, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 38);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(142, 147);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 38);
			this->button7->TabIndex = 10;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(73, 147);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(63, 38);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(4, 147);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(63, 38);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(4, 279);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(119, 38);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(4, 103);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 38);
			this->button11->TabIndex = 12;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(73, 103);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(63, 38);
			this->button12->TabIndex = 13;
			this->button12->Text = L"CE";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(129, 279);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(76, 38);
			this->button13->TabIndex = 14;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(211, 103);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(63, 38);
			this->button14->TabIndex = 15;
			this->button14->Text = L"÷";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(142, 103);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(63, 38);
			this->button15->TabIndex = 16;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(211, 147);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(63, 38);
			this->button16->TabIndex = 17;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(211, 191);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(63, 38);
			this->button17->TabIndex = 18;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button18->Location = System::Drawing::Point(211, 235);
			this->button18->Name = L"button18";
			this->button18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button18->Size = System::Drawing::Size(63, 82);
			this->button18->TabIndex = 19;
			this->button18->Text = L"=";
			this->button18->UseMnemonic = false;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(309, 21);
			this->textBox3->MaxLength = 131072;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(174, 296);
			this->textBox3->TabIndex = 20;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(489, 123);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(63, 37);
			this->button19->TabIndex = 22;
			this->button19->Text = L"Usuñ historiê";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(489, 222);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(63, 37);
			this->button20->TabIndex = 23;
			this->button20->Text = L"Za³aduj historiê";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(489, 21);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(63, 37);
			this->button21->TabIndex = 24;
			this->button21->Text = L"Zapisz historiê";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MainForm::button21_Click);
			// 
			// MainForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Window;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->Przycisk4);
			this->Controls->Add(this->Przycisk5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->Przycisk3);
			this->Controls->Add(this->Przycisk2);
			this->Controls->Add(this->Przycisk1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kalkulator_Wojtek";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void Wypisz(String^ Przycisk) {
			if (textBox2_Wynik) {
				textBox2->Text = "0";
				textBox2_Wynik = 0;
			}
			if (textBox2->Text == "0") {
				textBox2->Text = Przycisk;
			}
			else {
				textBox2->AppendText(Przycisk);
			}
			button18->Select();
		}

		private: System::Void Oblicz() {

			if (Licznik > 0) {
				Liczba2 = Liczba1;
				Liczba1 = Liczba;

				switch (Operator1)
				{
				case 1:
					if (Liczba1 != 0) {
						Wynik = Liczba2 / Liczba1;
						textBox2->Text = Wynik.ToString();
						Liczba1 = Wynik;
						Operator1 = Operator;
					}
					else {
						textBox2->Text = "Nie mo¿na dzieliæ przez 0!";
						dzielenie_przez_zero = 1;
					}
					break;

				case 2:
					Wynik = Liczba2 * Liczba1;
					textBox2->Text = Wynik.ToString();
					Liczba1 = Wynik;
					Operator1 = Operator;
					break;

				case 3:
					Wynik = Liczba2 - Liczba1;
					textBox2->Text = Wynik.ToString();
					Liczba1 = Wynik;
					Operator1 = Operator;
					break;

				case 4:
					Wynik = Liczba2 + Liczba1;
					textBox2->Text = Wynik.ToString();
					Liczba1 = Wynik;
					Operator1 = Operator;
					break;

				case 255:
					break;

				default:
					textBox2->Text = "Nieprawid³owy typ operacji!";
					break;

				}
			}
			else {
				Liczba1 = Liczba;
				Operator1 = Operator;
			}

			textBox2_Wynik = 1;

			if (!dzielenie_przez_zero) {
				Licznik++;
			}
			else {
				textBox1->Clear();
				Liczba2 = 0, Liczba1 = 0, Liczba = 0, Wynik = 0;
				Licznik = 0;
				Operator1 = 0, Operator = 0;
				dzielenie_przez_zero = 0;
			}

		}

		private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			this->KeyPreview = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Kalkulator::MainForm::OnKeyDown);

			textBox2->Text = "0";
			button18->Select();
		}

		private: System::Void OnKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyCode == System::Windows::Forms::Keys::D1 || e->KeyCode == System::Windows::Forms::Keys::NumPad1) {
				MainForm::Przycisk1->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D2 || e->KeyCode == System::Windows::Forms::Keys::NumPad2) {
				MainForm::Przycisk2->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D3 || e->KeyCode == System::Windows::Forms::Keys::NumPad3) {
				MainForm::Przycisk3->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D4 || e->KeyCode == System::Windows::Forms::Keys::NumPad4) {
				MainForm::button6->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D5 || e->KeyCode == System::Windows::Forms::Keys::NumPad5) {
				MainForm::Przycisk5->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D6 || e->KeyCode == System::Windows::Forms::Keys::NumPad6) {
				MainForm::Przycisk4->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D7 || e->KeyCode == System::Windows::Forms::Keys::NumPad7) {
				MainForm::button9->PerformClick();
			}
			else if ((e->Shift && e->KeyCode == System::Windows::Forms::Keys::D8) || e->KeyCode == System::Windows::Forms::Keys::Multiply) {
				MainForm::button15->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D8 || e->KeyCode == System::Windows::Forms::Keys::NumPad8) {
				MainForm::button8->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D9 || e->KeyCode == System::Windows::Forms::Keys::NumPad9) {
				MainForm::button7->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D0 || e->KeyCode == System::Windows::Forms::Keys::NumPad0) {
				MainForm::button10->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::Oemcomma || e->KeyCode == System::Windows::Forms::Keys::Decimal) {
				MainForm::button13->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::Escape) {
				MainForm::button11->PerformClick();
			}
			else if (e->Shift && e->KeyCode == System::Windows::Forms::Keys::OemQuestion) {
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::OemQuestion || e->KeyCode == System::Windows::Forms::Keys::Divide) {
				MainForm::button14->PerformClick();
			}
			else if (e->Shift && e->KeyCode == System::Windows::Forms::Keys::OemMinus) {
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::OemMinus || e->KeyCode == System::Windows::Forms::Keys::Subtract) {
				MainForm::button16->PerformClick();
			}
			else if ((e->Shift && e->KeyCode == System::Windows::Forms::Keys::Oemplus) || e->KeyCode == System::Windows::Forms::Keys::Add) {
				MainForm::button17->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::Oemplus || e->KeyCode == System::Windows::Forms::Keys::Enter) {
				MainForm::button18->PerformClick();
			}

		}

		// Przycisk "1"
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("1");
		}
		// Przycisk "2"
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("2");
		}
		// Przycisk "3"
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("3");
		}
		// Przycisk "4"
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("4");
		}
		// Przycisk "5"
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("5");
		}
		// Przycisk "6"
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("6");
		}
		// Przycisk "7"
		private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("7");
		}
		// Przycisk "8"
		private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("8");
		}
		// Przycisk "9"
		private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("9");
		}
		// Przycisk "0"
		private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox2_Wynik) {
				textBox2->Text = "0";
				textBox2_Wynik = 0;
			}
			if (textBox2->Text != "0") {
				textBox2->AppendText("0");
			}
			button18->Select();
		}
		// Przycisk ","
		private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox2_Wynik) {
				textBox2->Text = "0";
				textBox2_Wynik = 0;
			}
			if (!textBox2->Text->Contains(",")) {
				textBox2->AppendText(",");
			}
			button18->Select();
		}
		 // Przycisk "C"
		private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Clear();
			textBox2->Text = "0";
			Liczba2 = 0, Liczba1 = 0;
			textBox2_Wynik = 0;
			button18->Select();
		}
		// Przycisk "CE"
		private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox2->Text = "0";
			button18->Select();
		}
		// Przycisk "÷"
		private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " ÷ ");
			Liczba = Convert::ToDouble(textBox2->Text);
			Operator = 1;
			Oblicz();
			button18->Select();
		}
		// Przycisk "*"
		private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " * ");
			Liczba = Convert::ToDouble(textBox2->Text);
			Operator = 2;
			Oblicz();
			button18->Select();
		}
		// Przycisk "-"
		private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " - ");
			Liczba = Convert::ToDouble(textBox2->Text);
			Operator = 3;
			Oblicz();
			button18->Select();
		}
		// Przycisk "+"
		private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " + ");
			Liczba = Convert::ToDouble(textBox2->Text);
			Operator = 4;
			Oblicz();
			button18->Select();
		}
		// Przycisk "="
		private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			Liczba = Convert::ToDouble(textBox2->Text);
			Operator = 255;
			Oblicz();
			textBox3->AppendText(textBox1->Text + Liczba.ToString() + " = " + textBox2->Text + "\r\n");
			textBox1->Clear();
			Liczba2 = 0, Liczba1 = 0, Liczba = 0, Wynik = 0;
			Licznik = 0;
			Operator1 = 0, Operator = 0;
			textBox2_Wynik = 1;
		}
		// Przycisk "Usuñ historiê"
		private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox3->Clear();
			button18->Select();
		}
		//  "Wczytaj historiê"
		private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				StreamReader^ reader = gcnew StreamReader("Historia Kalkulatora1.txt");
				textBox3->Clear();
				do
				{
					textBox3->AppendText(reader->ReadLine() + "\r\n");
				} while (reader->Peek() != -1);
				reader->Close();
			}
			catch (FileNotFoundException ^ex)
			{
				MessageBox::Show("Nie znaleziono pliku historii, nie mo¿na wczytaæ operacji!","B³¹d");
			}

			catch (System::Exception ^e)
			{
				MessageBox::Show(e->ToString());
			}
			button18->Select();
		}
		 // "Zapisz historiê"
		private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			StreamWriter^ pwriter = gcnew StreamWriter("Historia Kalkulatora1.txt");
			pwriter->WriteLine(textBox3->Text);
			pwriter->Close();
			button18->Select();
		}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
