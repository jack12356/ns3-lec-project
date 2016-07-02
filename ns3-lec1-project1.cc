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
