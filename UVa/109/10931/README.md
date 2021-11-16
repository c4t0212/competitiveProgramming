# [UVa 10931](https://vjudge.net/problem/UVA-10931)  

給定一個數字N，求N的二進位以及在N的二進位中有多少1  

* sol-1:  
  模擬二進位計算方法，若當前數字為奇數則在二進位中表示為1，反之為0，然後一直除2，直到當前數字變成0就能停止，如果是照順序慢慢塞進陣列的話最後記得反轉，或像我一樣往前塞就好  

* sol-2:  
  想法一樣，只是使用bitset資料結構，看不懂的好孩子先別學  
  
NOTE:  
  *`1 <= N <= 2147483647， 若 N = 0則代表停止程式，不能有輸出`