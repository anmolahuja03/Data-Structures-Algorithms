# Mathematics

  
### Facts About Prime Numbers

- 2 and 3 are only consecutive numbers that are prime
- Every prime number can be written as 6b+1 or 6n-1, except 2 and 3 where n is a natural number
- **GoldBach Conjecture :** Every integer greater than 2 can be expressed as the sum of two primes

  
## Important theorems used in questions -


- Square Root to find Primes
- Sieve Algorithm (Preprocessing method. After implementing, we can answer if a no is prime or not in O(1))
Flaw : Max size array that we can create is of the range 10^8. Hence, we cannot use sieve algorithm for large constraints greater than that. This is where segmented sieve comes in.  (TC : O(nloglogn))

- Segmented Sieve
- Sieve of Atkins

(Usually in the case of queries, sieve concept is used.)

- Examples of Variations of Questions in Sieve
- Lowest Prime & Highest Primes
- Prime Factorization (V Imp) [Max No of Prime Factors : log n base 2]
- Divisors variation in sieve
- Counting Divisors Faster


**Other Maths Concepts**

- Inclusion - Exclusion Principle
- Modular Arithmetic
     - (a+b)%M = ((a%M) + (b%M))%M
     - (a-b)%M = (a%M) - (b%M)
     - (a*b)%M = ((a%M) * (b%M))%M
     
- Permutations & Combinations 
- Pascal Triangle for nCr
- Catalan Nos