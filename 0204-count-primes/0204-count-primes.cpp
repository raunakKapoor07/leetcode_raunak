class Solution {
    long long sieveOfEratosthenes(long long n) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (long long p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (long long i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    long long count=0;
    for (long long p = 2; p <= n; p++) {
        if (prime[p]) {
            count++; 
        }
    }
    return count;
}
public:
    int countPrimes(long long n) {
        if(n==0 || n==1){
            return 0;
        }
        else{
        long long ans=sieveOfEratosthenes(n-1);
        return ans;
        }
    }
};