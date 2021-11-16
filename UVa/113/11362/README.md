# [UVa 11362](https://vjudge.net/problem/UVA-11362)  
每個test case給你n個電話號碼, 如果有電話號碼再其他電話號碼的前綴出現則輸出NO,其他輸出YES  

* sol-1:  
  如果有兩字串的前綴相似,則字典序排序的話會在鄰近,所以用sort排序後兩兩比較就好  
* sol-2:  
  用trie資料結構來實作,當字串a是字串b的前綴時,在走訪tree時字串a的節點會先被建立,所以只要檢查有沒有被建立過的節點就好
  
NOTE:  
  * tese case t: `1 <= t <= 40`  
  * line of phone numbers n: `1 <= n <= 10000`
