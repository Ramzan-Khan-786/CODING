#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &arr1, vector<int> &arr2)
    {

        int n1, n2, n3;
        n1 = arr1.size();
        n2 = arr2.size();

        vector<int> arr3(n1 + n2);

        int i = 0;
        int j = 0;
        int k = 0;

        while (i < n1 && j < n2)
        {
            if (arr1[i] <= arr2[j])
            {
                arr3[k] = arr1[i];
                i++;
            }
            else
            {
                arr3[k] = arr2[j];
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }

        n3 = arr3.size();
        int s = 0;
        int e = n3 - 1;

        int mid = s + ((e - s) / 2);

        if (n3 % 2 == 1)
        {
            return arr3[mid];
        }
        else if (n3 % 2 == 0)
        {
            float median = ((float(arr3[mid + 1]) + float(arr3[mid])) / 2);
            return median;
        }
        return 0;
    }
};
int main()
{
    vector<int> arr1={1,3,5};
    vector<int> arr2={2,4,6,7};

    Solution first;
    cout<<first.findMedianSortedArrays(arr1,arr2);
    return 0;
}