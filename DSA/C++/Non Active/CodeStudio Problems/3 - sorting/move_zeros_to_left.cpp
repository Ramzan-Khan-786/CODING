// https://www.naukri.com/code360/problems/move-zeros-to-left_1094877
#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void moveZerosToLeft(int *arr, int n)

{

    int i = n - 1;

    for (int j = n - 1; j >= 0; j--)
    {

        if (arr[j] != 0)
        {

            swap(arr[i], arr[j]);

            i--;
        }
    }
}

int main()
{
    int arr[5] = {2, 3, 0, 9, 0};
    
    moveZerosToLeft(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}