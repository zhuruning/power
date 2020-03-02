# power
基于XKT磁共振无限电能传输装置系统

## 基于XKT磁共振无限电能传输装置演示系统


## 目录

摘要        3

前言        4

一、        国内外研究现状及现实意义        5

1.        国外研究现状        5

2.        国内研究现状        6

3.        现实意义        6

二、        设计思路        7

1.        无线电能传输的基本构成        7

2.        基本设计思路        7

三、        硬件设计部分        8

1.        XKT-801        8

1.1.        概述        8

1.2.        特点        9

1.3.        用途        9

2.        T3168        9

2.1.        概述        9

2.2.        应用范围        10

2.3.        工作极限        10

3.        STC89C52RC        10

3.1.        主要特性如下：        10

3.2.        STC89C52引脚具体介绍如下：        12

4.        发射模块        13

5.        接收模块        13

6.        单片机        14

四、        软件设计部分        14

1.        程序编程        14

2.        程序流程图        16

五、        详细的制作过程和效果分析        17

1.        使用Altium Design制作原理图        17

2.        使用Altium Design制作PCB图        19

3.        热转印法制作焊板        20

4.        焊接元器件        20

5.        将程序烧录进单片机        21

6.        焊接实物图        22

7.        问题分析        23

7.1.        硬件        23

7.2.        软件        24

8.        数据分析        24

8.1.        发射模块        24

8.2.        接收模块        24

六、        使用说明        24

1.        打开电源        24

2.        打开接收模块开关        25

3.        将两个线圈靠近        25

4.        观察现象        26

七、        心得体会        27

八、        参考文献        31

###

###  1, ...、摘要

磁共振无线电能传输技术具有传输距离中等、传输高效且无辐射的优点,在消费电子、工业应用等领域具有较高的实用价值和经济价值,近年来迅速成为研究热点之一。本文基于磁共振无线电能传输技术，阐述和分析了国内外无线电能传输技术的现状，并从电磁感应的角度设计了一套磁共振无线电能传输装置，实现非接触式的能量传输。

**关键词：** 电磁感应；磁共振；能量交换；无线电能传输



##  Abstract

Magnetic resonance radio energy transmission technology has the advantages of medium transmission distance, high transmission efficiency and no radiation. It has high practical value and economic value in the fields of consumer electronics and industrial applications. It has quickly become one of the research hotspots in recent years. Based on the magnetic resonance radio energy transmission technology, this paper expounds and analyzes the current status of radio energy transmission technology at home and abroad, and designs a set of magnetic resonance radio energy transmission device from the perspective of electromagnetic induction to realize non-contact energy transmission.

**Keywords:** electromagnetic induction; magnetic resonance; energy exchange; radio energy transmission



### 2, ...、前言

随着科技和社会的进步，人们对于充电方式也提出了更高的要求。传统意义上的充电方式是借助金属导线以及其他物理连接的条件下，为设备进行充电，如平时生活中我们经常接触到的电脑、手机等电子设备。但是电源和电线不断地拔插，并且导线暴露在空气中表面橡胶容易老化，既容易造成设备耗损，又有电器安全方面的危险存在。由此，无限电能传输技术已经在许多领域被提上进程，成为国内外研究的热点问题之一，具有很好的发展前景。

无线电能传输技术并不是一项新兴的技术，早在1890年，尼古拉·特斯拉就已经设想把地球当作导体，利用地球和电离层之间建立低频共振；在二十世纪七十年代中期，无线电动牙刷就已经出现；到年代初，奥克兰大学（新西兰）围绕感应耦合功率传输技术（ICTP）进行深度探究；在2012年7月，日本丰桥技术科学大学在横滨举办的贸易展上就展示了一辆可在运行过程中通过道路无线充电的汽车。

随着各项技术的成熟和市场对于无限输电的需求增加，我们也将在各个领域看到无限电能传输技术的身影。




### 一、国内外研究现状及现实意义

  1. 1.国外研究现状

纵观近年来国外的研究理论和实验成果，目前，围绕无接触功率传输开展的研究，主要集中在近距离传输方面，对于带气隙变压器模型，无论是理论分析还是实验应用设计，国外的研究者都取得了较好的成绩。与近距离传输研究相对，国外关于远距离无接触功率传输，研究相对较少，相应取得的成果也不多。

2007年6月，美国麻省理工学院研究团队利用电磁共振器和电源隔空点亮了一盏2M开外的60W电灯泡；2010年9月，日本富士通公司利用磁共振技术实现设备无线充电；2012年，诺基亚公司发布了两款智能手机：Lumia920和Lumia820，可实现无线充电。这些成果都标志着无线电能传输技术正在一步步的走向成熟。


  1. 2.国内研究现状

国内的无线电能传输技术起步滞后于国外，日前仍然处于研究的初级阶段，但在国外市场旋风般的影响下，也取得了一些成就。

国内最先研究的是2001年，西安石油学院的李宏，就感应电能传输技术应用于矿井用感应电力机车的可行性开展研究；2005年，比亚迪申请了应用电磁感应技术的非接触感应式充电器专利；2010年，全球无线电能传输联盟在9月将Qi无线输电国际标准引入国内；2013年1月，哈尔滨工业大学发布1m以外的磁共振式无线充电技术；2018年9月，华为在mate20系列发布会上发布了15W的华为无线充电器。

总而言之，国内的关于无线电能传输技术的研究在进一步的深入，在研究领域方面也在进一步的扩大。


  1. 3.现实意义

 无线电能传输技术正渗透更多的领域，引起广泛性的领域变革。在医疗领域，无线电能传输技术正掀起一场风暴，它改变了传统的植入式医疗电子产品的供电方式，避免了更换电池带来的病痛与感染；在交通领域，电动汽车、动车组、矿井车等需要电能的交通工具都是当今无线电能传输技术的研究热点；太空领域上，利用空间太阳能电站，把太空中接收到的太阳能转换为微波，发射给地球，转换电能后供给人类。


### 二、 设计思路

  1. 1.无线电能传输的基本构成
![11 _2_.png](https://i.loli.net/2020/03/03/pYN5ItPBxoSqe1m.png)

      图2.1无线电能传输系统结构

传统的无线电能传输装置由电源、补偿电容、发射和接受线圈以及负载构成，如图2.1所示。

发射线圈经过电源通电后，发射线圈就会产生变化的磁场，在该磁场中的接受线圈，然后调节补偿电容，发射和接受线圈就会产生一样的共振频率，接受线圈在交变磁场中得到能量发生共振，发射线圈向接受线圈源源不断地传送电能，然后传给负载，从而完成电能的无线输送。


  1. 2.基本设计思路

设计的无线电能传输装置由三部分组成：发射模块，接受模块和单片机，如图2.2所示。

发射模块核心是XKT801芯片，实现将电源的电能电磁转换为磁能，通过铜线圈将磁能传输给接受模块。

接受模块的核心是T3168芯片，实现将铜线圈接受到的磁能通过磁电转换为电能，给负载供电。

单片机连接接受模块，通过控制T3168芯片的使能端进而控制接受模块的工作状态。


![22.png](https://i.loli.net/2020/03/03/rnwPhax7GlpRYHk.png)
图2.2无线电能传输原理图


### 三、 **硬件设计部分**

  1. 1.XKT-801
    1. 1.1.概述

XKT-801系列集成电路，采用最先进的宽电压自适应技术芯片设计工艺，同样的发射电路可以在任意工作范围内电压使用而不改变任何器件使用极为方便，电路极为简单，具有精度高稳定性好等特点，其专门用于无线感应智能充电，供电管理系统中，可靠性能高。XKT-801负责处理该系统中的无线电能传输功能，采用电磁能量转换原理并配合接收部分做能量转换及电路的实时监控；负责各项电池的快速充电智能控制，XKT-801只需配合极少的外部元件就可以做成高可靠的无线快速充电器，无线电源供电。

    1. 1.2.特点

1.自动适应供电电压调节功能，使之能够在较宽的电压下均能工作。

2.自动频率锁定

3.自动负检测负载

4.自动功率控制

5.高速能量输电传送

6.高效电磁能量转换

7.智能监测系统，免调试

8.工作电压：DC 12-48V

9.工作频率：0-1MHZ

10.高度集成化，仅需几只普通外围原件

    1. 1.3.用途

军用产品，医疗产品，安防产品，防水产品，防尘产品，防火产品呢，防电弧产品，防爆产品，化工防腐蚀产品，生物体植入产品，穿戴式设备，孔轴供电产品，儿童玩具产品，隔离电源产品，娱乐产品，LED供电产品，数码产品，MP3，MP4，手机，手持家用电器等的电池充电，无线直接供电。
![33.png](https://i.loli.net/2020/03/03/rp3vmQ2k7MGnyN6.png)
![avatar](https://i.loli.net/2020/03/03/NcwTyxig9UX1pJF.png)
图2.3 XKT801管脚图




  1. 2.T3168
    1. 2.1.概述

T3168是芯科泰无线充电系列通用接受集成电路，体积小输出功率大，可配合各种无线充电方案应用，电路简单使用方便。


    1. 2.2.应用范围

军用产品、医疗产品、机器人无线供电、安防产品、防水产品、玩具产品、数码产品、MP3、MP4、手机、手持家用电器等的电池充电、无线直接供电。

1.

    1. 2.3.工作极限

工作温度：-55℃~+125℃

存储温度：-65℃~+150℃

最大工作电压：26V

最大输出电流：2A

![avatar](https://i.loli.net/2020/03/03/wx2s5OXvZ4VBu6D.png)
![avatar](https://i.loli.net/2020/03/03/zMqFpmXxUkeldaf.png)

图2.4 T3168管脚图


  1. 3.STC89C52RC

STC89C52RC单片机是宏晶科技推出的新一代高速/低功耗/超强抗干扰的单片机，指令代码完全兼容传统8051单片机，12时钟/机器周期和6时钟/机器周期可以任意选择。


    1. 3.1.主要特性如下：

1. 增强型8051单片机，6时钟/机器周期和12时钟/机器周期可以任意选择，指令代码完全兼容传统8051
2. 工作电压：5.5V～3.3V（5V单片机）/3.8V～2.0V（3V单片机）
3. 工作频率范围：0～40MHz，相当于普通8051的0～80MHz，实际工作频率可达48MHz
4. 用户应用程序空间为8K字节
5. 片上集成512字节RAM
6. 通用I/O口（32个），复位后为：P1/P2/P3/P4是准双向口/弱上拉，P0口是漏极开路输出，作为总线扩展用时，不用加上拉电阻，作为I/O口用时，需加上拉电阻
7. ISP（在系统可编程）/IAP（在应用可编程），无需专用编程器，无需专用仿真器，可通过串口（RxD/P3.0,TxD/P3.1）直接下载用户程序，数秒即可完成一片
8. 具有EEPROM功能
9. 具有看门狗功能
10. 共3个16位定时器/计数器。即定时器T0、T1、T2
11. 外部中断4路，下降沿中断或低电平触发电路，Power Down模式可由外部中断低电平触发中断方式唤醒
12. 通用异步串行口（UART），还可用定时器软件实现多个UART
13. 工作温度范围：-40～+85℃（工业级）/0～75℃（商业级）
14. PDIP封装



![77.png](https://i.loli.net/2020/03/03/wkOJzgRvGLMY7rI.png)











图2.5 STC89C52RC管脚图


    1. 3.2. **STC89C52引脚具体介绍如下：**

　　① 主电源引脚(2根)

　　VCC(Pin40)：电源输入，接+5V电源

　　GND(Pin20)：接地线

　　②外接晶振引脚(2根)

　　XTAL1(Pin19)：片内振荡电路的输入端

　　XTAL2(Pin20)：片内振荡电路的输出端

　　③控制引脚(4根)

　　RST/VPP(Pin9)：复位引脚，引脚上出现2个机器周期的高电平将使单片机复位。

　　ALE/PROG(Pin30)：地址锁存允许信号

　　PSEN(Pin29)：外部存储器读选通信号

　　EA/VPP(Pin31)：程序存储器的内外部选通，接低电平从外部程序存储器读指令，如果接高电平则从内部程序存储器读指令。

　　④可编程输入/输出引脚(32根)

　　STC89C52单片机有4组8位的可编程I/O口，分别位P0、P1、P2、P3口，每个口有8位(8根引脚)，共32根。

　　PO 口(Pin39～Pin32)：8位双向I/O口线，名称为P0.0～P0.7 P1口(Pin1～Pin8)：8位准双向I/O口线，名称为P1.0～P1.7 P2口(Pin21～Pin28)：8位准双向I/O口线，名称为P2.0～P2.7 P3口(Pin10～Pin17)：8位准双向I/O口线，名称为P3.0～P3.7

1.
  1. 4.发射模块
![avatar](https://i.loli.net/2020/03/03/729fgLTsw5GBmPd.png)

图2.6 发射模块原理图

发送端电路由XKT-801和XKT-1511组成，将输入电压输入XKT-801芯片后，电压检测，微调频率，使得芯片输出端输出交变的低频方波信号，当信号输送入XKT-1511芯片时进行倍频，将输入信号倍频输出高频电压信号，以提高接收端感生电动势。


  1. 5. **接收模块**
![avatar](https://i.loli.net/2020/03/03/hk2wlWbNZaYCX7B.png)
图2.7接收模块原理图

接收端电路由T3168芯片组成，通过电磁感应原理，在接收端的线圈处把接收到的磁场转变为交流电压，经过滤波后输入到芯片，进行整流稳压，在输出端将输出电压采样，反馈给芯片的电压检测端口，达到控制电压稳定输出的效果。


  1. 6.单片机
![100.png](https://i.loli.net/2020/03/03/KrV9L6voxApEBhf.png)
图2.8单片机原理图

单片机由STC89C52RC芯片组成，通过按键的开关对接受模块的使能端进行控制，进而实现对接受模块工作的控制。


### 四、 **软件设计部分**

  1. 1. **程序编程**
```  C
#include\&lt;STC12C5A60S2.h\&gt;

#include\&lt;intrins.h\&gt;

#include \&lt;stdio.h\&gt;

#define usint unsigned short int

#define uchar unsigned char

#define uint unsigned int

#define VALID    0

#define INVALID  1



sbit IN1 = P1^0;   //使能

sbit IN2 = P2^1;   //按键



void delay\_1ms(uint z){         //延时函数1ms

 uint x,y;

 for(x = z; x \&gt; 0; x--)

  for(y = 920; y \&gt; 0; y--);

}



void main()

{

 uchar i=0;

 while(1){

   if (IN2 == 1){  //   按键按下

     IN1 = 1;

     }

   delay\_1ms(100);

   while(IN2 == 1){  //检测按键是否松开

    delay\_1ms(1000);

    }

   IN1 = 0;

 }

}
```  

1.
  1. 2.程序流程图

图2.9 程序流程图
![110.png](https://i.loli.net/2020/03/02/KJbf3xMFvnq72hQ.png)




图2.13接收模块和单片机PCB图


  1. 3.热转印法制作焊板

1. 绘制PCB电路图，生成gerber files，选择你布线的那侧，要选择mirror。
2. 将电路图打印到转印纸上（油面）。
3. 准备好铜板，用砂纸将上面的氧化铜打磨干净，用卫生纸擦拭干净或者清水洗净，如果将打印好的转印纸贴在铜板合适位置，用电熨斗将转印纸与铜板贴合。
4. 将贴合好后的铜板用电熨斗来回压，这一步是为了将转印纸上面的图案转移到铜板上，这一步特别关键，也是前面几步影响最大的一步，如果墨不够黑，那附着在铜板上的墨就特别浅，很多不该漏铜的地方漏出了铜，这样在腐蚀的时候就会把本不该腐蚀的地方腐蚀掉。如果铜板没有打磨干净，那么墨下面会有一些脏颗粒，腐蚀的时候墨马上就会掉下来。
5. 将铜板上面不够黑的地方用马克笔涂黑，保证所有不该漏铜的地方都不漏铜。
6. 放入腐蚀剂中腐蚀。
7. 将上面的黑墨擦掉。
8. 钻孔，按照原理图要求用钻头钻孔。


  1. 4.焊接元器件

1.准备施焊。左手拿焊丝，右手握烙铁，进入备焊状态。要求烙铁头保持干净，无焊渣等氧化物，并在表面镀有一层焊锡。

2.加热焊件。烙铁头靠在两焊件的连接处，加热整个焊件全体，时间大约为1～2秒钟。

3.送入焊丝。焊件的焊接面被加热到一定温度时，焊锡丝从烙铁对面接触焊件。

4.移开焊丝。当焊丝熔化一定量后，立即向左上45°方向移开焊丝。

5.移开烙铁。焊锡浸润焊盘和焊件的施焊部位以后，向右上45°方向移开烙铁，结束焊接。从第三步开始到第五步结束，时间大约也是1~2s。

6.PCB图
发射模块
![120.png](https://i.loli.net/2020/03/02/94hltqAryasiHYN.png)
接收模块
![130.png](https://i.loli.net/2020/03/02/7vA4EFmCeghKtxi.png)
  1. 6.焊接实物图

发射模块焊接实物图
![140.jpg](https://i.loli.net/2020/03/03/oQ25GcaHdwvCDN7.jpg)
接收模块和单片机焊接实物图
![150.jpg](https://i.loli.net/2020/03/02/cLrz2C1D6ngiShU.jpg)

  1. 7.问题分析
    1. 7.1.硬件

1.元器件不全。第一批购买器件缺失了一些很关键的器件，如XKT-1511，T3168等芯片，导致项目延后。

解决办法：等待第二批+独自购买

2.使用热转印法制作板子时发现PCB图的电路线过窄，导致使用电熨斗印制时发生断路的现象

解决办法：重新制作PCB图，加宽线路宽度和重新布线

3.程序下载到单片机内失败。

解决办法：发现插针接触不良，重新焊接

4.使用两节电池盒，单片机供电不够

解决方法：更换3节电池盒

5.接收模块正常，但发射模块输出端没有输出交变波形

解决办法：检查电路，未解决；更换芯片，未解决；调整电阻电容，未解决；更换设计方案，未解决。

    1. 7.2.软件

正常。


  1. 8.数据分析
    1. 8.1.发射模块

电源电压：24V

XKT-801的8管脚VDD：12V

XKT-801的6管脚输出：2mV

    1. 8.2.接收模块

发光二极管两端无电压电流

单片机供电压：4V


### 六、 **使用说明**

  1. 1. **打开电源**

![160.jpg](https://i.loli.net/2020/03/03/WjodCPTS4Jrqb6F.jpg)


  1. 2.打开接收模块开关
![170.jpg](https://i.loli.net/2020/03/03/6POxzy1ZvmrRW8n.jpg)

  1. 3.将两个线圈靠近
![180.jpg](https://i.loli.net/2020/03/03/XZyaPmq3gJ9p27k.jpg)

  1. 4.观察现象
![190.jpg](https://i.loli.net/2020/03/02/MIsRvkcFLij3dCm.jpg)
### 七、 **心得体会**

经过近乎三周的历练，收获匪浅，脑中的知识不再是空中楼阁，而是实实在在地落到了实处，同时通过这次实践也深感自己的不足，深深感觉到平时学习当中表面上认为自己学来了很多，但其实我们只是学到了该领域的&quot;常识&quot;，真正要用到时却是不堪一击，这很值得我们去反省和总结。

在本次实践当中，问题的出现忽然变化和迅速的，无论是团队还是个人，在项目的进展中总是不断面临挑战，有时会感到措手不及，没有头绪。这对于我们来说是困难的，因为不仅有时间的压力，其他组快速地突破项目难关的欢呼声对于我们来说也如同心里堵塞了一块石头，内心焦急和渴望，恨不得把项目进度推进到极致，看到好的结果出现，但让我们沮丧的是适而其反，心急吃不了热豆腐，反而需要从头再来寻找出问题。在项目中期时候我们对自己感到有些失望的，因为&quot;落后&quot;狠狠地打击了我们，痛定思痛，把进度延缓下来，针对项目的细节仔细琢磨，随着经验的积累淬炼火候，令我们意外的是原本堵塞的问题竟然迎刃而解了，这使得我们很高兴。

这也让我们意识到，之前我们就如同豆芽一般进度迅速，表面上能一夜抽长六、七厘米，外表也是壮硕和饱满，然而内在的质地却是异常脆弱，稍微遇到问题就会摧枯拉朽般地瓦解。本次实践最让我们深刻的就是这次教训，深深地印在我们脑海里挥之不去，让我们反思来平时对于个人能力的培养方面也是不是这样操之过急，而忽略了&quot;实质内涵&quot;的培养，值得我们将后的工作和研究中借鉴和警惕。

### 八、查阅文献

[1]姚晓平.电能无线传输应用方案[J].制造业自动化，2011，33（12）：62-65.

[2]林桂江.无线传能技术的发展与展望[J].信息工程，2016，26（3）：5-6.

[3]刘刚，郑青玉，王德钊.一种基于电磁感应的无线充电方法[J].北京信息科技大学报，2013，28（2）：51-54.

[4]赵安，曲立国，过劲劲.一种高频无线充电电路的研究和分析[J].信息技术与网络安全，2017，36（22）：49-52，57.
