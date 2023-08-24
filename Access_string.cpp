#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << myString[1];
//   e
  return 0;
}

// 2
#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  myString[0] = 'J';
  cout << myString;
//   Jello
  return 0;
}
