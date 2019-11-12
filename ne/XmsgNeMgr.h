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

#ifndef H2N_XMSGNEGROUPMGR_H_
#define H2N_XMSGNEGROUPMGR_H_

#include "XmsgNeUsr.h"

class XmsgNeMgr
{
public:
	shared_ptr<XmsgNeUsr> add(shared_ptr<XmsgNeUsr> nu); 
	shared_ptr<XmsgNeUsr> get(const string& neg); 
	shared_ptr<XmsgNeUsr> getAuth(); 
	shared_ptr<XmsgNeUsr> getStatus(); 
	shared_ptr<XmsgNeUsr> getHlr(); 
	shared_ptr<XmsgNeUsr> getGroup(); 
	shared_ptr<XmsgNeUsr> getOrg(); 
	shared_ptr<XmsgNeUsr> findByCgt(const string& cgt); 
	shared_ptr<XmsgNeUsr> remove(const string& neg); 
	static XmsgNeMgr* instance();
public:
	shared_ptr<XmsgNeUsr> addSubClientEstbEventGroup(shared_ptr<XmsgNeUsr> group); 
	void getSubClientEstbEventGroup(list<shared_ptr<XmsgNeUsr>>& lis); 
	shared_ptr<XmsgNeUsr> addSubClientDiscEventGroup(shared_ptr<XmsgNeUsr> group); 
	void getSubClientDiscEventGroup(list<shared_ptr<XmsgNeUsr>>& lis); 
public:
	unordered_map<string , shared_ptr<XmsgNeUsr>> nes; 
	unordered_map<string , shared_ptr<XmsgNeUsr>> subClientEstbEventGroup; 
	unordered_map<string , shared_ptr<XmsgNeUsr>> subClientDiscEventGroup; 
	mutex lock; 
	mutex lock4sub; 
	static XmsgNeMgr* inst;
	XmsgNeMgr();
	virtual ~XmsgNeMgr();
};

#endif 
