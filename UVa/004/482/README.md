# [UVa 482](https://vjudge.net/problem/UVA-482)  

每個case給你兩行 第一行是index順序, 第二行會給你一些數字, 你要依照對應的index順序輸出數字  

* sol:  
  使用stringstream可以幫忙處理這種不定個數的問題, 從stringstream抓到數字和字串後直接放進隊定的位置, 最後再輸出, 需要注意第一行的case number cin之後會有一個換行,記得吃掉
