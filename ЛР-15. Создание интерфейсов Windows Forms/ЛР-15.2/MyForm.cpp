/* ������� 2 (�� ���������)
������� 2. �������� ����������� ����������� ������� ��� ���������� ����� ������ �
����������� ����� ���������� ������. �������� ����������� ��������� ������� : �� 6
������� � 6%; �� 9 ������� � 9%; �� 12 ������� � 12%. ���������� �������� �� ����� 9 �
12 ������� ��������������� ��������� ���������� ������ : 11% � 15% ��������������. */

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	��152::MyForm form;
	Application::Run(% form);
	return 0;
}