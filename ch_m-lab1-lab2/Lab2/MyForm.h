#pragma once
#include "math.h"
#include "Result.h"
namespace Lab2 {

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button2;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая задача", L"Основная задача" });
			this->comboBox1->Location = System::Drawing::Point(12, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Тестовая задача";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выбор задачи";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(140, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 256);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры модели";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(94, 230);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 17;
			this->textBox9->Text = L"sin(pi*x)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 233);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"f2(x) = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"q2(x) = ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 180);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"k2(x) = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"f1(x) = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"q1(x) = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"k1(x) = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"μ2 = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"μ1 = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"ξ = ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(94, 204);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"x^2";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(94, 177);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"x^2";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(94, 151);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 5;
			this->textBox7->Text = L"1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(94, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 4;
			this->textBox8->Text = L"x";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(94, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"x^2 + 2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(94, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0,3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Location = System::Drawing::Point(140, 294);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры метода";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 22);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 26);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Число \r\nразбиений";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(94, 28);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 9;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 400);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(328, 189);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->AxisX->Maximum = 1;
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(347, 31);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(808, 558);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"chart1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Результаты вычислений";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1167, 601);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №2, вариант 3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double k1(double x);
		double q1(double x);
		double f1(double x);

		double k2(double x);
		double q2(double x);
		double f2(double x);

		double ai(double x, double ksi, double h);
		double di(double x, double ksi, double h);
		double fii(double x, double ksi, double h);

		double ai(double x, double ksi, double h, double k_1, double k_2);
		double di(double x, double ksi, double h, double q_1, double q_2);
		double fii(double x, double ksi, double h, double f_1, double f_2);

		Result^ res = gcnew Result();
		

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			comboBox1->SelectedIndex = 0;
			textBox10->Text = "4";
			textBox1->ReadOnly = true;		textBox2->ReadOnly = true;		textBox3->ReadOnly = true;
			textBox4->ReadOnly = true;		textBox5->ReadOnly = true;		textBox6->ReadOnly = true;
			textBox7->ReadOnly = true;		textBox8->ReadOnly = true;		textBox9->ReadOnly = true;
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			res->dataGridView1->Rows->Clear();

			double ksi = Convert::ToDouble(textBox1->Text);  //1. / sqrt(10);
			double mu1 = Convert::ToDouble(textBox2->Text);
			double mu2 = Convert::ToDouble(textBox3->Text);

			
			int m = Convert::ToInt64(textBox10->Text);
			int n = m + 1;
			double h = 1. / m;

			double x;
			double* v1 = new double[n];
			double* v2 = new double[2 * n - 1];

			double eps = 0.5 * 0.000001;


			switch (comboBox1->SelectedIndex)
			{
				case 1:
				{
					int j = 0;
					while (j < 2)
					{
						double* v = new double[n];
						double* alfa = new double[n];
						double* beta = new double[n];
						double* fi = new double[n];
						x = 0;
						double** matrix = new double* [n];

						for (int i = 0; i < n; i++)
						{
							matrix[i] = new double[3];
						
							fi[i] = fii(x, ksi, h);

							matrix[i][0] = ai(x, ksi, h) / (h * h);
							matrix[i][1] = -1. * ((ai(x, ksi, h) + ai(x + h, ksi, h)) / (h * h) + di(x, ksi, h));
							matrix[i][2] = ai(x + h, ksi, h) / (h * h);

							x += h;
						}

						matrix[0][0] = 0;
						matrix[0][1] = 1;
						matrix[0][2] = 0;

						matrix[n-1][0] = 0;
						matrix[n-1][1] = 1;
						matrix[n-1][2] = 0;

						fi[0] = mu1;
						fi[n - 1] = mu2;

						//-----------------Прмямой ход-----------------//
						alfa[0] = 0;
						beta[0] = fi[0];

						for (int i = 0; i < n - 1; i++)
						{
							alfa[i + 1] = matrix[i][2] / (-1. * matrix[i][1] - matrix[i][0] * alfa[i]);
							beta[i + 1] = (-1. * fi[i] + matrix[i][0] * beta[i]) / (-1. * matrix[i][1] - matrix[i][0] * alfa[i]);
						}

						/*-----------------------------------------------//
						*
						*
						*
						//------------------Обратный ход-----------------*/
						v[n - 1] = (-1. * matrix[n - 1][0] * beta[n - 1] - fi[n - 1]) / (matrix[n - 1][0] * alfa[n - 1] - 1.);
						for (int i = n - 2; i >= 0; i--)
						{
							v[i] = alfa[i + 1] * v[i + 1] + beta[i + 1];
						}
						//-----------------------------------------------//


						if (j == 0)
						{
							chart1->Series[0]->Points->Clear();
							int i = 0;
							x = 0.;
							for (x; x < 1; x += h)
							{
								chart1->Series[0]->Points->AddXY(x, v[i]);
								i++;
							}
							chart1->Series[0]->Points->AddXY(x, v[i]);
						}

						if (j == 1)
						{
							chart1->Series[1]->Points->Clear();
							int i = 0;
							x = 0.;
							for (x; x < 1; x += h)
							{
								chart1->Series[1]->Points->AddXY(x, v[i]);
								i++;
							}
							chart1->Series[1]->Points->AddXY(x, v[i]);
						}

						

						if(j == 0)
							for (int i = 0; i < n; i++)
								v1[i] = v[i];

						if (j == 1)
							for (int i = 0; i < n; i++)
								v2[i] = v[i];

						m = m * 2;
						h = 1. / m;
						n = m + 1;
						x = h;
						j++;

					}

					double e2 = 0;
					x = 0.;
					h = 1. / Convert::ToInt64(textBox10->Text);
					double xmax;
					for (int i = 0; i < Convert::ToInt64(textBox10->Text) + 1; i++)
					{
						if (e2 < fabs(v1[i] - v2[i * 2]))
						{
							e2 = fabs(v1[i] - v2[i * 2]);
							xmax = x;
						}
						res->dataGridView1->Rows->Add(i, x, v1[i], v2[i * 2], fabs(v1[i] - v2[i * 2]));
						x += h;
					}
					richTextBox1->Text = "Для решения задачи была использована равномерная сетка с числом разбиений n = " + Convert::ToInt64(textBox10->Text) + "; ";
					richTextBox1->Text += "Задача должна быть решена с заданной точностью e = 0.5 * 10^(-6); \n\n";
					richTextBox1->Text += "Задача решена с точностью e2 = " + e2 + ";\n\n";
					richTextBox1->Text += "Максимальная разность численных решений в общих узлах сетки наблюдается в точке x = " + xmax + "; ";
					
					break;
				}

				case 0:
				{
					
					double* v = new double[n];
					double* alfa = new double[n];
					double* beta = new double[n];

					double* fi = new double[n];

					double** matrix = new double* [n];
					x = h;

					double k_1 = k1(ksi);
					double k_2 = k2(ksi);

					double q_1 = q1(ksi);
					double q_2 = q2(ksi);

					double f_1 = f1(ksi);
					double f_2 = f2(ksi);

					for (int i = 0; i < n; i++)
					{
						matrix[i] = new double[3];

						fi[i] = fii(x, ksi, h, f_1, f_2);

						matrix[i][0] = ai(x, ksi, h, k_1, k_2) / (h * h);
						matrix[i][1] = -1. * ((ai(x, ksi, h, k_1, k_2) + ai(x + h, ksi, h, k_1, k_2)) / (h * h) + di(x, ksi, h, q_1, q_2));
						matrix[i][2] = ai(x + h, ksi, h, k_1, k_2) / (h * h);

						x += h;
					}

					matrix[0][0] = 0;
					matrix[0][1] = 1;
					matrix[0][2] = 0;

					matrix[n - 1][0] = 0;
					matrix[n - 1][1] = 1;
					matrix[n - 1][2] = 0;

					fi[0] = mu1;
					fi[n - 1] = mu2;

					//-----------------Прмямой ход-----------------//
					alfa[0] = 0;
					beta[0] = fi[0];

					for (int i = 0; i < n - 1; i++)
					{
						alfa[i + 1] = matrix[i][2] / (-1. * matrix[i][1] - matrix[i][0] * alfa[i]);
						beta[i + 1] = (-1. * fi[i] + matrix[i][0] * beta[i]) / (-1. * matrix[i][1] - matrix[i][0] * alfa[i]);
					}

					/*-----------------------------------------------//
					*
					*
					*
					//------------------Обратный ход-----------------*/
					v[n - 1] = (-1. * matrix[n - 1][0] * beta[n - 1] - fi[n - 1]) / (matrix[n - 1][0] * alfa[n - 1] - 1.);
					for (int i = n - 2; i >= 0; i--)
					{
						v[i] = alfa[i + 1] * v[i + 1] + beta[i + 1];
					}
					//-----------------------------------------------//


						
					
					chart1->Series[0]->Points->Clear();
					chart1->Series[1]->Points->Clear();
					int i = 0;
					x = 0;
					for (x = 0.; x < 1; x += h)
					{
						chart1->Series[0]->Points->AddXY(x, v[i]);
						i++;
					}
					
					chart1->Series[0]->Points->AddXY(x, v[i]);
						

					richTextBox1->Text = "Для решения задачи была использована равномерная сетка с числом разбиений n = " + Convert::ToInt64(textBox10->Text) + "; ";
					richTextBox1->Text += "Задача должна быть решена с погррешностью не более e = 0.5 * 10^(-6); \n\n";
					richTextBox1->Text += "Задача решена с погрешностью e1 = " + ";\n\n";
					richTextBox1->Text += "Максимальное отклонение аналитического и численного решений наблюдается в точке x = " + "; ";

						
					break;
				}
			}
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (comboBox1->SelectedIndex == 0)
		{
			res->dataGridView1->Columns[2]->HeaderText = L"u(xi)";
			res->dataGridView1->Columns[3]->HeaderText = L"v(xi)";
			res->dataGridView1->Columns[4]->HeaderText = L"u(xi) - v(xi)";
		}
		else
		{
			res->dataGridView1->Columns[2]->HeaderText = L"v(xi)";
			res->dataGridView1->Columns[3]->HeaderText = L"v2(x2i)";
			res->dataGridView1->Columns[4]->HeaderText = L"v(xi) - v2(x2i)";
		}
		res->ShowDialog();
	}
};
}
