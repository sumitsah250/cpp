<h1 align="center">💻 C++ Practice Repository</h1>
<p align="center">
  By Sumit Sah | Android Developer & AI Enthusiast<br>
  Collection of C++ exercises, STL practice, OOP concepts, and problem-solving programs
</p>

<p align="center">
  <a href="https://github.com/sumitsah250/cpp-practice"><img src="https://img.shields.io/badge/GitHub-View%20Code-black?logo=github"></a>
  <a href="https://www.linkedin.com/in/your-linkedin"><img src="https://img.shields.io/badge/LinkedIn-Connect-blue?logo=linkedin"></a>
</p>

---

<h2 align="center">🚀 Overview</h2>

This repository contains a wide range of **C++ programs** I have practiced, from **basic syntax and functions** to **advanced OOP, templates, STL, and exception handling**.  
It serves as a **learning hub and reference** for C++ programming concepts.

---

<h2 align="center">📂 Project Structure</h2>

| Folder/File | Description |
|-------------|-------------|
| **.vscode/** | VSCode workspace configuration |
| **os/** | Operating system or system-related exercises |
| **output/** | Output files or compiled results |
| **01.use of union.cpp** to **56_hcf_of_two_numbers.cpp** | Individual C++ practice programs covering topics like functions, recursion, classes, inheritance, templates, STL, and exception handling |
| **Q1.cpp to Q55.cpp** | Problem-solving exercises, assignments, and test files |
| **tempCodeRunnerFile.cpp, test2.cpp** | Miscellaneous practice and test programs |

---

<h2 align="center">🛠️ Concepts Covered</h2>

- **Basic Syntax & Functions:** Recursion, call by reference, inline functions, overloading  
- **Object-Oriented Programming:** Classes, constructors/destructors, friend classes, nested classes, inheritance (single, multilevel, multiple)  
- **Templates:** Function templates, class templates, template overloading, default arguments  
- **STL:** Vectors, lists, maps, ordered & unordered maps, iterators  
- **Exception Handling:** Known and unknown exceptions, try-catch blocks  
- **Advanced Problem Solving:** Factorial, HCF, swapping, distance calculations, complex numbers, and more  

---

<h2 align="center">📊 Example Usage</h2>

```cpp
// Example: Call by reference function
#include <iostream>
using namespace std;

void swapValues(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}
