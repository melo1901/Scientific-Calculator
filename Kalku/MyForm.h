#pragma once
#include <cmath>
#include <algorithm>
#include <string>

namespace Kalku {

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
	private: System::Windows::Forms::Button^ btnLn;
	protected:

	private: System::Windows::Forms::Button^ btnPlusMinus;
	protected:


	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnPoint;
	private: System::Windows::Forms::Button^ btnPlus;





	private: System::Windows::Forms::Button^ btn3;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btntTenX;
	private: System::Windows::Forms::Button^ btnMul;









	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;

	private: System::Windows::Forms::Button^ btnXY;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnSilnia;
	private: System::Windows::Forms::Button^ btnRightB;
	private: System::Windows::Forms::Button^ btnLeftB;
	private: System::Windows::Forms::Button^ btnSquareRoot;

	private: System::Windows::Forms::Button^ btnMod;
	private: System::Windows::Forms::Button^ btnExp;
	private: System::Windows::Forms::Button^ btnAbs;
	private: System::Windows::Forms::Button^ btn1x;
	private: System::Windows::Forms::Button^ btnSquare;
	private: System::Windows::Forms::Button^ btnCE;














	private: System::Windows::Forms::Button^ btnC;

	private: System::Windows::Forms::Button^ btnE;

	private: System::Windows::Forms::Button^ btnPi;

	private: System::Windows::Forms::Button^ btnSecond;

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnEquals;

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
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btntTenX = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnXY = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnSilnia = (gcnew System::Windows::Forms::Button());
			this->btnRightB = (gcnew System::Windows::Forms::Button());
			this->btnLeftB = (gcnew System::Windows::Forms::Button());
			this->btnSquareRoot = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnExp = (gcnew System::Windows::Forms::Button());
			this->btnAbs = (gcnew System::Windows::Forms::Button());
			this->btn1x = (gcnew System::Windows::Forms::Button());
			this->btnSquare = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->btnSecond = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnLn
			// 
			this->btnLn->Location = System::Drawing::Point(9, 323);
			this->btnLn->Margin = System::Windows::Forms::Padding(2);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(56, 33);
			this->btnLn->TabIndex = 0;
			this->btnLn->Text = L"ln";
			this->btnLn->UseVisualStyleBackColor = true;
			this->btnLn->Click += gcnew System::EventHandler(this, &MyForm::btnLn_Click);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Location = System::Drawing::Point(70, 323);
			this->btnPlusMinus->Margin = System::Windows::Forms::Padding(2);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(56, 33);
			this->btnPlusMinus->TabIndex = 1;
			this->btnPlusMinus->Text = L"+/-";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::btnPlusMinus_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(130, 323);
			this->btn0->Margin = System::Windows::Forms::Padding(2);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(56, 33);
			this->btn0->TabIndex = 2;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnPoint
			// 
			this->btnPoint->Location = System::Drawing::Point(191, 323);
			this->btnPoint->Margin = System::Windows::Forms::Padding(2);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(56, 33);
			this->btnPoint->TabIndex = 3;
			this->btnPoint->Text = L",";
			this->btnPoint->UseVisualStyleBackColor = true;
			this->btnPoint->Click += gcnew System::EventHandler(this, &MyForm::btnPoint_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Location = System::Drawing::Point(252, 323);
			this->btnEquals->Margin = System::Windows::Forms::Padding(2);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(56, 33);
			this->btnEquals->TabIndex = 4;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btEquals);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(252, 284);
			this->btnPlus->Margin = System::Windows::Forms::Padding(2);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(56, 33);
			this->btnPlus->TabIndex = 9;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(191, 284);
			this->btn3->Margin = System::Windows::Forms::Padding(2);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(56, 33);
			this->btn3->TabIndex = 8;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(130, 284);
			this->btn2->Margin = System::Windows::Forms::Padding(2);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(56, 33);
			this->btn2->TabIndex = 7;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(70, 284);
			this->btn1->Margin = System::Windows::Forms::Padding(2);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(56, 33);
			this->btn1->TabIndex = 6;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnLog
			// 
			this->btnLog->Location = System::Drawing::Point(9, 284);
			this->btnLog->Margin = System::Windows::Forms::Padding(2);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(56, 33);
			this->btnLog->TabIndex = 5;
			this->btnLog->Text = L"log";
			this->btnLog->UseVisualStyleBackColor = true;
			this->btnLog->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(252, 246);
			this->btnMinus->Margin = System::Windows::Forms::Padding(2);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(56, 33);
			this->btnMinus->TabIndex = 14;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(191, 246);
			this->btn6->Margin = System::Windows::Forms::Padding(2);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(56, 33);
			this->btn6->TabIndex = 13;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(130, 246);
			this->btn5->Margin = System::Windows::Forms::Padding(2);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(56, 33);
			this->btn5->TabIndex = 12;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(70, 246);
			this->btn4->Margin = System::Windows::Forms::Padding(2);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(56, 33);
			this->btn4->TabIndex = 11;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btntTenX
			// 
			this->btntTenX->Location = System::Drawing::Point(9, 246);
			this->btntTenX->Margin = System::Windows::Forms::Padding(2);
			this->btntTenX->Name = L"btntTenX";
			this->btntTenX->Size = System::Drawing::Size(56, 33);
			this->btntTenX->TabIndex = 10;
			this->btntTenX->Text = L"10^x";
			this->btntTenX->UseVisualStyleBackColor = true;
			this->btntTenX->Click += gcnew System::EventHandler(this, &MyForm::btn_ten_power);
			// 
			// btnMul
			// 
			this->btnMul->Location = System::Drawing::Point(252, 208);
			this->btnMul->Margin = System::Windows::Forms::Padding(2);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(56, 33);
			this->btnMul->TabIndex = 19;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(191, 208);
			this->btn9->Margin = System::Windows::Forms::Padding(2);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(56, 33);
			this->btn9->TabIndex = 18;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(130, 208);
			this->btn8->Margin = System::Windows::Forms::Padding(2);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(56, 33);
			this->btn8->TabIndex = 17;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(70, 208);
			this->btn7->Margin = System::Windows::Forms::Padding(2);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(56, 33);
			this->btn7->TabIndex = 16;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnXY
			// 
			this->btnXY->Location = System::Drawing::Point(9, 208);
			this->btnXY->Margin = System::Windows::Forms::Padding(2);
			this->btnXY->Name = L"btnXY";
			this->btnXY->Size = System::Drawing::Size(56, 33);
			this->btnXY->TabIndex = 15;
			this->btnXY->Text = L"x^y";
			this->btnXY->UseVisualStyleBackColor = true;
			this->btnXY->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(252, 167);
			this->btnDiv->Margin = System::Windows::Forms::Padding(2);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(56, 33);
			this->btnDiv->TabIndex = 24;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btnSilnia
			// 
			this->btnSilnia->Location = System::Drawing::Point(191, 167);
			this->btnSilnia->Margin = System::Windows::Forms::Padding(2);
			this->btnSilnia->Name = L"btnSilnia";
			this->btnSilnia->Size = System::Drawing::Size(56, 33);
			this->btnSilnia->TabIndex = 23;
			this->btnSilnia->Text = L"n!";
			this->btnSilnia->UseVisualStyleBackColor = true;
			this->btnSilnia->Click += gcnew System::EventHandler(this, &MyForm::factorial);
			// 
			// btnRightB
			// 
			this->btnRightB->Location = System::Drawing::Point(130, 167);
			this->btnRightB->Margin = System::Windows::Forms::Padding(2);
			this->btnRightB->Name = L"btnRightB";
			this->btnRightB->Size = System::Drawing::Size(56, 33);
			this->btnRightB->TabIndex = 22;
			this->btnRightB->Text = L")";
			this->btnRightB->UseVisualStyleBackColor = true;
			this->btnRightB->Click += gcnew System::EventHandler(this, &MyForm::right_bracket);
			// 
			// btnLeftB
			// 
			this->btnLeftB->Location = System::Drawing::Point(70, 167);
			this->btnLeftB->Margin = System::Windows::Forms::Padding(2);
			this->btnLeftB->Name = L"btnLeftB";
			this->btnLeftB->Size = System::Drawing::Size(56, 33);
			this->btnLeftB->TabIndex = 21;
			this->btnLeftB->Text = L"(";
			this->btnLeftB->UseVisualStyleBackColor = true;
			this->btnLeftB->Click += gcnew System::EventHandler(this, &MyForm::left_bracket);
			// 
			// btnSquareRoot
			// 
			this->btnSquareRoot->Location = System::Drawing::Point(9, 167);
			this->btnSquareRoot->Margin = System::Windows::Forms::Padding(2);
			this->btnSquareRoot->Name = L"btnSquareRoot";
			this->btnSquareRoot->Size = System::Drawing::Size(56, 33);
			this->btnSquareRoot->TabIndex = 20;
			this->btnSquareRoot->Text = L"x^(1/2)";
			this->btnSquareRoot->UseVisualStyleBackColor = true;
			this->btnSquareRoot->Click += gcnew System::EventHandler(this, &MyForm::square_root);
			// 
			// btnMod
			// 
			this->btnMod->Location = System::Drawing::Point(252, 128);
			this->btnMod->Margin = System::Windows::Forms::Padding(2);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(56, 33);
			this->btnMod->TabIndex = 29;
			this->btnMod->Text = L"mod";
			this->btnMod->UseVisualStyleBackColor = true;
			this->btnMod->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btnExp
			// 
			this->btnExp->Location = System::Drawing::Point(191, 128);
			this->btnExp->Margin = System::Windows::Forms::Padding(2);
			this->btnExp->Name = L"btnExp";
			this->btnExp->Size = System::Drawing::Size(56, 33);
			this->btnExp->TabIndex = 28;
			this->btnExp->Text = L"exp";
			this->btnExp->UseVisualStyleBackColor = true;
			this->btnExp->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btnAbs
			// 
			this->btnAbs->Location = System::Drawing::Point(130, 128);
			this->btnAbs->Margin = System::Windows::Forms::Padding(2);
			this->btnAbs->Name = L"btnAbs";
			this->btnAbs->Size = System::Drawing::Size(56, 33);
			this->btnAbs->TabIndex = 27;
			this->btnAbs->Text = L"|x|";
			this->btnAbs->UseVisualStyleBackColor = true;
			this->btnAbs->Click += gcnew System::EventHandler(this, &MyForm::mod);
			// 
			// btn1x
			// 
			this->btn1x->Location = System::Drawing::Point(70, 128);
			this->btn1x->Margin = System::Windows::Forms::Padding(2);
			this->btn1x->Name = L"btn1x";
			this->btn1x->Size = System::Drawing::Size(56, 33);
			this->btn1x->TabIndex = 26;
			this->btn1x->Text = L"1/x";
			this->btn1x->UseVisualStyleBackColor = true;
			this->btn1x->Click += gcnew System::EventHandler(this, &MyForm::fraction);
			// 
			// btnSquare
			// 
			this->btnSquare->Location = System::Drawing::Point(9, 128);
			this->btnSquare->Margin = System::Windows::Forms::Padding(2);
			this->btnSquare->Name = L"btnSquare";
			this->btnSquare->Size = System::Drawing::Size(56, 33);
			this->btnSquare->TabIndex = 25;
			this->btnSquare->Text = L"x^2";
			this->btnSquare->UseVisualStyleBackColor = true;
			this->btnSquare->Click += gcnew System::EventHandler(this, &MyForm::power_two);
			// 
			// btnCE
			// 
			this->btnCE->Location = System::Drawing::Point(252, 90);
			this->btnCE->Margin = System::Windows::Forms::Padding(2);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(56, 33);
			this->btnCE->TabIndex = 34;
			this->btnCE->Text = L"BS";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnBS_Click);
			// 
			// btnC
			// 
			this->btnC->Location = System::Drawing::Point(191, 90);
			this->btnC->Margin = System::Windows::Forms::Padding(2);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(56, 33);
			this->btnC->TabIndex = 33;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnE
			// 
			this->btnE->Location = System::Drawing::Point(130, 90);
			this->btnE->Margin = System::Windows::Forms::Padding(2);
			this->btnE->Name = L"btnE";
			this->btnE->Size = System::Drawing::Size(56, 33);
			this->btnE->TabIndex = 32;
			this->btnE->Text = L"e";
			this->btnE->UseVisualStyleBackColor = true;
			this->btnE->Click += gcnew System::EventHandler(this, &MyForm::e);
			// 
			// btnPi
			// 
			this->btnPi->Location = System::Drawing::Point(70, 90);
			this->btnPi->Margin = System::Windows::Forms::Padding(2);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(56, 33);
			this->btnPi->TabIndex = 31;
			this->btnPi->Text = L"π";
			this->btnPi->UseVisualStyleBackColor = true;
			this->btnPi->Click += gcnew System::EventHandler(this, &MyForm::pi);
			// 
			// btnSecond
			// 
			this->btnSecond->Location = System::Drawing::Point(9, 90);
			this->btnSecond->Margin = System::Windows::Forms::Padding(2);
			this->btnSecond->Name = L"btnSecond";
			this->btnSecond->Size = System::Drawing::Size(56, 33);
			this->btnSecond->TabIndex = 30;
			this->btnSecond->Text = L"2nd";
			this->btnSecond->UseVisualStyleBackColor = true;
			this->btnSecond->Click += gcnew System::EventHandler(this, &MyForm::btn_Second);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::Window;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtDisplay->Location = System::Drawing::Point(9, 10);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(2);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(300, 76);
			this->txtDisplay->TabIndex = 35;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 366);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnE);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->btnSecond);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnExp);
			this->Controls->Add(this->btnAbs);
			this->Controls->Add(this->btn1x);
			this->Controls->Add(this->btnSquare);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnSilnia);
			this->Controls->Add(this->btnRightB);
			this->Controls->Add(this->btnLeftB);
			this->Controls->Add(this->btnSquareRoot);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnXY);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btntTenX);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btnLn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double jeden, dwa, wynik;
		long double numb_e = 2.71828182845904;
		long double numb_pi = 3.14159265358979;
		String^ op;

#pragma endregion
		double log_a_to_base_b(double a, double b)
		{
			return log2(a) / log2(b);
		}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {
	Button^ numb = safe_cast<Button^> (sender);
	if (txtDisplay->Text == "0")
		txtDisplay->Text = numb->Text;
	else
		txtDisplay->Text = txtDisplay->Text + numb->Text;
}
private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {
	Button^ Aop = safe_cast<Button^>(sender);
	jeden = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	op = Aop->Text;
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
	wynik = 0;
	jeden = 0;
	dwa = 0;
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
 	txtDisplay->Text = "0";
}
private: System::Void btnPoint_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(","))
	{
		txtDisplay->Text = txtDisplay->Text + ",";
	}
}
private: System::Void btnBS_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length -1, 1);
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text == "")
	{
		txtDisplay->Text = "0";
	}
}
private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void btEquals(System::Object^ sender, System::EventArgs^ e) {
	dwa = Double::Parse(txtDisplay->Text);
	
	if (op == "+")
	{
		wynik = jeden + dwa;
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "-")
	{
		wynik = jeden - dwa;
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "*")
	{
		wynik = jeden * dwa;
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "/")
	{
		wynik = jeden / dwa;
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "exp")
	{
		double temp = pow(10, dwa);
		wynik = jeden * temp;
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "mod")
	{
		int jjeden, ddwa, wwynik;
		jjeden = Convert::ToInt32(jeden);
		ddwa = Convert::ToInt32(dwa);
		wwynik = jjeden%ddwa;
		txtDisplay->Text = System::Convert::ToString(wwynik);
	}
	else if (op == "logy(x)")
	{
		wynik = log_a_to_base_b(jeden, dwa);
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "log")
	{
		wynik = log_a_to_base_b(System::Convert::ToDouble(txtDisplay->Text),10);
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "x^y")
	{
		wynik = pow(jeden,dwa);
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else if (op == "x^(1/y)")
	{
		wynik = pow(jeden,(1/dwa));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
}
private: System::Void btn_Second(System::Object^ sender, System::EventArgs^ e) {
	if (btntTenX->Text->Contains("10^x"))
	{
		btnLn->Text = "e^x";
		btnLog->Text = "logy(x)";
		btntTenX->Text = "2^x";
		btnXY->Text = "x^(1/y)";
		btnSquareRoot->Text = "x^(1/3)";
		btnSquare->Text = "x^3";
	}
	else
	{
		btnLn->Text = "ln";
		btnLog->Text = "log";
		btntTenX->Text = "10^x";
		btnXY->Text = "x^y";
		btnSquareRoot->Text = "x^(1/2)";
		btnSquare->Text = "x^2";
	}
}
private: System::Void factorial(System::Object^ sender, System::EventArgs^ e) {
		long double factorial = 1.0;
		for (int i = 1; i <= System::Convert::ToDouble(txtDisplay->Text); ++i) {
			factorial *= i;
		}
		wynik = factorial;
		txtDisplay->Text = System::Convert::ToString(wynik);
}
private: System::Void pi(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = ("3,1415926535897932384626433832795");
}
private: System::Void e(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = ("2,7182818284590452353602874713527");
}
private: System::Void left_bracket(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = "(";
	}
	else
		txtDisplay->Text = txtDisplay->Text + "(";
}
private: System::Void right_bracket(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = txtDisplay->Text + ")";
}
private: System::Void fraction(System::Object^ sender, System::EventArgs^ e) {
	wynik = 1 / System::Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(wynik);
}
private: System::Void mod(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
}
private: System::Void btnLn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (btnLn->Text->Contains("ln"))
	{
		wynik = log(System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else
	{
		wynik = pow(numb_e,System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
}
private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
	if (btnLn->Text->Contains("log"))
	{
		wynik = log2(System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else
	{
		wynik = log_a_to_base_b(jeden, dwa);
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	
}
private: System::Void btn_ten_power(System::Object^ sender, System::EventArgs^ e) {
	if (btntTenX->Text->Contains("10^x"))
	{
		wynik = pow(10,System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else
	{
		wynik = pow(2, System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
}
private: System::Void square_root(System::Object^ sender, System::EventArgs^ e) {
	if (btnSquareRoot->Text->Contains("x^(1/2)"))
	{
		wynik = sqrt(System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else
	{
		wynik = cbrt(System::Convert::ToDouble(txtDisplay->Text));
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
}
private: System::Void power_two(System::Object^ sender, System::EventArgs^ e) {
	if (btnSquare->Text->Contains("x^2"))
	{
		wynik = pow(System::Convert::ToDouble(txtDisplay->Text),2);
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
	else
	{
		wynik = pow(System::Convert::ToDouble(txtDisplay->Text),3);
		txtDisplay->Text = System::Convert::ToString(wynik);
	}
}
};
}
 