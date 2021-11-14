[UVa 1583](https://vjudge.net/problem/UVA-1583)  

給你一個數字N, 如果M + M的每位數字之和等於N, 則N為M的generator  
同個N可能會有多個M, 現在要求最小的M

* sol:  
  提前建表, 把所有的數字先算過一遍, 如果算過了則不要算, 對每個輸入去檢查算過的值  
  
NOTE:  
* `1 <= N <= 100000`
