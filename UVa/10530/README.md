# [UVa 10530](https://vjudge.net/problem/UVA-10530)  

一個猜數字遊戲，題目會給一個猜的數字和一個字串，請依下面規則操作  

* 規則:  
  如果字串是"too high"，代表猜的數字太大  
  如果字串是"too low" ，代表猜的數字太小  
  如果字串是"right on"，代表猜到剛好的數字  

會有多組測資，每組測資最後一行一定有"right on"，如果答案數字落在猜數字的範圍內則輸出"Stan may be honest"，其他則輸出"Stan is dishonest"  

NOTE:  
  * `1 <= 輸入數字 <= 10`
  * `輸入0代表結束`
