# [UVa 12640](https://vjudge.net/problem/UVA-12640)  

給你幾行，每行有不定個數字，以空白分割，請輸出每行最大連續整數和，若為負數則輸出0  

* sol:  
  如果想要得到'最大連續整數合的話最直觀的想法就是只要遇到正數就加上去，遇到負數就斷開，斷開後去比較原本紀錄的答案和目前區間的哪個大?，去保存答案較大的，然後繼續往後檢查直到檢查完陣列為止，但會遇到一個問題，舉個例子: 1, 99, -3, 5, 2，照上面的方法答案就會是100，這個例子的最大連續和其實是104，顯然這個想法不行，那問題出在哪?  
    
  