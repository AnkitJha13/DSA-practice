// basically count the no of prime numbers in a range 
// ex input = 10  and output is 4 (2,3,5,7)

class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> primes(n+1,true);
          
        primes[0] = primes[1] = false;

        for(int i=2;i<n;i++){
            if(primes[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i){
                    primes[j]=false;
                }
            }
        }
        return cnt;
    }
};
