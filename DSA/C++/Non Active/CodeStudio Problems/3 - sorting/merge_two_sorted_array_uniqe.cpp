// https://www.naukri.com/code360/problems/ninja-and-sorted-arrays_1214628
#include <bits/stdc++.h>

using namespace std;

void ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n) {
    arr1.erase(arr1.begin() + m, arr1.end()); 

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    arr1.resize(m + n);

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

int main() {
    cout << "HELLO WORLD" << endl;

    vector<int> arr1 = {1, 2, 4, 5, 7, 10, 0, 0, 0, 0};
    vector<int> arr2 = {3, 6, 8, 9};

    ninjaAndSortedArrays(arr1, arr2, 6, 4); 

    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}