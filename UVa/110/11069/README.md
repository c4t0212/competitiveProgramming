# [UVa 11069](https://vjudge.net/problem/UVA-11069)
現在有一張無向圖從1,2,3...連到節點n請你依下面規則計算有幾個子集合:  
1. 子集合內任兩點不能連接  
2. 在不違反第一點的情況下不能在這個集合裡放入更多點  
舉個栗子: n = 6有這些子集合 {1,3,5,7}, {1,3,6}, {1,4,6}, {1,4,7}, {2,4,6}, {2,4,7}, {2,5,7}, 一共7個子集合

* sol:  
  一個簡單dp,想一下就能推導出狀態轉移關係式  
  <img src="https://github.com/c4t0212/competitiveProgramming/blob/main/UVa/110/11069/image.png" width="30%"/>
