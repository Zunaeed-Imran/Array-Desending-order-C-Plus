#include <iostream>
using namespace std;
int main () {
  int array[3] = {2, 3, 1}, temp;

  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++){
      if (array[i] > array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    cout << "Result is: " << array[i] << "\t";
  }

  return 0;
}