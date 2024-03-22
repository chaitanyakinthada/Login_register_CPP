#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//loginForm.ShowDialog();
	//User^ user = loginForm.user;

	User^ user = nullptr;
	while (true)
	{
		LR1::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister)
		{
			LR1::RegisterForm registerForm;
			registerForm.ShowDialog();
			
			if (registerForm.switchToLogin)
			{
				continue;
			}
			else
			{
				user = registerForm.user;
				break;
			}
		}
	
		else
		{
			user = loginForm.user;
			break;
		}
	}
	if (user != nullptr)
	{
		//MessageBox::Show("Successfull Authentication of " + user->Name,
			//"Program.cpp", MessageBoxButtons::OK);
		LR1::MainForm mainForm(user);

		Application::Run(% mainForm);


		//// Check if logout was requested
		//if (mainForm.LogoutRequested)
		//{
		//	// Show login form again
		//	mainForm.Close();
		//	mainForm.Dispose();

		//	while (true)
		//	{
		//		LR1::LoginForm loginForm;
		//		loginForm.ShowDialog();

		//		if (loginForm.switchToRegister)
		//		{
		//			LR1::RegisterForm registerForm;
		//			registerForm.ShowDialog();

		//			if (registerForm.switchToLogin)
		//			{
		//				continue;
		//			}
		//			else
		//			{
		//				user = registerForm.user;
		//				break;
		//			}
		//		}
		//		else
		//		{
		//			user = loginForm.user;
		//			break;
		//		}
		//	}

		//	if (user != nullptr)
		//	{
		//		LR1::MainForm mainForm(user);
		//		Application::Run(% mainForm);
		//	}
		//}
		
	}
	else
	{
		MessageBox::Show("Authentication Cancelled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}