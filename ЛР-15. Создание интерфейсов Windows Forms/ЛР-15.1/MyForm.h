#pragma once

namespace ЛР151 {

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
	private: System::Windows::Forms::GroupBox^ GroupBoxColors;
	protected:

	protected:

	private: System::Windows::Forms::Label^ LabelTitle;
	private: System::Windows::Forms::Panel^ PanelRedColor;
	private: System::Windows::Forms::Panel^ PanelYellowColor;
	private: System::Windows::Forms::Panel^ PanelGreenColor;
	private: System::Windows::Forms::RadioButton^ RadioButtonGreen;
	private: System::Windows::Forms::RadioButton^ RadioButtonYellow;
	private: System::Windows::Forms::RadioButton^ RadioButtonRed;
	private: System::Windows::Forms::Button^ ButtonExit;

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
			this->GroupBoxColors = (gcnew System::Windows::Forms::GroupBox());
			this->RadioButtonGreen = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButtonYellow = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButtonRed = (gcnew System::Windows::Forms::RadioButton());
			this->LabelTitle = (gcnew System::Windows::Forms::Label());
			this->PanelRedColor = (gcnew System::Windows::Forms::Panel());
			this->PanelYellowColor = (gcnew System::Windows::Forms::Panel());
			this->PanelGreenColor = (gcnew System::Windows::Forms::Panel());
			this->ButtonExit = (gcnew System::Windows::Forms::Button());
			this->GroupBoxColors->SuspendLayout();
			this->SuspendLayout();
			// 
			// GroupBoxColors
			// 
			this->GroupBoxColors->Controls->Add(this->RadioButtonGreen);
			this->GroupBoxColors->Controls->Add(this->RadioButtonYellow);
			this->GroupBoxColors->Controls->Add(this->RadioButtonRed);
			this->GroupBoxColors->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GroupBoxColors->Location = System::Drawing::Point(30, 83);
			this->GroupBoxColors->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->GroupBoxColors->Name = L"GroupBoxColors";
			this->GroupBoxColors->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->GroupBoxColors->Size = System::Drawing::Size(206, 171);
			this->GroupBoxColors->TabIndex = 0;
			this->GroupBoxColors->TabStop = false;
			this->GroupBoxColors->Text = L"Сигнал светофора";
			// 
			// RadioButtonGreen
			// 
			this->RadioButtonGreen->AutoSize = true;
			this->RadioButtonGreen->Location = System::Drawing::Point(16, 124);
			this->RadioButtonGreen->Name = L"RadioButtonGreen";
			this->RadioButtonGreen->Size = System::Drawing::Size(115, 30);
			this->RadioButtonGreen->TabIndex = 2;
			this->RadioButtonGreen->Text = L"Зелёный";
			this->RadioButtonGreen->UseVisualStyleBackColor = true;
			this->RadioButtonGreen->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RadioButtonGreen_CheckedChanged);
			// 
			// RadioButtonYellow
			// 
			this->RadioButtonYellow->AutoSize = true;
			this->RadioButtonYellow->Location = System::Drawing::Point(16, 84);
			this->RadioButtonYellow->Name = L"RadioButtonYellow";
			this->RadioButtonYellow->Size = System::Drawing::Size(112, 30);
			this->RadioButtonYellow->TabIndex = 1;
			this->RadioButtonYellow->Text = L"Жёлтый";
			this->RadioButtonYellow->UseVisualStyleBackColor = true;
			this->RadioButtonYellow->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RadioButtonYellow_CheckedChanged);
			// 
			// RadioButtonRed
			// 
			this->RadioButtonRed->AutoSize = true;
			this->RadioButtonRed->Location = System::Drawing::Point(16, 43);
			this->RadioButtonRed->Name = L"RadioButtonRed";
			this->RadioButtonRed->Size = System::Drawing::Size(119, 30);
			this->RadioButtonRed->TabIndex = 0;
			this->RadioButtonRed->Text = L"Красный";
			this->RadioButtonRed->UseVisualStyleBackColor = true;
			this->RadioButtonRed->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RadioButtonRed_CheckedChanged);
			// 
			// LabelTitle
			// 
			this->LabelTitle->AutoSize = true;
			this->LabelTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LabelTitle->Location = System::Drawing::Point(306, 54);
			this->LabelTitle->Name = L"LabelTitle";
			this->LabelTitle->Size = System::Drawing::Size(117, 25);
			this->LabelTitle->TabIndex = 1;
			this->LabelTitle->Text = L"Светофор";
			// 
			// PanelRedColor
			// 
			this->PanelRedColor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PanelRedColor->Location = System::Drawing::Point(294, 95);
			this->PanelRedColor->Name = L"PanelRedColor";
			this->PanelRedColor->Size = System::Drawing::Size(148, 42);
			this->PanelRedColor->TabIndex = 5;
			// 
			// PanelYellowColor
			// 
			this->PanelYellowColor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PanelYellowColor->Location = System::Drawing::Point(294, 148);
			this->PanelYellowColor->Name = L"PanelYellowColor";
			this->PanelYellowColor->Size = System::Drawing::Size(148, 42);
			this->PanelYellowColor->TabIndex = 6;
			// 
			// PanelGreenColor
			// 
			this->PanelGreenColor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PanelGreenColor->Location = System::Drawing::Point(294, 207);
			this->PanelGreenColor->Name = L"PanelGreenColor";
			this->PanelGreenColor->Size = System::Drawing::Size(148, 42);
			this->PanelGreenColor->TabIndex = 7;
			// 
			// ButtonExit
			// 
			this->ButtonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ButtonExit->Location = System::Drawing::Point(344, 282);
			this->ButtonExit->Name = L"ButtonExit";
			this->ButtonExit->Size = System::Drawing::Size(98, 39);
			this->ButtonExit->TabIndex = 8;
			this->ButtonExit->Text = L"Выход";
			this->ButtonExit->UseVisualStyleBackColor = true;
			this->ButtonExit->Click += gcnew System::EventHandler(this, &MyForm::ButtonExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 348);
			this->Controls->Add(this->ButtonExit);
			this->Controls->Add(this->PanelGreenColor);
			this->Controls->Add(this->PanelYellowColor);
			this->Controls->Add(this->PanelRedColor);
			this->Controls->Add(this->LabelTitle);
			this->Controls->Add(this->GroupBoxColors);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №15. Задание 1";
			this->GroupBoxColors->ResumeLayout(false);
			this->GroupBoxColors->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RadioButtonRed_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		PanelRedColor->BackColor = Color::Red;
		PanelGreenColor->BackColor = Color::Empty;
		PanelYellowColor->BackColor = Color::Empty;
	}
	private: System::Void RadioButtonYellow_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		PanelYellowColor->BackColor = Color::Yellow;
		PanelRedColor->BackColor = Color::Empty;
		PanelGreenColor->BackColor = Color::Empty;
	}
	private: System::Void RadioButtonGreen_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		PanelRedColor->BackColor = Color::Empty;
		PanelYellowColor->BackColor = Color::Empty;
		PanelGreenColor->BackColor = Color::Green;
	}
	private: System::Void ButtonExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Close();
	}
	};
}
