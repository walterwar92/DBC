

#include "ConnectWindow.h"
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
namespace DBC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace DBC;
	/// <summary>
	/// ������ ��� MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ connection;
		MainWindow(SqlConnection^ connection) {
			this->connection = connection;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ CreateTable_btn;
	private: System::Windows::Forms::Label^ Create_label;
	private: System::Windows::Forms::TextBox^ Table_txt;
	private: System::Windows::Forms::TextBox^ Name_txt_add;
	private: System::Windows::Forms::TextBox^ Age_txt_add;
	private: System::Windows::Forms::TextBox^ birthday_txt_add;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ add_btn;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Name_txt_search;
	private: System::Windows::Forms::Button^ Name_search_btn;


	private: System::Windows::Forms::TextBox^ birthday_txt_search;


	private: System::Windows::Forms::TextBox^ Age_txt_search;
	private: System::Windows::Forms::Button^ Age_search_btn;
	private: System::Windows::Forms::Button^ bithday_search_btn;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Id_txt_delete;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Delete_btn;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ close_btn;

	protected:



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->CreateTable_btn = (gcnew System::Windows::Forms::Button());
			this->Create_label = (gcnew System::Windows::Forms::Label());
			this->Table_txt = (gcnew System::Windows::Forms::TextBox());
			this->Name_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->Age_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->birthday_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Name_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->Name_search_btn = (gcnew System::Windows::Forms::Button());
			this->birthday_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->Age_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->Age_search_btn = (gcnew System::Windows::Forms::Button());
			this->bithday_search_btn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Id_txt_delete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Delete_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->close_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// CreateTable_btn
			// 
			this->CreateTable_btn->Location = System::Drawing::Point(269, 11);
			this->CreateTable_btn->Name = L"CreateTable_btn";
			this->CreateTable_btn->Size = System::Drawing::Size(75, 23);
			this->CreateTable_btn->TabIndex = 2;
			this->CreateTable_btn->Text = L"�������";
			this->CreateTable_btn->UseVisualStyleBackColor = true;
			this->CreateTable_btn->Click += gcnew System::EventHandler(this, &MainWindow::CreateTable_btn_Click);
			// 
			// Create_label
			// 
			this->Create_label->AutoSize = true;
			this->Create_label->Location = System::Drawing::Point(12, 15);
			this->Create_label->Name = L"Create_label";
			this->Create_label->Size = System::Drawing::Size(145, 13);
			this->Create_label->TabIndex = 1;
			this->Create_label->Text = L"�������\\������� �������";
			this->Create_label->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// Table_txt
			// 
			this->Table_txt->Location = System::Drawing::Point(163, 12);
			this->Table_txt->MaxLength = 16;
			this->Table_txt->Name = L"Table_txt";
			this->Table_txt->Size = System::Drawing::Size(100, 22);
			this->Table_txt->TabIndex = 0;
			this->Table_txt->TextChanged += gcnew System::EventHandler(this, &MainWindow::Table_txt_TextChanged);
			// 
			// Name_txt_add
			// 
			this->Name_txt_add->Location = System::Drawing::Point(12, 80);
			this->Name_txt_add->Name = L"Name_txt_add";
			this->Name_txt_add->Size = System::Drawing::Size(165, 22);
			this->Name_txt_add->TabIndex = 3;
			// 
			// Age_txt_add
			// 
			this->Age_txt_add->Location = System::Drawing::Point(12, 108);
			this->Age_txt_add->Name = L"Age_txt_add";
			this->Age_txt_add->Size = System::Drawing::Size(165, 22);
			this->Age_txt_add->TabIndex = 4;
			// 
			// birthday_txt_add
			// 
			this->birthday_txt_add->Location = System::Drawing::Point(12, 136);
			this->birthday_txt_add->Name = L"birthday_txt_add";
			this->birthday_txt_add->Size = System::Drawing::Size(165, 22);
			this->birthday_txt_add->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(183, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"���";
			this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"�������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(183, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"���� ��������";
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(12, 165);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(165, 23);
			this->add_btn->TabIndex = 9;
			this->add_btn->Text = L"�������� ������";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MainWindow::add_btn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"��������";
			// 
			// Name_txt_search
			// 
			this->Name_txt_search->Location = System::Drawing::Point(281, 80);
			this->Name_txt_search->Name = L"Name_txt_search";
			this->Name_txt_search->Size = System::Drawing::Size(165, 22);
			this->Name_txt_search->TabIndex = 11;
			// 
			// Name_search_btn
			// 
			this->Name_search_btn->Location = System::Drawing::Point(452, 78);
			this->Name_search_btn->Name = L"Name_search_btn";
			this->Name_search_btn->Size = System::Drawing::Size(113, 23);
			this->Name_search_btn->TabIndex = 12;
			this->Name_search_btn->Text = L"�� �����";
			this->Name_search_btn->UseVisualStyleBackColor = true;
			this->Name_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::Name_search_btn_Click);
			// 
			// birthday_txt_search
			// 
			this->birthday_txt_search->Location = System::Drawing::Point(281, 139);
			this->birthday_txt_search->Name = L"birthday_txt_search";
			this->birthday_txt_search->Size = System::Drawing::Size(165, 22);
			this->birthday_txt_search->TabIndex = 13;
			// 
			// Age_txt_search
			// 
			this->Age_txt_search->Location = System::Drawing::Point(281, 111);
			this->Age_txt_search->Name = L"Age_txt_search";
			this->Age_txt_search->Size = System::Drawing::Size(165, 22);
			this->Age_txt_search->TabIndex = 14;
			// 
			// Age_search_btn
			// 
			this->Age_search_btn->Location = System::Drawing::Point(452, 109);
			this->Age_search_btn->Name = L"Age_search_btn";
			this->Age_search_btn->Size = System::Drawing::Size(113, 23);
			this->Age_search_btn->TabIndex = 15;
			this->Age_search_btn->Text = L"�� ��������";
			this->Age_search_btn->UseVisualStyleBackColor = true;
			this->Age_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::Age_search_btn_Click);
			// 
			// bithday_search_btn
			// 
			this->bithday_search_btn->Location = System::Drawing::Point(452, 139);
			this->bithday_search_btn->Name = L"bithday_search_btn";
			this->bithday_search_btn->Size = System::Drawing::Size(113, 23);
			this->bithday_search_btn->TabIndex = 16;
			this->bithday_search_btn->Text = L"�� ��� ��������";
			this->bithday_search_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bithday_search_btn->UseVisualStyleBackColor = true;
			this->bithday_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::bithday_search_btn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(289, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"����� �� �������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(574, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"������� �� �����";
			// 
			// Id_txt_delete
			// 
			this->Id_txt_delete->Location = System::Drawing::Point(577, 79);
			this->Id_txt_delete->Name = L"Id_txt_delete";
			this->Id_txt_delete->Size = System::Drawing::Size(100, 22);
			this->Id_txt_delete->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(683, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"ID";
			// 
			// Delete_btn
			// 
			this->Delete_btn->Location = System::Drawing::Point(577, 107);
			this->Delete_btn->Name = L"Delete_btn";
			this->Delete_btn->Size = System::Drawing::Size(100, 23);
			this->Delete_btn->TabIndex = 21;
			this->Delete_btn->Text = L"�������";
			this->Delete_btn->UseVisualStyleBackColor = true;
			this->Delete_btn->Click += gcnew System::EventHandler(this, &MainWindow::Delete_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 311);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(705, 246);
			this->dataGridView1->TabIndex = 22;
			// 
			// refresh
			// 
			this->refresh->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh.BackgroundImage")));
			this->refresh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->refresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->refresh->Location = System::Drawing::Point(653, 269);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(64, 36);
			this->refresh->TabIndex = 24;
			this->refresh->UseVisualStyleBackColor = false;
			this->refresh->Click += gcnew System::EventHandler(this, &MainWindow::refresh_Click);
			// 
			// close_btn
			// 
			this->close_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_btn.BackgroundImage")));
			this->close_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_btn->Location = System::Drawing::Point(629, 5);
			this->close_btn->Name = L"close_btn";
			this->close_btn->Size = System::Drawing::Size(99, 38);
			this->close_btn->TabIndex = 25;
			this->close_btn->UseVisualStyleBackColor = true;
			this->close_btn->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(729, 569);
			this->ControlBox = false;
			this->Controls->Add(this->close_btn);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Delete_btn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Id_txt_delete);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->bithday_search_btn);
			this->Controls->Add(this->Age_search_btn);
			this->Controls->Add(this->Age_txt_search);
			this->Controls->Add(this->birthday_txt_search);
			this->Controls->Add(this->Name_search_btn);
			this->Controls->Add(this->Name_txt_search);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->birthday_txt_add);
			this->Controls->Add(this->Age_txt_add);
			this->Controls->Add(this->Name_txt_add);
			this->Controls->Add(this->CreateTable_btn);
			this->Controls->Add(this->Create_label);
			this->Controls->Add(this->Table_txt);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainWindow";
			this->ShowIcon = false;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CreateTable_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// SQL command to create a new table
			String^ createTableQuery =
				"CREATE TABLE " +
				Table_txt->Text + "(\n" +
				"ID INT PRIMARY KEY IDENTITY,\n"
				"Name NVARCHAR(50),\n"
				"Age INT,\n"
				"DateOfBirth DATE\n"
				");";

			// Execute the command
			SqlCommand^ sqlCommand = gcnew SqlCommand(createTableQuery, connection);
			sqlCommand->ExecuteNonQuery();
			MessageBox::Show("Table created successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (SqlException^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Table_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: void RefreshDataGridView(DataGridView^ dataGridView)
{
	try
	{
		// SQL command to select data
		SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter("SELECT * FROM " + Table_txt->Text, connection);
		DataTable^ dataTable = gcnew DataTable();
		sqlDataAdapter->Fill(dataTable);

		// Set the DataSource for the DataGridView
		dataGridView1->DataSource = dataTable;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// Prepare the SQL insert command
		String^ insertQuery = "INSERT INTO " + Table_txt->Text + " (Name, Age, DateOfBirth) VALUES (@Name, @Age, @DateOfBirth);";
		SqlCommand^ sqlCommand = gcnew SqlCommand(insertQuery, connection);

		// Add parameters
		sqlCommand->Parameters->AddWithValue("@Name", Name_txt_add->Text);
		sqlCommand->Parameters->AddWithValue("@Age", Convert::ToInt32(Age_txt_add->Text));
		sqlCommand->Parameters->AddWithValue("@DateOfBirth", DateTime::Parse(birthday_txt_add->Text));

		// Execute the command
		sqlCommand->ExecuteNonQuery();
		MessageBox::Show("Data inserted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		RefreshDataGridView(dataGridView1);
		Name_txt_add->Text = "";
		Age_txt_add->Text = "";
		birthday_txt_add->Text = "";
	}
	catch (SqlException^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Name_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		// Prepare the SQL search command
		String^ searchQuery = "SELECT * FROM " + Table_txt->Text + " WHERE " + "Name" + " LIKE @SearchValue;";
		SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
		sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + Name_txt_search->Text + "%");

		SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
		DataTable^ dataTable = gcnew DataTable();
		sqlDataAdapter->Fill(dataTable);

		// Bind the search results to DataGridView
		dataGridView1->DataSource = dataTable;
		Name_txt_add->Text = "";

	}
	catch (SqlException^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Age_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		// Prepare the SQL search command
		String^ searchQuery = "SELECT * FROM " + Table_txt->Text + " WHERE " + "Age" + " LIKE @SearchValue;";
		SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
		sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + Age_txt_search->Text + "%");

		SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
		DataTable^ dataTable = gcnew DataTable();
		sqlDataAdapter->Fill(dataTable);

		// Bind the search results to DataGridView
		dataGridView1->DataSource = dataTable;

		Age_txt_add->Text = "";

	}
	catch (SqlException^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void bithday_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		// Prepare the SQL search command
		String^ searchQuery = "SELECT * FROM " + Table_txt->Text + " WHERE " + "DateOfBirth" + " LIKE @SearchValue;";
		SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
		sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + birthday_txt_search->Text + "%");

		SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
		DataTable^ dataTable = gcnew DataTable();
		sqlDataAdapter->Fill(dataTable);

		// Bind the search results to DataGridView
		dataGridView1->DataSource = dataTable;

		birthday_txt_add->Text = "";
	}
	catch (SqlException^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// Prepare the SQL delete command
		String^ deleteQuery = "DELETE FROM " + Table_txt->Text + " WHERE ID = @ID;";
		SqlCommand^ sqlCommand = gcnew SqlCommand(deleteQuery, connection);
		sqlCommand->Parameters->AddWithValue("@ID", Id_txt_delete->Text);
		
		// Execute the command
		int rowsAffected = sqlCommand->ExecuteNonQuery();
		if (rowsAffected > 0)
		{
			MessageBox::Show("Data deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("No data found with the specified ID.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		RefreshDataGridView(dataGridView1);
	}
	catch (SqlException^ ex)
	{
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDataGridView(dataGridView1);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
#endif // MAINWINDOW_H