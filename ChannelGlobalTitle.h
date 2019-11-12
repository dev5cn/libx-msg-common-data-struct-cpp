/*
  Copyright 2019 www.dev5.cn, Inc. dev5@qq.com
 
  This file is part of X-MSG-IM.
 
  X-MSG-IM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  X-MSG-IM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU Affero General Public License
  along with X-MSG-IM.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef CHANNELGLOBALTITLE_H_
#define CHANNELGLOBALTITLE_H_

#include <libmisc.h>

#define CHANNEL_GLOBAL_TITLE_TYPE_USR																	'@'			
#define CHANNEL_GLOBAL_TITLE_TYPE_GROUP																'#'			
#define CHANNEL_GLOBAL_TITLE_TYPE_SYSNE																'$'			

class ChannelGlobalTitle
{
public:
	string domain; 
	string hlr; 
	string uid; 
	size_t hashCode; 
	char separator; 
public:
	bool isSameDomain(shared_ptr<ChannelGlobalTitle> other); 
	bool isSameHlr(shared_ptr<ChannelGlobalTitle> other); 
	bool isSame(shared_ptr<ChannelGlobalTitle> other); 
	bool isUsr(); 
	bool isGroup(); 
	bool isSysNe(); 
public:
	static shared_ptr<ChannelGlobalTitle> parse(const string& str); 
	static shared_ptr<ChannelGlobalTitle> genUsr(shared_ptr<ChannelGlobalTitle> hlr); 
	static shared_ptr<ChannelGlobalTitle> genGroup(shared_ptr<ChannelGlobalTitle> hlr); 
	static shared_ptr<ChannelGlobalTitle> genSysNe(shared_ptr<ChannelGlobalTitle> hlr); 
	string domainHlr(); 
	string toString();
	ChannelGlobalTitle();
	virtual ~ChannelGlobalTitle();
private:
	bool checkDomain(); 
};

typedef shared_ptr<ChannelGlobalTitle> SptrCgt;

#endif 
