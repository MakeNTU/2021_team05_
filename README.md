# 滑軌照明投影模組
Example repository for 2021 MakeNTU submission

## 組別資訊
2021_team05_串串幫

臺灣大學 電機一 鄭至盛 b09901095 <br>
臺灣大學 電機一 劉則暐 b09901018 <br>
臺灣大學 電機一 藍照淇 b09901030 <br>

## 作品介紹
作品名稱：滑軌照明投影模組 <br>
作品用途：此作品旨在強調提升居家工作、居家生活的便利性。
         滑軌型移動照明裝置使工作者可以調整燈光的位置及角度。
         避免自身身體及物品擋住光線的麻煩。
 <br>
DEMO影片連結：

### 運作方式
這次的作品為了因應便利生活，提升工作環境水平的關係，設計一
個可以架設在天花板上投影與打光的裝置，只要在手機中安裝控制程式
就可以完成遠端操控的功能，其中功能包含控制燈座的位置與角度以及亮度，
進而實現打光的自由度與便利性。


### 如何實作
透過 STM32f1 bluepill 控制各機械模組，包含馬達、燈光轉軸、LED。
並藉由藍芽模組和遠端裝置(如手機)溝通。
使用Android Studio(採用JAVA)製作控制Companion App，會自動取得
與模組的連線，無須手動開啟或設定任何藍芽功能，即可開始使用此
模組化裝置。


### Dependencies / Requirements (用到哪些軟體、開發板、模組、工具...)
Hardware : STM32f1 bluepill, MG995 servo, L298N, TT motor, LM2596, HC-06
Software : Android Studio(with JAVA), Arduino IDE(with C)

## 工作分配
