// https://www.naukri.com/code360/problems/ayush-gives-ninjatest_1097574
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool isPossible(int n, int m, vector<int> time,long long mid){

    long long sum_time = 0;

    long long day_count = 1;

    

    for(int i=0; i<m; i++){

        if(sum_time + time[i] <= mid){

            sum_time += time[i];

        }

        else{

            day_count ++;

            if(day_count>n || time[i]>mid){

               return false;

            }

            sum_time = time[i];

        }

    }

    return true;

}

 

long long ayushGivesNinjatest(int n, int m, vector<int> time) 

{   

    if(n>m){

        return -1;

    }

 

    long long s = 0;

    long long sum = 0;

 

    long long ans = -1;

 

    for(int i = 0; i<m; i++){

        sum += time[i];

    }

    long long e = sum;

    long long mid = s + (e-s)/2;

 

    while(s<=e){

        if(isPossible(n,m,time,mid)){

            ans = mid;

            e = mid - 1;

        }

        else{

            s = mid + 1;

        }

        mid = s + (e-s)/2;

        }

    return ans;

}

int main(){

    vector<int> arr={2,3,4,2,3,2} ;

    cout<<ayushGivesNinjatest(3,6,arr);

return 0;
}