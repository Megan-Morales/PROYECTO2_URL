#pragma once
#include <string>
#include "DoublyLinkedList.h"
#include "Persona.h"
#include "Estudiante.h"
#include "Curso.h"
#include "Asignacion_EyC.h"



namespace Proyecto2MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de PortalEstudiantes
	/// </summary>
	public ref class PortalEstudiantes : public System::Windows::Forms::Form
	{
	public:
		DoublyLinkedList<Estudiante>* estudiantesPregrado;
		DoublyLinkedList<Estudiante>* estudiantesPostgrado;
		DoublyLinkedList<Persona>* trabajadorDocente;
		DoublyLinkedList<Persona>* trabajadorNoDocente;
		DoublyLinkedList<Asignacion_EyC>* listaAsignacionEyC;
		DoublyLinkedList<Curso>* listaCurso;
		Curso* cursoEstudiante;
		Asignacion_EyC* asignaciones;
		Estudiante* estudianteNuevo;
		int carnet;
	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ btnFacultadPregrado;
	private: System::Windows::Forms::TextBox^ txtFacultadPregrado;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ btnCarnetProm;
	private: System::Windows::Forms::TextBox^ txtCarnetProm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::DataGridView^ dataMostrar;
		  
	public:
		
		PortalEstudiantes(DoublyLinkedList<Estudiante>* estudiantesPregrado, DoublyLinkedList<Estudiante>* estudiantesPostgrado, DoublyLinkedList<Persona>* trabajadorDocente, DoublyLinkedList<Persona>* trabajadorNoDocente, DoublyLinkedList<Curso>* listaCurso, DoublyLinkedList<Asignacion_EyC>* listaAsignacionEyC)
		{
			InitializeComponent();
			this->estudiantesPregrado = estudiantesPregrado;
			this->estudiantesPostgrado = estudiantesPostgrado;
			this->trabajadorDocente = trabajadorDocente;
			this->trabajadorNoDocente = trabajadorNoDocente;
			this->listaCurso = listaCurso;
			this->listaAsignacionEyC = listaAsignacionEyC;

			// Orden para crear las listas
			/*Estudiante* estudiantePrueba = new Estudiante("Megan", "Morales", 3016552860101, "pregrado", 1221120, "Ingenier�a", 20);
			Curso* cursoPrueba = new Curso("Matem�tica");
			Asignacion_EyC* asignacionPrueba = new Asignacion_EyC(estudiantePrueba, cursoPrueba, 90);
			this->estudiantesPregrado->add(estudiantePrueba);
			this->listaAsignacionEyC->add(asignacionPrueba);
			this->listaCurso->add(cursoPrueba);*/
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

	protected:

	private: System::Windows::Forms::Button^ btnImportarDatos;
	protected:


	private: System::Windows::Forms::TextBox^ txtBuscarDpi;
	private: System::Windows::Forms::Button^ btnBuscarDpi;

	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ btnAgregarAlumno;
	private: System::Windows::Forms::TextBox^ txtNombre;



	private: System::Windows::Forms::Button^ btnCalcularCantidadDeAlumnos;


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


	private: System::Windows::Forms::Button^ btnExportarEstudiantes;



private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::OpenFileDialog^ ofdImportar;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnImportarDatos = (gcnew System::Windows::Forms::Button());
			this->txtBuscarDpi = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarDpi = (gcnew System::Windows::Forms::Button());
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
			this->btnCalcularCantidadDeAlumnos = (gcnew System::Windows::Forms::Button());
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
			this->btnExportarEstudiantes = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataMostrar = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->btnFacultadPregrado = (gcnew System::Windows::Forms::Button());
			this->txtFacultadPregrado = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCarnetProm = (gcnew System::Windows::Forms::Button());
			this->txtCarnetProm = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMostrar))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnImportarDatos
			// 
			this->btnImportarDatos->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnImportarDatos->Location = System::Drawing::Point(163, 34);
			this->btnImportarDatos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnImportarDatos->Name = L"btnImportarDatos";
			this->btnImportarDatos->Size = System::Drawing::Size(85, 32);
			this->btnImportarDatos->TabIndex = 1;
			this->btnImportarDatos->Text = L"Importar";
			this->btnImportarDatos->UseVisualStyleBackColor = true;
			this->btnImportarDatos->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnImportarDatos_Click);
			// 
			// txtBuscarDpi
			// 
			this->txtBuscarDpi->Location = System::Drawing::Point(50, 44);
			this->txtBuscarDpi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBuscarDpi->Name = L"txtBuscarDpi";
			this->txtBuscarDpi->Size = System::Drawing::Size(100, 22);
			this->txtBuscarDpi->TabIndex = 3;
			// 
			// btnBuscarDpi
			// 
			this->btnBuscarDpi->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarDpi->Location = System::Drawing::Point(50, 82);
			this->btnBuscarDpi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBuscarDpi->Name = L"btnBuscarDpi";
			this->btnBuscarDpi->Size = System::Drawing::Size(85, 32);
			this->btnBuscarDpi->TabIndex = 4;
			this->btnBuscarDpi->Text = L"Buscar";
			this->btnBuscarDpi->UseVisualStyleBackColor = true;
			this->btnBuscarDpi->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnBuscarDpi_Click);
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
			this->groupBox1->Location = System::Drawing::Point(19, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(287, 364);
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
			this->txtPreOpost->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtFacultad->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtDpi->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtA�o->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtA�o->Name = L"txtA�o";
			this->txtA�o->Size = System::Drawing::Size(100, 22);
			this->txtA�o->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(15, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 22);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Apellidos:";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(179, 71);
			this->txtApellido->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtNombre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 22);
			this->txtNombre->TabIndex = 15;
			// 
			// btnAgregarAlumno
			// 
			this->btnAgregarAlumno->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarAlumno->Location = System::Drawing::Point(104, 290);
			this->btnAgregarAlumno->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAgregarAlumno->Name = L"btnAgregarAlumno";
			this->btnAgregarAlumno->Size = System::Drawing::Size(104, 32);
			this->btnAgregarAlumno->TabIndex = 16;
			this->btnAgregarAlumno->Text = L"Agregar";
			this->btnAgregarAlumno->UseVisualStyleBackColor = true;
			this->btnAgregarAlumno->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnAgregarAlumno_Click);
			// 
			// btnCalcularCantidadDeAlumnos
			// 
			this->btnCalcularCantidadDeAlumnos->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcularCantidadDeAlumnos->Location = System::Drawing::Point(55, 82);
			this->btnCalcularCantidadDeAlumnos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCalcularCantidadDeAlumnos->Name = L"btnCalcularCantidadDeAlumnos";
			this->btnCalcularCantidadDeAlumnos->Size = System::Drawing::Size(80, 32);
			this->btnCalcularCantidadDeAlumnos->TabIndex = 20;
			this->btnCalcularCantidadDeAlumnos->Text = L"Calcular";
			this->btnCalcularCantidadDeAlumnos->UseVisualStyleBackColor = true;
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
			this->groupBox2->Location = System::Drawing::Point(19, 410);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(287, 364);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Modificar estudiante";
			// 
			// btnCancelar
			// 
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(159, 326);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnCarnetModificar->Location = System::Drawing::Point(208, 31);
			this->btnCarnetModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtPregradoModificar->Location = System::Drawing::Point(179, 266);
			this->txtPregradoModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPregradoModificar->Name = L"txtPregradoModificar";
			this->txtPregradoModificar->Size = System::Drawing::Size(100, 22);
			this->txtPregradoModificar->TabIndex = 56;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(23, 231);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(68, 22);
			this->label23->TabIndex = 55;
			this->label23->Text = L"Facultad:";
			// 
			// txtFacultadModificar
			// 
			this->txtFacultadModificar->Location = System::Drawing::Point(179, 231);
			this->txtFacultadModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtDpiModificar->Location = System::Drawing::Point(179, 194);
			this->txtDpiModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtA�oModificar->Location = System::Drawing::Point(179, 159);
			this->txtA�oModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtApellidoModificar->Location = System::Drawing::Point(179, 118);
			this->txtApellidoModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtApellidoModificar->Name = L"txtApellidoModificar";
			this->txtApellidoModificar->Size = System::Drawing::Size(100, 22);
			this->txtApellidoModificar->TabIndex = 48;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(23, 82);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(65, 22);
			this->label27->TabIndex = 47;
			this->label27->Text = L"Nombre:";
			// 
			// txtNombreModificar
			// 
			this->txtNombreModificar->Location = System::Drawing::Point(179, 82);
			this->txtNombreModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->txtCarnetModificar->Location = System::Drawing::Point(88, 34);
			this->txtCarnetModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarnetModificar->Name = L"txtCarnetModificar";
			this->txtCarnetModificar->Size = System::Drawing::Size(100, 22);
			this->txtCarnetModificar->TabIndex = 45;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtCarnetEliminar);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->btnEliminar);
			this->groupBox3->Location = System::Drawing::Point(329, 39);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(181, 144);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Eliminar estudiante";
			// 
			// txtCarnetEliminar
			// 
			this->txtCarnetEliminar->Location = System::Drawing::Point(72, 39);
			this->txtCarnetEliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnEliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(92, 32);
			this->btnEliminar->TabIndex = 42;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnEliminar_Click);
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
			this->groupBox4->Location = System::Drawing::Point(329, 187);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(181, 208);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Agregar cursos a un estudiante";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(4, 122);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 22);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Nota:";
			// 
			// txtNota
			// 
			this->txtNota->Location = System::Drawing::Point(72, 120);
			this->txtNota->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNota->Name = L"txtNota";
			this->txtNota->Size = System::Drawing::Size(100, 22);
			this->txtNota->TabIndex = 39;
			// 
			// txtCarnetCursos
			// 
			this->txtCarnetCursos->Location = System::Drawing::Point(72, 44);
			this->txtCarnetCursos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarnetCursos->Name = L"txtCarnetCursos";
			this->txtCarnetCursos->Size = System::Drawing::Size(100, 22);
			this->txtCarnetCursos->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(7, 48);
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
			this->label18->Location = System::Drawing::Point(4, 81);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 22);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Cursos:";
			// 
			// txtAgregarCurso
			// 
			this->txtAgregarCurso->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAgregarCurso->Location = System::Drawing::Point(41, 160);
			this->txtAgregarCurso->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAgregarCurso->Name = L"txtAgregarCurso";
			this->txtAgregarCurso->Size = System::Drawing::Size(91, 32);
			this->txtAgregarCurso->TabIndex = 34;
			this->txtAgregarCurso->Text = L"Agregar";
			this->txtAgregarCurso->UseVisualStyleBackColor = true;
			this->txtAgregarCurso->Click += gcnew System::EventHandler(this, &PortalEstudiantes::txtAgregarCurso_Click);
			// 
			// txtCursos
			// 
			this->txtCursos->Location = System::Drawing::Point(72, 79);
			this->txtCursos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCursos->Name = L"txtCursos";
			this->txtCursos->Size = System::Drawing::Size(100, 22);
			this->txtCursos->TabIndex = 35;
			// 
			// btnMostrarEstudiantes
			// 
			this->btnMostrarEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarEstudiantes->Location = System::Drawing::Point(22, 72);
			this->btnMostrarEstudiantes->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMostrarEstudiantes->Name = L"btnMostrarEstudiantes";
			this->btnMostrarEstudiantes->Size = System::Drawing::Size(85, 32);
			this->btnMostrarEstudiantes->TabIndex = 23;
			this->btnMostrarEstudiantes->Text = L"Mostrar";
			this->btnMostrarEstudiantes->UseVisualStyleBackColor = true;
			// 
			// comboBoxMostrarAlumnos
			// 
			this->comboBoxMostrarAlumnos->FormattingEnabled = true;
			this->comboBoxMostrarAlumnos->Location = System::Drawing::Point(7, 34);
			this->comboBoxMostrarAlumnos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBoxMostrarAlumnos->Name = L"comboBoxMostrarAlumnos";
			this->comboBoxMostrarAlumnos->Size = System::Drawing::Size(121, 24);
			this->comboBoxMostrarAlumnos->TabIndex = 24;
			// 
			// btnExportarEstudiantes
			// 
			this->btnExportarEstudiantes->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExportarEstudiantes->Location = System::Drawing::Point(163, 72);
			this->btnExportarEstudiantes->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnExportarEstudiantes->Name = L"btnExportarEstudiantes";
			this->btnExportarEstudiantes->Size = System::Drawing::Size(85, 32);
			this->btnExportarEstudiantes->TabIndex = 61;
			this->btnExportarEstudiantes->Text = L"Exportar";
			this->btnExportarEstudiantes->UseVisualStyleBackColor = true;
			this->btnExportarEstudiantes->Click += gcnew System::EventHandler(this, &PortalEstudiantes::btnExportarEstudiantes_Click);
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// dataMostrar
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataMostrar->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataMostrar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataMostrar->Location = System::Drawing::Point(12, 153);
			this->dataMostrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataMostrar->Name = L"dataMostrar";
			this->dataMostrar->RowHeadersWidth = 51;
			this->dataMostrar->RowTemplate->Height = 24;
			this->dataMostrar->Size = System::Drawing::Size(922, 693);
			this->dataMostrar->TabIndex = 64;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1562, 12);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 32);
			this->button1->TabIndex = 65;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PortalEstudiantes::button1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->groupBox10);
			this->groupBox5->Controls->Add(this->groupBox9);
			this->groupBox5->Controls->Add(this->groupBox8);
			this->groupBox5->Controls->Add(this->groupBox7);
			this->groupBox5->Controls->Add(this->groupBox3);
			this->groupBox5->Controls->Add(this->groupBox4);
			this->groupBox5->Controls->Add(this->groupBox2);
			this->groupBox5->Controls->Add(this->groupBox1);
			this->groupBox5->Location = System::Drawing::Point(959, 49);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(724, 797);
			this->groupBox5->TabIndex = 66;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Gestionar estudiantes";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->btnCalcularCantidadDeAlumnos);
			this->groupBox10->Location = System::Drawing::Point(528, 442);
			this->groupBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox10->Size = System::Drawing::Size(181, 139);
			this->groupBox10->TabIndex = 44;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Calcular la cantidad de alumnos en postgrado";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->btnFacultadPregrado);
			this->groupBox9->Controls->Add(this->txtFacultadPregrado);
			this->groupBox9->Controls->Add(this->label2);
			this->groupBox9->Location = System::Drawing::Point(528, 187);
			this->groupBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Size = System::Drawing::Size(181, 251);
			this->groupBox9->TabIndex = 43;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Buscar por medio de facultad";
			// 
			// btnFacultadPregrado
			// 
			this->btnFacultadPregrado->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacultadPregrado->Location = System::Drawing::Point(55, 139);
			this->btnFacultadPregrado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFacultadPregrado->Name = L"btnFacultadPregrado";
			this->btnFacultadPregrado->Size = System::Drawing::Size(80, 32);
			this->btnFacultadPregrado->TabIndex = 43;
			this->btnFacultadPregrado->Text = L"Buscar";
			this->btnFacultadPregrado->UseVisualStyleBackColor = true;
			// 
			// txtFacultadPregrado
			// 
			this->txtFacultadPregrado->Location = System::Drawing::Point(75, 96);
			this->txtFacultadPregrado->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtFacultadPregrado->Name = L"txtFacultadPregrado";
			this->txtFacultadPregrado->Size = System::Drawing::Size(100, 22);
			this->txtFacultadPregrado->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 22);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Facultad: ";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->btnCarnetProm);
			this->groupBox8->Controls->Add(this->txtCarnetProm);
			this->groupBox8->Controls->Add(this->label1);
			this->groupBox8->Location = System::Drawing::Point(329, 534);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(181, 240);
			this->groupBox8->TabIndex = 45;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Calcular promedio y el curso con la nota m�s alta ";
			// 
			// btnCarnetProm
			// 
			this->btnCarnetProm->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarnetProm->Location = System::Drawing::Point(41, 142);
			this->btnCarnetProm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCarnetProm->Name = L"btnCarnetProm";
			this->btnCarnetProm->Size = System::Drawing::Size(83, 32);
			this->btnCarnetProm->TabIndex = 46;
			this->btnCarnetProm->Text = L"Calcular";
			this->btnCarnetProm->UseVisualStyleBackColor = true;
			// 
			// txtCarnetProm
			// 
			this->txtCarnetProm->Location = System::Drawing::Point(40, 106);
			this->txtCarnetProm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCarnetProm->Name = L"txtCarnetProm";
			this->txtCarnetProm->Size = System::Drawing::Size(100, 22);
			this->txtCarnetProm->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 22);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Carnet: ";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label29);
			this->groupBox7->Controls->Add(this->txtBuscarDpi);
			this->groupBox7->Controls->Add(this->btnBuscarDpi);
			this->groupBox7->Location = System::Drawing::Point(329, 399);
			this->groupBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Size = System::Drawing::Size(181, 129);
			this->groupBox7->TabIndex = 43;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Buscar estudiante";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(6, 41);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(38, 22);
			this->label29->TabIndex = 44;
			this->label29->Text = L"Dpi:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBoxMostrarAlumnos);
			this->groupBox6->Controls->Add(this->btnMostrarEstudiantes);
			this->groupBox6->Controls->Add(this->btnExportarEstudiantes);
			this->groupBox6->Controls->Add(this->btnImportarDatos);
			this->groupBox6->Location = System::Drawing::Point(12, 12);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(279, 126);
			this->groupBox6->TabIndex = 67;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Mostrar";
			// 
			// PortalEstudiantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1698, 858);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataMostrar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"PortalEstudiantes";
			this->Text = L"Portal de estudiantes";
			this->Load += gcnew System::EventHandler(this, &PortalEstudiantes::PortalEstudiantes_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMostrar))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: void ReestablecerMatriz() {
	dataMostrar->Rows->Clear();
	dataMostrar->Columns->Clear();
	dataMostrar->RowHeadersVisible = false;
};
private: int generarCarnet(String^ a�oIngreso) {
		
		int numeroAleatorio =rand()%(10000-99999+1)+10000;
		String^ concatenacion = (Convert::ToString(numeroAleatorio))->Substring(0,5) + a�oIngreso->Substring(2, 2);
		return Convert::ToInt64(concatenacion);		
	}
	   void actualizarDataEstudiante() {
		   int contador = 0;
		   
		   

		   while (estudiantesPostgrado->get(contador) != nullptr) {
			   ReestablecerMatriz();
			   String^ Nombre = gcnew String((estudiantesPostgrado->get(contador)->getNombre()).c_str());
			   String^ Apellido = gcnew String((estudiantesPostgrado->get(contador)->getApellidos()).c_str());
			   String^ Facultad = gcnew String((estudiantesPostgrado->get(contador)->getFacultad()).c_str());
			   String^ Nivel = gcnew String((estudiantesPostgrado->get(contador)->getNivelAcademico()).c_str());
			   String^ Dpi = gcnew String((estudiantesPostgrado->get(contador)->getDpi()).c_str());
			   int carnet2 = (estudiantesPostgrado->get(contador)->getCarnet());
			   int a�oDeIngreso = (estudiantesPostgrado->get(contador)->getA�oIngreso());
			   

			   for (int j = 0; j < 7; j++) {
				   array<String^>^ heardersColumns = { "Carnet", "Apellido", "Nombre", "A�o de ingreso", "DPI", "Facultad", "Grado acad�mico" };
				  
				   DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				   nuevacolumna->Width = 100;
				   DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				   nuevacolumna->CellTemplate = cellTemplate;
				   if (j < (heardersColumns->Length) - 1) {
					   nuevacolumna->HeaderText = heardersColumns[j];
				   }
				   //Inserta la columna
				   dataMostrar->Columns->Add(nuevacolumna);
			   }
			   for (int i = 0; i < estudiantesPostgrado->getSize(); i++) {

				   dataMostrar->Rows->Add();
				   dataMostrar->Rows[i]->Cells[0]->Value = carnet2;
				   dataMostrar->Rows[i]->Cells[1]->Value = Apellido;
				   dataMostrar->Rows[i]->Cells[2]->Value = Nombre;
				   dataMostrar->Rows[i]->Cells[3]->Value = a�oDeIngreso;
				   dataMostrar->Rows[i]->Cells[4]->Value = Dpi;
				   dataMostrar->Rows[i]->Cells[5]->Value = Facultad;
				   dataMostrar->Rows[i]->Cells[6]->Value = Nivel;
			   }
			   contador++;
		   }

	   }

	   void MarshalString(String^ s, string& os) {
		   using namespace Runtime::InteropServices;
		   const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }

private: System::Void PortalEstudiantes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnImportarDatos_Click(System::Object^ sender, System::EventArgs^ e) {
	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";

	//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);
		if (archivoLineas->Length > 0) {
			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;
				array<String^>^ heardersColumns = { "Carnet", "Apellido", "Nombre", "A�o de ingreso", "DPI", "Facultad", "Grado acad�mico", "Cursos" };
				
				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas+1; i++) {
					//Crea una columna

					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 100;

					if (i < (heardersColumns->Length) - 1) {
						nuevacolumna->HeaderText = heardersColumns[i];
					}
					else {
						nuevacolumna->HeaderText = "Cursos";
					}


					//Le agrega el tipo de columna que ser�
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;

					//Inserta la columna
					dataMostrar->Columns->Add(nuevacolumna);
				}

				//Agrega las filas de manera din�mica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dataMostrar->Rows->Add();
				}

				//Llena el DatagridView
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(',');
					 carnet = generarCarnet(fila[2]);
					
					String^ apellido = fila[0];
					String^ nombre = fila[1];
					int a�o = Convert::ToInt64(fila[2]);
					String^ dpi = fila[3];
					String^ facultad = fila[4];
					String^ gradoAcademico = fila[5];

					string apellido1, nombre1, facultad1, gradoAcademico1, dpi1;

					MarshalString(apellido, apellido1);
					MarshalString(nombre, nombre1);
					MarshalString(facultad, facultad1);
					MarshalString(gradoAcademico, gradoAcademico1);
					MarshalString(dpi, dpi1);
					estudianteNuevo = new Estudiante(nombre1, apellido1, dpi1, gradoAcademico1, carnet, facultad1, a�o);
					
					dataMostrar->Rows[i]->Cells[0]->Value = carnet;
					int j = 0;
					//Si alguna fila tiene m�s o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dataMostrar->Rows[i]->Cells[j + 1]->Value = fila[j];
						if (j >= 6) {
							array<String^>^ curso_Nota = fila[j]->Split(' ');
							String^ curso = curso_Nota[0];
							double nota = Convert::ToDouble(curso_Nota[1]);
							string curso1;
							MarshalString(curso, curso1);
							cursoEstudiante = new Curso(curso1);
							asignaciones = new Asignacion_EyC(estudianteNuevo, cursoEstudiante, nota);
							
							//curso_Nota[0]=>curso
							//curso_Nota[1]=>nota
						}
						j++;
					}
					if (gradoAcademico == "pregrado") {
						this->estudiantesPregrado->add(estudianteNuevo);
						this->listaAsignacionEyC->add(asignaciones);
						this->listaCurso->add(cursoEstudiante);
					}
					else if (gradoAcademico == "postgrado" || gradoAcademico == "doctorado") {
						this->estudiantesPostgrado->add(estudianteNuevo);
						this->listaAsignacionEyC->add(asignaciones);
						this->listaCurso->add(cursoEstudiante);
					}
				}
			}
		}
	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccion� ning�n archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
private: System::Void btnAgregarAlumno_Click(System::Object^ sender, System::EventArgs^ e) {
		
	if (txtApellido->Text->Trim() != "" && txtNombre->Text->Trim() != "" && txtA�o->Text->Trim() != "" && txtDpi->Text->Trim() != "" && txtFacultad->Text->Trim() != "" && txtPreOpost->Text->Trim() != "") {
		String^ apellido = txtApellido->Text;
		String^ nombre = txtNombre->Text;
		int a�o = Convert::ToInt64(txtA�o->Text);
		carnet = generarCarnet(txtA�o->Text);
		String^ dpi = txtDpi->Text;
		String^ facultad = txtFacultad->Text;
		String^ gradoAcademico = txtPreOpost->Text;

		string apellido1, nombre1, facultad1, gradoAcademico1, dpi1;

		MarshalString(apellido, apellido1);
		MarshalString(nombre, nombre1);
		MarshalString(facultad, facultad1);
		MarshalString(gradoAcademico, gradoAcademico1);
		MarshalString(dpi, dpi1);

	
		estudianteNuevo = new Estudiante(nombre1, apellido1, dpi1, gradoAcademico1, carnet, facultad1, a�o);
		if (gradoAcademico == "pregrado") {
			this->estudiantesPregrado->add(estudianteNuevo);
		}
		else if (gradoAcademico == "postgrado" || gradoAcademico == "doctorado") {
			this->estudiantesPostgrado->add(estudianteNuevo);
		}
		actualizarDataEstudiante();
	}
	else {
		MessageBox::Show("Llene todos los campos"," ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void txtAgregarCurso_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (txtCarnetCursos->Text->Trim() != " " && txtCursos->Text->Trim() != "" && txtNota->Text->Trim() != "") {
			carnet = Convert::ToInt64(txtCarnetCursos->Text);
			if (estudiantesPostgrado->getItem(carnet) != nullptr) {
				String^ curso = txtCursos->Text;
				double nota = Convert::ToDouble(txtNota->Text);
				string curso1;
				MarshalString(curso, curso1);
				cursoEstudiante = new Curso(curso1);
				asignaciones = new Asignacion_EyC(estudiantesPostgrado->getItem(carnet), cursoEstudiante, nota);
			}
			else if (estudiantesPregrado->getItem(carnet)!=nullptr) {
				String^ curso = txtCursos->Text;
				double nota = Convert::ToDouble(txtNota->Text);
				string curso1;
				MarshalString(curso, curso1);
				cursoEstudiante = new Curso(curso1);
				asignaciones = new Asignacion_EyC(estudiantesPregrado->getItem(carnet), cursoEstudiante, nota);
			}
		}
		else {
			MessageBox::Show("Llene todos los campos", " ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtCarnetEliminar->Text->Trim() != " " ) {
		carnet = Convert::ToInt64(txtCarnetEliminar->Text);

		
	}
	else {
		MessageBox::Show("Llene todos los campos", " ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnBuscarDpi_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBuscarDpi->Text->Trim() != " ") {
		String^ dpi = (txtBuscarDpi->Text);
		string dpi1;
		MarshalString(dpi, dpi1);

		if (estudiantesPostgrado->getItem2(dpi1) != nullptr) {
			String^ Nombre = gcnew String((estudiantesPostgrado->getItem2(dpi1)->getNombre()).c_str());
			String^ Apellido = gcnew String((estudiantesPostgrado->getItem2(dpi1)->getApellidos()).c_str());
			String^ Facultad = gcnew String((estudiantesPostgrado->getItem2(dpi1)->getFacultad()).c_str());
			int carnet2 = (estudiantesPostgrado->getItem2(dpi1)->getCarnet());
			MessageBox::Show("El estudiante buscado es: "+ Nombre + " "+ Apellido + " En la facultad de: " + Facultad +".  Carnet: " +carnet2 , "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (estudiantesPregrado->getItem(carnet) != nullptr) {
			String^ Nombre = gcnew String((estudiantesPregrado->getItem2(dpi1)->getNombre()).c_str());
			String^ Apellido = gcnew String((estudiantesPregrado->getItem2(dpi1)->getDpi()).c_str());
			String^ Facultad = gcnew String((estudiantesPregrado->getItem2(dpi1)->getFacultad()).c_str());
			int carnet2 = (estudiantesPregrado->getItem2(dpi1)->getCarnet());
			MessageBox::Show("El estudiante buscado es: " + Nombre + " " + Apellido + " En la facultad de: " + Facultad + ".  Carnet: " + carnet2, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Estudiante no encontrado", " ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	else {
		MessageBox::Show("Llene todos los campos", " ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnExportarEstudiantes_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((dataMostrar->Columns->Count > 0) && (dataMostrar->Rows->Count > 0)) {
		saveFileDialog1->Filter = "Archivos separados por coma (csv) | *.csv";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			//Guardo el contenido del DataGridView en una sola cadena
			String^ linea = "";
			for (int i = 0; i < dataMostrar->Rows->Count; i++) {
				for (int j = 0; j < dataMostrar->Columns->Count; j++) {
					if (j == dataMostrar->Columns->Count - 1)
						linea += "" + dataMostrar->Rows[i]->Cells[j]->Value + "\r\n";
					else
						linea += "" + dataMostrar->Rows[i]->Cells[j]->Value + ",";
				}
			}

			//Utilizo el objeto System::IO::File para guardar el texto
			//Importante haber llamado al namespace System::IO antes de usar File
			File::WriteAllText(saveFileDialog1->FileName, linea);
			MessageBox::Show("Archivo guardado exitosamente"
				, "Operaci�n exitosa"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se export� el archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
}
};
}
