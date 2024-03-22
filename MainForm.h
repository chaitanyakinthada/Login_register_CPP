#pragma once
#include "User.h"
#include "LoginForm.h"
#include "MainForm.h"
#ifndef MAINFORM_H
#define MAINFORM_H

namespace LR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	/*public: 
		MainForm();

		void Dispose();*/ // Declaration of Dispose function
			 //Other member functions and variables
		/*};*/

	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUserInfo->Text = "Hello " + user->Name + ", How are you doing?";
			btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			//lbUserInfo->Text = "ID=" + user->id + ", Name" + user->Name +
				//", Email=" + user->Email + ", Mobile=" + user->Mobile;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Button^ btnLogout;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1335, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(30, 130);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(92, 32);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(1223, 571);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(145, 51);
			this->btnLogout->TabIndex = 2;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1399, 652);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
		public: property bool LogoutRequested;
		private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
			// Perform logout action here
			// For example, close the MainForm and navigate back to the login screen
			// Set LogoutRequested to true when the logout button is clicked
			LogoutRequested = true;
			this->Close(); // Close the MainForm
			//LoginForm^ loginForm = gcnew LoginForm(); // Create an instance of the login screen form
			//loginForm->Show(); // Show the login screen form
		}
};
}
#endif // MAINFORM_H