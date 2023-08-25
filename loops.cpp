// do-while

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);
  return 0;
}

// while
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  return 0;
}

// for
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}

// 2
#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times
    
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
    }
  }
  return 0;
}

// break
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}
// 0123


// continue
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}

// 012356789