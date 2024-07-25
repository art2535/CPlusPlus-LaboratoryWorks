/* «адание 2 (по вариантам)
¬ариант 2. Ќаписать необходимые обработчики событий дл€ вычислени€ суммы вклада с
накоплением через пройденный период. ѕроценты начисл€ютс€ следующим образом : за 6
мес€цев Ц 6%; за 9 мес€цев Ц 9%; за 12 мес€цев Ц 12%. ѕосто€нным клиентам на сроки 9 и
12 мес€цев устанавливаютс€ следующие процентные ставки : 11% и 15% соответственно. */

#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Ћ–152::MyForm form;
	Application::Run(% form);
	return 0;
}