#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Tree.cpp"
#include <chrono>
#include <sstream>

using namespace std;

namespace Courseprog {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;












	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void) {
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series28 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series29 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series30 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series31 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series32 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series33 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			   System::Windows::Forms::DataVisualization::Charting::Legend^ legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series34 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series35 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   System::Windows::Forms::DataVisualization::Charting::Series^ series36 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   this->tabPage2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->tabPage3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   this->tabControl1->Location = System::Drawing::Point(1, 3);
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->tabControl1->Size = System::Drawing::Size(1140, 537);
			   this->tabControl1->TabIndex = 0;
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->textBox1);
			   this->tabPage1->Controls->Add(this->label6);
			   this->tabPage1->Controls->Add(this->numericUpDown2);
			   this->tabPage1->Controls->Add(this->numericUpDown1);
			   this->tabPage1->Controls->Add(this->label2);
			   this->tabPage1->Controls->Add(this->label1);
			   this->tabPage1->Controls->Add(this->button1);
			   this->tabPage1->Location = System::Drawing::Point(4, 25);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(1132, 508);
			   this->tabPage1->TabIndex = 0;
			   this->tabPage1->Text = L"Страница ввода";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox1->Location = System::Drawing::Point(254, 96);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(599, 39);
			   this->textBox1->TabIndex = 6;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->Location = System::Drawing::Point(423, 34);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(230, 33);
			   this->label6->TabIndex = 5;
			   this->label6->Text = L"Состояние поиска";
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->Location = System::Drawing::Point(789, 297);
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(228, 22);
			   this->numericUpDown2->TabIndex = 4;
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->Location = System::Drawing::Point(124, 297);
			   this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(228, 22);
			   this->numericUpDown1->TabIndex = 3;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(723, 242);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(347, 33);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Максимальная длина ключа";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(118, 244);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(241, 31);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Количество ключей";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(468, 362);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(169, 56);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Начать поиск";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->dataGridView1);
			   this->tabPage2->Location = System::Drawing::Point(4, 25);
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage2->Size = System::Drawing::Size(1132, 508);
			   this->tabPage2->TabIndex = 1;
			   this->tabPage2->Text = L"Таблица";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToAddRows = false;
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->Column1,
					   this->Column2, this->Column3
			   });
			   this->dataGridView1->Location = System::Drawing::Point(-3, 8);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 150;
			   this->dataGridView1->RowTemplate->Height = 30;
			   this->dataGridView1->Size = System::Drawing::Size(1129, 504);
			   this->dataGridView1->TabIndex = 0;
			   // 
			   // Column1
			   // 
			   this->Column1->FillWeight = 300;
			   this->Column1->HeaderText = L"Время поиска ключей";
			   this->Column1->MinimumWidth = 6;
			   this->Column1->Name = L"Column1";
			   this->Column1->ReadOnly = true;
			   this->Column1->Width = 233;
			   // 
			   // Column2
			   // 
			   this->Column2->HeaderText = L"Среднее число сравнений";
			   this->Column2->MinimumWidth = 6;
			   this->Column2->Name = L"Column2";
			   this->Column2->ReadOnly = true;
			   this->Column2->Width = 233;
			   // 
			   // Column3
			   // 
			   this->Column3->HeaderText = L"Количество найденных ключей";
			   this->Column3->MinimumWidth = 6;
			   this->Column3->Name = L"Column3";
			   this->Column3->ReadOnly = true;
			   this->Column3->Width = 233;
			   // 
			   // tabPage3
			   // 
			   this->tabPage3->Controls->Add(this->label5);
			   this->tabPage3->Controls->Add(this->label4);
			   this->tabPage3->Controls->Add(this->label3);
			   this->tabPage3->Controls->Add(this->chart3);
			   this->tabPage3->Controls->Add(this->chart2);
			   this->tabPage3->Controls->Add(this->chart1);
			   this->tabPage3->Location = System::Drawing::Point(4, 25);
			   this->tabPage3->Name = L"tabPage3";
			   this->tabPage3->Size = System::Drawing::Size(1132, 508);
			   this->tabPage3->TabIndex = 2;
			   this->tabPage3->Text = L"Графики";
			   this->tabPage3->UseVisualStyleBackColor = true;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->Location = System::Drawing::Point(789, 80);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(335, 27);
			   this->label5->TabIndex = 5;
			   this->label5->Text = L"Количество найденных ключей";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->Location = System::Drawing::Point(417, 80);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(278, 27);
			   this->label4->TabIndex = 4;
			   this->label4->Text = L"Среднее число сравнений";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->Location = System::Drawing::Point(49, 80);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(238, 27);
			   this->label3->TabIndex = 3;
			   this->label3->Text = L"Время поиска ключей";
			   // 
			   // chart3
			   // 
			   this->chart3->BackColor = System::Drawing::Color::LightGray;
			   chartArea10->Name = L"ChartArea1";
			   this->chart3->ChartAreas->Add(chartArea10);
			   legend10->Name = L"Legend1";
			   this->chart3->Legends->Add(legend10);
			   this->chart3->Location = System::Drawing::Point(756, 125);
			   this->chart3->Name = L"chart3";
			   series28->ChartArea = L"ChartArea1";
			   series28->Color = System::Drawing::Color::Lime;
			   series28->Legend = L"Legend1";
			   series28->Name = L"Упор. массив";
			   series29->ChartArea = L"ChartArea1";
			   series29->Color = System::Drawing::Color::Red;
			   series29->Legend = L"Legend1";
			   series29->Name = L"Хеш-таблица";
			   series30->ChartArea = L"ChartArea1";
			   series30->Color = System::Drawing::Color::Blue;
			   series30->Legend = L"Legend1";
			   series30->Name = L"Цифр. дерево";
			   this->chart3->Series->Add(series28);
			   this->chart3->Series->Add(series29);
			   this->chart3->Series->Add(series30);
			   this->chart3->Size = System::Drawing::Size(373, 300);
			   this->chart3->TabIndex = 2;
			   this->chart3->Text = L"chart3";
			   // 
			   // chart2
			   // 
			   this->chart2->BackColor = System::Drawing::Color::LightGray;
			   chartArea11->Name = L"ChartArea1";
			   this->chart2->ChartAreas->Add(chartArea11);
			   legend11->Name = L"Legend1";
			   this->chart2->Legends->Add(legend11);
			   this->chart2->Location = System::Drawing::Point(366, 125);
			   this->chart2->Name = L"chart2";
			   series31->ChartArea = L"ChartArea1";
			   series31->Color = System::Drawing::Color::Lime;
			   series31->Legend = L"Legend1";
			   series31->Name = L"Упор. массив";
			   series31->YValuesPerPoint = 2;
			   series32->ChartArea = L"ChartArea1";
			   series32->Color = System::Drawing::Color::Red;
			   series32->Legend = L"Legend1";
			   series32->Name = L"Хеш-таблица";
			   series33->ChartArea = L"ChartArea1";
			   series33->Color = System::Drawing::Color::Blue;
			   series33->Legend = L"Legend1";
			   series33->Name = L"Цифр. дерево";
			   this->chart2->Series->Add(series31);
			   this->chart2->Series->Add(series32);
			   this->chart2->Series->Add(series33);
			   this->chart2->Size = System::Drawing::Size(393, 300);
			   this->chart2->TabIndex = 1;
			   this->chart2->Text = L"chart2";
			   // 
			   // chart1
			   // 
			   this->chart1->BackColor = System::Drawing::Color::LightGray;
			   chartArea12->Name = L"ChartArea1";
			   this->chart1->ChartAreas->Add(chartArea12);
			   legend12->Name = L"Legend1";
			   this->chart1->Legends->Add(legend12);
			   this->chart1->Location = System::Drawing::Point(0, 125);
			   this->chart1->Name = L"chart1";
			   series34->ChartArea = L"ChartArea1";
			   series34->Color = System::Drawing::Color::Lime;
			   series34->Legend = L"Legend1";
			   series34->Name = L"Упор. массив";
			   series35->ChartArea = L"ChartArea1";
			   series35->Color = System::Drawing::Color::Red;
			   series35->Legend = L"Legend1";
			   series35->Name = L"Хеш-таблица";
			   series36->ChartArea = L"ChartArea1";
			   series36->Color = System::Drawing::Color::Blue;
			   series36->Legend = L"Legend1";
			   series36->Name = L"Цифр. дерево";
			   this->chart1->Series->Add(series34);
			   this->chart1->Series->Add(series35);
			   this->chart1->Series->Add(series36);
			   this->chart1->Size = System::Drawing::Size(372, 300);
			   this->chart1->TabIndex = 0;
			   this->chart1->Text = L"chart1";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1141, 539);
			   this->Controls->Add(this->tabControl1);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   this->tabPage2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->tabPage3->ResumeLayout(false);
			   this->tabPage3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   bool search_table_flag = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "Поиск выполняется";
		if (!search_table_flag) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->HeaderCell->Value = "Упорядоченный массив";
			dataGridView1->Rows[0]->HeaderCell->Size.Width = 350;
			dataGridView1->Rows->Add();
			dataGridView1->Rows[1]->HeaderCell->Value = "Хеш таблица";
			dataGridView1->Rows[1]->HeaderCell->Size.Width = 350;
			dataGridView1->Rows->Add();
			dataGridView1->Rows[2]->HeaderCell->Value = "Цифровое дерево";
			dataGridView1->Rows[2]->HeaderCell->Size.Width = 350;
		}
		else {
			chart1->Series["Упор. массив"]->Points->Clear();
			chart1->Series["Хеш-таблица"]->Points->Clear();
			chart1->Series["Цифр. дерево"]->Points->Clear();
			chart2->Series["Упор. массив"]->Points->Clear();
			chart2->Series["Хеш-таблица"]->Points->Clear();
			chart2->Series["Цифр. дерево"]->Points->Clear();
			chart3->Series["Упор. массив"]->Points->Clear();
			chart3->Series["Хеш-таблица"]->Points->Clear();
			chart3->Series["Цифр. дерево"]->Points->Clear();
		}
		search_table_flag = true;
		int N = Convert::ToInt32(numericUpDown1->Value);            //Количество ключей
		int K = Convert::ToInt32(numericUpDown2->Value);			//Максимальный размер ключа
		if (N <= 0 || K <= 0) {
			textBox1->Text = "Введите положительные значения параметров";
			return;
		}
		//Создание массива ключей
		int* arr_Mtemp1 = new int[N];
		//Создание массива поисковых ключей
		int* arr_Mtemp2 = new int[N * 2];
		//Заполнение массива ключей
		int max = pow(10, K);
		for (int i = 0; i < N; ++i)
			arr_Mtemp1[i] = rand() % (max);
		for (int i = 0; i < N - 1; i++) {
			for (int j = (N - 1); j > i; j--) {
				if (arr_Mtemp1[j] < arr_Mtemp1[(j - 1)]) {
					int temp = arr_Mtemp1[j - 1];
					arr_Mtemp1[j - 1] = arr_Mtemp1[j];
					arr_Mtemp1[j] = temp;
				}
			}
		}
		string* arr_M1 = new string[N + 1];
		for (int i = 0; i < N; ++i) {
			arr_M1[i] = to_string(arr_Mtemp1[i]);
		}
		delete[] arr_Mtemp1;
		//Заполнение массива поисковых ключей
		arr_Mtemp2[0] = rand() % 10;
		for (int i = 1; i < N * 2; ++i)
			arr_Mtemp2[i] = rand() % (max);
		for (int i = 0; i < N * 2 - 1; i++) {
			for (int j = (N * 2 - 1); j > i; j--) {
				int temp = arr_Mtemp2[j - 1];
				arr_Mtemp2[j - 1] = arr_Mtemp2[j];
				arr_Mtemp2[j] = temp;
			}
		}
		string* arr_M2 = new string[N * 2];
		for (int i = 0; i < N * 2; ++i) {
			arr_M2[i] = to_string(arr_Mtemp2[i]);
		}
		delete[]arr_Mtemp2;
		vector <vector <string>> vec(N * 2); // Хеш-таблица
		// Метод свёртывания
		for (int i = 0; i < N; ++i) {
			int hesh_address = foldingMethod(stoi(arr_M1[i]), N);
			vec[hesh_address].push_back(arr_M1[i]);
		}
		//Формирование дерева
		Tree* tree = new Tree();
		for (int i = 0; i < N; i++)
			if (!tree->search(arr_M1[i]))
				tree->add(arr_M1[i]);
		//счётчики найденых ключей
		int maskey = 0;
		int hashkey = 0;
		int binkey = 0;
		//счётчики числа сравнений
		long int* mascom = new long int[N * 2];
		long int* hashcom = new long int[N * 2];
		long int* bincom = new long int[N * 2];
		for (int i = 0; i < N * 2; ++i) {
			mascom[i] = 0;
			hashcom[i] = 0;
			bincom[i] = 0;
		}
		// Поиск в упорядоченном массиве
		auto begin_ordered = std::chrono::high_resolution_clock::now();
		for (int i = 0; i < N * 2; ++i) {
			int temp = stol(arr_M2[i]);
			arr_M1[N] = to_string(temp + 1);
			int k = 0;
			while (temp > stol(arr_M1[k])) {
				++k;
				mascom[i]++;
			}
			mascom[i]++;
			if (temp == stol(arr_M1[k])) {
				maskey++;
			}
		}
		auto end_ordered = std::chrono::high_resolution_clock::now();
		auto time_took_ordered = std::chrono::duration_cast<std::chrono::duration < double>>(end_ordered - begin_ordered);
		chart1->Series["Упор. массив"]->Points->AddY(time_took_ordered.count() * 10000);
		dataGridView1->Rows[0]->Cells[0]->Value = (time_took_ordered.count() * 10000);
		//Поиск в хеш-функции
		auto begin_hesh = std::chrono::high_resolution_clock::now();
		for (int i = 0; i < N * 2; ++i) {
			int heshAddress = foldingMethod(stol(arr_M2[i]), N * 2);
			hashcom[i]++;
			for (int j = 0; j < vec[heshAddress].size(); ++j) {
				hashcom[i]++;
				if (arr_M2[i] == vec[heshAddress][j]) {
					hashkey++;
					break;
				}
			}
		}
		auto end_hesh = std::chrono::high_resolution_clock::now();
		auto time_took_hesh = std::chrono::duration_cast<std::chrono::duration < double>>(end_hesh - begin_hesh);
		chart1->Series["Хеш-таблица"]->Points->AddY(time_took_hesh.count() * 10000);
		dataGridView1->Rows[1]->Cells[0]->Value = (time_took_hesh.count() * 10000);
		//Поиск в цифровом дереве
		auto begin_bin = std::chrono::high_resolution_clock::now();
		for (int i = 0; i < N * 2; ++i) {
			string supstr = arr_M2[i];
			if (tree->search(supstr))
				binkey++;
			bincom[i] = tree->get_bincom();
		}
		auto end_bin = std::chrono::high_resolution_clock::now();
		auto time_took_bin = std::chrono::duration_cast<std::chrono::duration < double>>(end_bin - begin_bin);
		chart1->Series["Цифр. дерево"]->Points->AddY(time_took_bin.count() * 10000);
		dataGridView1->Rows[2]->Cells[0]->Value = (time_took_bin.count() * 10000);
		double mascommid = 0;
		double hashcommid = 0;
		double bincommid = 0;
		for (int i = 0; i < N * 2; ++i) {
			mascommid += mascom[i];
			hashcommid += hashcom[i];
			bincommid += bincom[i];
		}
		mascommid = mascommid / (N * 2);
		hashcommid = hashcommid / (N * 2);
		bincommid = bincommid / (N * 2);
		chart2->Series["Упор. массив"]->Points->AddY(mascommid);
		chart2->Series["Хеш-таблица"]->Points->AddY(hashcommid);
		chart2->Series["Цифр. дерево"]->Points->AddY(bincommid);
		dataGridView1->Rows[0]->Cells[1]->Value = (mascommid);
		dataGridView1->Rows[1]->Cells[1]->Value = (hashcommid);
		dataGridView1->Rows[2]->Cells[1]->Value = (bincommid);
		chart3->Series["Упор. массив"]->Points->AddY(maskey);
		chart3->Series["Хеш-таблица"]->Points->AddY(hashkey);
		chart3->Series["Цифр. дерево"]->Points->AddY(binkey);
		dataGridView1->Rows[0]->Cells[2]->Value = (maskey);
		dataGridView1->Rows[1]->Cells[2]->Value = (hashkey);
		dataGridView1->Rows[2]->Cells[2]->Value = (binkey);
		textBox1->Text = "Поиск завершён!";
		//Освобождение памяти
		delete[]arr_M1;
		delete[]arr_M2;
		delete[]mascom;
		delete[]hashcom;
		delete[]bincom;
		tree->clear(tree->get_root());
	}
	public:
		// Метод свёртывания
		int foldingMethod(int key, int n) {
			int hashSum = 0;
			while (key > 0) {
				hashSum += key % n;
				key /= n;
			}
			return hashSum % n;
		}
	};
}
