// https://www.naukri.com/code360/problems/sort-0-1_624379
#include <bits/stdc++.h>

using namespace std;

void sortZeroesAndOne(int input[], int size)
{
     int left = 0;
    int right = size - 1;

    while (left < right) {
        if (input[left] == 0) {
            left++;
        } else if (input[right] == 1) {
            right--;
        } else {
            int temp = input[left];
            input[left] = input[right];
            input[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {

    cout << "HELLO WORLD" << endl;

    return 0;
}