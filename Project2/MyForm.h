#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox1;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 120);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(531, 531);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(249, 120);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(539, 539);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 120);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(225, 1327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 120);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(225, 1963);
			this->button5->Margin = System::Windows::Forms::Padding(3, 3, 3, 50);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(249, 120);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(565, 1159);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(249, 120);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(208, 1172);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(249, 120);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(208, 1019);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(249, 120);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(250, 215);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(249, 120);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(250, 430);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(249, 120);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(12, 20);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(117, 48);
			this->button11->TabIndex = 10;
			this->button11->Text = L"back";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(208, 848);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(249, 120);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 20);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(975, 728);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			this->textBox1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1269, 861);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	hideall();
	this->textBox1->Text = "������� ������ � �����. ����������� �������� �������� �� ��������� �����, ������� ��� � ����������, Internet Protocol, ���������� IP. � ��������� ����� ������������ ��� ��� ������, IPv4 �� 70-� �����, � ����� ����������� IPv6. �������� ������� ����� ���� - � ����� ������, � ��������������, � ������������ ���������� ��������� IP-�������. IPv6, ����������, � ��������, ����� ����� ����, ��� ���������, ������������ � ���������, � ���� ���������� ������ ������, ��� ��������� �������, � �������� ������� � ���� NAT'� ���������� �� ��������� � ���� ���-�� � ���� ������. IPv6 �������������� ��� ������� ����������� ��������� � �������, � ������� ���������������� �� ����� ����, ��� ���� �����, ��������, �� ���������� Google:";
}
private: System::Void hideall() {
	this->button1->Visible = false;
	this->button2->Visible = false;
	this->button3->Visible = false;
	this->button4->Visible = false;
	this->button5->Visible = false;
	this->button6->Visible = false;
	this->button7->Visible = false;
	this->button8->Visible = false;
	this->button9->Visible = false;
	this->button10->Visible = false;
	this->button11->Visible = true;
	this->button12->Visible = false;
	this->textBox1->Visible = true;
}
private: System::Void showmain() {
	this->textBox1->Visible = false;
	this->button1->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	this->button6->Visible = true;
	this->button7->Visible = true;
	this->button8->Visible = true;
	this->button9->Visible = true;
	this->button10->Visible = true;
	this->button12->Visible = true;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	showmain();
}
};
}
