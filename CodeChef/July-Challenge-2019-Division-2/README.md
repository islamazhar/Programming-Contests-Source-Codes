* Minimum-and-maximum:
    * Let `rem = n%k`. so in order to minimize `S_1` we have to assign `n/k` chocolates to 
    `rem` people and `n/k+1` to other `n-rem` people. To maximize `S_2` we to need
     permute two sets of integers of size `rem` and `n-rem` . The value of these two sets of integers differ by `1`.
     Then just simulate to find out the formalue. 
* Parity-Again:
    * Main observation: Look at `# of queries` and `range of the number inserted`. Both of them
    are less then `10^5`. So in worst case `# of queries = 10^5` and the number inserted 
    would be `1, 2, 3, 4, ....10^5`. 
    * If a number `x` is in the set already do not insert it.
    > Interesting what if we do not insert `x` for the same problem.