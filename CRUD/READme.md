# README

This program serves as a simple database management system implemented in C++. It allows users to perform basic CRUD (Create, Read, Update, Delete) operations on data stored in a CSV file named "data.csv".

## Prerequisites
- C++ compiler
- Basic understanding of C++ programming language

## Usage

1. **Adding Data to the Database**
   - Press `1` to enter data into the database.
   - Enter the name and age of the individual you want to add.
   - To add more data, press `1`. To exit, press any other key.

2. **Deleting Entry in the Database**
   - Press `2` to delete an entry from the database.
   - Enter the name of the entry you want to delete.
   - The program will remove the entry from the database.

3. **Updating Entry in the Database**
   - Press `3` to update an entry in the database.
   - Enter the name of the entry you want to update.
   - Provide the new name and ID.
   - The program will update the entry with the new information.

4. **Viewing Data**
   - Press `4` to view the data stored in the database.
   - The program will display the names and IDs of all entries in the database.

5. **Exit**
   - To exit the program, press any key when prompted.

## File Handling
- The program uses file streams (`fstream`) to read and write data to the CSV file.
- For deleting and updating entries, a temporary file named "data2.csv" is used to store modified data before replacing the original "data.csv" file.

## Notes
- The program uses `getline()` to read input, allowing spaces in the name entry.
- The data is stored in a comma-separated format (CSV) with each record separated by a newline.

## Thank You
Thank you for using our database management system! If you have any feedback or suggestions, feel free to reach out.
