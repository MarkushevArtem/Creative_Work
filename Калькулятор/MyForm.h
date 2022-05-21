#pragma once
#include <math.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(127, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X +";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(228, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(322, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Z = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(127, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"X +";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(228, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(42, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Y +";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(322, 115);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 25);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Z = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(127, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"X +";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(228, 163);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Y +";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(322, 163);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 25);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Z = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 22);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(276, 67);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 22);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(374, 67);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(42, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(79, 115);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(42, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(180, 115);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(42, 22);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(276, 115);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(42, 22);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(374, 114);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(42, 22);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(79, 164);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(42, 22);
			this->textBox9->TabIndex = 17;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(180, 164);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(42, 22);
			this->textBox10->TabIndex = 18;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(276, 164);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(42, 22);
			this->textBox11->TabIndex = 19;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(374, 165);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(42, 22);
			this->textBox12->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepPink;
			this->button1->Location = System::Drawing::Point(37, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 31);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Сбросить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DeepPink;
			this->button2->Location = System::Drawing::Point(180, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 45);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Решить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepPink;
			this->button3->Location = System::Drawing::Point(361, 357);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 31);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(170, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 25);
			this->label10->TabIndex = 24;
			this->label10->Text = L"X = ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(170, 275);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 25);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Y = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::MediumVioletRed;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(172, 311);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 25);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Z = ";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(224, 241);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 27;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(224, 279);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 28;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(224, 314);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::DeepPink;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(116, 23);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(262, 29);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Система уравнений";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::DeepPink;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(84, 205);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(347, 29);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Корни системы уравнений";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(490, 400);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(508, 447);
			this->MinimumSize = System::Drawing::Size(508, 447);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //Конпка "Закрыть"
	this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка "Очистить" 
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	textBox6->Text = L"";
	textBox7->Text = L"";
	textBox8->Text = L"";
	textBox9->Text = L"";
	textBox10->Text = L"";
	textBox11->Text = L"";
	textBox12->Text = L"";
	textBox13->Text = L"";
	textBox14->Text = L"";
	textBox15->Text = L"";
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   bool Check_Input() { //Функция, в которой проверяется правильный ввод значений
		   for (int i = 0; i < textBox1->Text->Length; i++) {
			   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox2->Text->Length; i++) {
			   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox3->Text->Length; i++) {
			   if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox4->Text->Length; i++) {
			   if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9') || (textBox4->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox5->Text->Length; i++) {
			   if ((textBox5->Text[i] >= '0') && (textBox5->Text[i] <= '9') || (textBox5->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox6->Text->Length; i++) {
			   if ((textBox6->Text[i] >= '0') && (textBox6->Text[i] <= '9') || (textBox6->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox7->Text->Length; i++) {
			   if ((textBox7->Text[i] >= '0') && (textBox7->Text[i] <= '9') || (textBox7->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox8->Text->Length; i++) {
			   if ((textBox8->Text[i] >= '0') && (textBox8->Text[i] <= '9') || (textBox8->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox9->Text->Length; i++) {
			   if ((textBox9->Text[i] >= '0') && (textBox9->Text[i] <= '9') || (textBox9->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox10->Text->Length; i++) {
			   if ((textBox10->Text[i] >= '0') && (textBox10->Text[i] <= '9') || (textBox10->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox11->Text->Length; i++) {
			   if ((textBox11->Text[i] >= '0') && (textBox11->Text[i] <= '9') || (textBox11->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox12->Text->Length; i++) {
			   if ((textBox12->Text[i] >= '0') && (textBox12->Text[i] <= '9') || (textBox12->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox13->Text->Length; i++) {
			   if ((textBox13->Text[i] >= '0') && (textBox13->Text[i] <= '9') || (textBox13->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox14->Text->Length; i++) {
			   if ((textBox14->Text[i] >= '0') && (textBox14->Text[i] <= '9') || (textBox14->Text[i] == '-')) {}
			   else return false;
		   }
		   for (int i = 0; i < textBox15->Text->Length; i++) {
			   if ((textBox15->Text[i] >= '0') && (textBox15->Text[i] <= '9') || (textBox15->Text[i] == '-')) {}
			   else return false;
		   }
		   return true;
	   }
	   bool Check_Input1() { //Функция, в которой проверяется, чтобы не было пустых полей и полей только с минусом
		   if (textBox1->Text == "" || textBox1->Text == "-" || textBox2->Text == "" || textBox2->Text == "-" || textBox3->Text == "" || textBox3->Text == "-"
			   || textBox4->Text == "" || textBox4->Text == "-" || textBox5->Text == "" || textBox5->Text == "-" || textBox6->Text == "" || textBox6->Text == "-"
			   || textBox7->Text == "" || textBox7->Text == "-" || textBox8->Text == "" || textBox8->Text == "-" || textBox9->Text == "" || textBox9->Text == "-"
			   || textBox10->Text == "" || textBox10->Text == "-" || textBox11->Text == "" || textBox11->Text == "-" || textBox12->Text == "" || textBox12->Text == "-") {
			   return false;
		   }
		   else return true;
	   }
	   bool Check_Input2() { //Функция, в которой проверяется, чтобы знак минус не стоял после символа
		   bool f = true;
		   for (int i = 1; i < textBox1->Text->Length; i++) {
			   if (textBox1->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox2->Text->Length; i++) {
			   if (textBox2->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox3->Text->Length; i++) {
			   if (textBox3->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox4->Text->Length; i++) {
			   if (textBox4->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox5->Text->Length; i++) {
			   if (textBox5->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox6->Text->Length; i++) {
			   if (textBox6->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox7->Text->Length; i++) {
			   if (textBox7->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox8->Text->Length; i++) {
			   if (textBox8->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox9->Text->Length; i++) {
			   if (textBox9->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox10->Text->Length; i++) {
			   if (textBox10->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox11->Text->Length; i++) {
			   if (textBox11->Text[i] == '-') {
				   f = false;
			   }
		   }
		   for (int i = 1; i < textBox12->Text->Length; i++) {
			   if (textBox12->Text[i] == '-') {
				   f = false;
			   }
		   }
		   return f;
	   }
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Кнопка "Решить"
	if (Check_Input() && Check_Input1() && Check_Input2()) { //Программа зайдет в цикл, если все функции проверок вернут значение true
		double x1, y1, z1, x2, y2, z2, x3, y3, z3, num1, num2, num3, det1, det2, det3, tx2, ty2, tz2, tx3, ty3, tz3, det;
		
		//Конвертация введенных значений в вещественный тип
		x1 = System::Convert::ToDouble(textBox1->Text);
		y1 = System::Convert::ToDouble(textBox2->Text);
		z1 = System::Convert::ToDouble(textBox3->Text);
		num1 = System::Convert::ToDouble(textBox4->Text);
		x2 = System::Convert::ToDouble(textBox5->Text);
		y2 = System::Convert::ToDouble(textBox6->Text);
		z2 = System::Convert::ToDouble(textBox7->Text);
		num2 = System::Convert::ToDouble(textBox8->Text);
		x3 = System::Convert::ToDouble(textBox9->Text);
		y3 = System::Convert::ToDouble(textBox10->Text);
		z3 = System::Convert::ToDouble(textBox11->Text);
		num3 = System::Convert::ToDouble(textBox12->Text);
		double x, y, z;
		
		det = x1 * y2 * z3 + x2 * y3 * z1 + y1 * z2 * x3 - (z1 * y2 * x3 + x1 * z2 * y3 + y1 * x2 * z3); //Нахождение главного определителя
		
		if (det != 0) {
			//Нахождение вспомогательных определителей
			det1 = num1 * y2 * z3 + num2 * y3 * z1 + y1 * z2 * num3 - (z1 * y2 * num3 + y1 * num2 * z3 + num1 * z2 * y3); 
			det2 = x1 * num2 * z3 + x2 * num3 * z1 + num1 * z2 * x3 - (z1 * num2 * x3 + x2 * num1 * z3 + x1 * z2 * num3);
			det3 = x1 * y2 * num3 + x2 * y3 * num1 + y1 * num2 * x3 - (num1 * y2 * x3 + y1 * x2 * num3 + num2 * y3 * x1);
			
			//Нахождение корней системы
			x = round (det1 / det); 
			y = round (det2 / det);
			z = round (det3 / det);
		}

		//Конвертация значений из вещественного типа в строковый
		textBox13->Text = System::Convert::ToString(x); 
		textBox14->Text = System::Convert::ToString(y);
		textBox15->Text = System::Convert::ToString(z);
	}
	else MessageBox::Show("Неверный ввод!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}
