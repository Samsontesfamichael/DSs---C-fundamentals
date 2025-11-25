
# 📊 Student Grade Report System

<div align="center">

![C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)

**A simple yet powerful console-based student grade management system written in C**

[Features](#-features) • [Installation](#-installation) • [Usage](#-usage) • [Documentation](#-documentation)

</div>

---

## 📌 Features

✨ **Comprehensive Student Management**
- 📝 Input multiple students with unique IDs
- 👤 Store student personal information (ID, Name)
- 📚 Manage multiple courses per student
- 🎓 Track course details (Name, Code, Credit Hours, Grades)

📊 **Professional Grade Reports**
- 🖨️ Generate formatted grade reports for each student
- 📋 Display student basic information
- 📈 Show complete list of grades
- 📑 Present course matrix with full details

---

## 📁 Project Structure

```
.
├── main.c          # Source code
└── README.md       # Documentation
```

---

## 🧾 How It Works

The program uses a structured approach to manage student data:

### Data Structure

```c
struct Student {
    int id;
    char name[50];
    struct Course courses[MAX_COURSES];
    int courseCount;
}

struct Course {
    char courseName[50];
    char courseCode[10];
    char grade;
    int creditHour;
}
```

### Workflow

1. **Input Phase**
   - Enter number of students
   - For each student:
     - Provide ID and name
     - Specify number of courses
     - Enter course details (name, code, credits, grade)

2. **Processing Phase**
   - Store all data in structured format
   - Organize courses per student

3. **Output Phase**
   - Generate formatted reports
   - Display student information
   - Show course matrix
   - Present grades summary

---

## 🛠️ Installation

### Prerequisites

- GCC compiler (recommended) or any C compiler
- Terminal/Command Prompt

### Compilation

```bash
# Using GCC
gcc main.c -o grade_report

# Using Clang
clang main.c -o grade_report
```

---

## ▶️ Usage

### Running the Program

```bash
./grade_report
```

### Input Format

The program will prompt you for:

1. **Number of students**
   ```
   Enter number of students: 2
   ```

2. **For each student:**
   - Student ID
   - Student Name
   - Number of courses
   
3. **For each course:**
   - Course Name
   - Course Code
   - Credit Hours
   - Grade (A, B, C, D, F)

### Example Session

```
Enter number of students: 1

Student #1
Enter student ID: 12345
Enter student name: John Doe

Enter number of courses: 2

Course #1
Enter course name: Data Structures
Enter course code: CS201
Enter credit hours: 3
Enter grade: A

Course #2
Enter course name: Algorithms
Enter course code: CS301
Enter credit hours: 4
Enter grade: B

=== GRADE REPORT ===
Student ID: 12345
Name: John Doe

Grades: A B

Course Matrix:
Course Name          Code      Credits
Data Structures      CS201     3
Algorithms           CS301     4
```

---

## 📖 Documentation

### Key Functions

- **Input Management**: Handles user input for students and courses
- **Data Storage**: Organizes information in structured arrays
- **Report Generation**: Formats and displays grade reports

### Grade System

| Grade | Description |
|-------|-------------|
| A     | Excellent   |
| B     | Good        |
| C     | Average     |
| D     | Pass        |
| F     | Fail        |

---

## 🤝 Contributing

Contributions are welcome! Feel free to:

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Open a Pull Request

---

## 📝 License

This project is licensed under the MIT License - see the LICENSE file for details.

---

## 👨‍💻 Author

**Samson Tesfamichael**

- Portfolio: [samsontesfamichael.github.io/personalportfolio](https://samsontesfamichael.github.io/personalportfolio/)
- GitHub: [@Samsontesfamichael](https://github.com/Samsontesfamichael)
- Email: samsontesfamichael11@gmail.com

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

Made with ❤️ by Samson Tesfamichael

</div>
