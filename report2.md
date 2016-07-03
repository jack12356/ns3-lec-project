# NS3第二次作业



-------倪鸿志   2013010918016   jack12356
## 题目要求：
以third.cc为示例，并在新的要求下完成任务：
	1、建立两种不同的拓扑,至少使用两种信道；(节点数变化不算)
	2、完成4个client和1个server相互之间的通信，在终端中显示
	3、设置STA的移动轨迹为线性远离AP，并尝试其他运动模型
	4、记录数据；
##结果展示：
###第一种拓扑结构：
![cmd-markdown-logo](http://thumbnail0.baidupcs.com/thumbnail/a722d24cdd465a60a731d8515d97e674?fid=3196883111-250528-618354192636680&time=1467547200&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-%2FHfSWNk0ty3Bv4N7Qp5P4GL8Jkw%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=4287355496286908305&dp-callid=0&size=c710_u400&quality=100)

###运行结果：
![cmd-markdown-logo](http://thumbnail0.baidupcs.com/thumbnail/74171bcd75f229d0c2edfe1411236c58?fid=3196883111-250528-759712960776846&time=1467547200&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-q4g1qupHXmSvCozw1oMtA9L65iw%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=4287342499140969382&dp-callid=0&size=c710_u400&quality=100)
###分析：
这里创建了两个csma局域网，两个P2P链路，分别使用了四个ip地址；实现了四个客户机与一个服务器之间的通信仿真；同时，实现了代码中定义客户机在2,3,4,5s不同时刻想服务器发送消息，服务器实现了接收；完成了基本要求；
###线性移动模型相关代码：
![cmd-markdown-logo](http://thumbnail0.baidupcs.com/thumbnail/266562cff24ffe69d3f2cdca3964e855?fid=3196883111-250528-40318921197506&time=1467547200&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-qNvOPMGF0IS5O%2Fkm6UKwSbC4z7s%3D&expires=2h&chkv=0&chkbd=0&chkpc=&dp-logid=199900783&dp-callid=0&size=c850_u580&quality=100)
###第二种拓扑结构：
![cmd-markdown-logo](http://thumbnail0.baidupcs.com/thumbnail/f1649233711804e87c1b554e3a67623b?fid=3196883111-250528-939573428907307&time=1467547200&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-cbCysFHUJqiCyS97O%2BnJQfKM6y0%3D&expires=2h&chkv=0&chkbd=0&chkpc=&dp-logid=199900783&dp-callid=0&size=c850_u580&quality=100)
###运行结果：
![cmd-markdown-logo](http://thumbnail0.baidupcs.com/thumbnail/9eb44bba2fda8ed5126ed35dd715b5f6?fid=3196883111-250528-1067233574712161&time=1467547200&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-UdWnb8E2h12h%2F4RELuvCvDTVSZo%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=4287342715296706947&dp-callid=0&size=c710_u400&quality=100)
###分析：
这里创建了一个csma局域网，一个P2P链路；实现了四个客户机与一个服务器之间的通信仿真；同时，实现了代码中定义客户机在2,3,4,5s不同时刻想服务器发送消息，服务器实现了接收；完成了基本要求；
###收获：
这个项目让我大概理解到了NS3如何仿真链路通信，并且如何以离散事件驱动运行；项目完成过程中有一些困难，比如如何使用线性移动模型，通过QQ群讨论，询问同学，观看手册，解决了问题；对NS3建立起了一个基本概念；



