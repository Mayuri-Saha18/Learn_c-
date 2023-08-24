# What is C++?
C++ is a cross-platform language that can be used to create high-performance applications.
C++ was developed by Bjarne Stroustrup, as an extension to the C language.
C++ gives programmers a high level of control over system resources and memory.
The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.


# Why Use C++
C++ is one of the world's most popular programming languages.
C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.
C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.
C++ is portable and can be used to develop applications that can be adapted to multiple platforms.
C++ is fun and easy to learn!
As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.


# Difference between C and C++
C++ was developed as an extension of C, and both languages have almost the same syntax.
The main difference between C and C++ is that C++ support classes and objects, while C does not.

# Example

```cpp
#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!";
  return 0;
}
```
Example explained
Line 1: #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

Line 2: using namespace std means that we can use names for objects and variables from the standard library.

Don't worry if you don't understand how #include <iostream> and using namespace std works. Just think of it as something that (almost) always appears in your program.

Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.

Line 4: Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.

Line 5: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!".

Note: Every C++ statement ends with a semicolon ;.

Note: The body of int main() could also been written as:
int main () { cout << "Hello World! "; return 0; }

Remember: The compiler ignores white spaces. However, multiple lines makes the code more readable.

Line 6: return 0 ends the main function.

Line 7: Do not forget to add the closing curly bracket } to actually end the main function.

# Omitting Namespace
You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:

Example

```cpp
#include <iostream>
int main() {
  std::cout << "Hello World!";
  return 0;
}
```
# C++ User Input
You have already learned that cout is used to output (print) values. Now we will use cin to get user input.
cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:

Example
```cpp
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x;
  return 0;
}
```
