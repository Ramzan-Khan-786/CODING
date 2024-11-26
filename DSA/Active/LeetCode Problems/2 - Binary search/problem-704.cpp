#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int key) {
        int size = arr.size();
        int start = 0;
        int end = size - 1;

        int mid = start + (end - start) / 2;

        while (start <= end) {

            if (arr[mid] == key) {
                return mid;
            }

            if (key > arr[mid]) {
                start = mid + 1;
            }

            if (key < arr[mid]) {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }
        return -1;
    }
};

int main(){
        Solution first;
        vector<int> arr={12,34,44,56};
        cout<<first.search(arr,44);

return 0;
}