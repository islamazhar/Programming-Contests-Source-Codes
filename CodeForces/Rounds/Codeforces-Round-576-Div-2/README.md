* Problem A:
* Problem B: 
    * The upper limit of the `Binary Search` was incorrect. Think about the maximum answer before putting upper limit or better use MAX_DOUBLE
    * Should have found a direct formulae and then write the solution
     
* Problem C:
    * 1st observation: We need to sort the array.
    * 2nd observaton: `log2k = K < (8*I)/N`. so we can find the 
    number of distinct numbers we need on the array after compressing the array.
    * 3rd observation: keep two pointers lo and hi. The idea is to increase
    hi each time. and if the number of distinct elements in the range
    `(hi - lo)` becomes larger than `k` only then increase `lo`
    until we decrease the number of distinct elements in the range 
     `(hi - lo)` by one. 
     
    * My mistake: keep an eye on the value of `k` which may overflow.
    we can avoid this by taking into note that the maximum value of 
    `k` can be upto `N`. Otherwise, we will be increasing the file size 
    not compressing it.