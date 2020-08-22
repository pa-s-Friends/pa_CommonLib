# esp32_pa_CommonLibTest
最近在建立一个以方便移植为目的的各类外设的通用库。

------

## 适配板子：

​	目前已经分别在esp32 和 msp432p上进行测试了

​	后面会扩展到stm32，k210这些板子上、

​	基本上就以上四种板子。

​	其他板子不会去做适配了。（除非比赛使用

------

## 设计：

​	每一种外设都有分层。逻辑和驱动分开。

​	驱动层函数。使用宏定义来分别指定不同板子的具体操作。

------

## 语言：

​	c/c++

------

## 已有功能：

#### 	驱动层：

​		spi，iic，ms、us延时

#### 	服务层：

​		ssd1306（iic，spi）