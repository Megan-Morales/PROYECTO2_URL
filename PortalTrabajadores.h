#pragma once

namespace Proyecto2MeganMorales1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PortalTrabajadores
	/// </summary>
	public ref class PortalTrabajadores : public System::Windows::Forms::Form
	{
	public:
		PortalTrabajadores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PortalTrabajadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtFacultad;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtDpi;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtAño;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Button^ btnAgregarAlumno;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ txtCarnetCursos;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ txtAgregarCurso;
	private: System::Windows::Forms::TextBox^ txtCursos;














	private: System::Windows::Forms::GroupBox^ groupBox5;











	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox11;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::TextBox^ txtCarnetEliminar;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ btnEliminar;




















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCarnetCursos = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtAgregarCurso = (gcnew System::Windows::Forms::Button());
			this->txtCursos = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtFacultad = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtDpi = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtAño = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregarAlumno = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCarnetEliminar = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(9, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(635, 558);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gestionar trabajadores";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button4);
			this->groupBox5->Controls->Add(this->label34);
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->label33);
			this->groupBox5->Controls->Add(this->textBox18);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->textBox11);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Location = System::Drawing::Point(240, 28);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Size = System::Drawing::Size(214, 229);
			this->groupBox5->TabIndex = 31;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Modificar trabajador docente";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Location = System::Drawing::Point(17, 262);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(208, 269);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Agregar trabajador no docente";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 185);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Cargo ocupacional: ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(110, 185);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 31;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 151);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 18);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Salario: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 151);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 29;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 120);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 18);
			this->label2->TabIndex = 28;
			this->label2->Text = L"DPI:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 120);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 92);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 18);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Fecha de ingreso:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 92);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 58);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 18);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Apellidos:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(110, 58);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 30);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 18);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Nombre:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(110, 30);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 20);
			this->textBox5->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(52, 227);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 26);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->txtCarnetCursos);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->txtAgregarCurso);
			this->groupBox4->Controls->Add(this->txtCursos);
			this->groupBox4->Location = System::Drawing::Point(467, 172);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(146, 138);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Agregar cursos a un trabajador";
			// 
			// txtCarnetCursos
			// 
			this->txtCarnetCursos->Location = System::Drawing::Point(60, 37);
			this->txtCarnetCursos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCarnetCursos->Name = L"txtCarnetCursos";
			this->txtCarnetCursos->Size = System::Drawing::Size(76, 20);
			this->txtCarnetCursos->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(11, 41);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(48, 18);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Código";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(9, 67);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 18);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Cursos:";
			// 
			// txtAgregarCurso
			// 
			this->txtAgregarCurso->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAgregarCurso->Location = System::Drawing::Point(34, 96);
			this->txtAgregarCurso->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAgregarCurso->Name = L"txtAgregarCurso";
			this->txtAgregarCurso->Size = System::Drawing::Size(68, 26);
			this->txtAgregarCurso->TabIndex = 34;
			this->txtAgregarCurso->Text = L"Agregar";
			this->txtAgregarCurso->UseVisualStyleBackColor = true;
			// 
			// txtCursos
			// 
			this->txtCursos->Location = System::Drawing::Point(60, 66);
			this->txtCursos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCursos->Name = L"txtCursos";
			this->txtCursos->Size = System::Drawing::Size(76, 20);
			this->txtCursos->TabIndex = 35;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->txtFacultad);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->txtDpi);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->txtAño);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->txtApellido);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->txtNombre);
			this->groupBox2->Controls->Add(this->btnAgregarAlumno);
			this->groupBox2->Location = System::Drawing::Point(17, 28);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(208, 229);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Agregar trabajador docente";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(11, 151);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 18);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Salario: ";
			// 
			// txtFacultad
			// 
			this->txtFacultad->Location = System::Drawing::Point(110, 151);
			this->txtFacultad->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtFacultad->Name = L"txtFacultad";
			this->txtFacultad->Size = System::Drawing::Size(76, 20);
			this->txtFacultad->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(11, 120);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 18);
			this->label13->TabIndex = 28;
			this->label13->Text = L"DPI:";
			// 
			// txtDpi
			// 
			this->txtDpi->Location = System::Drawing::Point(110, 120);
			this->txtDpi->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDpi->Name = L"txtDpi";
			this->txtDpi->Size = System::Drawing::Size(76, 20);
			this->txtDpi->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(11, 92);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 18);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Fecha de ingreso:";
			// 
			// txtAño
			// 
			this->txtAño->Location = System::Drawing::Point(110, 92);
			this->txtAño->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtAño->Name = L"txtAño";
			this->txtAño->Size = System::Drawing::Size(76, 20);
			this->txtAño->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(11, 58);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 18);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Apellidos:";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(110, 58);
			this->txtApellido->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(76, 20);
			this->txtApellido->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(11, 30);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 18);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Nombre:";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(110, 30);
			this->txtNombre->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(76, 20);
			this->txtNombre->TabIndex = 15;
			// 
			// btnAgregarAlumno
			// 
			this->btnAgregarAlumno->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarAlumno->Location = System::Drawing::Point(52, 191);
			this->btnAgregarAlumno->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAgregarAlumno->Name = L"btnAgregarAlumno";
			this->btnAgregarAlumno->Size = System::Drawing::Size(78, 26);
			this->btnAgregarAlumno->TabIndex = 16;
			this->btnAgregarAlumno->Text = L"Agregar";
			this->btnAgregarAlumno->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(149, 18);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 26);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Ir";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(8, 21);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 18);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Código";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(60, 21);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 20);
			this->textBox7->TabIndex = 48;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(127, 94);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 20);
			this->textBox8->TabIndex = 64;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(8, 70);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 18);
			this->label11->TabIndex = 63;
			this->label11->Text = L"Apellidos:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(127, 70);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 20);
			this->textBox9->TabIndex = 62;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(13, 50);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 18);
			this->label15->TabIndex = 61;
			this->label15->Text = L"Nombre:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(127, 48);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(76, 20);
			this->textBox10->TabIndex = 60;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(8, 118);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 18);
			this->label16->TabIndex = 67;
			this->label16->Text = L"Dpi:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(127, 120);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(76, 20);
			this->textBox11->TabIndex = 66;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(8, 144);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(50, 18);
			this->label33->TabIndex = 32;
			this->label33->Text = L"Salario: ";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(127, 144);
			this->textBox18->Margin = System::Windows::Forms::Padding(2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(76, 20);
			this->textBox18->TabIndex = 31;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(13, 94);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(94, 18);
			this->label34->TabIndex = 31;
			this->label34->Text = L"Fecha de ingreso:";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(101, 183);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 26);
			this->button4->TabIndex = 61;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(28, 183);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(69, 26);
			this->button5->TabIndex = 60;
			this->button5->Text = L"Modificar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->textBox19);
			this->groupBox6->Controls->Add(this->button3);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->textBox12);
			this->groupBox6->Controls->Add(this->label20);
			this->groupBox6->Controls->Add(this->textBox13);
			this->groupBox6->Controls->Add(this->textBox14);
			this->groupBox6->Controls->Add(this->button7);
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->textBox15);
			this->groupBox6->Controls->Add(this->textBox16);
			this->groupBox6->Controls->Add(this->label23);
			this->groupBox6->Controls->Add(this->textBox17);
			this->groupBox6->Location = System::Drawing::Point(240, 271);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(214, 260);
			this->groupBox6->TabIndex = 68;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Modificar trabajador no docente";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(101, 218);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 26);
			this->button3->TabIndex = 61;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(13, 103);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 18);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Fecha de ingreso:";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(28, 218);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 26);
			this->button6->TabIndex = 60;
			this->button6->Text = L"Modificar";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(8, 153);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(50, 18);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Salario: ";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(127, 153);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(76, 20);
			this->textBox12->TabIndex = 31;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(8, 127);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(31, 18);
			this->label20->TabIndex = 67;
			this->label20->Text = L"Dpi:";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(127, 129);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(76, 20);
			this->textBox13->TabIndex = 66;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(127, 103);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(76, 20);
			this->textBox14->TabIndex = 64;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(149, 27);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 26);
			this->button7->TabIndex = 46;
			this->button7->Text = L"Ir";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(8, 79);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 18);
			this->label21->TabIndex = 63;
			this->label21->Text = L"Apellidos:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(8, 30);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(48, 18);
			this->label22->TabIndex = 47;
			this->label22->Text = L"Código";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(127, 79);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(76, 20);
			this->textBox15->TabIndex = 62;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(60, 30);
			this->textBox16->Margin = System::Windows::Forms::Padding(2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(76, 20);
			this->textBox16->TabIndex = 48;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(13, 59);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 18);
			this->label23->TabIndex = 61;
			this->label23->Text = L"Nombre:";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(127, 57);
			this->textBox17->Margin = System::Windows::Forms::Padding(2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(76, 20);
			this->textBox17->TabIndex = 60;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(8, 175);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 18);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Cargo ocupacional: ";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(127, 177);
			this->textBox19->Margin = System::Windows::Forms::Padding(2);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(76, 20);
			this->textBox19->TabIndex = 33;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->txtCarnetEliminar);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->btnEliminar);
			this->groupBox7->Location = System::Drawing::Point(467, 315);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2);
			this->groupBox7->Size = System::Drawing::Size(146, 117);
			this->groupBox7->TabIndex = 69;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Eliminar trabajador";
			// 
			// txtCarnetEliminar
			// 
			this->txtCarnetEliminar->Location = System::Drawing::Point(54, 32);
			this->txtCarnetEliminar->Margin = System::Windows::Forms::Padding(2);
			this->txtCarnetEliminar->Name = L"txtCarnetEliminar";
			this->txtCarnetEliminar->Size = System::Drawing::Size(76, 20);
			this->txtCarnetEliminar->TabIndex = 42;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(5, 36);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(46, 18);
			this->label28->TabIndex = 41;
			this->label28->Text = L"Carnet:";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Papyrus", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(47, 68);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(69, 26);
			this->btnEliminar->TabIndex = 42;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// PortalTrabajadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 588);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PortalTrabajadores";
			this->Text = L"PortalTrabajadores";
			this->groupBox1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
