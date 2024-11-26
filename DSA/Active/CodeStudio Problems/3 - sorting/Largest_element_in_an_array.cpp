// https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;

int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

int main() {
    vector<int> arr = {1, 2, 9, 8, 7, 6, 8, 5, 6};
    cout << largestElement(arr, arr.size()) << endl;
    return 0;
}
