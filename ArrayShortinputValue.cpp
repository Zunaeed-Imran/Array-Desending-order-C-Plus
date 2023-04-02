#include <iostream>

using namespace std;

int main() {
  int n, temp;

  cout << "Enter a Number: ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a Number for arr[" << i << "]: ";
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}