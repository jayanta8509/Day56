// Write Program to find whether the numbers of an array be made equal
#include <iostream>
using namespace std;
bool equal(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    while (arr[i] % 2 == 0) {
      arr[i] /= 2;
    }
    while (arr[i] % 3 == 0) {
      arr[i] /= 3;
    }
    if (arr[0] == arr[1]) {
      return true;
    }
  }
  return false;
}

int main() {
  int arr[] = {50, 75, 150};
  int size = 3;
  int temp = equal(arr, size);
  if (temp == true) {
    cout << "Yes" << endl;
  } else {
    cout << "No";
  }
}