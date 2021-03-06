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
         避免自身身體及物品擋住光線的麻煩。此滑軌模組也可以輕易的加裝其他的小裝置，如投影機、攝影機等，使居家生活與居家工作更加便利。
 <br>
DEMO影片連結：https://drive.google.com/drive/folders/1g9sl4n4evX0dCSSXtbD44QPTkGA7fKTp

### 運作方式
這次的作品為了因應便利生活，提升工作環境水平的關係，設計一
個可以架設在天花板上投影與打光的裝置，只要在手機中安裝控制程式
就可以完成遠端操控的功能，其中功能包含控制燈座的位置與角度以及亮度，
進而實現打光的自由度與便利性。
此作品的可擴充性也很高，除得燈座外也可以加裝，投影機、攝影機...等，這些可移動的小裝置能大大便利人們的生活，且汰換與加裝的過程也很方便。<br>
我們觀察到在視訊討論會議時，若要使用簡報來進行報告，經常會
導致視訊畫面只能被縮小。假如加裝小型投影裝置在我們實作的滑軌上，即可將簡報投影在工作者身後的牆壁或投影幕上，這可使工作
者如同實體會議般，可以直接站在投影畫面旁報告。不會因為視訊會議就局限了報告者生動的肢體語言。


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
