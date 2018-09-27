1. Proove each of the following. Indicate which proof method you are using and show your work.
  -Show that the square root of 2 is irrational:
   (CONTRADICTION) Suppose that the sqrt(2) is rational and can be written as two integers (p and q). We would have to assume that p and q have no common factors. 
      -> If we were square both side we get 2 = p^2/q^2
      -> p^2 = 2q^2
      -> p^2 is even.
      -> p itself has to be even
      -> p^2 is divisible by four.
      -> therefore q is even
      -> p and q are both even 
      -> this contradicts to our assumption that they have not common factors. 
      -> sqrt(2) can't be rational.
    
  -If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares:
  (EXHAUSTIVE) If n = 25:
    ->sqrt(25) = 5
    ->16 + 9 = 25
      -> sqrt(16) = 4 && sqrt(9) = 3
  If n = 100:
    ->sqrt(100) = 10
    ->64 + 36 = 100
      ->sqrt(64) = 8 && sqrt(36) = 6
  If n = 169:
    ->sqrt(169) = 13
    ->144 + 25 = 169
      -> sqrt(144) = 12 && sqrt(25) = 5
      
  -The sum of two odd integers is even. Hint: By definition, even integers can be expressed as 2n, thus odd integers can be expressed as 2n + 1:
  (DIRECT PROOF)
    Odd integer = 2n +- 1
    Even integer = 2n
      -> Sum of two odd integers = (2n + 1) + (2n + 1)
                                 = 4n + 1
                                 = 2(2n + 1)
      -> Let k be (2n + 1)
        -> 2K
        -> 2K by definition is even.
        
  -The sum of an even integer and it's square is even:
  (DIRECT PROOF)
    Even integer = 2n
    Even integer and its square = (2n)^2 = 4n^2
      -> 2n + (4n^2)
      -> 2n(1 + 2n)
      -> let K = (1 + 2n)
      -> 2nk
      -> let m = nk
      -> 2m
      -> 2m is even by definition
      
  ->If n squared is odd, then n is odd:
  (CONTRAPOSITION) If n squared is even, then n is even.
    n is an even integer: n = 2k
    n is squared is even: (2k)^2 => 4k^2 => 2(2k^2)
      -> let p = 2k^2
      -> 2p is even    
  
2. Part 2:
  -Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1):
  Base Case: Assume that n = 1.
   -> 1(2(1)-1) = 1
   -> 1(1) = 1
   -> 1 = 1 Base Case is true!
  Assume true for K
    -> Show true for k 
      -> 1 + 5 + 9 + ... + (4k-3) + (4(k + 1) - 3) = (k + 1)(2(k + 1) - 1)
      -> 1 + 5 + 9 + ... + (4k-3) + (4k + 1)       = (k + 1)(2k + 1) 
     If we assume that it is true for (1 + 5 + 9 + ... + (4k-3) the we can plug it in
      -> k(2k - 1) + (4k + 1) = (k + 1)(2k + 1)  
      -> 2k^2 - k + 4k + 1 = 2k^2 + k + 2k + 1
      -> 2k^2 + 3k + 1 = 2k^2 + 3k + 1
     We have proven for n and n + 1

  -Prove that for any positive integer number n, n^3 + 2n is divisible by 3
   n > 0
   Show: 1, 2, 3, ... n => n^3 + 2n = 3m
   Base Case: Assume that n = 1
    -> 1^3 + 2(1)
    -> 1 + 2
    -> 3 is divisable by 3
   Assume true for k
    -> Show true for (k + 1)
      -> 1, 2 , 3, ... , k, (k + 1) => (k + 1)^3 + 2(k + 1)
      -> k^3 + 3k^2 + 3k + 1 + 2k + 2
      -> (k^3 + 2k) + 3k^2 + 3k + 3
      -> 3m + 3k^2 + 3k + 3
      -> 3(m + k^2 +k + 1)
     By multipling it by three we know it is divisable by three. 

  -Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers Hint: 4^(3+1) = 4 * 4^3 Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1
