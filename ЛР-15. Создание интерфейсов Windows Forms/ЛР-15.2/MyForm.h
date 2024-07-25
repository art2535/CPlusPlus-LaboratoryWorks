#pragma once

namespace ЛР152 {

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
	private: System::Windows::Forms::Label^ LabelInfoSumma;
	protected:

	private: System::Windows::Forms::TextBox^ TextBoxInputSumma;
	private: System::Windows::Forms::GroupBox^ GroupBoxTime;
	protected:


	private: System::Windows::Forms::RadioButton^ RadioButton12Months;

	private: System::Windows::Forms::RadioButton^ RadioButton9Months;
	private: System::Windows::Forms::RadioButton^ RadioButton6Months;
	private: System::Windows::Forms::CheckBox^ CheckBoxConstClient;
	private: System::Windows::Forms::Label^ LabelItog;

	private: System::Windows::Forms::Button^ ButtonExit;
	private: System::Windows::Forms::Button^ ButtonCount;
	private: System::Windows::Forms::TextBox^ TextBoxOutputInfo;


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
			this->LabelInfoSumma = (gcnew System::Windows::Forms::Label());
			this->TextBoxInputSumma = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxTime = (gcnew System::Windows::Forms::GroupBox());
			this->RadioButton12Months = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton9Months = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton6Months = (gcnew System::Windows::Forms::RadioButton());
			this->CheckBoxConstClient = (gcnew System::Windows::Forms::CheckBox());
			this->LabelItog = (gcnew System::Windows::Forms::Label());
			this->ButtonExit = (gcnew System::Windows::Forms::Button());
			this->ButtonCount = (gcnew System::Windows::Forms::Button());
			this->TextBoxOutputInfo = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxTime->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelInfoSumma
			// 
			this->LabelInfoSumma->AutoSize = true;
			this->LabelInfoSumma->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelInfoSumma->Location = System::Drawing::Point(31, 55);
			this->LabelInfoSumma->Name = L"LabelInfoSumma";
			this->LabelInfoSumma->Size = System::Drawing::Size(129, 22);
			this->LabelInfoSumma->TabIndex = 0;
			this->LabelInfoSumma->Text = L"Сумма вклада";
			// 
			// TextBoxInputSumma
			// 
			this->TextBoxInputSumma->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBoxInputSumma->Location = System::Drawing::Point(184, 52);
			this->TextBoxInputSumma->Name = L"TextBoxInputSumma";
			this->TextBoxInputSumma->Size = System::Drawing::Size(177, 30);
			this->TextBoxInputSumma->TabIndex = 1;
			this->TextBoxInputSumma->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxInputSumma_TextChanged);
			this->TextBoxInputSumma->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBoxInputSumma_KeyPress);
			// 
			// GroupBoxTime
			// 
			this->GroupBoxTime->Controls->Add(this->RadioButton12Months);
			this->GroupBoxTime->Controls->Add(this->RadioButton9Months);
			this->GroupBoxTime->Controls->Add(this->RadioButton6Months);
			this->GroupBoxTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GroupBoxTime->Location = System::Drawing::Point(35, 125);
			this->GroupBoxTime->Name = L"GroupBoxTime";
			this->GroupBoxTime->Size = System::Drawing::Size(224, 176);
			this->GroupBoxTime->TabIndex = 2;
			this->GroupBoxTime->TabStop = false;
			this->GroupBoxTime->Text = L"Срок вклада";
			// 
			// RadioButton12Months
			// 
			this->RadioButton12Months->AutoSize = true;
			this->RadioButton12Months->Location = System::Drawing::Point(17, 122);
			this->RadioButton12Months->Name = L"RadioButton12Months";
			this->RadioButton12Months->Size = System::Drawing::Size(125, 26);
			this->RadioButton12Months->TabIndex = 2;
			this->RadioButton12Months->TabStop = true;
			this->RadioButton12Months->Text = L"12 месяцев";
			this->RadioButton12Months->UseVisualStyleBackColor = true;
			this->RadioButton12Months->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RadioButton12Months_CheckedChanged);
			this->RadioButton12Months->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::RadioButton12Months_KeyPress);
			// 
			// RadioButton9Months
			// 
			this->RadioButton9Months->AutoSize = true;
			this->RadioButton9Months->Location = System::Drawing::Point(17, 81);
			this->RadioButton9Months->Name = L"RadioButton9Months";
			this->RadioButton9Months->Size = System::Drawing::Size(115, 26);
			this->RadioButton9Months->TabIndex = 1;
			this->RadioButton9Months->TabStop = true;
			this->RadioButton9Months->Text = L"9 месяцев";
			this->RadioButton9Months->UseVisualStyleBackColor = true;
			this->RadioButton9Months->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RadioButton9Months_CheckedChanged);
			this->RadioButton9Months->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::RadioButton9Months_KeyPress);
			// 
			// RadioButton6Months
			// 
			this->RadioButton6Months->AutoSize = true;
			this->RadioButton6Months->Location = System::Drawing::Point(17, 39);
			this->RadioButton6Months->Name = L"RadioButton6Months";
			this->RadioButton6Months->Size = System::Drawing::Size(115, 26);
			this->RadioButton6Months->TabIndex = 0;
			this->RadioButton6Months->TabStop = true;
			this->RadioButton6Months->Text = L"6 месяцев";
			this->RadioButton6Months->UseVisualStyleBackColor = true;
			this->RadioButton6Months->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RadioButton6Months_CheckedChanged);
			this->RadioButton6Months->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::RadioButton6Months_KeyPress);
			// 
			// CheckBoxConstClient
			// 
			this->CheckBoxConstClient->AutoSize = true;
			this->CheckBoxConstClient->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CheckBoxConstClient->Location = System::Drawing::Point(52, 339);
			this->CheckBoxConstClient->Name = L"CheckBoxConstClient";
			this->CheckBoxConstClient->Size = System::Drawing::Size(204, 26);
			this->CheckBoxConstClient->TabIndex = 3;
			this->CheckBoxConstClient->Text = L"Постоянный клиент";
			this->CheckBoxConstClient->UseVisualStyleBackColor = true;
			this->CheckBoxConstClient->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::CheckBoxConstClient_KeyPress);
			// 
			// LabelItog
			// 
			this->LabelItog->AutoSize = true;
			this->LabelItog->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelItog->Location = System::Drawing::Point(290, 125);
			this->LabelItog->Name = L"LabelItog";
			this->LabelItog->Size = System::Drawing::Size(261, 22);
			this->LabelItog->TabIndex = 4;
			this->LabelItog->Text = L"Сумма вклада с накоплением";
			// 
			// ButtonExit
			// 
			this->ButtonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonExit->Location = System::Drawing::Point(399, 339);
			this->ButtonExit->Name = L"ButtonExit";
			this->ButtonExit->Size = System::Drawing::Size(135, 36);
			this->ButtonExit->TabIndex = 5;
			this->ButtonExit->Text = L"Выход";
			this->ButtonExit->UseVisualStyleBackColor = true;
			this->ButtonExit->Click += gcnew System::EventHandler(this, &MyForm::ButtonExit_Click);
			// 
			// ButtonCount
			// 
			this->ButtonCount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonCount->Location = System::Drawing::Point(399, 287);
			this->ButtonCount->Name = L"ButtonCount";
			this->ButtonCount->Size = System::Drawing::Size(135, 36);
			this->ButtonCount->TabIndex = 6;
			this->ButtonCount->Text = L"Рассчитать";
			this->ButtonCount->UseVisualStyleBackColor = true;
			this->ButtonCount->Click += gcnew System::EventHandler(this, &MyForm::ButtonCount_Click);
			// 
			// TextBoxOutputInfo
			// 
			this->TextBoxOutputInfo->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TextBoxOutputInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBoxOutputInfo->Location = System::Drawing::Point(294, 150);
			this->TextBoxOutputInfo->Name = L"TextBoxOutputInfo";
			this->TextBoxOutputInfo->ReadOnly = true;
			this->TextBoxOutputInfo->Size = System::Drawing::Size(257, 30);
			this->TextBoxOutputInfo->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 402);
			this->Controls->Add(this->TextBoxOutputInfo);
			this->Controls->Add(this->ButtonCount);
			this->Controls->Add(this->ButtonExit);
			this->Controls->Add(this->LabelItog);
			this->Controls->Add(this->CheckBoxConstClient);
			this->Controls->Add(this->GroupBoxTime);
			this->Controls->Add(this->TextBoxInputSumma);
			this->Controls->Add(this->LabelInfoSumma);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №15. Задание 2";
			this->GroupBoxTime->ResumeLayout(false);
			this->GroupBoxTime->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonCount_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TextBoxOutputInfo->Text = "";
		double sum = System::Convert::ToDouble(TextBoxInputSumma->Text);
		double percent = 0;
		int period = 0;
		if (sum == 0)
		{
			MessageBox::Show("Сумма вклада не может быть равна 0. Повторите ввод", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (RadioButton6Months->Checked)
			percent = period = 6;
		else if (RadioButton9Months->Checked)
		{
			percent = period = 9;
			if (CheckBoxConstClient->Checked)
				percent = 11;
		}
		else if (RadioButton12Months->Checked)
		{
			percent = period = 12;
			if (CheckBoxConstClient->Checked)
				percent = 15;
		}
		double itog = sum + sum * (percent / 100 / 12) * period;
		TextBoxOutputInfo->Text = itog.ToString("c");
	}
	private: System::Void ButtonExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	private: System::Void TextBoxInputSumma_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		TextBoxOutputInfo->Text = "";
		if (TextBoxInputSumma->Text->Length != 0 && (RadioButton6Months->Checked || RadioButton9Months->Checked || RadioButton12Months->Checked))
			ButtonCount->Enabled = true;
		else
			ButtonCount->Enabled = false;
	}
	private: System::Void TextBoxInputSumma_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
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
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		if (e->KeyChar == ',')
		{
			if (TextBoxInputSumma->Text->IndexOf(',') != -1 || TextBoxInputSumma->Text->Length == 0)
				e->Handled = true;
			return;
		}
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
				RadioButton6Months->Focus();
			return;
		}
		e->Handled = true;
	}
	private: System::Void RadioButton6Months_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				if (RadioButton6Months->Checked && ButtonCount->Enabled)
					CheckBoxConstClient->Focus();
			}
			return;
		}
	}
	private: System::Void RadioButton12Months_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				if (RadioButton12Months->Checked && ButtonCount->Enabled)
					CheckBoxConstClient->Focus();
			}
			return;
		}
	}
	private: System::Void RadioButton9Months_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				if (RadioButton9Months->Checked && ButtonCount->Enabled)
					CheckBoxConstClient->Focus();
				else
					RadioButton12Months->Focus();
			}
			return;
		}
	}
	private: System::Void RadioButton6Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (TextBoxInputSumma->Text->Length != 0)
			ButtonCount->Enabled = true;
		else
			ButtonCount->Enabled = false;
		return;
	}
	private: System::Void RadioButton9Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		RadioButton6Months_CheckedChanged(sender, e);
	}
	private: System::Void RadioButton12Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		RadioButton6Months_CheckedChanged(sender, e);
	}
	private: System::Void CheckBoxConstClient_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (Char::IsControl(e->KeyChar))
		{
			if (e->KeyChar == (char)Keys::Enter)
			{
				if (CheckBoxConstClient->Checked == true)
				{
					CheckBoxConstClient->Checked = false;
					if (ButtonCount->Enabled)
						ButtonCount->Focus();
					return;
				}
				CheckBoxConstClient->Checked = true;
				if (ButtonCount->Enabled)
					ButtonCount->Focus();
				else
					ButtonExit->Focus();
			}
			return;
		}
	}
	};
}