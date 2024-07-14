#include <vector>

using namespace std;

bool sieve[4000001] = {true, true};
class Solution {
public:
    // sieve of eratosthenes
    // make a list of boolean n long, in this case 4000001 long. 
    // then make the first element (sieve[0]) and second element (sieve[1]) true
    // a. make i, starts at 2, a prime number, 
    // b. then make every sieve element that is the multiplication of i false
    // find the next prime number and repeat steps a and b until the length is reach
    
    void buildSieve(){
        for(int p = 2; p * p < 4000001; p++){
            if(!sieve[p]){
                for(int i = p * p; i < 4000001; i += p){
                    sieve[i] = true;
                }
            }
        }
    }
    bool isPrime(int n){
        if(n <= 2 || n % 2 == 0) return n== 2;
        for(int i = 3; i * i <= n; i += 2)
            if(n % i == 0)
                return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& n) {
        if(!sieve[4]) buildSieve();

        int ans = 0;

        // for(int i = 0; i < n.size(); i++){
        //     ans = max({ans, isPrime(n[i][i]) * n[i][i], 
        //     isPrime(n[i][n.size() - i- 1]) * n[i][n.size() - i - 1]});
        // }
        for(int i = 0; i < n.size(); i++){
            ans = max({ans, !sieve[n[i][i]] * n[i][i], 
            !sieve[n[i][n.size() - i- 1]] * n[i][n.size() - i - 1]});
        }
        return ans;
    }
};