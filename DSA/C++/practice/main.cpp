#include <bits/stdc++.h>
using namespace std;

int nthPrime(int n) {
    int limit = 2000000;  // Increased the limit to cover large primes
    vector<bool> isPrime(limit, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < limit; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i < limit && primes.size() < n; i++) {
        if (isPrime[i])
            primes.push_back(i);
    }

    if (n > primes.size()) return -1;  // Handle out-of-bound cases
    return primes[n - 1];
}

int main() {
    int n;
    cin >> n;

    int prime = nthPrime(n);
    if (prime == -1) {
        cout << "Prime index too large!";
        return 1;
    }

    long long square = 1LL * prime * prime;
    cout << square;
    
    return 0;
}
