// https://www.naukri.com/code360/problems/square-root-integral_893351
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long long int binarySearch(int n) {
  int s = 0;
  int e = n;

  long long int mid = s + ((e - s) / 2);

  long long int ans = -1;
  while (s <= e) {
    long long int square = mid * mid;

    if (square == n) {
      return mid;
    }
    if (square < n) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + ((e - s) / 2);
  }
  return ans;
}
int floorSqrt(int n) {
  int ans = binarySearch(n);
  return ans;
}


int main(){
int a=36;
int ans=floorSqrt(a);
cout<<ans;
return 0;
}