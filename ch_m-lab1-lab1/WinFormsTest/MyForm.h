#pragma once
#include "cmath"
#include <array>

namespace WinFormsTest {

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

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

















	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;



































	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea4->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea4->AxisX->Interval = 0.05;
			chartArea4->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea4->AxisX->Maximum = 1;
			chartArea4->AxisX->Minimum = 0;
			chartArea4->AxisX->Title = L"X";
			chartArea4->AxisX2->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea4->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea4->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea4->AxisY->Title = L"U";
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			this->chart1->ImeMode = System::Windows::Forms::ImeMode::On;
			legend4->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(388, 186);
			this->chart1->Name = L"chart1";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"Series1";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"Series2";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->Name = L"Series3";
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Size = System::Drawing::Size(428, 464);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(133, 70);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальные условия";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(69, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"U\'0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(69, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"U0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"b";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"a";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(96, 43);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(31, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Text = L"1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(96, 17);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(31, 20);
			this->textBox6->TabIndex = 16;
			this->textBox6->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(30, 17);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(31, 20);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"1";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(86, 20);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(45, 20);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(35, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"-1";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(7, 20);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(32, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Задача";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая", L"Основная 1", L"Основная 2" });
			this->comboBox1->Location = System::Drawing::Point(12, 36);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(133, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"Тестовая";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(219, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Контроль лок. погрешности";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(222, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"0,000001";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(222, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"10000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(219, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Макс. число шагов";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(222, 113);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(145, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"0,1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(219, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Начальный шаг";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Controls->Add(this->tabControl1);
			this->groupBox2->Location = System::Drawing::Point(388, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1301, 161);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(6, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(295, 136);
			this->richTextBox1->TabIndex = 17;
			this->richTextBox1->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(307, 19);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1302, 136);
			this->tabControl1->TabIndex = 16;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->richTextBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1294, 110);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Location = System::Drawing::Point(6, 6);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(1596, 98);
			this->richTextBox2->TabIndex = 15;
			this->richTextBox2->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Controls->Add(this->richTextBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1294, 110);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox3->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox3->Location = System::Drawing::Point(6, 6);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(969, 98);
			this->richTextBox3->TabIndex = 15;
			this->richTextBox3->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Controls->Add(this->richTextBox4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1294, 110);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox4->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox4->Location = System::Drawing::Point(6, 6);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(969, 98);
			this->richTextBox4->TabIndex = 15;
			this->richTextBox4->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(219, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Точность выхода на границу";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(222, 153);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(145, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"0,000001";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(42, 106);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(31, 20);
			this->textBox7->TabIndex = 16;
			this->textBox7->Text = L"1";
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart2->BorderlineColor = System::Drawing::Color::Black;
			this->chart2->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea5->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea5->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea5->AxisX->Maximum = 2;
			chartArea5->AxisX->Minimum = 0;
			chartArea5->AxisX->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea5->AxisX->Title = L"U";
			chartArea5->AxisX2->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea5->AxisX2->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea5->AxisX2->MinorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea5->AxisX2->MinorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea5->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea5->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea5->AxisY->Title = L"U\'";
			chartArea5->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea5->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea5);
			this->chart2->ImeMode = System::Windows::Forms::ImeMode::Off;
			legend5->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend5->Name = L"Legend1";
			this->chart2->Legends->Add(legend5);
			this->chart2->Location = System::Drawing::Point(823, 186);
			this->chart2->Name = L"chart2";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->Name = L"Series1";
			this->chart2->Series->Add(series11);
			this->chart2->Size = System::Drawing::Size(427, 464);
			this->chart2->TabIndex = 17;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			this->chart3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart3->BorderlineColor = System::Drawing::Color::Black;
			this->chart3->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			chartArea6->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea6->AxisX->Interval = 0.05;
			chartArea6->AxisX->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea6->AxisX->Maximum = 1;
			chartArea6->AxisX->Minimum = 0;
			chartArea6->AxisX->Title = L"X";
			chartArea6->AxisX2->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea6->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea6->AxisY->MajorGrid->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dot;
			chartArea6->AxisY->Title = L"u\'";
			chartArea6->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea6);
			this->chart3->ImeMode = System::Windows::Forms::ImeMode::On;
			legend6->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend6->Name = L"Legend1";
			this->chart3->Legends->Add(legend6);
			this->chart3->Location = System::Drawing::Point(1257, 186);
			this->chart3->Name = L"chart3";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"Series1";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Legend = L"Legend1";
			series13->Name = L"Series2";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Legend = L"Legend1";
			series14->Name = L"Series3";
			this->chart3->Series->Add(series12);
			this->chart3->Series->Add(series13);
			this->chart3->Series->Add(series14);
			this->chart3->Size = System::Drawing::Size(428, 464);
			this->chart3->TabIndex = 18;
			this->chart3->Text = L"chart3";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(12, 186);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(359, 464);
			this->tabControl2->TabIndex = 19;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(351, 438);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column9, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(339, 426);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 34;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"xi";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 39;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"vi";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 40;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v2i";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 46;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"vi-v2i";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 57;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"ОЛП";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 56;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"hi";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 40;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"C1";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 45;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C2";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 45;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(351, 438);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn17
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(339, 426);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 34;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"xi";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 39;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"vi";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 40;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"v2i";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 46;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"vi-v2i";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 57;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 56;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 40;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 45;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 45;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView3);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(351, 438);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn18
			});
			this->dataGridView3->Location = System::Drawing::Point(6, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(339, 426);
			this->dataGridView3->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"i";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 34;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"xi";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 39;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"vi";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 40;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"v2i";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 46;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"vi-v2i";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 57;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 56;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 40;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 45;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 45;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1701, 800);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная 1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#define PI 3.14159265 

	double dudx1(double x, double u);
	double dudx2(double x, double u);
	double du1dx(double x, double u1, double u2);
	double du2dx(double x, double u1, double u2, double a, double b);
	std::array<double, 2> rk(double x0, double h, double u1, double u2, double a, double b);
	std::array<double, 2> rk2(double x0, double h, double u1, double u2, double a, double b);
	double rk(double x0, double v0, double h);

	double rk2(double x0, double v0, double h);


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		tabControl1->TabPages->Remove(tabPage1);
		tabControl1->TabPages->Remove(tabPage2);
		tabControl1->TabPages->Remove(tabPage3);
		checkBox3->Hide();
		textBox5->Hide();
		textBox6->Hide();
		textBox7->Hide();
		textBox8->Hide();
		label6->Hide();
		label7->Hide();
		label8->Hide();
		label9->Hide();
		chart2->Hide();
		chart3->Hide();
		richTextBox1->Text = "Тестовая задача:\n"+"du/dx = -1 * 3u/2\n" + "U(0) = U0";
		tabPage4->Text = "U0 = " + checkBox1->Text;
		tabPage5->Text = "U0 = " + checkBox2->Text;
		tabControl2->TabPages->Remove(tabPage6);
		tabControl2->TabPages->Remove(tabPage5);
		tabControl2->TabPages->Remove(tabPage4);

		chart1->Series[0]->LegendText = "U0 = " + checkBox1->Text;
		chart1->Series[1]->LegendText = "U0 = " + checkBox2->Text;

		chart1->Series[2]->IsVisibleInLegend = false;
	}

  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		


		
		double x = 0;

		double v;
		double v1 = v; double v2 = v;

		double h = Convert::ToDouble(textBox3->Text);
		double eps = Convert::ToDouble(textBox1->Text);
		double granica = Convert::ToDouble(textBox4->Text);
		int NMax = Convert::ToInt32(textBox2->Text);
		int i = 0;
		double b = 1.;

		int udvoenie = 0;
		int delenie = 0;

		double xmax;
		double xmin;
		double hmax;
		double hmin;

		switch (comboBox1->SelectedIndex)
		{
			case 0:
			{

				if (checkBox1->Checked)
				{
					h = Convert::ToDouble(textBox3->Text);

					udvoenie = 0;
					delenie = 0;

					hmax = 0;
					hmin = h;
					xmax = h;
					xmin = h;

					chart1->Series["Series1"]->Points->Clear();
					tabControl1->TabPages->Remove(tabPage1);
					tabControl2->TabPages->Remove(tabPage4);
					tabControl2->TabPages->Add(tabPage4);
					dataGridView1->Rows->Clear();
					v = Convert::ToDouble(checkBox1->Text);
					v1 = v; v2 = v; i = 0;

					x = 0;
					dataGridView1->Rows->Add(i,x, v, v2, v - v2, 0, h, delenie, udvoenie);
					while ((i < NMax) && (x <= b))
					{
						
						chart1->Series["Series1"]->Points->AddXY(x, v);

						v1 = rk(x, v, h);
						v2 = rk2(x, v, h);

						x += h;

						if (x > b )
						{
							break;
						}

						if ((x >= b - granica) && (x <= b))
						{



							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) *16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;

								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}
							chart1->Series["Series1"]->Points->AddXY(x, v);
							break;
						}
						else
							if (x < b - granica)
							{



								if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
								else
									if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
									{
										udvoenie += 1;
										i++;
										h = h * 2;

										if (h > hmax) { hmax = h; xmax = x; }

										v = v1;
										dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
										v2 = v;

									}
									else
									{
										delenie += 1;
										v1 = v;
										v2 = v;
										x -= h;
										h = h / 2.;
										if (h < hmin) { hmin = h; xmin = x; }
									}
								
							}
							else
								break;

					};

					tabControl1->TabPages->Add(tabPage1);
					tabPage1->Text = "U0 = " + checkBox1->Text;

					if (hmax == 0) { hmax = hmin; xmax = xmin; }
					if (hmin == 0) { hmin = hmax; xmin = xmax; }

					richTextBox2->Text = "n = " + i + "\n";
					richTextBox2->Text += "Число удвоений: " + udvoenie + "\n";
					richTextBox2->Text += "Число делений: " + delenie + "\n";
					richTextBox2->Text += "Максимальный шаг: " + hmax + ", при x = " + xmax + "\n";
					richTextBox2->Text += "Минимальный шаг: " + hmin + ", при x = " + xmin + "\n";
				};

				

				


				if (checkBox2->Checked)
				{

					h = Convert::ToDouble(textBox3->Text);


					udvoenie = 0;
					delenie = 0;

					hmax = 0;
					hmin = h;
					xmax = h;
					xmin = h;

					chart1->Series["Series2"]->Points->Clear();
					tabControl1->TabPages->Remove(tabPage2);
					tabControl2->TabPages->Remove(tabPage5);
					tabControl2->TabPages->Add(tabPage5);
					dataGridView2->Rows->Clear();
					v = Convert::ToDouble(checkBox2->Text);
					v1 = v; v2 = v; i = 0;

					x = 0;
					dataGridView2->Rows->Add(i,x, v, v2, v - v2, 0, h, delenie, udvoenie);

					while ((i < NMax) && (x <= b))
					{
						chart1->Series["Series2"]->Points->AddXY(x, v);

						v1 = rk(x, v, h);
						v2 = rk2(x, v, h);

						x += h;

						if (x > b)
						{
							break;
						}

						if ((x >= b - granica) && (x <= b)) 
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x - h; }

									v = v1;
									dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }

								}
							chart1->Series["Series2"]->Points->AddXY(x, v);
							break;
						}
						else
						if (x < b - granica)
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x - h; }

									v = v1;
									dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }

								}
							
						}
						else
							break;
					};


					tabControl1->TabPages->Add(tabPage2);
					tabPage2->Text = "U0 = " + checkBox2->Text;

					if (hmax == 0) { hmax = hmin; xmax = xmin; }
					if (hmin == 0) { hmin = hmax; xmin = xmax; }

					richTextBox3->Text = "n = " + i + "\n";
					richTextBox3->Text += "Число удвоений: " + udvoenie + "\n";
					richTextBox3->Text += "Число делений: " + delenie + "\n";
					richTextBox3->Text += "Максимальный шаг: " + hmax + ", при x = " + xmax + "\n";
					richTextBox3->Text += "Минимальный шаг: " + hmin + ", при x = " + xmin + "\n";
				};

				


				break;
			}


			case 1:
			{

				if (checkBox1->Checked)
				{
					v = Convert::ToDouble(checkBox1->Text);

					udvoenie = 0;
					delenie = 0;

					hmax = 0;
					hmin = h;
					xmax = h;
					xmin = h;

					chart1->Series["Series1"]->Points->Clear();
					tabControl1->TabPages->Remove(tabPage1);
					tabControl2->TabPages->Remove(tabPage4);
					tabControl2->TabPages->Add(tabPage4);
					dataGridView1->Rows->Clear();
					v1 = v; v2 = v; i = 0;

					x = 0;
					h = Convert::ToDouble(textBox3->Text);

					dataGridView1->Rows->Add(i, x,v, v2, v - v2, 0, h, delenie, udvoenie);
					while ((i < NMax) && (x <= b))
					{
						chart1->Series["Series1"]->Points->AddXY(x, v);

						v1 = rk(x, v, h);
						v2 = rk(x, v, h/2.);
						x += h;

						if (x > b)
						{
							break;
						}

						if ((x >= b - granica) && (x <= b))
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}
							chart1->Series["Series1"]->Points->AddXY(x, v);
							break;

						}
						else
						if (x < b - granica)
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView1->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}

						}
						else
							break;

					};

					tabControl1->TabPages->Add(tabPage1);
					tabPage1->Text = "U0 = " + checkBox1->Text;

					if (hmax == 0) { hmax = hmin; xmax = xmin; }
					if (hmin == 0) { hmin = hmax; xmin = xmax; }

					richTextBox2->Text = "n = " + i + "\n";
					richTextBox2->Text += "Число удвоений: " + udvoenie + "\n";
					richTextBox2->Text += "Число делений: " + delenie + "\n";
					richTextBox2->Text += "Максимальный шаг: " + hmax + ", при x = " + xmax + "\n";
					richTextBox2->Text += "Минимальный шаг: " + hmin + ", при x = " + xmin + "\n";
				};


				if (checkBox2->Checked)
				{
					v = Convert::ToDouble(checkBox2->Text);

					udvoenie = 0;
					delenie = 0;

					hmax = 0;
					hmin = h;
					xmax = h;
					xmin = h;

					chart1->Series["Series2"]->Points->Clear();
					tabControl1->TabPages->Remove(tabPage2);
					tabControl2->TabPages->Remove(tabPage5);
					tabControl2->TabPages->Add(tabPage5);
					v1 = v; v2 = v; i = 0;

					x = 0;
					h = Convert::ToDouble(textBox3->Text);
					dataGridView2->Rows->Clear();

					dataGridView2->Rows->Add(i,x, v, v2, v - v2, 0, h, delenie, udvoenie);
					while ((i < NMax) && (x <= b))
					{
						chart1->Series["Series2"]->Points->AddXY(x, v);


						v1 = rk(x, v, h);
						v2 = rk2(x, v, h);
						x += h;

						if (x > b)
						{
							break;
						}

						if ((x >= b - granica) && (x <= b))
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}
							chart1->Series["Series2"]->Points->AddXY(x, v);
							break;
						}
						else
						if (x < b - granica)
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView2->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}
						}
						else
							break;


					};
					tabControl1->TabPages->Add(tabPage2);
					tabPage2->Text = "U0 = " + checkBox2->Text;

					if (hmax == 0) { hmax = hmin; xmax = xmin; }
					if (hmin == 0) { hmin = hmax; xmin = xmax; }

					richTextBox3->Text = "n = " + i + "\n";
					richTextBox3->Text += "Число удвоений: " + udvoenie + "\n";
					richTextBox3->Text += "Число делений: " + delenie + "\n";
					richTextBox3->Text += "Максимальный шаг: " + hmax + ", при x = " + xmax + "\n";
					richTextBox3->Text += "Минимальный шаг: " + hmin + ", при x = " + xmin + "\n";
				};


				if (checkBox3->Checked)
				{
					v = Convert::ToDouble(checkBox3->Text);

					udvoenie = 0;
					delenie = 0;

					hmax = 0;
					hmin = h;
					xmax = h;
					xmin = h;

					chart1->Series["Series3"]->Points->Clear();
					tabControl1->TabPages->Remove(tabPage3);
					tabControl2->TabPages->Remove(tabPage6);
					tabControl2->TabPages->Add(tabPage6);
					v1 = v; v2 = v; i = 0;

					x = 0;
					h = Convert::ToDouble(textBox3->Text);
					dataGridView3->Rows->Clear();

					dataGridView3->Rows->Add(i,x, v, v2, v - v2, 0, h, delenie, udvoenie);
					while ((i < NMax) && (x <= b))
					{
						chart1->Series["Series3"]->Points->AddXY(x, v);


						v1 = rk(x, v, h);
						v2 = rk2(x, v, h);
						x += h;

						if (x > b)
						{
							break;
						}

						if ((x >= b - granica) && (x <= b))
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView3->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView3->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}
							chart1->Series["Series3"]->Points->AddXY(x, v);
							break;

						}
						else
						if (x < b - granica)
						{

							if ((abs((v2 - v1) / 15.) <= eps) && (abs((v2 - v1) / 15.) >= eps / pow(2, 17))) { i++; v = v1; dataGridView3->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie); v2 = v; }		//kontrol' pogreshnosti
							else
								if (abs((v2 - v1) / 15.) < eps / pow(2, 17))
								{
									udvoenie += 1;
									i++;
									h = h * 2;

									if (h > hmax) { hmax = h; xmax = x; }

									v = v1;
									dataGridView3->Rows->Add(i, x, v, v2, v - v2, (abs(v2 - v1) / 15.) * 16, h, delenie, udvoenie);
									v2 = v;
								}
								else
								{
									delenie += 1;
									v1 = v;
									v2 = v;
									x -= h;
									h = h / 2.;
									if (h < hmin) { hmin = h; xmin = x; }
								}

						}
						else
							break;
						

					};

					tabControl1->TabPages->Add(tabPage3);
					tabPage3->Text = "U0 = " + checkBox3->Text;

					if (hmax == 0) { hmax = hmin; xmax = xmin; }
					if (hmin == 0) { hmin = hmax; xmin = xmax; }

					richTextBox4->Text = "n = " + i + "\n";
					richTextBox4->Text += "Число удвоений: " + udvoenie + "\n";
					richTextBox4->Text += "Число делений: " + delenie + "\n";
					richTextBox4->Text += "Максимальный шаг: " + hmax + ", при x = " + xmax + "\n";
					richTextBox4->Text += "Минимальный шаг: " + hmin + ", при x = " + xmin + "\n";
				};

			}
			break;


			case 2:
			{
				double nachznach[2];
				double nachznach2[2];
				std::array<double, 2> v0;		// 
				std::array<double, 2> v1;		//1 shag
				std::array<double, 2> v2;		//dvoinoi shag
				double aa = Convert::ToDouble(textBox5->Text);
				double bb = Convert::ToDouble(textBox7->Text);

					if ((textBox5->Text != nullptr)&& (textBox6->Text != nullptr)&& (textBox7->Text != nullptr)&& (textBox8->Text != nullptr))
					{

						v0[0] = Convert::ToDouble(textBox6->Text);
						v0[1] = Convert::ToDouble(textBox8->Text);

						chart1->Series["Series1"]->Points->Clear();
						chart2->Series["Series1"]->Points->Clear();
						chart3->Series["Series1"]->Points->Clear();
						tabControl1->TabPages->Remove(tabPage1);

						
						v1[0] = nachznach[0];
						v1[1] = nachznach[1];
						v2[0] = nachznach[0];
						v2[1] = nachznach[1];
							
						h = Convert::ToDouble(textBox3->Text);

						udvoenie = 0;
						delenie = 0;
						hmax = 0;
						hmin = h;
						xmax = h;
						xmin = h;

						i = 0;
						x = 0;
						
						while ((i < NMax) && (x <= b))
						{
							chart1->Series["Series1"]->Points->AddXY(x, v0[0]);
							chart2->Series["Series1"]->Points->AddXY(v0[0], v0[1]);
							chart3->Series["Series1"]->Points->AddXY(x, v0[1]);
							v1 = rk(x, h, v0[0], v0[1], aa, bb);
							v2 = rk2(x, h, v0[0], v0[1], aa, bb);
							x += h;

							if (x > b)
							{
								break;
							}

							if ((x >= b - granica) && (x <= b))
							{

								if (((abs((v2[0] - v1[0]) / 15.) <= eps) && (abs((v2[0] - v1[0]) / 15.) >= eps / pow(2, 17))) || ((abs((v2[1] - v1[1]) / 15.) <= eps) && (abs((v2[1] - v1[1]) / 15.) >= eps / pow(2, 17))))
								{
									i++;
									v0[0] = v1[0];
									v0[1] = v1[1];
									v2[0] = v0[0];
									v2[1] = v0[1];
								}		//kontrol' pogreshnosti
								else
									if ((abs((v2[0] - v1[0]) / 15.) < eps / pow(2, 17)) || (abs((v2[1] - v1[1]) / 15.) < eps / pow(2, 17)))
									{
										i++;
										h = h * 2;
										v0[0] = v1[0];
										v0[1] = v1[1];
										v2[0] = v0[0];
										v2[1] = v0[1];
										udvoenie += 1;
										if (h > hmax) { hmax = h; xmax = x; }
									}
									else
									{
										v1[0] = v0[0];
										v1[1] = v0[1];
										v2[0] = v0[0];
										v2[1] = v0[1];
										x -= h;
										h = h / 2.;
										delenie += 1;
										if (h < hmin) { hmin = h; xmin = x; }
									};
								chart1->Series["Series1"]->Points->AddXY(x, v0[0]);
								chart2->Series["Series1"]->Points->AddXY(v0[0], v0[1]);
								chart3->Series["Series1"]->Points->AddXY(x, v0[1]);
								break;
							}
							else
								if (x < b - granica)
								{

									if (((abs((v2[0] - v1[0]) / 15.) <= eps) && (abs((v2[0] - v1[0]) / 15.) >= eps / pow(2, 17))) || ((abs((v2[1] - v1[1]) / 15.) <= eps) && (abs((v2[1] - v1[1]) / 15.) >= eps / pow(2, 17))))
									{
										i++;
										v0[0] = v1[0];
										v0[1] = v1[1];
										v2[0] = v0[0];
										v2[1] = v0[1];
									}		//kontrol' pogreshnosti
									else
										if ((abs((v2[0] - v1[0]) / 15.) < eps / pow(2, 17)) || (abs((v2[1] - v1[1]) / 15.) < eps / pow(2, 17)))
										{
											i++;
											h = h * 2;
											v0[0] = v1[0];
											v0[1] = v1[1];
											v2[0] = v0[0];
											v2[1] = v0[1];
											udvoenie += 1;
											if (h > hmax) { hmax = h; xmax = x; }
										}
										else
										{
											v1[0] = v0[0];
											v1[1] = v0[1];
											v2[0] = v0[0];
											v2[1] = v0[1];
											x -= h;
											h = h / 2.;
											delenie += 1;
											if (h < hmin) { hmin = h; xmin = x; }
										};

								}

						};

						tabControl1->TabPages->Add(tabPage1);
						tabPage1->Text = "U0 = " + textBox6->Text + "; U'0 = " + textBox8->Text;

						if (hmax == 0) { hmax = hmin; xmax = xmin; }
						if (hmin == 0) { hmin = hmax; xmin = xmax; }

						richTextBox2->Text = "n = " + i + "\n";
						richTextBox2->Text += "Число удвоений: " + udvoenie + "\n";
						richTextBox2->Text += "Число делений: " + delenie + "\n";
						richTextBox2->Text += "Максимальный шаг: " + hmax + ", при x = " + xmax + "\n";
						richTextBox2->Text += "Минимальный шаг: " + hmin + ", при x = " + xmin + "\n";
					};


					

				}
			
			break;
		}
		
  }



private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{	
	if (comboBox1->SelectedIndex == 0)
	{
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart1->Series["Series3"]->Points->Clear();
		chart2->Hide();
		chart3->Hide();
		checkBox1->Show();
		checkBox2->Show();
		checkBox3->Hide();
		checkBox2->Text = L"-1";
		tabControl1->TabPages->Clear();
		textBox5->Hide();
		textBox6->Hide();
		textBox7->Hide();
		textBox8->Hide();
		label6->Hide();
		label7->Hide();
		label8->Hide();
		label9->Hide();
		richTextBox1->Text = "Тестовая задача:\n" + "du/dx = -1 * 3u/2\n" + "U(0) = U0";
		dataGridView2->Rows->Clear();
		dataGridView1->Rows->Clear();
		tabPage4->Text = "U0 = " + checkBox1->Text;
		tabPage5->Text = "U0 = " + checkBox2->Text;		
		tabControl2->TabPages->Remove(tabPage6);
		tabControl2->TabPages->Remove(tabPage5);
		tabControl2->TabPages->Remove(tabPage4);

	
		chart1->Series[0]->LegendText = "U0 = " + checkBox1->Text;
		chart1->Series[1]->LegendText = "U0 = " + checkBox2->Text;
		chart1->Series[2]->IsVisibleInLegend = false;
	}

	if (comboBox1->SelectedIndex == 1)
	{
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart2->Hide();
		chart3->Hide();
		checkBox1->Show();
		checkBox2->Show();
		checkBox3->Show();
		checkBox2->Text = L"2";
		tabControl1->TabPages->Clear();
		textBox5->Hide();
		textBox6->Hide();
		textBox7->Hide();
		textBox8->Hide();
		label6->Hide();
		label7->Hide();
		label8->Hide();
		label9->Hide();
		richTextBox1->Text = "Основная задача 1:\n" + "du/dx = u^2 / (1+x^2)^(1/3) + u - u^3 * sin(10x)\n" + "U(0) = U0";
		dataGridView2->Rows->Clear();
		dataGridView1->Rows->Clear();
		tabPage4->Text = "U0 = " + checkBox1->Text;
		tabPage5->Text = "U0 = " + checkBox2->Text;
		tabPage6->Text = "U0 = " + checkBox3->Text;
		tabControl2->TabPages->Remove(tabPage6);
		tabControl2->TabPages->Remove(tabPage5);
		tabControl2->TabPages->Remove(tabPage4);
		chart1->Series[0]->LegendText = "U0 = " + checkBox1->Text;
		chart1->Series[1]->LegendText = "U0 = " + checkBox2->Text;
		chart1->Series[2]->LegendText = "U0 = " + checkBox3->Text;
		chart1->Series[2]->IsVisibleInLegend = true;
	}

	if (comboBox1->SelectedIndex == 2)
	{
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart1->Series["Series3"]->Points->Clear();
		chart2->Series["Series1"]->Points->Clear();
		chart3->Series["Series1"]->Points->Clear();
		chart2->Show();
		chart3->Show();
		checkBox3->Hide();
		checkBox2->Hide();
		checkBox1->Hide();
		tabControl1->TabPages->Clear();
		//tabControl1->TabPages->Remove(tabPage1);
		//tabControl1->TabPages->Remove(tabPage2);
		//tabControl1->TabPages->Remove(tabPage3);
		textBox5->Show();
		textBox6->Show();
		textBox7->Show();
		textBox8->Show();
		label6->Show();
		label7->Show();
		label8->Show();
		label9->Show();
		richTextBox1->Text = "Основная задача 2:\n" + "d^2u/dx^2 + a(du/dx)^2 + bu = 0\n" + "U(0) = U0\n" + "U'(0) = U'0";


		chart1->Series[0]->LegendText = "";
		chart1->Series[1]->LegendText = "";
		chart1->Series[2]->LegendText = "";
		chart1->Series[2]->IsVisibleInLegend = true;
	}

}

};
}
