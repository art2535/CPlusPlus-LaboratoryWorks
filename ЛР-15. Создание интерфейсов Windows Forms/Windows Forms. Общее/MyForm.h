#pragma once

namespace WindowsForms����� {

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
			// ������� ������ "����������" �����������
			ButtonCount->Enabled = false;
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
			this->MainLabel->Text = L"��� ������ ��������� \"�����\"";
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
			this->SumLabelInput->Text = L"����� (� ������):";
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
			this->LabelTime->Text = L"���� (� �������):";
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
			this->ButtonCount->Text = L"����������";
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
		double sum = System::Convert::ToDouble(TextBoxInputSumma->Text); // ����� ������, ����������� � ������������ �����
		int period = System::Convert::ToInt32(TextBoxInputTime->Text); // ����, ����������� � ����� �����
		double percent; // ���������� ������
		if (sum == 0 && period == 0)
		{
			MessageBox::Show("��������� �������� ����� 0. ��������� ����", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (sum == 0)
		{
			MessageBox::Show("����� ������ �� ����� ���� ����� 0. ��������� ����", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (period == 0)
		{
			MessageBox::Show("���� ������ �� ����� ���� ����� 0. ��������� ����", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// ������ ������� � ����������� �� ��������� �����
		if (sum < 10000)
			percent = 8.5;
		else
			percent = 12;
		double profit = sum * (percent / 100 / 12) * period; // ��������� �����
		// ��������� ����� ����������
		LabelItog->Text = "���������� ������: " + percent.ToString("n") + "%\n" +
			"�����: " + profit.ToString("c") + " ���.";
	}
	/* ������� ������������� ������� TextChanged (��������� ����� � ����
	��������������) ����� ����������� TextBox. ������� ���� �������
	������� ������� ������� ��������� ������� TextChanged ��� ����������
	TextBoxInputSumma, ����� - ������� �� � �������� ����������� �������
	TextChanged ��� ���������� TextBoxInputTime*/
	private: System::Void TextBoxInputSumma_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// �������� ���� ���������� �������
		LabelItog->Text = "";
		// � ���� �������������� ��� ������
		if (TextBoxInputSumma->Text->Length == 0 || TextBoxInputTime->Text->Length == 0)
			// ������� ������ "����������" �����������
			ButtonCount->Enabled = false;
		else
			// ������� ������ "����������" ���������
			ButtonCount->Enabled = true;
	}
	// ������� ������� � ���� "�����"
	private: System::Void TextBoxInputSumma_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// ������ �����
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
		// "����������" ���������� ����������� - �������
		// ������� ����� �� �������
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		// ������ �������
		if (e->KeyChar == ',')
		{
			// ���� ������� ��� ���� � ���� ��������������
			if (TextBoxInputSumma->Text->IndexOf(',') != -1 || TextBoxInputSumma->Text->Length == 0)
				// ������� ��� ����. ��������� ���� ��� �����
				e->Handled = true;
			return;
		}
		// ��� ������ ��������� ����������� ��������
		if (Char::IsControl(e->KeyChar))
		{
			// ������ ������� "Enter"
			if (e->KeyChar == (char)Keys::Enter)
				// ����������� ������ � ���� "����"
				TextBoxInputTime->Focus();
			return;
		}
		// ��������� ������� ���������
		e->Handled = true;
	}
	private: System::Void TextBoxInputTime_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		TextBoxInputSumma_TextChanged(sender, e);
	}
	private: System::Void TextBoxInputTime_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		// ������ �����
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
		// ��� ������ ��������� ����������� ��������
		if (Char::IsControl(e->KeyChar))
		{
			// ������ ������� "Enter"
			if (e->KeyChar == (char)Keys::Enter)
				// ����������� ������ � ���� "����"
				ButtonCount->Focus();
			return;
		}
		// ��������� ������� ���������
		e->Handled = true;
	}
	};
}
