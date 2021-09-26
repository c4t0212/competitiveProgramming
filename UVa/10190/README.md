# [UVa 10190](https://vjudge.net/problem/UVA-10190)  

給定N、M，請你判斷`N是否為M的K次方`，如果是請輸出整個次方序列，反之輸出"Boring!"  

* sol-1:  
  慢慢檢查，小心`除數和被除數為0`的狀況跟`除數為1`的狀況，若整除則塞進陣列，反之跳出迴圈，輸出時檢查陣列是否為空和最後一個數是否為M就好
  
* sol-2:  
  使用log的特性來解(以10為底)  
    
  ![image](https://github.com/c4t0212/competitiveProgramming/blob/main/UVa/10190/pic.png)  
    
  先把次方算出來，再使用次方去比對原來的N是不是一樣的(因為int會忽略小數)，如果一樣則代表N是M的某個次方，則可以進行達二輸出，不一樣則輸出Boring!  
    
  **等一下，這看似很棒的公式解其實裡面有很大的bug!**  
  如果今天M = 1，則 log(M) = log(1) = 0，除法除下去就~~Explosion!~~，但正好因為除法爆炸而有一個特性可以使用，就是指數會回傳負數
  > 小科普: 如果C++遇到無限大的狀況(像是上面的例子)，則會回傳INF，不同資料型態(float, double)的INF不一樣  
  如果除法回傳INF，再轉乘int的話值會變成-247483648(INT_MIN)，使用一個if過濾掉負數指數即可

NOTE:
  * `0 <= N、M <= 2000000000`  

---
#### 這邊來講說詳細的浮點數運算及INF!  

##### 先來介紹一下float浮點數的結構
  
  ![image](https://github.com/c4t0212/competitiveProgramming/blob/main/UVa/10190/image.png)  
    
  
