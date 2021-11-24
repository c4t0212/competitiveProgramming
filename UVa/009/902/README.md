# [UVa](https://vjudge.net/problem/UVA-902)  
給定一個字串和一個數字n, 求哪連續n個字的字串出現最多次  

* sol:  
  直接用map解,每n個字放進map,然後++,最後遍歷整個map看哪個字串出現最多次  
  
NOTE:  
* `0 < N <= 10`
* `string only contain lower case letters`
