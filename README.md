# 蜂鸣器控制程序

这是一个基于STC89C5xRC单片机的蜂鸣器控制程序，通过按键控制蜂鸣器的发声。

## 功能介绍

- **按键控制**：通过两个按键（`key1` 和 `key2`）控制蜂鸣器的发声。
  - 按下 `key1`，蜂鸣器发声较长时间（约50ms）。
  - 按下 `key2`，蜂鸣器发声较短时间（约25ms）。
- **延时功能**：使用延时函数控制蜂鸣器的发声时长。

## 硬件需求

- STC89C5xRC单片机（或其他兼容型号）
- 蜂鸣器（有源蜂鸣器或无源蜂鸣器）
- 按键开关（2个）
- 电阻、电容等基本电子元件
- 电源（5V）

## 软件环境

- Keil C51（或其他支持8051单片机的编译器）
- STC-ISP（用于烧录程序到单片机）

## 程序结构

### 主要文件

- **`main.c`**：程序的主文件，包含按键检测、蜂鸣器控制和延时功能。

### 主要功能模块

- **`Delay50us`**：实现50微秒的延时函数，用于控制蜂鸣器的发声时长。
- **`main`**：主函数，检测按键状态并控制蜂鸣器发声。

## 使用方法

### 编译与烧录

1. 使用Keil C51打开项目，将`main.c`文件添加到项目中。
2. 配置项目选项，确保目标设备为STC89C5xRC。
3. 编译项目，生成`.hex`文件。
4. 使用STC-ISP将生成的`.hex`文件烧录到单片机中。

### 硬件连接

- 将蜂鸣器的正极连接到单片机的P2^5（`beep`引脚），负极接地。
- 将按键1（`key1`）连接到P3^0，按键2（`key2`）连接到P3^1。
- 按键的另一端接地。
- 为单片机供电。

### 运行

1. 为单片机供电，程序将自动运行。
2. 按下按键1，蜂鸣器将发声较长时间（约50ms）。
3. 按下按键2，蜂鸣器将发声较短时间（约25ms）。

Email:17156310913ghj@gmial.com
