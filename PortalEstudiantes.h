#pragma once

namespace Proyecto2MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PortalEstudiantes
	/// </summary>
	public ref class PortalEstudiantes : public System::Windows::Forms::Form
	{
	public:
		PortalEstudiantes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~PortalEstudiantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataMostrar;
	protected:

	private: System::Windows::Forms::Button^ btnImportarDatos;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtBuscarDpi;
	private: System::Windows::Forms::Button^ btnBuscarDpi;
	private: System::Windows::Forms::Button^ btnCarnetProm;



	private: System::Windows::Forms::TextBox^ txtCarnetProm;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnFacultadPregrado;

	private: System::Windows::Forms::TextBox^ txtFacultadPregrado;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnAgregarAlumno;
	private: System::Windows::Forms::TextBox^ txtNombre;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnCalcularCantidadDeAlumnos;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtPreOpost;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtFacultad;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtDpi;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtA�o;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnCancelar;

	private: System::Windows::Forms::Button^ btnModificar;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ btnCarnetModificar;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ txtPregradoModificar;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txtFacultadModificar;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ txtDpiModificar;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ txtA�oModificar;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ txtApellidoModificar;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ txtNombreModificar;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ txtCarnetModificar;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ txtCarnetEliminar;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ btnEliminar;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ txtNota;

	private: System::Windows::Forms::TextBox^ txtCarnetCursos;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ txtAgregarCurso;

private: System::Windows::Forms::TextBox^ txtCursos;

	private: System::Windows::Forms::Button^ btnMostrarEstudiantes;

	private: System::Windows::Forms::ComboBox^ comboBoxMostrarAlumnos;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ btnExportarEstudiantes;

	private: System::Windows::Forms::Button^ btnFacultadNumeroDeEstudiantes;
	private: System::Windows::Forms::TextBox^ txtFacultadNumeroDeEstudiantes;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataMostrar = (gcnew System::Windows::Forms::DataGridView());
			this->btnImportarDatos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarDpi = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarDpi = (gcnew System::Windows::Forms::Button());
			this->btnCarnetProm = (gcnew System::Windows::Forms::Button());
			this->txtCarnetProm = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnFacultadPregrado = (gcnew System::Windows::Forms::Button());
			this->txtFacultadPregrado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtPreOpost = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtFacultad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtDpi = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtA�o = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarAlumno = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCalcularCantidadDeAlumnos = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->btnCarnetModificar = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtPregradoModificar = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtFacultadModificar = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtDpiModificar = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtA�oModificar = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->txtApellidoModificar = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtNombreModificar = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtCarnetModificar = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCarnetEliminar = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->txtNota = (gcnew System::Windows::Forms::TextBox());
			this->txtCarnetCursos = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtAgregarCurso = (gcnew System::Windows::Forms::Button());
			this->txtCursos = (gcnew System::Windows::Forms::TextBox());
			this->btnMostrarEstudiantes = (gcnew System::Windows::Forms::Button());
			this->comboBoxMostrarAlumnos = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->btnExportarEstudiantes = (gcnew System::Windows::Forms::Button());
			this->btnFacultadNumeroDeEstudiantes = (gcnew System::Windows::Forms::Button());
			this->txtFacultadNumeroDeEstudiantes = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMostrar))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataMostrar
			// 
			this->dataMostrar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataMostrar->Location = System::Drawing::Point(457, 27);
			this->dataMostrar->Name = L"dataMostrar";
			this->dataMostrar->RowHeadersWidth = 51;
			this->dataMostrar->RowTemplate->Height = 24;
			this->dataMostrar->Size = System::Drawing::Size(585, 314);
			this->dataMostrar->TabIndex = 0;
			// 
			// btnImportarDatos
			// 
			this->btnImportarDatos->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImportarDatos->Location = System::Drawing::Point(12, 12);
			this->btnImportarDatos->Name = L"btnImportarDatos";
			this->btnImportarDatos->Size = System::Drawing::Size(270, 32);
			this->btnImportarDatos->TabIndex = 1;
			this->btnImportarDatos->Text = L"Importar datos de los estudiantes";
			this->btnImportarDatos->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Buscar estudiante:";
			// 
			// txtBuscarDpi
			// 
			this->txtBuscarDpi->Location = System::Drawing::Point(184, 73);
			this->txtBuscarDpi->Name = L"txtBuscarDpi";
			this->txtBuscarDpi->Size = System::Drawing::Size(100, 22);
			this->txtBuscarDpi->TabIndex = 3;
			// 
			// btnBuscarDpi
			// 
			this->btnBuscarDpi->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarDpi->Location = System::Drawing::Point(305, 68);
			this->btnBuscarDpi->Name = L"btnBuscarDpi";
			this->btnBuscarDpi->Size = System::Drawing::Size(33, 32);
			this->btnBuscarDpi->TabIndex = 4;
			this->btnBuscarDpi->Text = L"Ir";
			this->btnBuscarDpi->UseVisualStyleBackColor = true;
			// 
			// btnCarnetProm
			// 
			this->btnCarnetProm->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarnetProm->Location = System::Drawing::Point(388, 138);
			this->btnCarnetProm->Name = L"btnCarnetProm";
			this->btnCarnetProm->Size = System::Drawing::Size(33, 32);
			this->btnCarnetProm->TabIndex = 7;
			this->btnCarnetProm->Text = L"Ir";
			this->btnCarnetProm->UseVisualStyleBackColor = true;
			// 
			// txtCarnetProm
			// 
			this->txtCarnetProm->Location = System::Drawing::Point(265, 148);
			this->txtCarnetProm->Name = L"txtCarnetProm";
			this->txtCarnetProm->Size = System::Drawing::Size(100, 22);
			this->txtCarnetProm->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(341, 30);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ingrese el carnet para calcular el promedio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 30);
			this->label3->TabIndex = 8;
			this->label3->Text = L"y el curso con la nota m�s alta:";
			// 
			// btnFacultadPregrado
			// 
			this->btnFacultadPregrado->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacultadPregrado->Location = System::Drawing::Point(305, 187);
			this->btnFacultadPregrado->Name = L"btnFacultadPregrado";
			this->btnFacultadPregrado->Size = System::Drawing::Size(33, 32);
			this->btnFacultadPregrado->TabIndex = 11;
			this->btnFacultadPregrado->Text = L"Ir";
			this->btnFacultadPregrado->UseVisualStyleBackColor = true;
			// 
			// txtFacultadPregrado
			// 
			this->txtFacultadPregrado->Location = System::Drawing::Point(184, 192);
			this->txtFacultadPregrado->Name = L"txtFacultadPregrado";
			this->txtFacultadPregrado->Size = System::Drawing::Size(100, 22);
			this->txtFacultadPregrado->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 30);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ingrese la facultad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(8, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(288, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"(para buscar al mejor estudiante de pregrado)";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->txtPreOpost);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->txtFacultad);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->txtDpi);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->txtA�o);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->txtApellido);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->btnAgregarAlumno);
			this->groupBox1->Location = System::Drawing::Point(224, 394);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(304, 364);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Agregar nuevo estudiante";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(37, 242);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 22);
			this->label16->TabIndex = 33;
			this->label16->Text = L"o doctorado:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(15, 220);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(148, 22);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Pregrado o postgrado";
			// 
			// txtPreOpost
			// 
			this->txtPreOpost->Location = System::Drawing::Point(179, 220);
			this->txtPreOpost->Name = L"txtPreOpost";
			this->txtPreOpost->Size = System::Drawing::Size(100, 22);
			this->txtPreOpost->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(15, 186);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 22);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Facultad:";
			// 
			// txtFacultad
			// 
			this->txtFacultad->Location = System::Drawing::Point(179, 186);
			this->txtFacultad->Name = L"txtFacultad";
			this->txtFacultad->Size = System::Drawing::Size(100, 22);
			this->txtFacultad->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(15, 148);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 22);
			this->label13->TabIndex = 28;
			this->label13->Text = L"DPI:";
			// 
			// txtDpi
			// 
			this->txtDpi->Location = System::Drawing::Point(179, 148);
			this->txtDpi->Name = L"txtDpi";
			this->txtDpi->Size = System::Drawing::Size(100, 22);
			this->txtDpi->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(15, 113);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 22);
			this->label12->TabIndex = 26;
			this->label12->Text = L"A�o de ingreso:";
			// 
			// txtA�o
			// 
			this->txtA�o->Location = System::Drawing::Point(179, 113);
			this->txtA�o->Name = L"txtA�o";
			this->txtA�o->Size = System::Drawing::Size(100, 22);
			this->txtA�o->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(15, 72);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 22);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Apellidos:";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(179, 72);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(100, 22);
			this->txtApellido->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(15, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 22);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Nombre:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(179, 37);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 22);
			this->txtNombre->TabIndex = 15;
			// 
			// btnAgregarAlumno
			// 
			this->btnAgregarAlumno->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarAlumno->Location = System::Drawing::Point(104, 291);
			this->btnAgregarAlumno->Name = L"btnAgregarAlumno";
			this->btnAgregarAlumno->Size = System::Drawing::Size(71, 32);
			this->btnAgregarAlumno->TabIndex = 16;
			this->btnAgregarAlumno->Text = L"Agregar";
			this->btnAgregarAlumno->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(252, 22);
			this->label6->TabIndex = 17;
			this->label6->Text = L"(para calcular el n�mero de estudiantes)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 252);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(160, 30);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ingrese la facultad:";
			// 
			// btnCalcularCantidadDeAlumnos
			// 
			this->btnCalcularCantidadDeAlumnos->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcularCantidadDeAlumnos->Location = System::Drawing::Point(371, 309);
			this->btnCalcularCantidadDeAlumnos->Name = L"btnCalcularCantidadDeAlumnos";
			this->btnCalcularCantidadDeAlumnos->Size = System::Drawing::Size(33, 32);
			this->btnCalcularCantidadDeAlumnos->TabIndex = 20;
			this->btnCalcularCantidadDeAlumnos->Text = L"Ir";
			this->btnCalcularCantidadDeAlumnos->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(7, 309);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(358, 30);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Calcular la cantidad de alumnos en maestr�a:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnCancelar);
			this->groupBox2->Controls->Add(this->btnModificar);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->btnCarnetModificar);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->txtPregradoModificar);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->txtFacultadModificar);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->txtDpiModificar);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->txtA�oModificar);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->txtApellidoModificar);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->txtNombreModificar);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->txtCarnetModificar);
			this->groupBox2->Location = System::Drawing::Point(778, 394);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(324, 364);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Modificar estudiante";
			// 
			// btnCancelar
			// 
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(159, 326);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(92, 32);
			this->btnCancelar->TabIndex = 59;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// btnModificar
			// 
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(61, 326);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(92, 32);
			this->btnModificar->TabIndex = 43;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(45, 288);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(92, 22);
			this->label20->TabIndex = 58;
			this->label20->Text = L"o doctorado:";
			// 
			// btnCarnetModificar
			// 
			this->btnCarnetModificar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarnetModificar->Location = System::Drawing::Point(216, 31);
			this->btnCarnetModificar->Name = L"btnCarnetModificar";
			this->btnCarnetModificar->Size = System::Drawing::Size(52, 32);
			this->btnCarnetModificar->TabIndex = 41;
			this->btnCarnetModificar->Text = L"Ir";
			this->btnCarnetModificar->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(23, 266);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(148, 22);
			this->label22->TabIndex = 57;
			this->label22->Text = L"Pregrado o postgrado";
			// 
			// txtPregradoModificar
			// 
			this->txtPregradoModificar->Location = System::Drawing::Point(187, 266);
			this->txtPregradoModificar->Name = L"txtPregradoModificar";
			this->txtPregradoModificar->Size = System::Drawing::Size(100, 22);
			this->txtPregradoModificar->TabIndex = 56;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(23, 232);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(68, 22);
			this->label23->TabIndex = 55;
			this->label23->Text = L"Facultad:";
			// 
			// txtFacultadModificar
			// 
			this->txtFacultadModificar->Location = System::Drawing::Point(187, 232);
			this->txtFacultadModificar->Name = L"txtFacultadModificar";
			this->txtFacultadModificar->Size = System::Drawing::Size(100, 22);
			this->txtFacultadModificar->TabIndex = 54;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(23, 194);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(40, 22);
			this->label24->TabIndex = 53;
			this->label24->Text = L"DPI:";
			// 
			// txtDpiModificar
			// 
			this->txtDpiModificar->Location = System::Drawing::Point(187, 194);
			this->txtDpiModificar->Name = L"txtDpiModificar";
			this->txtDpiModificar->Size = System::Drawing::Size(100, 22);
			this->txtDpiModificar->TabIndex = 52;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(23, 159);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(111, 22);
			this->label25->TabIndex = 51;
			this->label25->Text = L"A�o de ingreso:";
			// 
			// txtA�oModificar
			// 
			this->txtA�oModificar->Location = System::Drawing::Point(187, 159);
			this->txtA�oModificar->Name = L"txtA�oModificar";
			this->txtA�oModificar->Size = System::Drawing::Size(100, 22);
			this->txtA�oModificar->TabIndex = 50;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(23, 118);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(76, 22);
			this->label26->TabIndex = 49;
			this->label26->Text = L"Apellidos:";
			// 
			// txtApellidoModificar
			// 
			this->txtApellidoModificar->Location = System::Drawing::Point(187, 118);
			this->txtApellidoModificar->Name = L"txtApellidoModificar";
			this->txtApellidoModificar->Size = System::Drawing::Size(100, 22);
			this->txtApellidoModificar->TabIndex = 48;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(23, 83);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(65, 22);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Nombre:";
			// 
			// txtNombreModificar
			// 
			this->txtNombreModificar->Location = System::Drawing::Point(187, 83);
			this->txtNombreModificar->Name = L"txtNombreModificar";
			this->txtNombreModificar->Size = System::Drawing::Size(100, 22);
			this->txtNombreModificar->TabIndex = 46;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(23, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(59, 22);
			this->label21->TabIndex = 44;
			this->label21->Text = L"Carnet:";
			// 
			// txtCarnetModificar
			// 
			this->txtCarnetModificar->Location = System::Drawing::Point(88, 35);
			this->txtCarnetModificar->Name = L"txtCarnetModificar";
			this->txtCarnetModificar->Size = System::Drawing::Size(100, 22);
			this->txtCarnetModificar->TabIndex = 45;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtCarnetEliminar);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->btnEliminar);
			this->groupBox3->Location = System::Drawing::Point(546, 614);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(214, 144);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Eliminar estudiante";
			// 
			// txtCarnetEliminar
			// 
			this->txtCarnetEliminar->Location = System::Drawing::Point(72, 40);
			this->txtCarnetEliminar->Name = L"txtCarnetEliminar";
			this->txtCarnetEliminar->Size = System::Drawing::Size(100, 22);
			this->txtCarnetEliminar->TabIndex = 42;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(7, 44);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(59, 22);
			this->label28->TabIndex = 41;
			this->label28->Text = L"Carnet:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(63, 84);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(71, 32);
			this->btnEliminar->TabIndex = 42;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(13, 98);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 22);
			this->label11->TabIndex = 22;
			this->label11->Text = L"(DPI)";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->txtNota);
			this->groupBox4->Controls->Add(this->txtCarnetCursos);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->txtAgregarCurso);
			this->groupBox4->Controls->Add(this->txtCursos);
			this->groupBox4->Location = System::Drawing::Point(546, 394);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(214, 208);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Agregar cursos a un estudiante";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(21, 128);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 22);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Nota:";
			// 
			// txtNota
			// 
			this->txtNota->Location = System::Drawing::Point(89, 126);
			this->txtNota->Name = L"txtNota";
			this->txtNota->Size = System::Drawing::Size(100, 22);
			this->txtNota->TabIndex = 39;
			// 
			// txtCarnetCursos
			// 
			this->txtCarnetCursos->Location = System::Drawing::Point(89, 50);
			this->txtCarnetCursos->Name = L"txtCarnetCursos";
			this->txtCarnetCursos->Size = System::Drawing::Size(100, 22);
			this->txtCarnetCursos->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(24, 54);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(59, 22);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Carnet:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(21, 87);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 22);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Cursos:";
			// 
			// txtAgregarCurso
			// 
			this->txtAgregarCurso->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAgregarCurso->Location = System::Drawing::Point(64, 163);
			this->txtAgregarCurso->Name = L"txtAgregarCurso";
			this->txtAgregarCurso->Size = System::Drawing::Size(71, 32);
			this->txtAgregarCurso->TabIndex = 34;
			this->txtAgregarCurso->Text = L"Agregar";
			this->txtAgregarCurso->UseVisualStyleBackColor = true;
			// 
			// txtCursos
			// 
			this->txtCursos->Location = System::Drawing::Point(89, 85);
			this->txtCursos->Name = L"txtCursos";
			this->txtCursos->Size = System::Drawing::Size(100, 22);
			this->txtCursos->TabIndex = 35;
			// 
			// btnMostrarEstudiantes
			// 
			this->btnMostrarEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarEstudiantes->Location = System::Drawing::Point(1078, 159);
			this->btnMostrarEstudiantes->Name = L"btnMostrarEstudiantes";
			this->btnMostrarEstudiantes->Size = System::Drawing::Size(203, 32);
			this->btnMostrarEstudiantes->TabIndex = 23;
			this->btnMostrarEstudiantes->Text = L"Mostrar estudiantes";
			this->btnMostrarEstudiantes->UseVisualStyleBackColor = true;
			// 
			// comboBoxMostrarAlumnos
			// 
			this->comboBoxMostrarAlumnos->FormattingEnabled = true;
			this->comboBoxMostrarAlumnos->Location = System::Drawing::Point(1179, 118);
			this->comboBoxMostrarAlumnos->Name = L"comboBoxMostrarAlumnos";
			this->comboBoxMostrarAlumnos->Size = System::Drawing::Size(121, 24);
			this->comboBoxMostrarAlumnos->TabIndex = 24;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Papyrus", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(1073, 118);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(81, 27);
			this->label29->TabIndex = 60;
			this->label29->Text = L"Mostrar: ";
			// 
			// btnExportarEstudiantes
			// 
			this->btnExportarEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExportarEstudiantes->Location = System::Drawing::Point(1078, 197);
			this->btnExportarEstudiantes->Name = L"btnExportarEstudiantes";
			this->btnExportarEstudiantes->Size = System::Drawing::Size(203, 58);
			this->btnExportarEstudiantes->TabIndex = 61;
			this->btnExportarEstudiantes->Text = L"Exportar listado actual de estudiantes";
			this->btnExportarEstudiantes->UseVisualStyleBackColor = true;
			// 
			// btnFacultadNumeroDeEstudiantes
			// 
			this->btnFacultadNumeroDeEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacultadNumeroDeEstudiantes->Location = System::Drawing::Point(303, 250);
			this->btnFacultadNumeroDeEstudiantes->Name = L"btnFacultadNumeroDeEstudiantes";
			this->btnFacultadNumeroDeEstudiantes->Size = System::Drawing::Size(33, 32);
			this->btnFacultadNumeroDeEstudiantes->TabIndex = 63;
			this->btnFacultadNumeroDeEstudiantes->Text = L"Ir";
			this->btnFacultadNumeroDeEstudiantes->UseVisualStyleBackColor = true;
			// 
			// txtFacultadNumeroDeEstudiantes
			// 
			this->txtFacultadNumeroDeEstudiantes->Location = System::Drawing::Point(182, 255);
			this->txtFacultadNumeroDeEstudiantes->Name = L"txtFacultadNumeroDeEstudiantes";
			this->txtFacultadNumeroDeEstudiantes->Size = System::Drawing::Size(100, 22);
			this->txtFacultadNumeroDeEstudiantes->TabIndex = 62;
			// 
			// PortalEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1348, 817);
			this->Controls->Add(this->btnFacultadNumeroDeEstudiantes);
			this->Controls->Add(this->txtFacultadNumeroDeEstudiantes);
			this->Controls->Add(this->btnExportarEstudiantes);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->comboBoxMostrarAlumnos);
			this->Controls->Add(this->btnMostrarEstudiantes);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnCalcularCantidadDeAlumnos);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnFacultadPregrado);
			this->Controls->Add(this->txtFacultadPregrado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnCarnetProm);
			this->Controls->Add(this->txtCarnetProm);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBuscarDpi);
			this->Controls->Add(this->txtBuscarDpi);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnImportarDatos);
			this->Controls->Add(this->dataMostrar);
			this->Name = L"PortalEstudiantes";
			this->Text = L"Portal de estudiantes";
			this->Load += gcnew System::EventHandler(this, &PortalEstudiantes::PortalEstudiantes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMostrar))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PortalEstudiantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
