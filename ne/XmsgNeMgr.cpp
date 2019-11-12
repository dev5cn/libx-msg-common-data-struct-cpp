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

#include "XmsgNeMgr.h"
#include "../libx-msg-common-dat-struct-cpp.h"

XmsgNeMgr* XmsgNeMgr::inst = new XmsgNeMgr();

XmsgNeMgr::XmsgNeMgr()
{

}

XmsgNeMgr* XmsgNeMgr::instance()
{
	return XmsgNeMgr::inst;
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::add(shared_ptr<XmsgNeUsr> nu)
{
	unique_lock<mutex> lock(this->lock);
	auto it = this->nes.find(nu->neg);
	if (it != this->nes.end())
	{
		shared_ptr<XmsgNeUsr> old = it->second;
		it->second = nu;
		return old;
	}
	this->nes[nu->neg] = nu;
	return nullptr;
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::get(const string& neg)
{
	unique_lock<mutex> lock(this->lock);
	auto it = this->nes.find(neg);
	return it == this->nes.end() ? nullptr : it->second;
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::getAuth()
{
	return this->get(X_MSG_IM_AUTH);
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::getStatus()
{
	return this->get(X_MSG_CHANNEL_STATUS);
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::getHlr()
{
	return this->get(X_MSG_IM_HLR);
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::getGroup()
{
	return this->get(X_MSG_IM_GROUP);
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::getOrg()
{
	return this->get(X_MSG_IM_ORG);
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::findByCgt(const string& cgt)
{
	unique_lock<mutex> lock(this->lock);
	for (auto& it : this->nes)
	{
		if (it.second->uid == cgt)
			return it.second;
	}
	return nullptr;
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::remove(const string& neg)
{
	unique_lock<mutex> lock(this->lock);
	auto it = this->nes.find(neg);
	if (it == this->nes.end())
		return nullptr;
	shared_ptr<XmsgNeUsr> ne = it->second;
	this->nes.erase(it);
	return ne;
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::addSubClientEstbEventGroup(shared_ptr<XmsgNeUsr> nu)
{
	unique_lock<mutex> lock(this->lock4sub);
	auto it = this->subClientEstbEventGroup.find(nu->neg);
	if (it != this->subClientEstbEventGroup.end())
	{
		shared_ptr<XmsgNeUsr> old = it->second;
		it->second = nu;
		return old;
	}
	this->subClientEstbEventGroup[nu->neg] = nu;
	return nullptr;
}

void XmsgNeMgr::getSubClientEstbEventGroup(list<shared_ptr<XmsgNeUsr>>& lis)
{
	unique_lock<mutex> lock(this->lock4sub);
	for (auto& it : this->subClientEstbEventGroup)
		lis.push_back(it.second);
}

shared_ptr<XmsgNeUsr> XmsgNeMgr::addSubClientDiscEventGroup(shared_ptr<XmsgNeUsr> nu)
{
	unique_lock<mutex> lock(this->lock4sub);
	auto it = this->subClientDiscEventGroup.find(nu->neg);
	if (it != this->subClientDiscEventGroup.end())
	{
		shared_ptr<XmsgNeUsr> old = it->second;
		it->second = nu;
		return old;
	}
	this->subClientDiscEventGroup[nu->neg] = nu;
	return nullptr;
}

void XmsgNeMgr::getSubClientDiscEventGroup(list<shared_ptr<XmsgNeUsr>>& lis)
{
	unique_lock<mutex> lock(this->lock4sub);
	for (auto& it : this->subClientDiscEventGroup)
		lis.push_back(it.second);
}

XmsgNeMgr::~XmsgNeMgr()
{

}

