#pragma once 
#include <iostream>
#include <cmath>
using namespace std;

namespace MC08 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			for (int i = 0; i < 256; i++) {
				histogramaOriginal[i] = 0;
				histogramaExpandido[i] = 0;
				histogramaEcualizado[i] = 0;
			}
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
				delete histogramaOriginal;
				delete histogramaExpandido;
				delete histogramaEcualizado;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_Inicio;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnEcualizar;
	private: System::Windows::Forms::Button^ btnExpandir;
	private: System::Windows::Forms::Button^ btnInicio;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ btn_Importar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private:
		System::ComponentModel::Container^ components;
		Bitmap^ img_Original;
		Bitmap^ img_EscalaGrises;
		Bitmap^ img_Expandida;
		Bitmap^ img_Ecualizada;
		int* histogramaOriginal = new int[256];
		int* histogramaExpandido = new int[256];
		int* histogramaEcualizado = new int[256];
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ GuardarEc;

	private: System::Windows::Forms::Button^ GuardarEx;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog3;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
		   

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			this->pnl_Inicio = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->GuardarEc = (gcnew System::Windows::Forms::Button());
			this->GuardarEx = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btnEcualizar = (gcnew System::Windows::Forms::Button());
			this->btn_Importar = (gcnew System::Windows::Forms::Button());
			this->btnExpandir = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnInicio = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveFileDialog3 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pnl_Inicio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_Inicio
			// 
			this->pnl_Inicio->Controls->Add(this->button2);
			this->pnl_Inicio->Controls->Add(this->GuardarEc);
			this->pnl_Inicio->Controls->Add(this->GuardarEx);
			this->pnl_Inicio->Controls->Add(this->label3);
			this->pnl_Inicio->Controls->Add(this->label2);
			this->pnl_Inicio->Controls->Add(this->label1);
			this->pnl_Inicio->Controls->Add(this->textBox2);
			this->pnl_Inicio->Controls->Add(this->textBox1);
			this->pnl_Inicio->Controls->Add(this->pictureBox4);
			this->pnl_Inicio->Controls->Add(this->pictureBox3);
			this->pnl_Inicio->Controls->Add(this->chart3);
			this->pnl_Inicio->Controls->Add(this->chart2);
			this->pnl_Inicio->Controls->Add(this->btnEcualizar);
			this->pnl_Inicio->Controls->Add(this->btn_Importar);
			this->pnl_Inicio->Controls->Add(this->btnExpandir);
			this->pnl_Inicio->Controls->Add(this->chart1);
			this->pnl_Inicio->Controls->Add(this->pictureBox2);
			this->pnl_Inicio->Controls->Add(this->pictureBox1);
			this->pnl_Inicio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_Inicio->Location = System::Drawing::Point(0, 60);
			this->pnl_Inicio->Name = L"pnl_Inicio";
			this->pnl_Inicio->Size = System::Drawing::Size(1353, 673);
			this->pnl_Inicio->TabIndex = 1;
			this->pnl_Inicio->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pnl_Inicio_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(421, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Guardar Imagen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// GuardarEc
			// 
			this->GuardarEc->Location = System::Drawing::Point(1151, 582);
			this->GuardarEc->Name = L"GuardarEc";
			this->GuardarEc->Size = System::Drawing::Size(99, 23);
			this->GuardarEc->TabIndex = 13;
			this->GuardarEc->Text = L"Guardar Imagen";
			this->GuardarEc->UseVisualStyleBackColor = true;
			this->GuardarEc->Visible = false;
			this->GuardarEc->Click += gcnew System::EventHandler(this, &MyForm::GuardarEc_Click);
			// 
			// GuardarEx
			// 
			this->GuardarEx->Location = System::Drawing::Point(1141, 294);
			this->GuardarEx->Name = L"GuardarEx";
			this->GuardarEx->Size = System::Drawing::Size(99, 23);
			this->GuardarEx->TabIndex = 12;
			this->GuardarEx->Text = L"Guardar Imagen";
			this->GuardarEx->UseVisualStyleBackColor = true;
			this->GuardarEx->Visible = false;
			this->GuardarEx->Click += gcnew System::EventHandler(this, &MyForm::GuardarEx_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(977, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"de";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1138, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"a";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(875, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ingrese el rango";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1179, 27);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1018, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(1072, 360);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(256, 216);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(1064, 64);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(256, 224);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// chart3
			// 
			this->chart3->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Divot;
			this->chart3->BorderlineColor = System::Drawing::Color::GreenYellow;
			this->chart3->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart3->BorderlineWidth = 3;
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			this->chart3->Location = System::Drawing::Point(688, 352);
			this->chart3->Name = L"chart3";
			this->chart3->Size = System::Drawing::Size(344, 224);
			this->chart3->TabIndex = 5;
			this->chart3->Text = L"chart3";
			// 
			// chart2
			// 
			this->chart2->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Divot;
			this->chart2->BorderlineColor = System::Drawing::Color::GreenYellow;
			this->chart2->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart2->BorderlineWidth = 3;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			this->chart2->Location = System::Drawing::Point(688, 64);
			this->chart2->Name = L"chart2";
			this->chart2->Size = System::Drawing::Size(352, 224);
			this->chart2->TabIndex = 4;
			this->chart2->Text = L"chart2";
			// 
			// btnEcualizar
			// 
			this->btnEcualizar->Location = System::Drawing::Point(688, 312);
			this->btnEcualizar->Name = L"btnEcualizar";
			this->btnEcualizar->Size = System::Drawing::Size(75, 23);
			this->btnEcualizar->TabIndex = 2;
			this->btnEcualizar->Text = L"Ecualizar";
			this->btnEcualizar->UseVisualStyleBackColor = true;
			this->btnEcualizar->Visible = false;
			this->btnEcualizar->Click += gcnew System::EventHandler(this, &MyForm::btnEcualizar_Click);
			// 
			// btn_Importar
			// 
			this->btn_Importar->Location = System::Drawing::Point(48, 216);
			this->btn_Importar->Name = L"btn_Importar";
			this->btn_Importar->Size = System::Drawing::Size(75, 23);
			this->btn_Importar->TabIndex = 0;
			this->btn_Importar->Text = L"Importar";
			this->btn_Importar->UseVisualStyleBackColor = true;
			this->btn_Importar->Click += gcnew System::EventHandler(this, &MyForm::btn_Importar_Click);
			// 
			// btnExpandir
			// 
			this->btnExpandir->Location = System::Drawing::Point(688, 23);
			this->btnExpandir->Name = L"btnExpandir";
			this->btnExpandir->Size = System::Drawing::Size(75, 23);
			this->btnExpandir->TabIndex = 1;
			this->btnExpandir->Text = L"Expandir";
			this->btnExpandir->UseVisualStyleBackColor = false;
			this->btnExpandir->Visible = false;
			this->btnExpandir->Click += gcnew System::EventHandler(this, &MyForm::btnExpandir_Click);
			// 
			// chart1
			// 
			this->chart1->BackHatchStyle = System::Windows::Forms::DataVisualization::Charting::ChartHatchStyle::Divot;
			this->chart1->BorderlineColor = System::Drawing::Color::GreenYellow;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart1->BorderlineWidth = 3;
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Location = System::Drawing::Point(64, 272);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(552, 288);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(344, 32);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(264, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(48, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 184);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Coral;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnInicio);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1353, 60);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(164, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnInicio
			// 
			this->btnInicio->Location = System::Drawing::Point(64, 12);
			this->btnInicio->Name = L"btnInicio";
			this->btnInicio->Size = System::Drawing::Size(75, 23);
			this->btnInicio->TabIndex = 0;
			this->btnInicio->Text = L"Limpiar";
			this->btnInicio->UseVisualStyleBackColor = true;
			this->btnInicio->Click += gcnew System::EventHandler(this, &MyForm::btnInicio_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Imagenes PNG|*.png";
			// 
			// saveFileDialog2
			// 
			this->saveFileDialog2->Filter = L"Imagenes PNG|*.png";
			// 
			// saveFileDialog3
			// 
			this->saveFileDialog3->Filter = L"Imagenes PNG|*.png";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1353, 733);
			this->Controls->Add(this->pnl_Inicio);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->pnl_Inicio->ResumeLayout(false);
			this->pnl_Inicio->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: int maximoValor(int * histograma) {
			for (int i = 255; i >= 0; i--)
			{
				if (histogramaOriginal[i] > 0) return i;
			}
		}

		private: int minimoValor(int * histogramaOriginal) {
			for (int i = 0; i <= 255; i++)
			{
				if (histogramaOriginal[i] > 0) return i;
			}
		}

		private: void CrearGrafico(Chart ^ grafico, int * histograma) {
			    grafico->Series->Clear();
				Series^ serie = gcnew Series("Histograma");
				serie->ChartType = SeriesChartType::Column;
				serie->Color = Color::Red;

				for (int i = 0; i < 256; i++) {
					serie->Points->AddXY(i, histograma[i]);
				}
				grafico->Series->Add(serie);
				grafico->ChartAreas[0]->AxisX->Minimum = 0;
				grafico->ChartAreas[0]->AxisX->Maximum = 255;
				grafico->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
				grafico->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
				grafico->ChartAreas[0]->AxisY->LabelStyle->Format = "0";
				serie->CustomProperties = "PixelPointWidth=4";
		}

		private: System::Void btnExpandir_Click(System::Object^ sender, System::EventArgs^ e) {

			chart2->Series->Clear();
			for (int i = 0; i < 256; i++)
			{
				histogramaExpandido[i] = 0;
			}
			int minValue = 0;
			int maxValue = 255;
			int newValMinimo = Convert::ToInt16((textBox1->Text == "") ? "-1" : textBox1->Text);
			int newValMaximo = Convert::ToInt16((textBox2->Text == "") ? "-1" : textBox2->Text);
			if (newValMinimo>=0 && newValMaximo <=255) {
				// Se realizan los cálculos con los valores ingresados
				int valorMaximo = maximoValor(histogramaOriginal);
				int valorMinimo = minimoValor(histogramaOriginal);

				//T(r) = pendiente(r) + b
				double m = (newValMaximo - newValMinimo) * 1.0 / (valorMaximo - valorMinimo) * 1.0;
				double b = newValMinimo * 1.0 - m * valorMinimo * 1.0;

				for (int i = 0; i < 256; i++)
				{
					if (histogramaOriginal[i] > 0) {
						int valor = round(i * m + b);
						histogramaExpandido[valor] = histogramaOriginal[i];
					}
				}

				CrearGrafico(chart2, histogramaExpandido);

				img_Expandida = gcnew Bitmap(img_Original->Width, img_Original->Height);

				for (int x = 0; x < img_Original->Width; x++) {
					for (int y = 0; y < img_Original->Height; y++) {
						Color oColor = img_Original->GetPixel(x, y);
						int gris = int(oColor.R * 0.299 + oColor.G * 0.587 + oColor.B * 0.114);
						int nuevoGris = round(gris * m + b);
						img_Expandida->SetPixel(x, y, Color::FromArgb(nuevoGris, nuevoGris, nuevoGris));
					}
				}

				pictureBox3->Image = img_Expandida;
				GuardarEx->Visible = true;

			}
			else {
				MessageBox::Show("Por favor, ingrese dos números válidos entre 0 y 255");
			}
			/*cout << "Ingrese el rango: \n";
			do
			{
				cout << "Minimo valor: ";
				cin >> nuevoValorMinimo;
			} while (nuevoValorMinimo < 0 || nuevoValorMinimo > valorMinimo);

			do
			{
				cout << "Maximo valor: ";
				cin >> nuevoValorMaximo;
			} while (nuevoValorMaximo < valorMaximo || nuevoValorMaximo > 255);*/


			
		}

		private: System::Void btnEcualizar_Click(System::Object^ sender, System::EventArgs^ e) {
			chart3->Series->Clear();
			for (int i = 0; i < 256; i++)
			{
				histogramaEcualizado[i] = 0;
			}
			//uso de la formula en la tabla 
			int totalPixeles= img_Original->Width * img_Original->Height;

			double pr[256] = { 0 };

			for (int i = 0; i < 256; i++)
			{
				pr[i] = (double) histogramaOriginal[i] / totalPixeles;
			}

			double prAcumulado[256] = { 0 };
			prAcumulado[0] = pr[0];

			for (int i = 1; i < 256; i++)
			{
				prAcumulado[i] = prAcumulado[i - 1] + pr[i];
			}

			int sk[256] = { 0 };
			for (int i = 0; i < 256; i++)
			{
				//(L-1)*(pracumulado)
				sk[i] = round(255* prAcumulado[i]);
			}

			for (int i = 0; i < 256; i++)
			{
				histogramaEcualizado[sk[i]] += histogramaOriginal[i];
			}

			CrearGrafico(chart3, histogramaEcualizado);

			//imagen
			img_Ecualizada = gcnew Bitmap(img_Original->Width, img_Original->Height);

			//creo que se puede crear una funcion generica para actulizar la imagen mmm....
			for (int x = 0; x < img_Original->Width; x++) {
				for (int y = 0; y < img_Original->Height; y++) {
					Color oColor = img_Original->GetPixel(x, y);
					int gris = int(oColor.R * 0.299 + oColor.G * 0.587 + oColor.B * 0.114);
					int nuevoGris = sk[gris];
					img_Ecualizada->SetPixel(x, y, Color::FromArgb(nuevoGris, nuevoGris, nuevoGris));
				}
			}

			pictureBox4->Image = img_Ecualizada;
			GuardarEc->Visible = true;

		}

		private: System::Void btn_Importar_Click(System::Object^ sender, System::EventArgs^ e) {

			openFileDialog1->Filter = "Imagen|*.jpg;*.jpeg;*.png; *.heic";

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
				img_Original = gcnew Bitmap(openFileDialog1->FileName);
				btnEcualizar->Visible = true;
				btnExpandir->Visible = true;
				button2->Visible = true;

				//Limpiar histogramas

				for (int i = 0; i < 256; i++) {
					histogramaOriginal[i] = 0;
					histogramaExpandido[i] = 0;
					histogramaEcualizado[i] = 0;
				}

				//Mostrar la imagen en escala de grises

				img_EscalaGrises = gcnew Bitmap(img_Original->Width, img_Original->Height);

				for (int x = 0; x < img_Original->Width; x++){
					for (int y = 0; y < img_Original->Height; y++){
						Color oColor = img_Original->GetPixel(x, y);
						int gris = int(oColor.R * 0.299 + oColor.G * 0.587 + oColor.B * 0.114);
						img_EscalaGrises->SetPixel(x, y, Color::FromArgb(gris, gris, gris));
						histogramaOriginal[gris]++;
					}
				}

				pictureBox2->Image = img_EscalaGrises;

				//Mostrar el histograma
				CrearGrafico(chart1, histogramaOriginal);

				
			}
		}



private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void GuardarEx_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		img_Expandida->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
	}
}
private: System::Void GuardarEc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		img_Ecualizada->Save(saveFileDialog2->FileName, System::Drawing::Imaging::ImageFormat::Png);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		img_EscalaGrises->Save(saveFileDialog3->FileName, System::Drawing::Imaging::ImageFormat::Png);
	}
}
private: System::Void btnInicio_Click(System::Object^ sender, System::EventArgs^ e) {

	textBox1->Clear();
	textBox2->Clear();
	chart1->Series->Clear();
	chart2->Series->Clear();
	chart3->Series->Clear();
	pictureBox1->Image = nullptr;
	pictureBox2->Image = nullptr;
	pictureBox3->Image = nullptr;
	pictureBox4->Image = nullptr;
	for (int i = 0; i < 256; i++) {
		histogramaOriginal[i] = 0;
		histogramaExpandido[i] = 0;
		histogramaEcualizado[i] = 0;
	}

	btnEcualizar->Visible = false;
	btnExpandir->Visible = false;
	button2->Visible = false;
	GuardarEc->Visible = false;
	GuardarEx->Visible = false;


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	chart1->Series->Clear();
	chart2->Series->Clear();
	chart3->Series->Clear();
	pictureBox1->Image = nullptr;
	pictureBox2->Image = nullptr;
	pictureBox3->Image = nullptr;
	pictureBox4->Image = nullptr;
	for (int i = 0; i < 256; i++) {
		histogramaOriginal[i] = 0;
		histogramaExpandido[i] = 0;
		histogramaEcualizado[i] = 0;
	}

	btnEcualizar->Visible = false;
	btnExpandir->Visible = false;
	button2->Visible = false;
	GuardarEc->Visible = false;
	GuardarEx->Visible = false;
	this->Close();
}
private: System::Void pnl_Inicio_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
