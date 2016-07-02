#NS3第一次项目报告

------2013010918016 倪鸿志



![cmd-markdown-logo](http://thumbnail0.baidupcs.com/thumbnail/a883063c7bbb8abd0b5ca79973e9bf78?fid=3196883111-250528-326996195040331&time=1467457200&rt=sh&sign=FDTAER-DCb740ccc5511e5e8fedcff06b081203-aknX%2FZRIELxWmw4fmAaMR3AU1Iw%3D&expires=8h&chkv=0&chkbd=0&chkpc=&dp-logid=4263431798539242309&dp-callid=0&size=c710_u400&quality=100)



------

## 分析
        这里使用了wc统计，得出10 30 402四个数字，10代表输出次数，30代表的意义暂不清楚，402代表字节数；

### 1. 收获
调试途中由于不熟悉，有许多地方出现了卡壳；比如怎么进入ns3.22文件夹，怎么打开文件，之后跟着视频做，慢慢就会了；另外，由于对C++不熟悉，有的地方还是不很懂，之后会多看看C++相关知识；

### 2. 代码[^code]

```python
@requires_authorization
/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "ns3/core-module.h"

#include <iostream>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("HelloSimulator");

static void printHello(std::string word,std::string word1,float f) {
	std::cout<<Simulator::Now()<<"   "<<word<<" "<<word1<<std::endl;
	Simulator::Schedule(Seconds(1/f),&printHello,word,word1,f);
}

int
main (int argc, char *argv[])
{
	CommandLine cmd;
	std::string num;
        std::string name;
        float f;
        cmd.AddValue ("num", "2013010918016", num);
        cmd.AddValue ("name", "Nihongzhi", name);
        cmd.AddValue ("f", "fequence", f);
	cmd.Parse(argc,argv);
        
	printHello(num,name,f);

	Simulator::Stop(Seconds(1));
	Simulator::Run ();
	Simulator::Destroy ();
}

```

