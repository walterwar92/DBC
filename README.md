Описание / Description

Это приложение теперь также включает функциональность для поиска, удаления данных, обновления таблицы и экспорта данных в CSV или текстовый файл. Поддерживается поиск по имени, возрасту и дате рождения, а также возможность удалить запись по ID. Данные могут быть экспортированы в CSV-файл с поддержкой настраиваемых разделителей.

This application now also includes functionality for searching, deleting data, refreshing the table, and exporting data to CSV or text files. Search by name, age, and date of birth is supported, as well as the ability to delete records by ID. Data can be exported to a CSV file with customizable separators.
Новые функции / New Features

    Поиск данных:
        Поиск по имени, возрасту и дате рождения с отображением результатов в DataGridView.
        Поиск осуществляется с использованием оператора LIKE для частичного совпадения.

    Удаление данных:
        Удаление записи по ID.
        Проверка наличия записи с указанным ID перед удалением.

    Обновление таблицы:
        Кнопка Обновить для обновления отображаемых данных в DataGridView.

    Экспорт данных:
        Экспорт данных из таблицы в текстовый файл или CSV.
        Возможность настроить разделитель (например, запятую или точку с запятой).
        Поддержка кавычек вокруг значений, если они содержат разделители.

Как использовать / How to Use

    Поиск данных:
        Введите значение для поиска в одно из полей (Имя, Возраст или Дата Рождения) и нажмите соответствующую кнопку поиска.
        Результаты будут отображены в DataGridView.

    Удаление данных:
        Введите ID записи, которую хотите удалить, и нажмите кнопку Удалить.

    Обновление таблицы:
        Нажмите кнопку Обновить, чтобы перезагрузить и отобразить последние данные в DataGridView.

    Экспорт данных в CSV:
        Введите путь для сохранения файла и выберите разделитель.
        Нажмите кнопку Экспорт в CSV, чтобы сохранить данные в файл.

Пример кода / Code Example

Пример кода для поиска по имени:

String^ searchQuery = "SELECT * FROM " + Table_txt->Text + " WHERE " + "Name" + " LIKE @SearchValue;";
SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + Name_txt_search->Text + "%");

Пример кода для удаления записи:

String^ deleteQuery = "DELETE FROM " + Table_txt->Text + " WHERE ID = @ID;";
SqlCommand^ sqlCommand = gcnew SqlCommand(deleteQuery, connection);
sqlCommand->Parameters->AddWithValue("@ID", Id_txt_delete->Text);

Пример кода для экспорта данных в CSV:

String^ query = "SELECT * FROM [" + Table_txt->Text + "]";
SqlCommand^ command = gcnew SqlCommand(query, connection);
SqlDataReader^ reader = command->ExecuteReader();
StreamWriter^ writer = gcnew StreamWriter(outputFilePath->Text);

Лицензия / License

Этот проект лицензирован на условиях MIT License.
English Version
Description

This application now also includes functionality for searching, deleting data, refreshing the table, and exporting data to CSV or text files. Search by name, age, and date of birth is supported, as well as the ability to delete records by ID. Data can be exported to a CSV file with customizable separators.
New Features

    Data Search:
        Search by name, age, and date of birth with the results displayed in the DataGridView.
        The search uses the LIKE operator for partial matches.

    Delete Data:
        Delete records by ID.
        Checks if a record with the specified ID exists before deletion.

    Refresh Table:
        Refresh button to reload and display the latest data in DataGridView.

    Export Data:
        Export data from the table to a text file or CSV.
        Option to customize the separator (e.g., comma or semicolon).
        Supports quoting values if they contain the separator.

How to Use

    Data Search:
        Enter a value for search in any of the fields (Name, Age, or Date of Birth) and click the corresponding search button.
        Results will be displayed in the DataGridView.

    Delete Data:
        Enter the ID of the record you wish to delete and click the Delete button.

    Refresh Table:
        Click the Refresh button to reload and display the latest data in the DataGridView.

    Export Data to CSV:
        Enter the path to save the file and choose the separator.
        Click the Export to CSV button to save the data to a file.

Code Example

Example code for searching by name:

String^ searchQuery = "SELECT * FROM " + Table_txt->Text + " WHERE " + "Name" + " LIKE @SearchValue;";
SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + Name_txt_search->Text + "%");

Example code for deleting a record:

String^ deleteQuery = "DELETE FROM " + Table_txt->Text + " WHERE ID = @ID;";
SqlCommand^ sqlCommand = gcnew SqlCommand(deleteQuery, connection);
sqlCommand->Parameters->AddWithValue("@ID", Id_txt_delete->Text);

Example code for exporting data to CSV:

String^ query = "SELECT * FROM [" + Table_txt->Text + "]";
SqlCommand^ command = gcnew SqlCommand(query, connection);
SqlDataReader^ reader = command->ExecuteReader();
StreamWriter^ writer = gcnew StreamWriter(outputFilePath->Text);
