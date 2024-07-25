/* Задание 1. (для всех)
Создать приложение, в котором при щелчке на радио-кнопке загорается соответствующий
цвет светофора (для светофора использовать компонент panel, цвет компонента меняется на
красный, желтый и зеленый) */

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ЛР151::MyForm form;
	Application::Run(% form);
	return 0;
}