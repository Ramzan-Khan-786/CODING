//https://www.naukri.com/code360/problems/sort-an-array-of-0s-1s-and-2s_892977
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
void sortArray(vector<int> &arr, int n) {

  int zero = 0;
  int two = n - 1;
  int one = 0;

  vector<int> temparr(n, 0);

  while (true) {
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        temparr[zero] = arr[i];
        zero++;
      } else if (arr[i] == 2) {
        temparr[two] = arr[i];
        two--;
      }
    }

    for (int i = zero; i <= two; i++) {
      temparr[i] = 1;
    }

    break;
  }

  for (int i = 0; i < n; i++) {
    arr[i] = temparr[i];
  }
}

int main() {
    cout << "HELLO WORLD" << endl;

    vector<int> arr={0,1,0,2,0,2,1,2,1,0,1,2,0};
    sortArray(arr,arr.size());
    for(int i = 0 ; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}