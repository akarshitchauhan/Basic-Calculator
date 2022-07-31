#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textbox;
	protected:

	protected:
	private: System::Windows::Forms::Button^ backbtn;
	private: System::Windows::Forms::Button^ cbtn;
	private: System::Windows::Forms::Button^ cebtn;
	private: System::Windows::Forms::Button^ pusminusbtn;
	private: System::Windows::Forms::Button^ plusbtn;
	private: System::Windows::Forms::Button^ ninebtn;
	private: System::Windows::Forms::Button^ eightbtn;
	private: System::Windows::Forms::Button^ sevenbtn;
	private: System::Windows::Forms::Button^ minusbtn;
	private: System::Windows::Forms::Button^ sixbtn;
	private: System::Windows::Forms::Button^ fivebtn;
	private: System::Windows::Forms::Button^ fourbtn;
	private: System::Windows::Forms::Button^ multiplybtn;
	private: System::Windows::Forms::Button^ threebtn;
	private: System::Windows::Forms::Button^ twobtn;
	private: System::Windows::Forms::Button^ onebtn;
	private: System::Windows::Forms::Button^ dividebtn;
	private: System::Windows::Forms::Button^ equalbtn;
	private: System::Windows::Forms::Button^ dotbtn;
	private: System::Windows::Forms::Button^ zerobtn;

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
			this->textbox = (gcnew System::Windows::Forms::TextBox());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			this->cbtn = (gcnew System::Windows::Forms::Button());
			this->cebtn = (gcnew System::Windows::Forms::Button());
			this->pusminusbtn = (gcnew System::Windows::Forms::Button());
			this->plusbtn = (gcnew System::Windows::Forms::Button());
			this->ninebtn = (gcnew System::Windows::Forms::Button());
			this->eightbtn = (gcnew System::Windows::Forms::Button());
			this->sevenbtn = (gcnew System::Windows::Forms::Button());
			this->minusbtn = (gcnew System::Windows::Forms::Button());
			this->sixbtn = (gcnew System::Windows::Forms::Button());
			this->fivebtn = (gcnew System::Windows::Forms::Button());
			this->fourbtn = (gcnew System::Windows::Forms::Button());
			this->multiplybtn = (gcnew System::Windows::Forms::Button());
			this->threebtn = (gcnew System::Windows::Forms::Button());
			this->twobtn = (gcnew System::Windows::Forms::Button());
			this->onebtn = (gcnew System::Windows::Forms::Button());
			this->dividebtn = (gcnew System::Windows::Forms::Button());
			this->equalbtn = (gcnew System::Windows::Forms::Button());
			this->dotbtn = (gcnew System::Windows::Forms::Button());
			this->zerobtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textbox
			// 
			this->textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox->Location = System::Drawing::Point(16, 29);
			this->textbox->Name = L"textbox";
			this->textbox->Size = System::Drawing::Size(342, 45);
			this->textbox->TabIndex = 0;
			this->textbox->Text = L"0.0";
			this->textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textbox->TextChanged += gcnew System::EventHandler(this, &MyForm::textbox_TextChanged);
			// 
			// backbtn
			// 
			this->backbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backbtn->Font = (gcnew System::Drawing::Font(L"Wingdings", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->backbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->backbtn->Location = System::Drawing::Point(16, 122);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(81, 60);
			this->backbtn->TabIndex = 1;
			this->backbtn->Text = L"";
			this->backbtn->UseVisualStyleBackColor = true;
			this->backbtn->Click += gcnew System::EventHandler(this, &MyForm::backbtn_Click);
			// 
			// cbtn
			// 
			this->cbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->cbtn->Location = System::Drawing::Point(103, 122);
			this->cbtn->Name = L"cbtn";
			this->cbtn->Size = System::Drawing::Size(81, 60);
			this->cbtn->TabIndex = 2;
			this->cbtn->Text = L"C";
			this->cbtn->UseVisualStyleBackColor = true;
			this->cbtn->Click += gcnew System::EventHandler(this, &MyForm::cbtn_Click);
			// 
			// cebtn
			// 
			this->cebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cebtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->cebtn->Location = System::Drawing::Point(190, 122);
			this->cebtn->Name = L"cebtn";
			this->cebtn->Size = System::Drawing::Size(81, 60);
			this->cebtn->TabIndex = 3;
			this->cebtn->Text = L"CE";
			this->cebtn->UseVisualStyleBackColor = true;
			this->cebtn->Click += gcnew System::EventHandler(this, &MyForm::cebtn_Click);
			// 
			// pusminusbtn
			// 
			this->pusminusbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pusminusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pusminusbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pusminusbtn->Location = System::Drawing::Point(277, 122);
			this->pusminusbtn->Name = L"pusminusbtn";
			this->pusminusbtn->Size = System::Drawing::Size(81, 60);
			this->pusminusbtn->TabIndex = 4;
			this->pusminusbtn->Text = L"±";
			this->pusminusbtn->UseVisualStyleBackColor = true;
			this->pusminusbtn->Click += gcnew System::EventHandler(this, &MyForm::pusminusbtn_Click);
			// 
			// plusbtn
			// 
			this->plusbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->plusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->plusbtn->Location = System::Drawing::Point(277, 188);
			this->plusbtn->Name = L"plusbtn";
			this->plusbtn->Size = System::Drawing::Size(81, 60);
			this->plusbtn->TabIndex = 8;
			this->plusbtn->Text = L"+";
			this->plusbtn->UseVisualStyleBackColor = true;
			this->plusbtn->Click += gcnew System::EventHandler(this, &MyForm::ArithematicOP);
			// 
			// ninebtn
			// 
			this->ninebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ninebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ninebtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ninebtn->Location = System::Drawing::Point(190, 188);
			this->ninebtn->Name = L"ninebtn";
			this->ninebtn->Size = System::Drawing::Size(81, 60);
			this->ninebtn->TabIndex = 7;
			this->ninebtn->Text = L"9";
			this->ninebtn->UseVisualStyleBackColor = true;
			this->ninebtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// eightbtn
			// 
			this->eightbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eightbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->eightbtn->Location = System::Drawing::Point(103, 188);
			this->eightbtn->Name = L"eightbtn";
			this->eightbtn->Size = System::Drawing::Size(81, 60);
			this->eightbtn->TabIndex = 6;
			this->eightbtn->Text = L"8";
			this->eightbtn->UseVisualStyleBackColor = true;
			this->eightbtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// sevenbtn
			// 
			this->sevenbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sevenbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sevenbtn->Location = System::Drawing::Point(16, 188);
			this->sevenbtn->Name = L"sevenbtn";
			this->sevenbtn->Size = System::Drawing::Size(81, 60);
			this->sevenbtn->TabIndex = 5;
			this->sevenbtn->Text = L"7";
			this->sevenbtn->UseVisualStyleBackColor = true;
			this->sevenbtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// minusbtn
			// 
			this->minusbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->minusbtn->Location = System::Drawing::Point(277, 254);
			this->minusbtn->Name = L"minusbtn";
			this->minusbtn->Size = System::Drawing::Size(81, 60);
			this->minusbtn->TabIndex = 12;
			this->minusbtn->Text = L"-";
			this->minusbtn->UseVisualStyleBackColor = true;
			this->minusbtn->Click += gcnew System::EventHandler(this, &MyForm::ArithematicOP);
			// 
			// sixbtn
			// 
			this->sixbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sixbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sixbtn->Location = System::Drawing::Point(190, 254);
			this->sixbtn->Name = L"sixbtn";
			this->sixbtn->Size = System::Drawing::Size(81, 60);
			this->sixbtn->TabIndex = 11;
			this->sixbtn->Text = L"6";
			this->sixbtn->UseVisualStyleBackColor = true;
			this->sixbtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// fivebtn
			// 
			this->fivebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fivebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fivebtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->fivebtn->Location = System::Drawing::Point(103, 254);
			this->fivebtn->Name = L"fivebtn";
			this->fivebtn->Size = System::Drawing::Size(81, 60);
			this->fivebtn->TabIndex = 10;
			this->fivebtn->Text = L"5";
			this->fivebtn->UseVisualStyleBackColor = true;
			this->fivebtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// fourbtn
			// 
			this->fourbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fourbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->fourbtn->Location = System::Drawing::Point(16, 254);
			this->fourbtn->Name = L"fourbtn";
			this->fourbtn->Size = System::Drawing::Size(81, 60);
			this->fourbtn->TabIndex = 9;
			this->fourbtn->Text = L"4";
			this->fourbtn->UseVisualStyleBackColor = true;
			this->fourbtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// multiplybtn
			// 
			this->multiplybtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiplybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplybtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->multiplybtn->Location = System::Drawing::Point(277, 320);
			this->multiplybtn->Name = L"multiplybtn";
			this->multiplybtn->Size = System::Drawing::Size(81, 60);
			this->multiplybtn->TabIndex = 16;
			this->multiplybtn->Text = L"*";
			this->multiplybtn->UseVisualStyleBackColor = true;
			this->multiplybtn->Click += gcnew System::EventHandler(this, &MyForm::ArithematicOP);
			// 
			// threebtn
			// 
			this->threebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->threebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threebtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->threebtn->Location = System::Drawing::Point(190, 320);
			this->threebtn->Name = L"threebtn";
			this->threebtn->Size = System::Drawing::Size(81, 60);
			this->threebtn->TabIndex = 15;
			this->threebtn->Text = L"3";
			this->threebtn->UseVisualStyleBackColor = true;
			this->threebtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// twobtn
			// 
			this->twobtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->twobtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twobtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->twobtn->Location = System::Drawing::Point(103, 320);
			this->twobtn->Name = L"twobtn";
			this->twobtn->Size = System::Drawing::Size(81, 60);
			this->twobtn->TabIndex = 14;
			this->twobtn->Text = L"2";
			this->twobtn->UseVisualStyleBackColor = true;
			this->twobtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// onebtn
			// 
			this->onebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->onebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->onebtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->onebtn->Location = System::Drawing::Point(16, 320);
			this->onebtn->Name = L"onebtn";
			this->onebtn->Size = System::Drawing::Size(81, 60);
			this->onebtn->TabIndex = 13;
			this->onebtn->Text = L"1";
			this->onebtn->UseVisualStyleBackColor = true;
			this->onebtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// dividebtn
			// 
			this->dividebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dividebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dividebtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dividebtn->Location = System::Drawing::Point(277, 386);
			this->dividebtn->Name = L"dividebtn";
			this->dividebtn->Size = System::Drawing::Size(81, 60);
			this->dividebtn->TabIndex = 20;
			this->dividebtn->Text = L"/";
			this->dividebtn->UseVisualStyleBackColor = true;
			this->dividebtn->Click += gcnew System::EventHandler(this, &MyForm::ArithematicOP);
			// 
			// equalbtn
			// 
			this->equalbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equalbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->equalbtn->Location = System::Drawing::Point(190, 386);
			this->equalbtn->Name = L"equalbtn";
			this->equalbtn->Size = System::Drawing::Size(81, 60);
			this->equalbtn->TabIndex = 19;
			this->equalbtn->Text = L"=";
			this->equalbtn->UseVisualStyleBackColor = true;
			this->equalbtn->Click += gcnew System::EventHandler(this, &MyForm::equalbtn_Click);
			// 
			// dotbtn
			// 
			this->dotbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dotbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dotbtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->dotbtn->Location = System::Drawing::Point(103, 386);
			this->dotbtn->Name = L"dotbtn";
			this->dotbtn->Size = System::Drawing::Size(81, 60);
			this->dotbtn->TabIndex = 18;
			this->dotbtn->Text = L".";
			this->dotbtn->UseVisualStyleBackColor = true;
			this->dotbtn->Click += gcnew System::EventHandler(this, &MyForm::dotbtn_Click);
			// 
			// zerobtn
			// 
			this->zerobtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zerobtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zerobtn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->zerobtn->Location = System::Drawing::Point(16, 386);
			this->zerobtn->Name = L"zerobtn";
			this->zerobtn->Size = System::Drawing::Size(81, 60);
			this->zerobtn->TabIndex = 17;
			this->zerobtn->Text = L"0";
			this->zerobtn->UseVisualStyleBackColor = true;
			this->zerobtn->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(376, 481);
			this->Controls->Add(this->dividebtn);
			this->Controls->Add(this->equalbtn);
			this->Controls->Add(this->dotbtn);
			this->Controls->Add(this->zerobtn);
			this->Controls->Add(this->multiplybtn);
			this->Controls->Add(this->threebtn);
			this->Controls->Add(this->twobtn);
			this->Controls->Add(this->onebtn);
			this->Controls->Add(this->minusbtn);
			this->Controls->Add(this->sixbtn);
			this->Controls->Add(this->fivebtn);
			this->Controls->Add(this->fourbtn);
			this->Controls->Add(this->plusbtn);
			this->Controls->Add(this->ninebtn);
			this->Controls->Add(this->eightbtn);
			this->Controls->Add(this->sevenbtn);
			this->Controls->Add(this->pusminusbtn);
			this->Controls->Add(this->cebtn);
			this->Controls->Add(this->cbtn);
			this->Controls->Add(this->backbtn);
			this->Controls->Add(this->textbox);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstnum, secondnum, ans;
		String^ charOP;

	private: System::Void NumberOnly(System::Object^ sender, System::EventArgs^ e) {
		Button^ numb = safe_cast<Button^>(sender);
		if (textbox->Text == "0")
		{
			textbox->Text = numb->Text;
		}
		else
		{
			textbox->Text = textbox->Text + numb->Text;
		}
	}

private: System::Void ArithematicOP(System::Object^ sender, System::EventArgs^ e) {
	Button^ Aop = safe_cast<Button^>(sender);
	firstnum = Double::Parse(textbox->Text);
	textbox->Text = "";
	charOP = Aop->Text;
}
private: System::Void cbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text = "0";
}
private: System::Void cebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text = "0";
}
private: System::Void dotbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textbox->Text->Contains("."))
	{
		textbox->Text = textbox->Text + ".";
	}
}
private: System::Void backbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text->Length > 0)
	{
		textbox->Text = textbox->Text->Remove(textbox->Text->Length -1, 1);
	}
}
private: System::Void textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text=="")
	{
		textbox->Text = "0";
	}
}
private: System::Void pusminusbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text->Contains("-"))
	{
		textbox->Text = textbox->Text->Remove(0, 1);
	}
	else
	{
		textbox->Text = "-" + textbox->Text;
	}
}

private: System::Void equalbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = Double::Parse(textbox->Text);
	if (charOP == "+")
	{
		ans = firstnum + secondnum;
		textbox->Text = System::Convert::ToString(ans);
	}
	else if (charOP == "-")
	{
		ans = firstnum - secondnum;
		textbox->Text = System::Convert::ToString(ans);
	}
	else if (charOP == "*")
	{
		ans = firstnum * secondnum;
		textbox->Text = System::Convert::ToString(ans);
	}
	else if (charOP == "/")
	{
		ans = firstnum / secondnum;
		textbox->Text = System::Convert::ToString(ans);
	}
}
};
}
