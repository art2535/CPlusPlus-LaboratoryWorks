#pragma once

namespace WindowsFormsОбщее {

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
			// Сделать кнопку "Рассчитать" недоступной
			ButtonCount->Enabled = false;
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
	private: System::Windows::Forms::Label^ MainLabel;
	protected:
	private: System::Windows::Forms::Label^ SumLabelInput;
	private: System::Windows::Forms::Label^ LabelTime;

	private: System::Windows::Forms::TextBox^ TextBoxInputSumma;
	private: System::Windows::Forms::TextBox^ TextBoxInputTime;
	private: System::Windows::Forms::Button^ ButtonCount;
	private: System::Windows::Forms::Label^ LabelItog;


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
			this->MainLabel = (gcnew System::Windows::Forms::Label());
			this->SumLabelInput = (gcnew System::Windows::Forms::Label());
			this->LabelTime = (gcnew System::Windows::Forms::Label());
			this->TextBoxInputSumma = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxInputTime = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCount = (gcnew System::Windows::Forms::Button());
			this->LabelItog = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// MainLabel
			// 
			this->MainLabel->AutoSize = true;
			this->MainLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MainLabel->Location = System::Drawing::Point(55, 30);
			this->MainLabel->Name = L"MainLabel";
			this->MainLabel->Size = System::Drawing::Size(353, 25);
			this->MainLabel->TabIndex = 0;
			this->MainLabel->Text = L"Моя первая программа \"Доход\"";
			// 
			// SumLabelInput
			// 
			this->SumLabelInput->AutoSize = true;
			this->SumLabelInput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SumLabelInput->Location = System::Drawing::Point(60, 114);
			this->SumLabelInput->Name = L"SumLabelInput";
			this->SumLabelInput->Size = System::Drawing::Size(163, 22);
			this->SumLabelInput->TabIndex = 1;
			this->SumLabelInput->Text = L"Сумма (в рублях):";
			this->SumLabelInput->UseMnemonic = false;
			// 
			// LabelTime
			// 
			this->LabelTime->AutoSize = true;
			this->LabelTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelTime->Location = System::Drawing::Point(60, 165);
			this->LabelTime->Name = L"LabelTime";
			this->LabelTime->Size = System::Drawing::Size(161, 22);
			this->LabelTime->TabIndex = 2;
			this->LabelTime->Text = L"Срок (в месяцах):";
			this->LabelTime->UseMnemonic = false;
			// 
			// TextBoxInputSumma
			// 
			this->TextBoxInputSumma->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->TextBoxInputSumma->Location = System::Drawing::Point(241, 114);
			this->TextBoxInputSumma->Name = L"TextBoxInputSumma";
			this->TextBoxInputSumma->Size = System::Drawing::Size(142, 30);
			this->TextBoxInputSumma->TabIndex = 3;
			this->TextBoxInputSumma->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxInputSumma_TextChanged);
			this->TextBoxInputSumma->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBoxInputSumma_KeyPress);
			// 
			// TextBoxInputTime
			// 
			this->TextBoxInputTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->TextBoxInputTime->Location = System::Drawing::Point(241, 166);
			this->TextBoxInputTime->Name = L"TextBoxInputTime";
			this->TextBoxInputTime->Size = System::Drawing::Size(142, 30);
			this->TextBoxInputTime->TabIndex = 4;
			this->TextBoxInputTime->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxInputTime_TextChanged);
			this->TextBoxInputTime->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBoxInputTime_KeyPress);
			// 
			// ButtonCount
			// 
			this->ButtonCount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonCount->Location = System::Drawing::Point(402, 307);
			this->ButtonCount->Name = L"ButtonCount";
			this->ButtonCount->Size = System::Drawing::Size(127, 49);
			this->ButtonCount->TabIndex = 5;
			this->ButtonCount->Text = L"Рассчитать";
			this->ButtonCount->UseVisualStyleBackColor = true;
			this->ButtonCount->Click += gcnew System::EventHandler(this, &MyForm::ButtonCount_Click);
			// 
			// LabelItog
			// 
			this->LabelItog->AutoSize = true;
			this->LabelItog->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelItog->Location = System::Drawing::Point(64, 254);
			this->LabelItog->Name = L"LabelItog";
			this->LabelItog->Size = System::Drawing::Size(0, 26);
			this->LabelItog->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 412);
			this->Controls->Add(this->LabelItog);
			this->Controls->Add(this->ButtonCount);
			this->Controls->Add(this->TextBoxInputTime);
			this->Controls->Add(this->TextBoxInputSumma);
			this->Controls->Add(this->LabelTime);
			this->Controls->Add(this->SumLabelInput);
			this->Controls->Add(this->MainLabel);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonCount_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double sum = System::Convert::ToDouble(TextBoxInputSumma->Text); // Сумма вклада, преобразуем в вещественное число
		int period = System::Convert::ToInt32(TextBoxInputTime->Text); // Срок, преобразуем в целое число
		double percent; // Процентная ставка
		if (sum == 0 && period == 0)
		{
			MessageBox::Show("Введенные значения равны 0. Повторите ввод", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (sum == 0)
		{
			MessageBox::Show("Сумма вклада не может быть равна 0. Повторите ввод", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (period == 0)
		{
			MessageBox::Show("Срок вклада не может быть равен 0. Повторите ввод", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// Задаем процент в зависимости от внесенной суммы
		if (sum < 10000)
			percent = 8.5;
		else
			percent = 12;
		double profit = sum * (percent / 100 / 12) * period; // Вычисляем доход
		// Формируем вывод результата
		LabelItog->Text = "Процентная ставка: " + percent.ToString("n") + "%\n" +
			"Доход: " + profit.ToString("c") + " руб.";
	}
	/* Функция обрарбатывает событие TextChanged (изменился текст в поле
	редактирования) обоих компонентов TextBox. Сначала надо обычным
	образом создать функцию обработки события TextChanged для компонента
	TextBoxInputSumma, затем - указать ее в качестве обработчика события
	TextChanged для компонента TextBoxInputTime*/
	private: System::Void TextBoxInputSumma_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Очистить поле результата расчета
		LabelItog->Text = "";
		// В поле редактирования нет данных
		if (TextBoxInputSumma->Text->Length == 0 || TextBoxInputTime->Text->Length == 0)
			// Сделать кнопку "Рассчитать" недоступной
			ButtonCount->Enabled = false;
		else
			// Сделать кнопку "Рассчитать" доступной
			ButtonCount->Enabled = true;
	}
	// Нажатие клавиши в поле "Сумма"
	private: System::Void TextBoxInputSumma_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// Нажата цифра
		if (Char::IsDigit(e->KeyChar))
		{
			if (TextBoxInputSumma->Text->Length == 0 && e->KeyChar == '0')
				return;
			if (TextBoxInputSumma->Text->Length == 1 && TextBoxInputSumma->Text[0] == '0' && e->KeyChar != ',')
			{
				e->Handled = true;
				return;
			}
			if (TextBoxInputSumma->Text->Length == 0 && (e->KeyChar >= '1' && e->KeyChar <= '9'))
				return;
			if (TextBoxInputSumma->Text->Length > 0)
				return;
		}
		// "Правильный" десятичный разделитель - запятая
		// Заменим точку на запятую
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		// Нажата запятая
		if (e->KeyChar == ',')
		{
			// Если запятая уже есть в поле редактирования
			if (TextBoxInputSumma->Text->IndexOf(',') != -1 || TextBoxInputSumma->Text->Length == 0)
				// Запятая уже есть. Запретить ввод еще одной
				e->Handled = true;
			return;
		}
		// Это символ категории управляющих символов
		if (Char::IsControl(e->KeyChar))
		{
			// Нажата клавиша "Enter"
			if (e->KeyChar == (char)Keys::Enter)
				// Переместить курсор в поле "Срок"
				TextBoxInputTime->Focus();
			return;
		}
		// Остальные символы запрещены
		e->Handled = true;
	}
	private: System::Void TextBoxInputTime_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		TextBoxInputSumma_TextChanged(sender, e);
	}
	private: System::Void TextBoxInputTime_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// Нажата цифра
		if (Char::IsDigit(e->KeyChar))
		{
			if (TextBoxInputTime->Text->Length == 0 && e->KeyChar == '0')
				return;
			if (TextBoxInputTime->Text->Length == 1 && TextBoxInputTime->Text[0] == '0' && e->KeyChar != ',')
			{
				e->Handled = true;
				return;
			}
			if (TextBoxInputTime->Text->Length == 0 && (e->KeyChar >= '1' && e->KeyChar <= '9'))
				return;
			if (TextBoxInputTime->Text->Length > 0)
				return;
		}
		// Это символ категории управляющих символов
		if (Char::IsControl(e->KeyChar))
		{
			// Нажата клавиша "Enter"
			if (e->KeyChar == (char)Keys::Enter)
				// Переместить курсор в поле "Срок"
				ButtonCount->Focus();
			return;
		}
		// Остальные символы запрещены
		e->Handled = true;
	}
	};
}
