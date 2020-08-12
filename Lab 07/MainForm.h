#pragma once
#include <cmath>
#include <ctime>
#include <iostream>

namespace My7IndividualWorks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::GroupBox^  groupBoxGen;
	private: System::Windows::Forms::Label^  lblNumOfPoints;
	private: System::Windows::Forms::TextBox^  txtBoxNumOfPoints;
	private: System::Windows::Forms::GroupBox^  groupBoxLimitsX;
	private: System::Windows::Forms::TextBox^  txtBoxMin;
	private: System::Windows::Forms::Label^  lblMinOfX;
	private: System::Windows::Forms::TextBox^  txtBoxMax;
	private: System::Windows::Forms::Label^  lblMaxOfX;
	private: System::Windows::Forms::Button^  btnGeneration;
	private: System::Windows::Forms::Button^  btnOpenFile;
	private: System::Windows::Forms::GroupBox^  groupBoxArray;
	private: System::Windows::Forms::TextBox^  txtBoxInputArray;
	private: System::Windows::Forms::Button^  btnAction1;
	private: System::Windows::Forms::Button^  btnHelp;
	private: System::Windows::Forms::GroupBox^  groupBoxResults;
	private: System::Windows::Forms::TextBox^  txtBoxResMin;
	private: System::Windows::Forms::Button^  btnSaveFile;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::RichTextBox^  richTxtBoxInputMatrix;
	private: System::Windows::Forms::GroupBox^  groupBoxGenMatrix;
	private: System::Windows::Forms::TextBox^  txtBoxSizeMatrix;
	private: System::Windows::Forms::Label^  lblSizeMatrix;
	private: System::Windows::Forms::Button^  btnExitMatrix;
	private: System::Windows::Forms::GroupBox^  groupBoxResultsMatrix;
	private: System::Windows::Forms::TextBox^  txtBoxResultMatrix;
	private: System::Windows::Forms::Button^  btnHelpMatrix;
	private: System::Windows::Forms::Button^  btnActionMatrix;
	private: System::Windows::Forms::Button^  btnSaveMatrix;
	private: System::Windows::Forms::GroupBox^  groupBoxLimitsMatrix;
	private: System::Windows::Forms::TextBox^  txtBoxMaxMatrix;
	private: System::Windows::Forms::Label^  lblMaxMatrix;
	private: System::Windows::Forms::TextBox^  txtBoxMinMatrix;
	private: System::Windows::Forms::Label^  lblMinMatrix;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  btnGenMatrix;
	private: System::Windows::Forms::Button^  btnOpenMatrix;
	private: System::Windows::Forms::Button^  btnHelpFunc;
	private: System::Windows::Forms::PictureBox^  pictureBoxFunc;
	private: System::Windows::Forms::GroupBox^  groupBoxInputN;
	private: System::Windows::Forms::Button^  btnActionFunc;
	private: System::Windows::Forms::TextBox^  txtBoxInputN;
	private: System::Windows::Forms::GroupBox^  groupBoxResultsFunc;
	private: System::Windows::Forms::Label^  lblResultQ;
	private: System::Windows::Forms::Label^  lblResultP;
	private: System::Windows::Forms::TextBox^  txtBoxResultQ;
	private: System::Windows::Forms::TextBox^  txtBoxResultP;
	private: System::Windows::Forms::Button^  btnCloseFunc;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::GroupBox^  groupBoxResultsStrings;
	private: System::Windows::Forms::RichTextBox^  richTxtBoxResultStrings;
	private: System::Windows::Forms::GroupBox^  groupBoxInputStrings;
	private: System::Windows::Forms::RichTextBox^  richTxtBoxInputStrings;
	private: System::Windows::Forms::GroupBox^  groupBoxStr;
	private: System::Windows::Forms::Button^  btnExitStr;
	private: System::Windows::Forms::Button^  btnHelpString;
	private: System::Windows::Forms::Button^  btnSaveStr;
	private: System::Windows::Forms::Button^  btnOpenStr;
	private: System::Windows::Forms::Button^  btnActionStr;
	private: System::Windows::Forms::TextBox^  txtBoxResMax;
	private: System::Windows::Forms::Button^  btnSaveFunc;
	private: System::Windows::Forms::GroupBox^  groupBoxTempRads;
	private: System::Windows::Forms::TextBox^  txtBoxTempRads;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnSaveFile = (gcnew System::Windows::Forms::Button());
			this->groupBoxResults = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxTempRads = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxTempRads = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxResMax = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxResMin = (gcnew System::Windows::Forms::TextBox());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnAction1 = (gcnew System::Windows::Forms::Button());
			this->groupBoxArray = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxInputArray = (gcnew System::Windows::Forms::TextBox());
			this->btnOpenFile = (gcnew System::Windows::Forms::Button());
			this->btnGeneration = (gcnew System::Windows::Forms::Button());
			this->groupBoxGen = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxLimitsX = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxMax = (gcnew System::Windows::Forms::TextBox());
			this->lblMaxOfX = (gcnew System::Windows::Forms::Label());
			this->txtBoxMin = (gcnew System::Windows::Forms::TextBox());
			this->lblMinOfX = (gcnew System::Windows::Forms::Label());
			this->txtBoxNumOfPoints = (gcnew System::Windows::Forms::TextBox());
			this->lblNumOfPoints = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBoxGenMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxLimitsMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxMaxMatrix = (gcnew System::Windows::Forms::TextBox());
			this->lblMaxMatrix = (gcnew System::Windows::Forms::Label());
			this->txtBoxMinMatrix = (gcnew System::Windows::Forms::TextBox());
			this->lblMinMatrix = (gcnew System::Windows::Forms::Label());
			this->btnExitMatrix = (gcnew System::Windows::Forms::Button());
			this->btnActionMatrix = (gcnew System::Windows::Forms::Button());
			this->btnOpenMatrix = (gcnew System::Windows::Forms::Button());
			this->btnSaveMatrix = (gcnew System::Windows::Forms::Button());
			this->txtBoxSizeMatrix = (gcnew System::Windows::Forms::TextBox());
			this->btnGenMatrix = (gcnew System::Windows::Forms::Button());
			this->lblSizeMatrix = (gcnew System::Windows::Forms::Label());
			this->btnHelpMatrix = (gcnew System::Windows::Forms::Button());
			this->richTxtBoxInputMatrix = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBoxResultsMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxResultMatrix = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnSaveFunc = (gcnew System::Windows::Forms::Button());
			this->btnCloseFunc = (gcnew System::Windows::Forms::Button());
			this->groupBoxResultsFunc = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxResultQ = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxResultP = (gcnew System::Windows::Forms::TextBox());
			this->lblResultQ = (gcnew System::Windows::Forms::Label());
			this->lblResultP = (gcnew System::Windows::Forms::Label());
			this->btnActionFunc = (gcnew System::Windows::Forms::Button());
			this->groupBoxInputN = (gcnew System::Windows::Forms::GroupBox());
			this->txtBoxInputN = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxFunc = (gcnew System::Windows::Forms::PictureBox());
			this->btnHelpFunc = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxResultsStrings = (gcnew System::Windows::Forms::GroupBox());
			this->richTxtBoxResultStrings = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBoxInputStrings = (gcnew System::Windows::Forms::GroupBox());
			this->richTxtBoxInputStrings = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBoxStr = (gcnew System::Windows::Forms::GroupBox());
			this->btnActionStr = (gcnew System::Windows::Forms::Button());
			this->btnSaveStr = (gcnew System::Windows::Forms::Button());
			this->btnOpenStr = (gcnew System::Windows::Forms::Button());
			this->btnExitStr = (gcnew System::Windows::Forms::Button());
			this->btnHelpString = (gcnew System::Windows::Forms::Button());
			this->tabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBoxResults->SuspendLayout();
			this->groupBoxTempRads->SuspendLayout();
			this->groupBoxArray->SuspendLayout();
			this->groupBoxGen->SuspendLayout();
			this->groupBoxLimitsX->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBoxGenMatrix->SuspendLayout();
			this->groupBoxLimitsMatrix->SuspendLayout();
			this->groupBoxResultsMatrix->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBoxResultsFunc->SuspendLayout();
			this->groupBoxInputN->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFunc))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->groupBoxResultsStrings->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBoxInputStrings->SuspendLayout();
			this->groupBoxStr->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPage1);
			this->tabControl->Controls->Add(this->tabPage2);
			this->tabControl->Controls->Add(this->tabPage3);
			this->tabControl->Controls->Add(this->tabPage4);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->ItemSize = System::Drawing::Size(60, 20);
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(660, 446);
			this->tabControl->TabIndex = 0;
			this->tabControl->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::tabControl_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnClose);
			this->tabPage1->Controls->Add(this->btnSaveFile);
			this->tabPage1->Controls->Add(this->groupBoxResults);
			this->tabPage1->Controls->Add(this->btnHelp);
			this->tabPage1->Controls->Add(this->btnAction1);
			this->tabPage1->Controls->Add(this->groupBoxArray);
			this->tabPage1->Controls->Add(this->btnOpenFile);
			this->tabPage1->Controls->Add(this->btnGeneration);
			this->tabPage1->Controls->Add(this->groupBoxGen);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(652, 418);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"№52";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(6, 365);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(637, 45);
			this->btnClose->TabIndex = 8;
			this->btnClose->Text = L"Выход";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MainForm::btnClose_Click);
			// 
			// btnSaveFile
			// 
			this->btnSaveFile->Location = System::Drawing::Point(494, 311);
			this->btnSaveFile->Name = L"btnSaveFile";
			this->btnSaveFile->Size = System::Drawing::Size(150, 48);
			this->btnSaveFile->TabIndex = 7;
			this->btnSaveFile->Text = L"Сохранить в файл";
			this->btnSaveFile->UseVisualStyleBackColor = true;
			this->btnSaveFile->Click += gcnew System::EventHandler(this, &MainForm::btnSaveFile_Click);
			// 
			// groupBoxResults
			// 
			this->groupBoxResults->Controls->Add(this->groupBoxTempRads);
			this->groupBoxResults->Controls->Add(this->txtBoxResMax);
			this->groupBoxResults->Controls->Add(this->txtBoxResMin);
			this->groupBoxResults->Location = System::Drawing::Point(6, 209);
			this->groupBoxResults->Name = L"groupBoxResults";
			this->groupBoxResults->Size = System::Drawing::Size(481, 150);
			this->groupBoxResults->TabIndex = 6;
			this->groupBoxResults->TabStop = false;
			this->groupBoxResults->Text = L"Результаты";
			// 
			// groupBoxTempRads
			// 
			this->groupBoxTempRads->Controls->Add(this->txtBoxTempRads);
			this->groupBoxTempRads->Location = System::Drawing::Point(6, 81);
			this->groupBoxTempRads->Name = L"groupBoxTempRads";
			this->groupBoxTempRads->Size = System::Drawing::Size(466, 55);
			this->groupBoxTempRads->TabIndex = 6;
			this->groupBoxTempRads->TabStop = false;
			this->groupBoxTempRads->Text = L"Длины радиус-векторов точек";
			// 
			// txtBoxTempRads
			// 
			this->txtBoxTempRads->Location = System::Drawing::Point(10, 23);
			this->txtBoxTempRads->Name = L"txtBoxTempRads";
			this->txtBoxTempRads->ReadOnly = true;
			this->txtBoxTempRads->Size = System::Drawing::Size(450, 22);
			this->txtBoxTempRads->TabIndex = 0;
			// 
			// txtBoxResMax
			// 
			this->txtBoxResMax->Location = System::Drawing::Point(6, 49);
			this->txtBoxResMax->Name = L"txtBoxResMax";
			this->txtBoxResMax->ReadOnly = true;
			this->txtBoxResMax->Size = System::Drawing::Size(469, 22);
			this->txtBoxResMax->TabIndex = 5;
			// 
			// txtBoxResMin
			// 
			this->txtBoxResMin->Location = System::Drawing::Point(6, 21);
			this->txtBoxResMin->Name = L"txtBoxResMin";
			this->txtBoxResMin->ReadOnly = true;
			this->txtBoxResMin->Size = System::Drawing::Size(469, 22);
			this->txtBoxResMin->TabIndex = 4;
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(494, 264);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(150, 41);
			this->btnHelp->TabIndex = 5;
			this->btnHelp->Text = L"Справка";
			this->btnHelp->UseVisualStyleBackColor = true;
			this->btnHelp->Click += gcnew System::EventHandler(this, &MainForm::btnHelp_Click);
			// 
			// btnAction1
			// 
			this->btnAction1->Location = System::Drawing::Point(494, 155);
			this->btnAction1->Name = L"btnAction1";
			this->btnAction1->Size = System::Drawing::Size(150, 103);
			this->btnAction1->TabIndex = 4;
			this->btnAction1->Text = L"Найти кольцо";
			this->btnAction1->UseVisualStyleBackColor = true;
			this->btnAction1->Click += gcnew System::EventHandler(this, &MainForm::btnAction1_Click);
			// 
			// groupBoxArray
			// 
			this->groupBoxArray->Controls->Add(this->txtBoxInputArray);
			this->groupBoxArray->Location = System::Drawing::Point(6, 153);
			this->groupBoxArray->Name = L"groupBoxArray";
			this->groupBoxArray->Size = System::Drawing::Size(482, 50);
			this->groupBoxArray->TabIndex = 3;
			this->groupBoxArray->TabStop = false;
			this->groupBoxArray->Text = L"Исходный массив";
			// 
			// txtBoxInputArray
			// 
			this->txtBoxInputArray->Location = System::Drawing::Point(6, 21);
			this->txtBoxInputArray->Name = L"txtBoxInputArray";
			this->txtBoxInputArray->Size = System::Drawing::Size(470, 22);
			this->txtBoxInputArray->TabIndex = 3;
			this->txtBoxInputArray->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxInputArray_TextChanged);
			// 
			// btnOpenFile
			// 
			this->btnOpenFile->Location = System::Drawing::Point(494, 87);
			this->btnOpenFile->Name = L"btnOpenFile";
			this->btnOpenFile->Size = System::Drawing::Size(150, 60);
			this->btnOpenFile->TabIndex = 2;
			this->btnOpenFile->Text = L"Ввод из файла";
			this->btnOpenFile->UseVisualStyleBackColor = true;
			this->btnOpenFile->Click += gcnew System::EventHandler(this, &MainForm::btnOpenFile_Click);
			// 
			// btnGeneration
			// 
			this->btnGeneration->Location = System::Drawing::Point(494, 16);
			this->btnGeneration->Name = L"btnGeneration";
			this->btnGeneration->Size = System::Drawing::Size(150, 60);
			this->btnGeneration->TabIndex = 1;
			this->btnGeneration->Text = L"Генерация точек";
			this->btnGeneration->UseVisualStyleBackColor = true;
			this->btnGeneration->Click += gcnew System::EventHandler(this, &MainForm::btnGeneration_Click);
			// 
			// groupBoxGen
			// 
			this->groupBoxGen->Controls->Add(this->groupBoxLimitsX);
			this->groupBoxGen->Controls->Add(this->txtBoxNumOfPoints);
			this->groupBoxGen->Controls->Add(this->lblNumOfPoints);
			this->groupBoxGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBoxGen->Location = System::Drawing::Point(6, 6);
			this->groupBoxGen->Name = L"groupBoxGen";
			this->groupBoxGen->Size = System::Drawing::Size(482, 141);
			this->groupBoxGen->TabIndex = 0;
			this->groupBoxGen->TabStop = false;
			this->groupBoxGen->Text = L"Генерация точек";
			// 
			// groupBoxLimitsX
			// 
			this->groupBoxLimitsX->Controls->Add(this->txtBoxMax);
			this->groupBoxLimitsX->Controls->Add(this->lblMaxOfX);
			this->groupBoxLimitsX->Controls->Add(this->txtBoxMin);
			this->groupBoxLimitsX->Controls->Add(this->lblMinOfX);
			this->groupBoxLimitsX->Location = System::Drawing::Point(10, 53);
			this->groupBoxLimitsX->Name = L"groupBoxLimitsX";
			this->groupBoxLimitsX->Size = System::Drawing::Size(466, 80);
			this->groupBoxLimitsX->TabIndex = 2;
			this->groupBoxLimitsX->TabStop = false;
			this->groupBoxLimitsX->Text = L"Ограничения диапазона";
			// 
			// txtBoxMax
			// 
			this->txtBoxMax->Location = System::Drawing::Point(189, 47);
			this->txtBoxMax->Name = L"txtBoxMax";
			this->txtBoxMax->Size = System::Drawing::Size(271, 23);
			this->txtBoxMax->TabIndex = 4;
			this->txtBoxMax->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxMax_TextChanged);
			// 
			// lblMaxOfX
			// 
			this->lblMaxOfX->AutoSize = true;
			this->lblMaxOfX->Location = System::Drawing::Point(7, 50);
			this->lblMaxOfX->Name = L"lblMaxOfX";
			this->lblMaxOfX->Size = System::Drawing::Size(176, 17);
			this->lblMaxOfX->TabIndex = 3;
			this->lblMaxOfX->Text = L"Максимальное значение:";
			// 
			// txtBoxMin
			// 
			this->txtBoxMin->Location = System::Drawing::Point(189, 20);
			this->txtBoxMin->Name = L"txtBoxMin";
			this->txtBoxMin->Size = System::Drawing::Size(271, 23);
			this->txtBoxMin->TabIndex = 2;
			this->txtBoxMin->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxMin_TextChanged);
			// 
			// lblMinOfX
			// 
			this->lblMinOfX->AutoSize = true;
			this->lblMinOfX->Location = System::Drawing::Point(7, 23);
			this->lblMinOfX->Name = L"lblMinOfX";
			this->lblMinOfX->Size = System::Drawing::Size(170, 17);
			this->lblMinOfX->TabIndex = 0;
			this->lblMinOfX->Text = L"Минимальное значение:";
			// 
			// txtBoxNumOfPoints
			// 
			this->txtBoxNumOfPoints->Location = System::Drawing::Point(145, 20);
			this->txtBoxNumOfPoints->Name = L"txtBoxNumOfPoints";
			this->txtBoxNumOfPoints->Size = System::Drawing::Size(331, 23);
			this->txtBoxNumOfPoints->TabIndex = 1;
			this->txtBoxNumOfPoints->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxNumOfPoints_TextChanged);
			// 
			// lblNumOfPoints
			// 
			this->lblNumOfPoints->AutoSize = true;
			this->lblNumOfPoints->Location = System::Drawing::Point(7, 23);
			this->lblNumOfPoints->Name = L"lblNumOfPoints";
			this->lblNumOfPoints->Size = System::Drawing::Size(132, 17);
			this->lblNumOfPoints->TabIndex = 0;
			this->lblNumOfPoints->Text = L"Количество точек:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Controls->Add(this->groupBoxResultsMatrix);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(652, 418);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"№112";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->groupBoxGenMatrix, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTxtBoxInputMatrix, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(646, 361);
			this->tableLayoutPanel1->TabIndex = 11;
			// 
			// groupBoxGenMatrix
			// 
			this->groupBoxGenMatrix->Controls->Add(this->groupBoxLimitsMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->btnExitMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->btnActionMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->btnOpenMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->btnSaveMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->txtBoxSizeMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->btnGenMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->lblSizeMatrix);
			this->groupBoxGenMatrix->Controls->Add(this->btnHelpMatrix);
			this->groupBoxGenMatrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupBoxGenMatrix->Location = System::Drawing::Point(3, 3);
			this->groupBoxGenMatrix->Name = L"groupBoxGenMatrix";
			this->groupBoxGenMatrix->Size = System::Drawing::Size(307, 274);
			this->groupBoxGenMatrix->TabIndex = 4;
			this->groupBoxGenMatrix->TabStop = false;
			this->groupBoxGenMatrix->Text = L"Генерация матрицы";
			// 
			// groupBoxLimitsMatrix
			// 
			this->groupBoxLimitsMatrix->Controls->Add(this->txtBoxMaxMatrix);
			this->groupBoxLimitsMatrix->Controls->Add(this->lblMaxMatrix);
			this->groupBoxLimitsMatrix->Controls->Add(this->txtBoxMinMatrix);
			this->groupBoxLimitsMatrix->Controls->Add(this->lblMinMatrix);
			this->groupBoxLimitsMatrix->Location = System::Drawing::Point(9, 45);
			this->groupBoxLimitsMatrix->Name = L"groupBoxLimitsMatrix";
			this->groupBoxLimitsMatrix->Size = System::Drawing::Size(292, 80);
			this->groupBoxLimitsMatrix->TabIndex = 11;
			this->groupBoxLimitsMatrix->TabStop = false;
			this->groupBoxLimitsMatrix->Text = L"Ограничения диапазона";
			// 
			// txtBoxMaxMatrix
			// 
			this->txtBoxMaxMatrix->Location = System::Drawing::Point(91, 47);
			this->txtBoxMaxMatrix->Name = L"txtBoxMaxMatrix";
			this->txtBoxMaxMatrix->Size = System::Drawing::Size(195, 23);
			this->txtBoxMaxMatrix->TabIndex = 4;
			this->txtBoxMaxMatrix->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxMaxMatrix_KeyPress);
			// 
			// lblMaxMatrix
			// 
			this->lblMaxMatrix->AutoSize = true;
			this->lblMaxMatrix->Location = System::Drawing::Point(7, 50);
			this->lblMaxMatrix->Name = L"lblMaxMatrix";
			this->lblMaxMatrix->Size = System::Drawing::Size(78, 17);
			this->lblMaxMatrix->TabIndex = 3;
			this->lblMaxMatrix->Text = L"Максимум:";
			// 
			// txtBoxMinMatrix
			// 
			this->txtBoxMinMatrix->Location = System::Drawing::Point(91, 21);
			this->txtBoxMinMatrix->Name = L"txtBoxMinMatrix";
			this->txtBoxMinMatrix->Size = System::Drawing::Size(195, 23);
			this->txtBoxMinMatrix->TabIndex = 2;
			this->txtBoxMinMatrix->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxMinMatrix_KeyPress);
			// 
			// lblMinMatrix
			// 
			this->lblMinMatrix->AutoSize = true;
			this->lblMinMatrix->Location = System::Drawing::Point(7, 23);
			this->lblMinMatrix->Name = L"lblMinMatrix";
			this->lblMinMatrix->Size = System::Drawing::Size(72, 17);
			this->lblMinMatrix->TabIndex = 0;
			this->lblMinMatrix->Text = L"Минимум:";
			// 
			// btnExitMatrix
			// 
			this->btnExitMatrix->Location = System::Drawing::Point(6, 226);
			this->btnExitMatrix->Name = L"btnExitMatrix";
			this->btnExitMatrix->Size = System::Drawing::Size(150, 40);
			this->btnExitMatrix->TabIndex = 8;
			this->btnExitMatrix->Text = L"Выход";
			this->btnExitMatrix->UseVisualStyleBackColor = true;
			this->btnExitMatrix->Click += gcnew System::EventHandler(this, &MainForm::btnClose_Click);
			// 
			// btnActionMatrix
			// 
			this->btnActionMatrix->Location = System::Drawing::Point(162, 226);
			this->btnActionMatrix->Name = L"btnActionMatrix";
			this->btnActionMatrix->Size = System::Drawing::Size(139, 40);
			this->btnActionMatrix->TabIndex = 10;
			this->btnActionMatrix->Text = L"Проверка";
			this->btnActionMatrix->UseVisualStyleBackColor = true;
			this->btnActionMatrix->Click += gcnew System::EventHandler(this, &MainForm::btnActionMatrix_Click);
			// 
			// btnOpenMatrix
			// 
			this->btnOpenMatrix->Location = System::Drawing::Point(6, 180);
			this->btnOpenMatrix->Name = L"btnOpenMatrix";
			this->btnOpenMatrix->Size = System::Drawing::Size(150, 40);
			this->btnOpenMatrix->TabIndex = 7;
			this->btnOpenMatrix->Text = L"Ввод из файла";
			this->btnOpenMatrix->UseVisualStyleBackColor = true;
			this->btnOpenMatrix->Click += gcnew System::EventHandler(this, &MainForm::btnOpenMatrix_Click);
			// 
			// btnSaveMatrix
			// 
			this->btnSaveMatrix->Location = System::Drawing::Point(162, 180);
			this->btnSaveMatrix->Name = L"btnSaveMatrix";
			this->btnSaveMatrix->Size = System::Drawing::Size(139, 40);
			this->btnSaveMatrix->TabIndex = 9;
			this->btnSaveMatrix->Text = L"Сохранить в файл";
			this->btnSaveMatrix->UseVisualStyleBackColor = true;
			this->btnSaveMatrix->Click += gcnew System::EventHandler(this, &MainForm::btnSaveMatrix_Click);
			// 
			// txtBoxSizeMatrix
			// 
			this->txtBoxSizeMatrix->Location = System::Drawing::Point(172, 16);
			this->txtBoxSizeMatrix->Name = L"txtBoxSizeMatrix";
			this->txtBoxSizeMatrix->Size = System::Drawing::Size(129, 23);
			this->txtBoxSizeMatrix->TabIndex = 2;
			this->txtBoxSizeMatrix->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxSizeMatrix_KeyPress);
			// 
			// btnGenMatrix
			// 
			this->btnGenMatrix->Location = System::Drawing::Point(6, 131);
			this->btnGenMatrix->Name = L"btnGenMatrix";
			this->btnGenMatrix->Size = System::Drawing::Size(150, 43);
			this->btnGenMatrix->TabIndex = 6;
			this->btnGenMatrix->Text = L"Генерация матрицы";
			this->btnGenMatrix->UseVisualStyleBackColor = true;
			this->btnGenMatrix->Click += gcnew System::EventHandler(this, &MainForm::btnGenMatrix_Click);
			// 
			// lblSizeMatrix
			// 
			this->lblSizeMatrix->AutoSize = true;
			this->lblSizeMatrix->Location = System::Drawing::Point(6, 22);
			this->lblSizeMatrix->Name = L"lblSizeMatrix";
			this->lblSizeMatrix->Size = System::Drawing::Size(160, 17);
			this->lblSizeMatrix->TabIndex = 1;
			this->lblSizeMatrix->Text = L"Размерность матрицы:";
			// 
			// btnHelpMatrix
			// 
			this->btnHelpMatrix->Location = System::Drawing::Point(162, 131);
			this->btnHelpMatrix->Name = L"btnHelpMatrix";
			this->btnHelpMatrix->Size = System::Drawing::Size(139, 43);
			this->btnHelpMatrix->TabIndex = 6;
			this->btnHelpMatrix->Text = L"Справка";
			this->btnHelpMatrix->UseVisualStyleBackColor = true;
			this->btnHelpMatrix->Click += gcnew System::EventHandler(this, &MainForm::btnHelpMatrix_Click);
			// 
			// richTxtBoxInputMatrix
			// 
			this->richTxtBoxInputMatrix->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTxtBoxInputMatrix->Font = (gcnew System::Drawing::Font(L"Courier New", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTxtBoxInputMatrix->Location = System::Drawing::Point(316, 3);
			this->richTxtBoxInputMatrix->Name = L"richTxtBoxInputMatrix";
			this->richTxtBoxInputMatrix->Size = System::Drawing::Size(330, 355);
			this->richTxtBoxInputMatrix->TabIndex = 0;
			this->richTxtBoxInputMatrix->Text = L"";
			this->richTxtBoxInputMatrix->WordWrap = false;
			this->richTxtBoxInputMatrix->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::richTxtBoxInputMatrix_KeyPress);
			// 
			// groupBoxResultsMatrix
			// 
			this->groupBoxResultsMatrix->Controls->Add(this->txtBoxResultMatrix);
			this->groupBoxResultsMatrix->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBoxResultsMatrix->Location = System::Drawing::Point(3, 364);
			this->groupBoxResultsMatrix->Name = L"groupBoxResultsMatrix";
			this->groupBoxResultsMatrix->Size = System::Drawing::Size(646, 51);
			this->groupBoxResultsMatrix->TabIndex = 7;
			this->groupBoxResultsMatrix->TabStop = false;
			this->groupBoxResultsMatrix->Text = L"Результаты";
			// 
			// txtBoxResultMatrix
			// 
			this->txtBoxResultMatrix->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtBoxResultMatrix->Location = System::Drawing::Point(3, 18);
			this->txtBoxResultMatrix->Name = L"txtBoxResultMatrix";
			this->txtBoxResultMatrix->ReadOnly = true;
			this->txtBoxResultMatrix->Size = System::Drawing::Size(640, 22);
			this->txtBoxResultMatrix->TabIndex = 3;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnSaveFunc);
			this->tabPage3->Controls->Add(this->btnCloseFunc);
			this->tabPage3->Controls->Add(this->groupBoxResultsFunc);
			this->tabPage3->Controls->Add(this->btnActionFunc);
			this->tabPage3->Controls->Add(this->groupBoxInputN);
			this->tabPage3->Controls->Add(this->pictureBoxFunc);
			this->tabPage3->Controls->Add(this->btnHelpFunc);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 24);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(652, 418);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"№168";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnSaveFunc
			// 
			this->btnSaveFunc->Location = System::Drawing::Point(9, 290);
			this->btnSaveFunc->Name = L"btnSaveFunc";
			this->btnSaveFunc->Size = System::Drawing::Size(309, 36);
			this->btnSaveFunc->TabIndex = 12;
			this->btnSaveFunc->Text = L"Сохранить результаты";
			this->btnSaveFunc->UseVisualStyleBackColor = true;
			this->btnSaveFunc->Click += gcnew System::EventHandler(this, &MainForm::btnSaveFunc_Click);
			// 
			// btnCloseFunc
			// 
			this->btnCloseFunc->Location = System::Drawing::Point(9, 332);
			this->btnCloseFunc->Name = L"btnCloseFunc";
			this->btnCloseFunc->Size = System::Drawing::Size(309, 36);
			this->btnCloseFunc->TabIndex = 11;
			this->btnCloseFunc->Text = L"Выход";
			this->btnCloseFunc->UseVisualStyleBackColor = true;
			this->btnCloseFunc->Click += gcnew System::EventHandler(this, &MainForm::btnClose_Click);
			// 
			// groupBoxResultsFunc
			// 
			this->groupBoxResultsFunc->Controls->Add(this->txtBoxResultQ);
			this->groupBoxResultsFunc->Controls->Add(this->txtBoxResultP);
			this->groupBoxResultsFunc->Controls->Add(this->lblResultQ);
			this->groupBoxResultsFunc->Controls->Add(this->lblResultP);
			this->groupBoxResultsFunc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBoxResultsFunc->Location = System::Drawing::Point(9, 207);
			this->groupBoxResultsFunc->Name = L"groupBoxResultsFunc";
			this->groupBoxResultsFunc->Size = System::Drawing::Size(310, 77);
			this->groupBoxResultsFunc->TabIndex = 10;
			this->groupBoxResultsFunc->TabStop = false;
			this->groupBoxResultsFunc->Text = L"Результаты расчётов";
			// 
			// txtBoxResultQ
			// 
			this->txtBoxResultQ->Location = System::Drawing::Point(32, 44);
			this->txtBoxResultQ->Name = L"txtBoxResultQ";
			this->txtBoxResultQ->ReadOnly = true;
			this->txtBoxResultQ->Size = System::Drawing::Size(271, 22);
			this->txtBoxResultQ->TabIndex = 3;
			// 
			// txtBoxResultP
			// 
			this->txtBoxResultP->Location = System::Drawing::Point(32, 19);
			this->txtBoxResultP->Name = L"txtBoxResultP";
			this->txtBoxResultP->ReadOnly = true;
			this->txtBoxResultP->Size = System::Drawing::Size(271, 22);
			this->txtBoxResultP->TabIndex = 2;
			// 
			// lblResultQ
			// 
			this->lblResultQ->AutoSize = true;
			this->lblResultQ->Location = System::Drawing::Point(7, 47);
			this->lblResultQ->Name = L"lblResultQ";
			this->lblResultQ->Size = System::Drawing::Size(19, 16);
			this->lblResultQ->TabIndex = 1;
			this->lblResultQ->Text = L"q:";
			// 
			// lblResultP
			// 
			this->lblResultP->AutoSize = true;
			this->lblResultP->Location = System::Drawing::Point(7, 22);
			this->lblResultP->Name = L"lblResultP";
			this->lblResultP->Size = System::Drawing::Size(19, 16);
			this->lblResultP->TabIndex = 0;
			this->lblResultP->Text = L"p:";
			// 
			// btnActionFunc
			// 
			this->btnActionFunc->Location = System::Drawing::Point(122, 160);
			this->btnActionFunc->Name = L"btnActionFunc";
			this->btnActionFunc->Size = System::Drawing::Size(196, 41);
			this->btnActionFunc->TabIndex = 9;
			this->btnActionFunc->Text = L"Расчёт p и q";
			this->btnActionFunc->UseVisualStyleBackColor = true;
			this->btnActionFunc->Click += gcnew System::EventHandler(this, &MainForm::btnActionFunc_Click);
			// 
			// groupBoxInputN
			// 
			this->groupBoxInputN->Controls->Add(this->txtBoxInputN);
			this->groupBoxInputN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxInputN->Location = System::Drawing::Point(9, 99);
			this->groupBoxInputN->Name = L"groupBoxInputN";
			this->groupBoxInputN->Size = System::Drawing::Size(310, 55);
			this->groupBoxInputN->TabIndex = 8;
			this->groupBoxInputN->TabStop = false;
			this->groupBoxInputN->Text = L"Ввод значения n (1 ≤ n ≤ 20)";
			// 
			// txtBoxInputN
			// 
			this->txtBoxInputN->Location = System::Drawing::Point(7, 22);
			this->txtBoxInputN->Name = L"txtBoxInputN";
			this->txtBoxInputN->Size = System::Drawing::Size(296, 22);
			this->txtBoxInputN->TabIndex = 0;
			this->txtBoxInputN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::txtBoxInputN_KeyPress);
			// 
			// pictureBoxFunc
			// 
			this->pictureBoxFunc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxFunc.Image")));
			this->pictureBoxFunc->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxFunc.InitialImage")));
			this->pictureBoxFunc->Location = System::Drawing::Point(8, 12);
			this->pictureBoxFunc->Name = L"pictureBoxFunc";
			this->pictureBoxFunc->Size = System::Drawing::Size(310, 80);
			this->pictureBoxFunc->TabIndex = 7;
			this->pictureBoxFunc->TabStop = false;
			// 
			// btnHelpFunc
			// 
			this->btnHelpFunc->Location = System::Drawing::Point(8, 160);
			this->btnHelpFunc->Name = L"btnHelpFunc";
			this->btnHelpFunc->Size = System::Drawing::Size(108, 41);
			this->btnHelpFunc->TabIndex = 6;
			this->btnHelpFunc->Text = L"Справка";
			this->btnHelpFunc->UseVisualStyleBackColor = true;
			this->btnHelpFunc->Click += gcnew System::EventHandler(this, &MainForm::btnHelpFunc_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBoxResultsStrings);
			this->tabPage4->Controls->Add(this->tableLayoutPanel2);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage4->Location = System::Drawing::Point(4, 24);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(652, 418);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"№249";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// groupBoxResultsStrings
			// 
			this->groupBoxResultsStrings->Controls->Add(this->richTxtBoxResultStrings);
			this->groupBoxResultsStrings->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBoxResultsStrings->Location = System::Drawing::Point(0, 247);
			this->groupBoxResultsStrings->Name = L"groupBoxResultsStrings";
			this->groupBoxResultsStrings->Size = System::Drawing::Size(652, 171);
			this->groupBoxResultsStrings->TabIndex = 1;
			this->groupBoxResultsStrings->TabStop = false;
			this->groupBoxResultsStrings->Text = L"Результаты";
			// 
			// richTxtBoxResultStrings
			// 
			this->richTxtBoxResultStrings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTxtBoxResultStrings->Location = System::Drawing::Point(3, 18);
			this->richTxtBoxResultStrings->Name = L"richTxtBoxResultStrings";
			this->richTxtBoxResultStrings->ReadOnly = true;
			this->richTxtBoxResultStrings->Size = System::Drawing::Size(646, 150);
			this->richTxtBoxResultStrings->TabIndex = 0;
			this->richTxtBoxResultStrings->Text = L"";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->Controls->Add(this->groupBoxInputStrings, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->groupBoxStr, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(652, 418);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// groupBoxInputStrings
			// 
			this->groupBoxInputStrings->Controls->Add(this->richTxtBoxInputStrings);
			this->groupBoxInputStrings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBoxInputStrings->Location = System::Drawing::Point(286, 3);
			this->groupBoxInputStrings->Name = L"groupBoxInputStrings";
			this->groupBoxInputStrings->Size = System::Drawing::Size(363, 412);
			this->groupBoxInputStrings->TabIndex = 0;
			this->groupBoxInputStrings->TabStop = false;
			this->groupBoxInputStrings->Text = L"Поле ввода";
			// 
			// richTxtBoxInputStrings
			// 
			this->richTxtBoxInputStrings->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTxtBoxInputStrings->Location = System::Drawing::Point(3, 18);
			this->richTxtBoxInputStrings->Name = L"richTxtBoxInputStrings";
			this->richTxtBoxInputStrings->Size = System::Drawing::Size(357, 391);
			this->richTxtBoxInputStrings->TabIndex = 0;
			this->richTxtBoxInputStrings->Text = L"";
			this->richTxtBoxInputStrings->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::richTxtBoxInputStrings_KeyPress);
			// 
			// groupBoxStr
			// 
			this->groupBoxStr->Controls->Add(this->btnActionStr);
			this->groupBoxStr->Controls->Add(this->btnSaveStr);
			this->groupBoxStr->Controls->Add(this->btnOpenStr);
			this->groupBoxStr->Controls->Add(this->btnExitStr);
			this->groupBoxStr->Controls->Add(this->btnHelpString);
			this->groupBoxStr->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBoxStr->Location = System::Drawing::Point(3, 3);
			this->groupBoxStr->Name = L"groupBoxStr";
			this->groupBoxStr->Size = System::Drawing::Size(277, 412);
			this->groupBoxStr->TabIndex = 1;
			this->groupBoxStr->TabStop = false;
			// 
			// btnActionStr
			// 
			this->btnActionStr->Location = System::Drawing::Point(5, 91);
			this->btnActionStr->Name = L"btnActionStr";
			this->btnActionStr->Size = System::Drawing::Size(265, 33);
			this->btnActionStr->TabIndex = 12;
			this->btnActionStr->Text = L"Проверка";
			this->btnActionStr->UseVisualStyleBackColor = true;
			this->btnActionStr->Click += gcnew System::EventHandler(this, &MainForm::btnActionStr_Click);
			// 
			// btnSaveStr
			// 
			this->btnSaveStr->Location = System::Drawing::Point(134, 52);
			this->btnSaveStr->Name = L"btnSaveStr";
			this->btnSaveStr->Size = System::Drawing::Size(136, 33);
			this->btnSaveStr->TabIndex = 11;
			this->btnSaveStr->Text = L"Сохранить в файл";
			this->btnSaveStr->UseVisualStyleBackColor = true;
			this->btnSaveStr->Click += gcnew System::EventHandler(this, &MainForm::btnSaveStr_Click);
			// 
			// btnOpenStr
			// 
			this->btnOpenStr->Location = System::Drawing::Point(7, 52);
			this->btnOpenStr->Name = L"btnOpenStr";
			this->btnOpenStr->Size = System::Drawing::Size(121, 33);
			this->btnOpenStr->TabIndex = 10;
			this->btnOpenStr->Text = L"Ввод из файла";
			this->btnOpenStr->UseVisualStyleBackColor = true;
			this->btnOpenStr->Click += gcnew System::EventHandler(this, &MainForm::btnOpenStr_Click);
			// 
			// btnExitStr
			// 
			this->btnExitStr->Location = System::Drawing::Point(134, 13);
			this->btnExitStr->Name = L"btnExitStr";
			this->btnExitStr->Size = System::Drawing::Size(136, 33);
			this->btnExitStr->TabIndex = 9;
			this->btnExitStr->Text = L"Выход";
			this->btnExitStr->UseVisualStyleBackColor = true;
			this->btnExitStr->Click += gcnew System::EventHandler(this, &MainForm::btnClose_Click);
			// 
			// btnHelpString
			// 
			this->btnHelpString->Location = System::Drawing::Point(7, 13);
			this->btnHelpString->Name = L"btnHelpString";
			this->btnHelpString->Size = System::Drawing::Size(121, 33);
			this->btnHelpString->TabIndex = 7;
			this->btnHelpString->Text = L"Справка";
			this->btnHelpString->UseVisualStyleBackColor = true;
			this->btnHelpString->Click += gcnew System::EventHandler(this, &MainForm::btnHelpString_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 446);
			this->Controls->Add(this->tabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Индивидуальные задания";
			this->tabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBoxResults->ResumeLayout(false);
			this->groupBoxResults->PerformLayout();
			this->groupBoxTempRads->ResumeLayout(false);
			this->groupBoxTempRads->PerformLayout();
			this->groupBoxArray->ResumeLayout(false);
			this->groupBoxArray->PerformLayout();
			this->groupBoxGen->ResumeLayout(false);
			this->groupBoxGen->PerformLayout();
			this->groupBoxLimitsX->ResumeLayout(false);
			this->groupBoxLimitsX->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBoxGenMatrix->ResumeLayout(false);
			this->groupBoxGenMatrix->PerformLayout();
			this->groupBoxLimitsMatrix->ResumeLayout(false);
			this->groupBoxLimitsMatrix->PerformLayout();
			this->groupBoxResultsMatrix->ResumeLayout(false);
			this->groupBoxResultsMatrix->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBoxResultsFunc->ResumeLayout(false);
			this->groupBoxResultsFunc->PerformLayout();
			this->groupBoxInputN->ResumeLayout(false);
			this->groupBoxInputN->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFunc))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->groupBoxResultsStrings->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->groupBoxInputStrings->ResumeLayout(false);
			this->groupBoxStr->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	//Изменение окна в соответствии с выбором вкладки
	private: System::Void tabControl_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int a = tabControl->SelectedIndex;
		switch (a) {
			case 0:
				//Начальный размер формы: 676; 485
				this->Width = 676;
				this->Height = 485;
				this->MaximizeBox = false;
				if (this->WindowState == FormWindowState::Maximized) {
					this->WindowState = FormWindowState::Normal;
				}
				break;
			case 1:
				this->Width = 698;
				this->Height = 440;
				this->MaximizeBox = true;
				break;
			case 2:
				//348; 445
				this->Width = 348;
				this->Height = 445;
				this->MaximizeBox = false;
				if (this->WindowState == FormWindowState::Maximized) {
					this->WindowState = FormWindowState::Normal;
				}
				break;
			case 3:
				this->Width = 735;
				this->Height = 507;
				this->MaximizeBox = true;
				break;
		}
	}

	//!--------------------!//
	//!--Первая программа--!//
	//!--------------------!//

	//Область глобальных переменных первой программы
	private:
		String^ Input = "";
		int* arr = new int[2097152];
		int Counter = 0;

	//Обработчик закрытия приложения
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Вы уверены, что хотите выйти?", "Выход",
		MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			delete[] arr;
			this->Close();
		}
	}

	//Защита от дурака
	private: System::Void funcRestrictionOfInput(System::Windows::Forms::TextBox^ object, System::Windows::Forms::KeyPressEventArgs^  input) {
		if ((!Char::IsDigit(input->KeyChar)) && ((input->KeyChar != '-' || object->Text->IndexOf('-') != -1)) && (input->KeyChar != ' ') && (input->KeyChar != (char)Keys::Back)) input->Handled = true;
		if ((input->KeyChar == (char)Keys::D0 || input->KeyChar == (char)Keys::NumPad0) && (object->Text->Length >= 1) && (object->Text[0] == '0' && object->SelectionStart < 2)) input->Handled = true;
		if (object == txtBoxNumOfPoints && (input->KeyChar == '-')) input->Handled = true; //количество не может быть отрицательным
		if (object->Text->IndexOf('-') == 0) {
			if (object->SelectionStart == 0) {
				input->Handled = true;
			}
			if ((object->SelectionStart == 2) && (input->KeyChar == '0')) {
				input->Handled = true;
			}
		}
		if (input->KeyChar == '-' && object->Text->IndexOf('-') == -1) object->SelectionStart = 0;
		else {
			txtBoxResMin->Text = "";
			txtBoxResMax->Text = "";
			txtBoxInputArray->Text = "";
			txtBoxTempRads->Text = "";
		}
	}

	private: System::Void txtBoxNumOfPoints_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxNumOfPoints, e);
	}

	private: System::Void txtBoxMin_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxMin, e);
	}

	private: System::Void txtBoxMax_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxMax, e);
	}
			 
	//Отдельный обработчик ввода для исходного массива
	private: System::Void txtBoxInputArray_TextChanged(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-') && (e->KeyChar != ' ') && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		else {
			txtBoxResMin->Text = "";
			txtBoxResMax->Text = "";
			txtBoxNumOfPoints->Text = "";
			txtBoxMin->Text = "";
			txtBoxMax->Text = "";
			txtBoxTempRads->Text = "";
		}
	}

	//Вывод справки (первая вкладка)
	private: System::Void btnHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(this, "В одномерном массиве с чётным количеством элементов (2N) находятся координаты N точек плоскости. Они располагаются в следующем порядке: x1, y1, x2, y2, x3, y3, и т.д. Определить кольцо с центром в начале координат, которое содержит все точки.",
		"Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Функция для сохранения файла
	//Проверяет, записан ли исходный массив или результат в файл
	//Вызывается функцией btnSaveFile_Click
	private: System::Void SaveFileFunc(String^ file) {
		int i;
		const int size = 4;
		array<String^>^ str = gcnew array<String^>(size); //массив строк
		for (i = 0; i < size; i++) {
			str[i] = "";
		}
		str[0] = "Координаты точек: " + txtBoxInputArray->Text;
		str[1] = "Радиусы всех точек от начала координат: " + txtBoxTempRads->Text;
		str[2] = txtBoxResMin->Text;
		str[3] = txtBoxResMax->Text;
		String^ str1 = txtBoxInputArray->Text;
		String^ str2 = txtBoxResMin->Text;
		if (str1 == "" || str2 == "") {
			MessageBox::Show(this, "Данные для сохранения отсутствуют!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!System::IO::File::Exists(file)) {
				System::IO::File::AppendAllText(file, str[0] + "\r\n" + str[1] + "\r\n" + str[2] + "\r\n" + str[3] + "\r\n\r\n"); //создание и открытие файла
				Input = str1;
			}
			else {
				if (str1 != Input){
					System::IO::File::AppendAllText(file, "\r\n" + str[0] + "\r\n" + str[1] + "\r\n" + str[2] + "\r\n" + str[3] + "\r\n\r\n");
					Input = str1;
				}
			}
		}
	}

	//Сохранение в файл по кнопке "Сохранить"
	//Использует функцию SaveFileFunc для проверки
	private: System::Void btnSaveFile_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ SaveFileDlg = gcnew SaveFileDialog;
		SaveFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		SaveFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		SaveFileDlg->OverwritePrompt = false;
		if (SaveFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = SaveFileDlg->FileName;
			SaveFileFunc(fileName);
		}
	}

	//Очистка полученной строки от лишних символов
	//Вызывается функцией StringSeparator
	private: System::String^ StringCleanUp(System::String^ str) {
		System::String^ str2 = "";
		for (int i = 0; i < str->Length; i++) {
			if (!Char::IsDigit(str[i]) && str[i] != ' ' && str[i] != '-') continue;
			else {
				if (i > 0 && i < (str->Length - 1)) {
					if (str[i] == ' ' && str[i+1] == ' ') continue;
					else if (str[i] == '-' && (Char::IsDigit(str[i-1]) && Char::IsDigit(str[i+1]))) str2 = str2 + " -";
					else if (str[i] == '-' && ((str[i-1] == '-' || str[i+1] == '-') || str[i+1] == ' ' || Char::IsDigit(str[i-1]))) continue;
					else str2 = str2 + str[i];
				}
				else if (i == 0 && str[i] == '-') {
					if (str->Length > 2 && (str[i + 1] == ' ') || Char::IsDigit(str[i])) continue;
					else str2 = str2 + str[i];
				}
				else if (i == 0 && Char::IsDigit(str[i])) str2 = str2 + str[i];
				else if ((str->Length == 1 || str->Length == 2) && Char::IsDigit(str[i])) str2 = str2 + str[i];
			}
		}
		return str2;
	}

	//Очищает массив строк полученный из btnOpenFile_Click
	//Затем соединяет все строки массива строк в одну строку для передачи в txtBoxInputArray
	//Использует для очищения строки функцию StringCleanUp
	private: System::String^ StringSeparator(array<String^>^ string) {
		System::String^ str1 = "";
		System::String^ str2 = "";
		System::String^ str3 = "";
		for (int i = 0; i < string->Length; i++) {
			str1 = StringCleanUp(string [i]);
			str2 = str2 + str1 + " ";
			str1 = "";
		}
		for (int i = 0; i < str2->Length; i++) {
			if (i > 0 && i < (str2->Length - 1)) {
				if (str2[i] == ' ' && str2[i + 1] == ' ') continue;
				else str3 = str3 + str2[i];
			}
		}
		return str3;
	}

	//Ввод через файл по кнопке "Ввод через файл" (диалог открытия файла)
	//Передаёт массив строк в функцию StringSeparator и получает одну строку
	private: System::Void btnOpenFile_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ OpenFileDlg = gcnew OpenFileDialog;
		OpenFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		OpenFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		if (OpenFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = OpenFileDlg->FileName;
			array<String^>^ str = gcnew array<String^>(100);
			str = System::IO::File::ReadAllLines(fileName, System::Text::Encoding::UTF8);
			String^ fileText = StringSeparator(str); //обработка текста
			txtBoxInputArray->Text = fileText;
			txtBoxResMin->Text = "";
			txtBoxResMax->Text = "";
			txtBoxNumOfPoints->Text = "";
			txtBoxMin->Text = "";
			txtBoxMax->Text = "";
			txtBoxTempRads->Text = "";
		}
	}

	//Функция генерации координат N случайных точек
	//Выполняется при нажатии на кнопку "Генерация точек"
	private: System::Void btnGeneration_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBoxNumOfPoints->Text == "" || txtBoxMin->Text == "" || txtBoxMax->Text == "") {
			MessageBox::Show(this, "Введите значения в текстовые поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (txtBoxNumOfPoints->Text == "0" || txtBoxMin->Text == "-" || txtBoxMax->Text == "-") {
			MessageBox::Show(this, "Неверный формат ввода!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Convert::ToInt32(txtBoxMin->Text) > Convert::ToInt32(txtBoxMax->Text)) {
			MessageBox::Show(this, "Минимальное значение диапазона больше максимального!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Convert::ToInt32(txtBoxMin->Text) == Convert::ToInt32(txtBoxMax->Text)) {
			MessageBox::Show(this, "Минимальное и максимальное значения диапазона равны!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			srand(time(0)); //генерация по времени
			txtBoxInputArray->Text = L"";
			Counter = 0;
			int number = Convert::ToInt32(txtBoxNumOfPoints->Text);
			int randomX, randomY;
			for (int i = 0; i < number; i++) {
				Random^ temp = gcnew Random(i + rand());
				randomX = temp->Next((Convert::ToInt32(txtBoxMin->Text)), (Convert::ToInt32(txtBoxMax->Text) + 1));
				randomY = temp->Next((Convert::ToInt32(txtBoxMin->Text)), (Convert::ToInt32(txtBoxMax->Text) + 1));
				txtBoxInputArray->Text = txtBoxInputArray->Text + Convert::ToString(randomX) + " " + Convert::ToString(randomY) + " ";
			}
		}
	}

	//Функция конвертации строки в массив целых чисел
	//Выполняется из btnAction1_Click
	private: System::Void funcConvertation(System::String^ str) {
		int i, counter = 0;
		System::String^ str1 = StringCleanUp(str) + str[str->Length - 1];
		System::String^ tempStr = "";
		for (i = 0; i < (str1->Length); i++) {
			if ((!Char::IsDigit(str1[i]) && str1[i] != ' ' && str1[i] != '-') || (str1[i] == ' ' && i == 0)) continue;
			if (Char::IsDigit(str1[i]) || str1[i] == '-') tempStr = tempStr + str1[i];
			if (str1[i] == ' ' && tempStr != "" && tempStr != "-") {
				arr[counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
			if (i == (str1->Length - 1) && tempStr != "" && tempStr != "-") {
				if (tempStr[tempStr->Length - 1] == '-') tempStr = tempStr->Remove(tempStr->Length - 1, 1);
				arr[counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
		}
		Counter = counter;
		txtBoxInputArray->Text = "";
		for (i = 0; i < Counter; i++) {
			txtBoxInputArray->Text = txtBoxInputArray->Text + " " + Convert::ToString(arr[i]);
		}
	}
	
	//Расчитывает максимальный и минимальный радиус кольца для уравнения
	//Вызывает для конвертации строки в массив целых чисел функцию funcConvertation
	private: System::Void btnAction1_Click(System::Object^  sender, System::EventArgs^  e) {
		if(txtBoxInputArray->Text == "" || txtBoxInputArray->Text == "-") {
			MessageBox::Show(this, "Введите корректное значение в текстовое поле!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			funcConvertation(txtBoxInputArray->Text);
			if (Counter % 2 != 0) {
				MessageBox::Show(this, "Введено нечётное количество координат!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				txtBoxTempRads->Text = "";
				double min = 100000, max = -100000;
				for (int i = 0; i < Counter; i=i+2) {
					double a = Convert::ToDouble(arr[i]), b = Convert::ToDouble(arr[i+1]);
					double r = Math::Sqrt(a*a + b*b);
					txtBoxTempRads->Text = txtBoxTempRads->Text + Convert::ToString(r) + " ";
					if (r < min) min = r;
					if (r > max) max = r;
				}
				if (min == max) {
					txtBoxResMin->Text = L"Кольцо вырождается в окружность с радиусом " + Convert::ToString(max);
				}
				else {
					txtBoxResMin->Text = L"Минимальный радиус: " + Convert::ToString(min);
					txtBoxResMax->Text = L"Максимальный радиус: " + Convert::ToString(max) + ".";
				}
			}
		}
	}

	//!--------------------!//
	//!--Вторая программа--!//
	//!--------------------!//

	//Глобальные переменные второй программы
	private:
		int size_matrix;
		int correct; //для проверки корректности
		array<int, 2>^ matrix = gcnew array<int, 2>(128, 128);
		String^ InputMatrix = "";

	//Вывод справки (вторая вкладка)
	private: System::Void btnHelpMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(this, "Определить, является ли заданная целая квадратная матрица n-го порядка симметричной (относительно главной диагонали). n > 1.",
		"Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Использует функцию из первой программы для защиты ввода
	private: System::Void txtBoxMinMatrix_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxMinMatrix, e);
		txtBoxResultMatrix->Text = "";
		richTxtBoxInputMatrix->Text = "";
	}

	//Использует функцию из первой программы для защиты ввода
	private: System::Void txtBoxMaxMatrix_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		funcRestrictionOfInput(txtBoxMaxMatrix, e);
		txtBoxResultMatrix->Text = "";
		richTxtBoxInputMatrix->Text = "";
	}

	//Защита ввода текстового поля размерности матрицы
	private: System::Void txtBoxSizeMatrix_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		txtBoxResultMatrix->Text = "";
		richTxtBoxInputMatrix->Text = "";
	}

	//Защита ввода в ричбокс
	private: System::Void richTxtBoxInputMatrix_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((!Char::IsDigit(e->KeyChar)) && (e->KeyChar != '-') && (e->KeyChar != ' ') &&
		(e->KeyChar != (char)Keys::Back) && (e->KeyChar != (char)Keys::Enter)) e->Handled = true;
		else {
			txtBoxResultMatrix->Text = "";
			txtBoxSizeMatrix->Text = "";
			txtBoxMinMatrix->Text = "";
			txtBoxMaxMatrix->Text = "";
		}
	}

	//Вывод массива
	//Вызывается из функции ConvertationMatrixFromFile для вывода матрицы
	//Вызывается из функции btnGenMatrix_Click для вывода матрицы
	private: System::Void OutputMatrix() {
		richTxtBoxInputMatrix->Text = "";
		int length_max = 0;
		int length_temp = 0;
		int count_of_probels = 0;
		String^ temp_member = "";
		for (int i = 0; i < size_matrix; i++) {
			for (int j = 0; j < size_matrix; j++) { //поиск наибольшего элемента по символам
				temp_member = Convert::ToString(this->matrix[i, j]); //длина в символах текущего элемента матрицы
				length_temp = temp_member->Length;
				if (length_temp > length_max) length_max = length_temp;
			}
		}
		for (int i = 0; i < size_matrix; i++) {
			for (int j = 0; j < size_matrix; j++) {
				temp_member = Convert::ToString(matrix[i, j]);
				length_temp = temp_member->Length;
				count_of_probels = length_max - length_temp;
				for (int k = 0; k < count_of_probels; k++){
					temp_member = " " + temp_member;
				}
				richTxtBoxInputMatrix->Text = richTxtBoxInputMatrix->Text + " " + temp_member;
			}
			richTxtBoxInputMatrix->Text = richTxtBoxInputMatrix->Text + "\n";
		}
	}

	//Конвертация строки в двумерный массив из файла без лишних символов
	//Использует функцию OutputMatrix для вывода матрицы
	//Вызывается из функций btnOpenMatrix_Click и btnActionMatrix_Click
	private: System::Void ConvertationMatrixFromFile(int first_size, String^ str) {
		int i, counter = 0;
		System::String^ str1;
		if (str->Length > 1) {
			str1 = StringCleanUp(str) + str[str->Length - 1];
		}
		else {
			str1 = StringCleanUp(str);
		}
		System::String^ tempStr = "";
		for (i = 0; i < (str1->Length); i++) {
			if (counter == size_matrix) break;
			if ((!Char::IsDigit(str1[i]) && str1[i] != ' ' && str1[i] != '-') || (str1[i] == ' ' && i == 0)) continue;
			if (Char::IsDigit(str1[i]) || str1[i] == '-') tempStr = tempStr + str1[i];
			if (str1[i] == ' ' && tempStr != "" && tempStr != "-") {
				matrix[first_size, counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
			if (i == (str1->Length - 1) && tempStr != "" && tempStr != "-") {
				if (tempStr[tempStr->Length - 1] == '-') tempStr = tempStr->Remove(tempStr->Length - 1, 1);
				matrix[first_size, counter] = Convert::ToInt32(tempStr);
				tempStr = "";
				counter = counter + 1;
			}
		}
		OutputMatrix();
	}

	//Диалог открытия файла для ввода матрицы
	//Использует функцию ConvertationMatrixFromFile для конвертирования строки и очистки от лишних символов
	private: System::Void btnOpenMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ OpenFileDlg = gcnew OpenFileDialog;
		OpenFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		OpenFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		if (OpenFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = OpenFileDlg->FileName;
			array<String^>^ str = gcnew array<String^>(100);
			str = System::IO::File::ReadAllLines(fileName, System::Text::Encoding::UTF8);
			richTxtBoxInputMatrix->Text = "";
			txtBoxResultMatrix->Text = "";
			txtBoxSizeMatrix->Text = "";
			txtBoxMinMatrix->Text = "";
			txtBoxMaxMatrix->Text = "";
			size_matrix = str->Length;
			for (int i = 0; i < size_matrix; i++) {
				ConvertationMatrixFromFile(i, str[i]); //каждая строка конвертируется в матрицу
			}
		}
	}

	//Проверка, сохранялась ли уже матрица
	//Вызывается из функции btnSaveMatrix_Click
	private: System::Void SaveMatrixFunc(String^ file) {
		int i;
		const int size = 2;
		array<String^>^ str = gcnew array<String^>(size); //массив строк
		for (i = 0; i < size; i++) {
			str[i] = "";
		}
		str[0] = "Исходная матрица:";
		str[1] = txtBoxResultMatrix->Text;
		String^ str1 = richTxtBoxInputMatrix->Text;
		array<String^>^ str2 = gcnew array<String^>(size_matrix);
		array<wchar_t>^ sym = gcnew array<wchar_t>(1); //массив символов-разделителей строк
		sym[0] = '\n';
		str2 = richTxtBoxInputMatrix->Text->Split(sym, StringSplitOptions::RemoveEmptyEntries); //запись строк в массив строк
		if (str1 == "" || txtBoxResultMatrix->Text == "") {
			MessageBox::Show(this, "Данные для сохранения отсутствуют!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!System::IO::File::Exists(file)) {
				System::IO::File::AppendAllText(file, str[0] + "\r\n");
				System::IO::File::AppendAllLines(file, str2);
				System::IO::File::AppendAllText(file, str[1] + "\r\n\r\n");
				InputMatrix = str1;
			}
			else {
				if (str1 != Input){
					System::IO::File::AppendAllText(file, str[0] + "\r\n");
					System::IO::File::AppendAllLines(file, str2);
					System::IO::File::AppendAllText(file, str[1] + "\r\n\r\n");
					InputMatrix = str1;
				}
			}
		}
	}

	//Диалог сохранения файла с исходной матрицей и результатом
	//Использует функцию SaveMatrixFunc для проверки, сохранялась ли уже матрица
	private: System::Void btnSaveMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ SaveFileDlg = gcnew SaveFileDialog;
		SaveFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		SaveFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		SaveFileDlg->OverwritePrompt = false;
		if (SaveFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = SaveFileDlg->FileName;
			SaveMatrixFunc(fileName);
		}
	}

	//Обработчик генерации матрицы случайных чисел
	//Использует функцию OutputMatrix для вывода матрицы
	private: System::Void btnGenMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBoxSizeMatrix->Text == "" || txtBoxMinMatrix->Text == "" || txtBoxMaxMatrix->Text == "" || txtBoxMinMatrix->Text == "-" || txtBoxMaxMatrix->Text == "-") {
			MessageBox::Show(this, "Введите значения в текстовые поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Convert::ToInt32(txtBoxMinMatrix->Text) == Convert::ToInt32(txtBoxMaxMatrix->Text)) {
			MessageBox::Show(this, "Минимальное значение диапазона больше максимального!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Convert::ToInt32(txtBoxMinMatrix->Text) > Convert::ToInt32(txtBoxMaxMatrix->Text)) {
			MessageBox::Show(this, "Минимальное и максимальное значения диапазона равны!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Convert::ToInt32(txtBoxSizeMatrix->Text) < 2) {
			MessageBox::Show(this, "Размер матрицы должен быть больше 1!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			srand(time(0)); //генерация по времени
			richTxtBoxInputMatrix->Text = L"";
			size_matrix = Convert::ToInt32(txtBoxSizeMatrix->Text);
			for (int i = 0; i < size_matrix; i++) {
				for (int j = 0; j < size_matrix; j++) {
					Random^ temp = gcnew Random(i + rand());
					matrix[i, j] = temp->Next((Convert::ToInt32(txtBoxMinMatrix->Text)), (Convert::ToInt32(txtBoxMaxMatrix->Text) + 1));
				}
			}
			OutputMatrix();
		}
	}

	//Конвертирует матрицу из ричбокса в массив строк, затем выравнивает и проверяет матрицу на симметричность
	//Использует функцию ConvertationMatrixFromFile для конвертации массива строк из ричбокса в двумерный массив
	private: System::Void btnActionMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
		array<wchar_t>^ sym = gcnew array<wchar_t>(1); //массив символов-разделителей строк
		sym[0] = '\n';
		array<String^>^ str = gcnew array<String^>(size_matrix);
		str = richTxtBoxInputMatrix->Text->Split(sym, StringSplitOptions::RemoveEmptyEntries); //запись строк в массив строк
		richTxtBoxInputMatrix->Text = "";
		txtBoxResultMatrix->Text = "";
		size_matrix = str->Length;
		for (int i = 0; i < size_matrix; i++) {
			ConvertationMatrixFromFile(i, str[i]);
		}
		bool flag = 0;
		for (int i = 0; i < size_matrix; i++) {
			for (int j = 0; j < size_matrix; j++) {
				if (matrix[i, j] != matrix[j, i] && i != j) {
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1) {
			txtBoxResultMatrix->Text = "Матрица не симметрична.";
		}
		else {
			txtBoxResultMatrix->Text = "Матрица симметрична.";
		}
	}

	//!--------------------!//
	//!--Третья программа--!//
	//!--------------------!//

	//Область глобальных переменных третьей программы
	private: long long int p, q, n; String^ InputFunc;

	//Вывод справки (третья вкладка)
	private: System::Void btnHelpFunc_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(this, "Написать программу вычисления суммы ряда \np/q = 1 - 1/2 + 1/3 + ... + (-1)^(n+1)/n для заданного числа n. Дробь p/q должна быть несократимой (p, q - натуральные).",
		"Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Защита ввода n (используется схожая со второй программой схема)
	private: System::Void txtBoxInputN_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (!Char::IsDigit(e->KeyChar) && (e->KeyChar != (char)Keys::Back)) e->Handled = true;
		txtBoxResultP->Text = "";
		txtBoxResultQ->Text = "";
	}

	//Проверка, сохранялся ли уже результат работы
	//Вызывается из функции btnSaveFunc_Click
	private: System::Void SaveResFunc(String^ file) {
		int i;
		const int size = 2;
		array<String^>^ str = gcnew array<String^>(size); //массив строк
		for (i = 0; i < size; i++) {
			str[i] = "";
		}
		str[0] = "Число n: " + txtBoxInputN->Text;
		str[1] = "p / q = " + txtBoxResultP->Text + " / " + txtBoxResultQ->Text;
		String^ str1 = txtBoxInputN->Text;
		if (str1 == "" || txtBoxResultP->Text == "" || txtBoxResultQ->Text == "") {
			MessageBox::Show(this, "Данные для сохранения отсутствуют!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!System::IO::File::Exists(file)) {
				System::IO::File::AppendAllText(file, str[0] + "\r\n" + str[1] + "\r\n\r\n");
				InputFunc = str1;
			}
			else {
				if (str1 != Input){
					System::IO::File::AppendAllText(file, str[0] + "\r\n" + str[1] + "\r\n\r\n");
					InputFunc = str1;
				}
			}
		}
	}

	//Диалог сохранения результатов
	//Использует функцию SaveResFunc для проверки, сохранялся ли уже результат
	private: System::Void btnSaveFunc_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ SaveFileDlg = gcnew SaveFileDialog;
		SaveFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		SaveFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		SaveFileDlg->OverwritePrompt = false;
		if (SaveFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = SaveFileDlg->FileName;
			SaveResFunc(fileName);
		}
	}

	//Подсчёт суммы ряда для отдельных элементов p и q
	//Вызывается из btnActionFunc_Click для подсчёта p и q
	private: System::Void SumFunc() {
		p = 1;
		q = 1;
		for (int i = 2; i <= n; i++) {
			p = p*i + q*(pow(-1, i+1));
			q = q*i;
		}
		//MessageBox::Show(this, Convert::ToString(p) + "/" + Convert::ToString(q), "Справка");
	}

	//Сокращение результата через нахождение НОД по алгоритму Евклида
	//Вызывается из btnActionFunc_Click для нахождения НОД и сокращения p и q
	private: System::Void ReductionFunc() {
		long long int x = p;
		long long int y = q;
		while ((x != 0) && (y != 0)) {
			if (x > y) x = x % y;
			else y = y % x;
		} 
		long long nd = x + y;
		p = p / nd;
		q = q / nd;
	}

	//Вызывается при нажатии по клавише "Расчёт"
	//Использует функцию SumFunc для подсчёта p и q
	//Использует функцию ReductionFunc для нахождения НОД и сокращения p и q
	private: System::Void btnActionFunc_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtBoxInputN->Text == "") {
			MessageBox::Show(this, "Введите корректное значение в текстовое поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (Convert::ToInt32(txtBoxInputN->Text) < 1 || Convert::ToInt32(txtBoxInputN->Text) > 20) {
			MessageBox::Show(this, "Введите значение n в требуемом диапазоне!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			n = Convert::ToInt64(txtBoxInputN->Text);
			SumFunc();
			ReductionFunc();
			txtBoxResultP->Text = Convert::ToString(p);
			txtBoxResultQ->Text = Convert::ToString(q);
		}
	}

	//!---------------------!//
	//!-Четвёртая программа-!//
	//!---------------------!//

	//Область глобальных переменных четвёртой программы
	private: String^ strInput = "";

	//Вывод справки (четвёртая вкладка)
	private: System::Void btnHelpString_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(this, "Дана строка, содержащая текст и арифметические выражения вида: a+b, a-b, a*b и a/b. Выписать из неё все арифметические выражения и вычислить их значения.",
		"Справка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//при вводе символа в richTxtBoxInputStrings обнуляется результат в richTxtBoxResultStrings
	private: System::Void richTxtBoxInputStrings_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		richTxtBoxResultStrings->Text = "";
	}

	//Функция очистки входной строки
	//Вызывается из функции btnActionStr_Click
	private: System::String^ CleanString(String^ str) {
		String^ tempStr = "";
		if (str->Length >= 3) {
			//if (str->IndexOf('(') != -1 && str->IndexOf(')') != -1)
			for (int i = 0; i < str->Length; i++) {
				if (Char::IsDigit(str[i]) || str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*'
					|| str[i] == ',' || str[i] == ' ' || str[i] == '(' || str[i] == ')') tempStr = tempStr + str[i];
			}
			return tempStr;
		}
		else {
			return "";
		}
	}

	//В зависимости от символа действия выбирает действие и выводит информация
	//Вызывается из функции ActionStr
	private: System::Void SwitchAction(double first, double second, wchar_t action) {
		double result;
		if (first < 0) {
			richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + "(" + Convert::ToString(first) + ")";
		}
		else {
			richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + Convert::ToString(first);
		}
		richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + action;
		if (second < 0) {
			richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + "(" + Convert::ToString(second) + ")=";
		}
		else {
			richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + Convert::ToString(second)+ "=";
		}
		switch (action) {
			case '+':
				result = first + second;
				break;
			case '-':
				result = first - second;
				break;
			case '/':
				if (second != 0) {
					result = first / second;
				}
				else {
					richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + "нельзя делить на ";
					result = 0;
				}
				break;
			case '*':
				result = first * second;
				break;
		}
		richTxtBoxResultStrings->Text = richTxtBoxResultStrings->Text + Convert::ToString(result) + " \n";
	}

	//Арифметические функции и их вывод
	//Вызывается из функции btnActionStr_Click
	private: System::Void ActionStr(String^ str) {
		int first, second;
		wchar_t action = '0';
		String^ temp = "";
		if (str->IndexOf('(') != -1 && str->IndexOf(')') != -1) {
			int CounterLeft = 0, CounterRight = 0; //количество левых и правых скобок в строке
			array<int>^ IndexesLeft = gcnew array<int>(2); //массив индексов левой скобки
			array<int>^ IndexesRight = gcnew array<int>(2); //массив индексов правой скобки
			int Num = str->Length; //количество символов в строке (нужно для выхода из цикла при удалении)
			for (int i = 0; i < str->Length; i++) {
				if (i > (Num - 1)) {
					break; //выход из цикла, если количество символов уменьшилось
				}
				if (CounterLeft == 2 && str[i] == '(') { //удалить скобку, если она третья и перейти к концу цикла
					str = str->Remove(i, 1);
					Num = Num - 1;
					continue;
				}
				if (CounterRight == 2 && str[i] == ')') { //удалить скобку, если она третья и перейти к концу цикла
					str = str->Remove(i, 1);
					Num = Num - 1;
					continue;
				}
				if (str[i] == '(') {
					IndexesLeft[CounterLeft] = i;
					CounterLeft = CounterLeft + 1;
				}
				if (str[i] == ')') {
					IndexesRight[CounterRight] = i;
					CounterRight = CounterRight + 1;
				}
			}
			if (CounterLeft == 2 && CounterRight == 1) str = str->Remove(IndexesLeft[1], 1);
			if (CounterLeft == 1 && CounterRight == 0) str = str->Remove(IndexesLeft[0], 1);
			if (CounterRight == 2 && CounterLeft == 1) str = str->Remove(IndexesRight[1], 1);
			if (CounterRight == 1 && CounterLeft == 0) str = str->Remove(IndexesRight[0], 1);
			if (CounterLeft == 1 && CounterRight == 1) {
				if (IndexesLeft[0] > IndexesRight[0]) {
					str = str->Remove(IndexesLeft[0], 1);
					str = str->Remove(IndexesRight[0], 1); //после этого нет скобок, числа положительные
					int IndexAction; //индекс символа действия
					for (int i = 0; i < str->Length; i++) { //цикл находит индекс первого символа, который является не числом
						if (i != 0 && i != str->Length - 1) {
							if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {
								action = str[i];
								IndexAction = i; //нахождение индекса символа
								break;
							}
						}
					}
					for (int i = 0; i < IndexAction; i++) { //конвертация первого досимвольного элемента
						if (Char::IsDigit(str[i])) temp = temp + str[i];
					}
					first = Convert::ToInt32(temp); //в инт
					temp = "";
					for (int i = IndexAction + 1; i < str->Length; i++) { //конвертация второго послесимвольного элемента
						if (Char::IsDigit(str[i])) temp = temp + str[i];
					}
					second = Convert::ToInt32(temp); //в инт
					temp = "";
					if (action != '0') {
						SwitchAction(first, second, action);
					}
				}
				else { //скобки есть, неизвестно где
					if (IndexesLeft[0] != IndexesRight[0] - 1) {
						int IndexAction;
						for (int i = IndexesLeft[0] + 1; i < IndexesRight[0]; i++) { //конвертация числа между скобками
							if (str[i] == '-' && i == IndexesLeft[0] + 1) temp = temp + str[i];
							if (Char::IsDigit(str[i])) temp = temp + str[i];
						}
						first = Convert::ToInt32(temp); //в инт
						temp = "";
						if (IndexesLeft[0] == 0) { //если скобки слева
							for (int i = IndexesRight[0] + 1; i < str->Length; i++) { //цикл находит индекс первого символа, который является не числом
								if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*'){
									action = str[i];
									IndexAction = i; //сам индекс символа
									break;
								}
							}
						}
						if (IndexesRight[0] == str->Length - 1) { //если скобки справа
							for (int i = 0; i < IndexesLeft[0]; i++) { //цикл находит индекс первого символа, который является не числом
								if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*'){
									action = str[i];
									IndexAction = i; //сам индекс символа
									break;
								}
							}
						}
						if (IndexAction < IndexesLeft[0]) { //если индекс символа действия левее скобок
							action = str[IndexAction];
							for (int i = 0; i < IndexAction; i++) { //конвертация второго числа (по порядку знаков первый)
								if (Char::IsDigit(str[i])) temp = temp + str[i];
							}
							second = Convert::ToInt32(temp); //в инт
							temp = "";
							if (action != '0') {
								SwitchAction(second, first, action);
							}
						}
						else if (IndexesRight[0] < IndexAction) { //если индекс символа действия правее скобок
							action = str[IndexAction];
							for (int i = IndexAction + 1; i < str->Length; i++) { //конвертация второго числа (по порядку знаков второй)
								if (Char::IsDigit(str[i])) temp = temp + str[i];
							}
							second = Convert::ToInt32(temp); //в инт
							temp = "";
							if (action != '0') {
								SwitchAction(first, second, action);
							}
						}
					}
				}
			}
			if (CounterLeft == 2 && CounterRight == 2) { //здесь есть два числа между скобками
				int x = 2;
				if (IndexesLeft[0] < IndexesLeft[1] && IndexesLeft[1] < IndexesRight[0]) { //если неправильная последовательность символов
					str = str->Remove(IndexesRight[1], 1);
					str = str->Remove(IndexesLeft[1], 1);
					int IndexAction;
					if (IndexesLeft[0] != IndexesRight[0] - 1) {
						for (int i = IndexesLeft[0] + 1; i < IndexesRight[0]; i++) { //конвертация числа между скобками
							if (str[i] == '-' && i == IndexesLeft[0] + 1) temp = temp + str[i];
							if (Char::IsDigit(str[i])) temp = temp + str[i];
						}
						first = Convert::ToInt32(temp); //в инт
						temp = "";
						if (IndexesLeft[0] == 0) { //если скобки слева
							for (int i = IndexesRight[0] + 1; i < str->Length; i++) { //цикл находит индекс первого символа, который является не числом
								if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*'){
									action = str[i];
									IndexAction = i; //сам индекс символа
									break;
								}
							}
						}
						if (IndexesRight[0] == str->Length - 1) { //если скобки справа
							for (int i = 0; i < IndexesLeft[0]; i++) { //цикл находит индекс первого символа, который является не числом
								if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*'){
									action = str[i];
									IndexAction = i; //сам индекс символа
									break;
								}
							}
						}
						if (IndexAction < IndexesLeft[0]) { //если индекс символа действия левее скобок
							action = str[IndexAction];
							for (int i = 0; i < IndexAction; i++) { //конвертация второго числа (по порядку знаков первый)
								if (Char::IsDigit(str[i])) temp = temp + str[i];
							}
							second = Convert::ToInt32(temp); //в инт
							temp = "";
							if (action != '0') {
								SwitchAction(second, first, action);
							}
						}
						else if (IndexesRight[0] < IndexAction) { //если индекс символа действия правее скобок
							action = str[IndexAction];
							for (int i = IndexAction + 1; i < str->Length; i++) { //конвертация второго числа (по порядку знаков второй)
								if (Char::IsDigit(str[i])) temp = temp + str[i];
							}
							second = Convert::ToInt32(temp); //в инт
							temp = "";
							if (action != '0') {
								SwitchAction(first, second, action);
							}
						}
					}
				}
				else if (IndexesRight[1] < IndexesLeft[1]) { //без скобок, положительные числа
					str = str->Remove(IndexesLeft[1], 1);
					str = str->Remove(IndexesLeft[0], 1);
					str = str->Remove(IndexesRight[1], 1);
					str = str->Remove(IndexesRight[1], 1);
					int IndexAction; //индекс символа действия
					for (int i = 0; i < str->Length; i++) { //цикл находит индекс первого символа, который является не числом
						if (i != 0 && i != str->Length - 1) {
							if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {
								action = str[i];
								IndexAction = i; //нахождение индекса символа
								break;
							}
						}
					}
					for (int i = 0; i < IndexAction; i++) { //конвертация первого досимвольного элемента
						if (Char::IsDigit(str[i])) temp = temp + str[i];
					}
					first = Convert::ToInt32(temp); //в инт
					temp = "";
					for (int i = IndexAction + 1; i < str->Length; i++) { //конвертация второго послесимвольного элемента
						if (Char::IsDigit(str[i])) temp = temp + str[i];
					}
					second = Convert::ToInt32(temp); //в инт
					temp = "";
					if (action != '0') {
						SwitchAction(first, second, action);
					}
					}
				else { //есть скобки (2 числа)
					if ((IndexesLeft[0] != IndexesRight[0] - 1) && (IndexesLeft[1] != IndexesRight[1] - 1))
					for (int i = IndexesLeft[0] + 1; i < IndexesRight[0]; i++) { //конвертация числа между скобками
						if (str[i] == '-' && i == IndexesLeft[0] + 1) temp = temp + str[i];
						if (Char::IsDigit(str[i])) temp = temp + str[i];
					}
					first = Convert::ToInt32(temp); //в инт
					temp = "";
					for (int i = IndexesLeft[1] + 1; i < IndexesRight[1]; i++) { //конвертация числа между скобками
						if (str[i] == '-' && i == IndexesLeft[1] + 1) temp = temp + str[i];
						if (Char::IsDigit(str[i])) temp = temp + str[i];
					}
					second = Convert::ToInt32(temp); //в инт
					temp = "";
					for (int i = IndexesRight[0] + 1; i < IndexesLeft[1]; i++) {
						if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {
							action = str[i];
							break;
						}
					}
					if (action != '0') {
						SwitchAction(first, second, action);
					}
				}
			}
		}
		else { //без скобок
			int IndexAction; //индекс символа действия
			for (int i = 0; i < str->Length; i++) { //цикл находит индекс первого символа, который является не числом
				if (i != 0 && i != str->Length - 1) {
					if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') {
						action = str[i];
						IndexAction = i; //нахождение индекса символа
						break;
					}
				}
			}
			for (int i = 0; i < IndexAction; i++) { //конвертация первого досимвольного элемента
				if (Char::IsDigit(str[i])) temp = temp + str[i];
			}
			first = Convert::ToInt32(temp); //в инт
			temp = "";
			for (int i = IndexAction + 1; i < str->Length; i++) { //конвертация второго послесимвольного элемента
				if (Char::IsDigit(str[i])) temp = temp + str[i];
			}
			second = Convert::ToInt32(temp); //в инт
			temp = "";
			SwitchAction(first, second, action);
		}
	}

	//Функция произведения расчётов
	//Использует функцию CleanString для очистки массива строк
	//Использует функцию ActionStr для того, чтобы вытащить из строки символы и действия
	private: System::Void btnActionStr_Click(System::Object^  sender, System::EventArgs^  e) {
		array<wchar_t>^ sym = gcnew array<wchar_t>(3); //массив символов-разделителей строк
		sym[0] = ','; sym[1] = '\n'; sym[1] = '.';
		int size_str = 0;
		for (int i = 0; i < richTxtBoxInputStrings->Text->Length; i++) {
			if (richTxtBoxInputStrings->Text[i] == ',' || richTxtBoxInputStrings->Text[i] == '\n' || richTxtBoxInputStrings->Text[i] == '.') size_str = size_str + 1;
		}
		size_str = size_str + 1;
		array<String^>^ str = gcnew array<String^>(size_str); //массив строк из ричбокса
		str = richTxtBoxInputStrings->Text->Split(sym, StringSplitOptions::RemoveEmptyEntries); //запись строк в массив строк
		richTxtBoxResultStrings->Text = "";
		for (int i = 0; i < str->Length; i++) {
			str[i] = CleanString(str[i]);
			if (str[i] != "" && str[i] != " ") ActionStr(str[i]);
		}
	}

	//Функция ввода из файла, вызывается по нажатии кнопки "Ввод из файла"
	//Использует функцию CleanString для очистки массива строк
	//Использует функцию ActionStr для того, чтобы вытащить из строки символы и действия
	private: System::Void btnOpenStr_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ OpenFileDlg = gcnew OpenFileDialog;
		OpenFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		OpenFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		if (OpenFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = OpenFileDlg->FileName;
			array<String^>^ str = gcnew array<String^>(100);
			str = System::IO::File::ReadAllLines(fileName, System::Text::Encoding::UTF8);
			richTxtBoxInputStrings->Text = "";
			richTxtBoxResultStrings->Text = "";
			for (int i = 0; i < str->Length; i++) {
				richTxtBoxInputStrings->Text = richTxtBoxInputStrings->Text + str[i];
			}
			array<wchar_t>^ sym = gcnew array<wchar_t>(3); //массив символов-разделителей строк
			sym[0] = ','; sym[1] = '\n'; sym[2] = '.';
			int size_str = 0;
			for (int i = 0; i < str->Length; i++) {
				if (str[i] == "," || str[i] == "\n" || str[i] == ".") size_str = size_str + 1;
			}
			size_str = size_str + 1;
			array<String^>^ str2 = gcnew array<String^>(size_str); //массив строк из ричбокса
			for (int i = 0; i < str->Length; i++) {
				str2 = str[i]->Split(sym, StringSplitOptions::RemoveEmptyEntries);
				for (int i = 0; i < str2->Length; i++) {
					str2[i] = CleanString(str2[i]);			//очистка строк
					if (str2[i] != "" && str2[i] != " ") ActionStr(str2[i]);	//каждая строка считается и выводится
				}
			}
		}
	}

	//Функция проверки, записан ли результат текущей работы
	//Вызывается из функции btnSaveStr_Click
	private: System::Void SaveStringFunc(String^ file) {
		int i;
		const int size = 2;
		array<wchar_t>^ sym = gcnew array<wchar_t>(1);
		sym[0] = '\n';
		array<String^>^ str = gcnew array<String^>(size); //массив строк
		for (i = 0; i < size; i++) {
			str[i] = "";
		}
		str[0] = "Исходная строка: ";
		str[1] = "Результат работы: ";
		array<String^>^ strRes = gcnew array<String^>(10);
		strRes = richTxtBoxResultStrings->Text->Split(sym, StringSplitOptions::RemoveEmptyEntries);
		String^ str1 = richTxtBoxInputStrings->Text;
		if (str1 == "" || richTxtBoxResultStrings->Text == "") {
			MessageBox::Show(this, "Данные для сохранения отсутствуют!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (!System::IO::File::Exists(file)) {
				System::IO::File::AppendAllText(file, str[0] + str1 + "\r\n" + str[1] + "\r\n");
				System::IO::File::AppendAllLines(file, strRes);
				System::IO::File::AppendAllText(file, "\r\n\r\n");
				strInput = str1;
			}
			else {
				if (str1 != strInput){
					System::IO::File::AppendAllText(file, str[0] + str1 + "\r\n" + str[1] + "\r\n");
					System::IO::File::AppendAllLines(file, strRes);
					System::IO::File::AppendAllText(file, "\r\n\r\n");
					strInput = str1;
				}
			}
		}
	}

	//Функция сохранения в файл, вызывается по нажатии кнопки "Сохранить в файл"
	//Использует функцию SaveStringFunc для проверки, был ли сохранён результат работы или нет
	private: System::Void btnSaveStr_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ SaveFileDlg = gcnew SaveFileDialog;
		SaveFileDlg->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*"; //фильтр открываемых файлов по форматам
		SaveFileDlg->InitialDirectory = "E:\\"; //стартовая директория
		SaveFileDlg->OverwritePrompt = false;
		if (SaveFileDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ fileName = SaveFileDlg->FileName;
			SaveStringFunc(fileName); //проверка
		}
	}

};
}
