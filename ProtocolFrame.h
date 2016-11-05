/*********************************
 *ProtocolFrame class:
 *	A frame for all the protocal
 *	frames(segments)
 *	just has protocol name and
 *	data offset
 *	 
 *	 ---created by wang 2016.11.03
 **********************************/


#ifndef  LINUX_SNIFFER_PROTOCOLFRAME_H
#define  LINUX_SNIFFER_PROTOCOLFRAME_H



#include<string>
#include<sys/types.h>



namespace LinuxSniffer{
class ProtocolFrame
{
	private:
		const std:: string protocolName;
		size_t dataOffset;
	public:
		ProtocolFrame(const string& name):protocolName(name),dataOffset(0){}

	
};

}



#endif
