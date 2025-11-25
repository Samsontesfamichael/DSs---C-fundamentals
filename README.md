Student Grade Report System (C Program)

This project is a simple console-based Student Grade Report System written in C.
It allows users to enter student information, the courses they have taken, and generates a formatted grade report for each student.

📌 Features

Input multiple students

Store student ID and name

Input multiple courses per student

Store course name, code, credit hour, and grade

Generate a formatted grade report for each student

Display:

Student basic information

List of grades

Course matrix (course name, code, credits)

📁 Project Structure
.
├── main.c        # Source code
└── README.md     # Documentation

🧾 How It Works

The program defines a student structure that includes:

Basic student info (id, name)

An array of course structures, each containing:

courseName

courseCode

grade

creditHour

The user is prompted to:

Enter the number of students

For each student:

Enter ID and name

Enter the number of courses taken

Provide course info for each course

The program then prints a formatted report including:

Student ID & Name

Course codes and grades

Course matrix (names, codes, credits)

🛠️ Compilation

Use any C compiler (GCC recommended):

gcc main.c -o grade_report

▶️ Running the Program
./grade_report


You will be asked to enter:

Number of students

Each student’s ID and name

Number of courses

Course details
