/**
 * @param {number} n
 * @return {number}
 */

// Time Complexity : O (n * sqrt(n))
var countPrimes = function(n) {
    let count = 0;
    while(n--){
        if(isPrime(n)) count++; 
    }
    return count;
};

const isPrime  = (n) =>{
    let num = 2; 
    if(n <= 1) return false;
    for( i = 2 ; i * i <= n ; i++){
        if(n % i === 0){
            return false;
        }
    }

    return true;
}



/**Sieve of Eratosthenes */ 
// Time Complexity :  O(n log(log n))
// Space Complexity : O(n)
/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    let arr = new Array(n).fill(true);
    arr[0] = arr[1] = false;
    let prime = 2;
    let count = 0;
    for(let i = 2 ; i * i <= n; i++){
        if(prime[i]){
            for(let j = i*i ; j <= n ;j= j + i){
                prime[j] = false;
            }
        }
    }

    for(let i = 0 ; i < arr.length ; i++){
        if(arr[i]){
            count++;
        }
    }
    return count;
};


console.log(countPrimes(10));