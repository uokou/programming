# Arduino基礎語法

## Arduino程式語言基礎架構說明
Arduino 程式語言是基於 C++ 發展而來，但為了讓初學者更易上手，簡化了許多複雜的語法。其核心結構主要由以下兩個函數組成 : 

***

### **函數(Function)** 

* **setup()：** 開始執行時只會執行一次的函數，通常用於初始化硬體、設定變數等。
* **loop()：** 程式執行完 setup() 後會重複執行 loop() 裡的程式碼，形成一個無限迴圈。


    
```
void setup() {
  // 初始化程式碼
  pinMode(13, OUTPUT); // 將 pin 13 設定為輸出模式
}

void loop() {
  // 重複執行的程式碼
  digitalWrite(13, HIGH); // 將 pin 13 設定為高電平
  delay(1000);             // 延遲 1000 毫秒
  digitalWrite(13, LOW);  // 將 pin 13 設定為低電平
  delay(1000);             // 延遲 1000 毫秒
}

```

#### 串列通訊

+ ***Serial.begin(speed) :*** **開啟串列埠、設定鮑率**

  * 主要用於初始化串列通訊，讓Arduino能夠與電腦或其他裝置進行資料傳輸。

+  ***Serial.aviliable() :*** **序列埠有效資料**

+  ***Serial.print(value,format) :*** 以多種不同種類資料型態**輸出**
   * format : BIN、OCT、DEC、HEX

+ ***Serial.println(val,format) :*** 相同於Serial.print()，但在末尾進行換行。

+ ***Serial.read() :*** 讀取一個位元組的資料

    ```
    int incomingByte = Serial.read();
    ```

+ ***Serial.write() :***  將資料寫入串列埠，發送出去
    ```
    Serial.write('content');  
    // 發送 'content'，content可以是單個位元組、字元陣列或字串
    ```  
  
 
 ---
 #### 控制 I/O 腳位  
 
+ ***pinMode(pin, mode) :*** 設定指定腳位的模式。( *位於setup()* )
 
 ```
 void setup() {
  pinMode(10, OUTPUT); // 將 pin 10 設定為輸出模式
  pinMode(13, INPUT); // 將 pin 13 設定為輸入模式
}
```

+ ***digitalWrite(pin, value) :*** 將指定腳位寫入高電位 (HIGH) 或低電位 (LOW)。
+ ***digitalRead(pin) :*** 讀取指定腳位的數位值，返回 HIGH 或 LOW。
+ ***analogRead(pin) :*** 讀取指定類比腳位的數值，返回 0 到 1023 之間的整數。
+ ***analogWrite(pin, value) :*** 將指定腳位輸出模擬值，用於控制 PWM (脈衝寬度調變)。
   
```
   以LED為例，digital控制的僅為開/關，而analog可控制具體的輸出(如:亮度)
```
---
#### 延遲與時間

+ ***delays(ms) :*** 延遲毫秒
+ ***millis() :*** 返回從 Arduino 板子啟動以來經過的毫秒數，用於計時。
---

#### 其他常見函數

+ ***map(value, fromLow, fromHigh, toLow, toHigh) :*** 將一個數值從一個範圍映射到另一個範圍。
+ ***randomSeed(seed) :*** 初始化隨機數產生器。
+ ***random(min, max) :*** 生成一個隨機整數。