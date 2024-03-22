#pragma once
#include "User.h"
#include "LoginForm.h"

namespace LR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbMobile;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbMobile = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(923, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Window;
			this->tbName->Location = System::Drawing::Point(482, 131);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(533, 38);
			this->tbName->TabIndex = 2;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(482, 221);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(533, 38);
			this->tbEmail->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(100, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(482, 314);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(533, 38);
			this->tbPassword->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(482, 419);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(533, 38);
			this->tbConfirmPassword->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(100, 419);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(244, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Confirm Password";
			// 
			// tbMobile
			// 
			this->tbMobile->Location = System::Drawing::Point(482, 527);
			this->tbMobile->Name = L"tbMobile";
			this->tbMobile->Size = System::Drawing::Size(533, 38);
			this->tbMobile->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(100, 527);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 32);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Mobile";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(482, 603);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(237, 64);
			this->btnOK->TabIndex = 11;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(778, 603);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(237, 64);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(897, 679);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(118, 46);
			this->llLogin->TabIndex = 13;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1366, 734);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbMobile);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;
		String^ mobile = tbMobile->Text;

		if (name->Length == 0 || email->Length == 0
			|| mobile->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter all the fields",
				"One or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try
		{
			String^ connString = "Data Source=lr1.database.windows.net;Initial Catalog=LR1;User ID=admin123;Password=Password@123";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO Accounts (name,email,password,mobile) values (@name,@email,@password,@mobile)";
			
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@mobile", mobile);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->Name = name;
			user->Email = email;
			user->Password = password;
			user->Mobile = mobile;

			this->Close();

			LoginForm^ loginForm = gcnew LoginForm();
			loginForm->Show();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}

	}
};
}
