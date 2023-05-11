#pragma once
#include <ctype.h>
#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int gcd(int a, int b) {
			if (a <= 0 || b <= 0) return 0;
			int c = b;
			int d = a % b;
			if (d != 0) return gcd(c, d);
			return c;
		}
		int inverseModulo(int a, int b) {
			if (a < 0 || b <= 0 || isCoprime(a,b) == false) return 0;
			else if (a == b || b < a) return a % b;
			int c = 0;
			while (a * c % b != 1) c++;
			return c;
		}
		int heronsFormula(int a, int b, int c) {
			int s = (a + b + c) / 2;
			return sqrt(s * (s - a) * (s - b) * (s - c));
		}
		int lcm(int a, int b) {
			return 0;
		}
		bool isCoprime(int a, int b) {
			if (gcd(a, b) == 1) return true;
			return false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->Location = System::Drawing::Point(16, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 23);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox2->Location = System::Drawing::Point(153, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 23);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(12, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Num1:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(149, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Num2:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(38, 179);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 28);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(122, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(34, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Result:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(34, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L" ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->groupBox1->Location = System::Drawing::Point(32, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(420, 62);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select an operation: ";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Greatest Common Divisor", L"Heron\'s Formula",
					L"Inverse Modulo", L"Largest Common Multiple"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(237, 24);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"- -";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(288, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Num3:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox3->Location = System::Drawing::Point(292, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 23);
			this->textBox3->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(259, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L" ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->groupBox2->Location = System::Drawing::Point(32, 95);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(420, 78);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Input:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Math Test";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int result;
		string isNotDigit = "100";
		string emptyString = "101";
		string emptyOpr = "102";
		try {
			if (comboBox1->Text == "- -") {
				throw(emptyOpr);
			}
			else if (comboBox1->SelectedItem == "Greatest Common Divisor") {
				label4->Text = ",";
				label6->Text = " ";

				if (textBox1->Text->Length < 1 || textBox2->Text->Length < 1) {
					throw(emptyString);
				}
				for (int i = 0;i < textBox1->Text->Length;i++) {
					if (isdigit(textBox1->Text[i])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				for (int j = 0;j < textBox2->Text->Length;j++) {
					if (isdigit(textBox2->Text[j])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				result = gcd(System::Convert::ToInt64(textBox1->Text), System::Convert::ToInt64(textBox2->Text));
			}
			else if (comboBox1->SelectedItem == "Heron's Formula") {
				label4->Text = ",";
				label6->Text = " ";

				if (textBox1->Text->Length < 1 || textBox2->Text->Length < 1 || textBox3->Text->Length < 1) {
					throw(emptyString);
				}
				for (int i = 0;i < textBox1->Text->Length;i++) {
					if (isdigit(textBox1->Text[i])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				for (int j = 0;j < textBox2->Text->Length;j++) {
					if (isdigit(textBox2->Text[j])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				for (int k = 0;k < textBox3->Text->Length;k++) {
					if (isdigit(textBox3->Text[k])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				result = heronsFormula(System::Convert::ToInt64(textBox1->Text), System::Convert::ToInt64(textBox2->Text), System::Convert::ToInt64(textBox3->Text));
			}
			else if (comboBox1->SelectedItem == "Inverse Modulo") {
				label4->Text = "%";
				label6->Text = " ";

				if (textBox1->Text->Length < 1 || textBox2->Text->Length < 1) {
					throw(emptyString);
				}
				for (int i = 0;i < textBox1->Text->Length;i++) {
					if (isdigit(textBox1->Text[i])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				for (int j = 0;j < textBox2->Text->Length;j++) {
					if (isdigit(textBox2->Text[j])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				result = inverseModulo(System::Convert::ToInt64(textBox1->Text), System::Convert::ToInt64(textBox2->Text));
			}
			else if (comboBox1->SelectedItem == "Largest Common Multiple") {
				label4->Text = ",";
				label6->Text = " ";

				if (textBox1->Text->Length < 1 || textBox2->Text->Length < 1) {
					throw(emptyString);
				}
				for (int i = 0;i < textBox1->Text->Length;i++) {
					if (isdigit(textBox1->Text[i])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				for (int j = 0;j < textBox2->Text->Length;j++) {
					if (isdigit(textBox2->Text[j])) {
						continue;
					}
					else {
						throw(isNotDigit);
					}
				}
				result = 0;
			}
			label6->Text = System::Convert::ToString(result);
		}
		catch (string errorNum) {
			if (errorNum == "100") {
				MessageBox::Show("Do you know what is digit?");
			}
			else if (errorNum == "101") {
				MessageBox::Show("Fill in the blanks!");
			}
			else if (errorNum == "102") {
				MessageBox::Show("Please select an operation!");
			}
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == "Greatest Common Divisor") {
			textBox3->Enabled = false;
			label4->Text = ",";
			label1->Text = " ";
			label6->Text = " ";
		}
		else if (comboBox1->SelectedItem == "Largest Common Multiple") {
			textBox3->Enabled = false;
			label4->Text = ",";
			label1->Text = " ";
			label6->Text = "We are working on this function";
		}
		else if (comboBox1->SelectedItem == "Heron's Formula") {
			textBox3->Enabled = true;
			label4->Text = ",";
			label1->Text = ",";
			label6->Text = " ";
		}
		else if (comboBox1->SelectedItem == "Inverse Modulo") {
			textBox3->Enabled = false;
			label4->Text = "%";
			label1->Text = " ";
			label6->Text = " ";
		}
	}
};
}
