# [UVa 11455](https://vjudge.net/problem/UVA-11455)  

每個case給你四個邊長, 看邊長可以組成正方形, 長方形, 四邊形或甚麼都不是  

* sol:  
  不要想得太複雜, 先把邊長由小到大排一遍, 如果所有邊長的最小值等於所有邊長的最大值,他就是正方形, 長方形自己想, 比較難的是四邊形組成條件是最小的三個邊長相加大於最長的邊長
  
NOTE:
  *`0 <= len <= 2^30`