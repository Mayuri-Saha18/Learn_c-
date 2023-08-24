#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  return 0;
}


// string concat
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John";
  string lastName = "Doe";
  string fullName = firstName + " " + lastName;
  cout << fullName;
  return 0;
}

// append
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}

// 
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string x = "10";
  string y = "20";
  string z = x + y;
  cout << z;           
//   1020
  return 0;
}
