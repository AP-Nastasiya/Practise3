﻿#pragma once
#include<cmath>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(16, 211);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->IsVisibleInLegend = false;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series3->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(469, 207);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(343, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(290, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(290, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(290, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(371, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(371, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(371, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 30);
			this->button1->TabIndex = 9;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(295, 471);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 551);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, xn, xk, xh, y;
		Series^ plot1 = chart1->Series[0];
		//Очистка компонента Chart1
		plot1->Points->Clear();
		//Проверка, что введены данные xn, xk, xh и их преобразование в переменные типа Double
		if ((textBox1->Text != "") && (textBox2->Text != "")
			&& (textBox3->Text != ""))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			//Проверка правильности ввода данных
			if ((xn >= xk) || (xh > (xk - xn)))
			{
				MessageBox::Show("Данные заполнены неверно", "Ошибкаввода данных",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				while (x <= xk)
				{
					if (x <= 0) y = pow(x, 4) + 2 * pow(x, 3) - x;
					else
						if (x > 0 && x < 5) y = exp(-x) + pow(x, 1 / 4);
						else y = log10(pow(x, 3) + pow(x, 2));
					//Нанесение точки с координатами Х и У в компоненте Chart1
					plot1->Points->AddXY(x, y);

					x = x + xh;
				}
			}

		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî)
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) { a = false; }
			k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') { a = false; }
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî)
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) { a = false; }
			k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') { a = false; }
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî)
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé
	if (str[t] == ',') { a = false; } while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) { a = false; }
			k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') { a = false; }
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
};
}
