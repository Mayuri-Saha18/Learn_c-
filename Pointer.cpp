#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";
//   pizza

  // Output the memory address of food
  cout << &food << "\n";
//   0x6dfed4

  // Output the memory address of food with the pointer
  cout << ptr << "\n";
//   0x6dfed4
  return 0;
}
