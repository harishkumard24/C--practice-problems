# C Practice Problems

This repository contains my solutions to the **Fast Track C Practice Problems** from **Manipal School of Information Sciences (MSIS), MIT**.  
Problems are organized into folders `Day1` through `Day7`, following the official practice problem set.

C Practice Problems/
│
├── Day1/ # Basics, conditionals, simple math, and operators
├── Day2/ # Number operations, series, patterns
├── Day3-4/ # Arrays, strings, matrices, recursion, macros
├── Day5/ # Structures and mini-projects
├── Day6/ # Dynamic memory allocation problems
├── Day7/ # File handling problems
└── Fast Track C Practice problems.pdf # Original problem statement reference


---

## 📄 Problem List by Day

### **Day 1**
1. Convert uppercase to lowercase  
2. Area of a circle  
3. Characters between two inputs  
4. Celsius to Fahrenheit conversion  
5. Even or odd check  
6. Leap year check  
7. Power of 2^N using left shift  
8. Check if input is a character or integer (0–9)  
9. Generate two random numbers and find sum  

---

### **Day 2**
1. Sum of digits of a 5-digit number  
2. Reverse a number  
3. Count digit occurrences in a number  
4. Palindrome check (number)  
5. First N prime numbers  
6. Series: 1 + 11 + 111 + ...  
7. Armstrong number check  
8. Amicable numbers check  
9. Menu-driven sum, difference, product  
10. Volume of Cube, Cuboid, Sphere, Cylinder, Cone  
11. Electricity bill calculator  
12. Binary ↔ Decimal conversion  
13. Tribonacci sequence (sum of previous 3 numbers)  
14. Inverted triangle star pattern  
15. Increasing triangle star pattern  
16. Two-digit numbers with digit sum = 9  

---

### **Day 3–4**
1. Sort array in ascending & descending order  
2. Swap two numbers using a function  
3. Find min & max in array  
4. Set operations: union, intersection, difference  
5. Remove duplicates in array  
6. Linear search  
7. Binary search  
8. Sum of products of consecutive numbers in array  
9. String length without `string.h`  
10. Display date in word format (switch-case)  
11. Convert lowercase to uppercase in string  
12. Reverse string without `string.h`  
13. Palindrome check (string)  
14. Concatenate two strings without `string.h`  
15. Construct & display 5x5 matrix  
16. Transpose of NxN matrix  
17. Sum of each column in NxM matrix  
18. Sparse matrix check  
19. Recursive power function  
20. Recursive factorial function  
21. Series using recursion: `x + x^3/3! + x^5/5! + ...`  
22. Concatenate two integers using macros  
23. Square of a number using macros  
24. Menu-driven math functions: sqrt, log, log10, pow, cos  

---

### **Day 5**
1. Store & print student details using structures  
2. Add, subtract, multiply complex numbers using structures  
3. Price & quantity discount calculator (structures & functions)  
4. Snake & ladder game (2 players: user vs computer)  

---

### **Day 6**
1. Store N integers (malloc), perform:
   - Linear search  
   - Find max & min  
   - Sum of all elements  
   - Sum of even & odd elements  
   - Check palindrome array  
   - Find subset (x, y) such that x + y = M  
   - Deallocate memory  
2. Store student details dynamically, perform:
   - Search by roll no.  
   - Search by name  
   - Highest marks student  
   - Names starting with 'A'  
   - Free allocated memory  
3. Points on XY-plane with weights:
   - Find max weight  
   - Count vertical & horizontal lines  

---

### **Day 7**
1. Display contents of a file  
2. Copy file contents to another file  
3. Count characters, spaces, tabs, and lines in a file  
4. Odd/even number segregation into separate files  
5. Telephone directory (text mode) with add/delete/edit/search  
6. Telephone directory (binary mode) with add/delete/edit/search  

---
Development Process

Read the problem statement from the PDF.

Break down each problem into smaller steps (input, processing, output).

Write the logic in a separate function in operations.c.

Declare the function in header.h so it can be used in main.c.  

Call the function from main.c to test it.

Test with sample inputs, making sure the output matches expectations.

Document the code with comments for clarity.

Format the code so it’s easy to read (consistent indentation, naming conventions).

---

Goal of the Approach

Clarity → Code split into header, main, and logic files.
Scalability → New problems can be added easily without breaking existing code.
Version tracking → GitHub keeps a record of progress and changes.
Professional presentation → README acts as a portfolio document.

## 🛠 How to Compile & Run
Open each folder in [Code::Blocks](https://www.codeblocks.org/) **or** compile using GCC or even open in VS code but use gcc to compile:
```bash
gcc main.c operations.c -o program
./program


