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

#include "XmsgMisc.h"

XmsgMisc::XmsgMisc()
{

}

bool XmsgMisc::getBool(const Map<string, string>& map, const string& key, bool& val)
{
	auto it = map.find(key);
	if (it == map.end())
		return false;
	val = "true" == it->second;
	return true;
}

bool XmsgMisc::getStr(const Map<string, string>& map, const string& key, string& val)
{
	auto it = map.find(key);
	if (it == map.end())
		return false;
	val = it->second;
	return true;
}

bool XmsgMisc::getLong(const Map<string, string>& map, const string& key, ullong& val)
{
	auto it = map.find(key);
	if (it == map.end())
		return false;
	val = ::atoll(it->second.c_str());
	return true;
}

bool XmsgMisc::getBool(const Map<string, string>& map, const string& key)
{
	bool ret = false;
	XmsgMisc::getBool(map, key, ret);
	return ret;
}

string XmsgMisc::getStr(const Map<string, string>& map, const string& key)
{
	string ret;
	XmsgMisc::getStr(map, key, ret);
	return ret;
}

ullong XmsgMisc::getLong(const Map<string, string>& map, const string& key)
{
	ullong ret;
	XmsgMisc::getLong(map, key, ret);
	return ret;
}

void XmsgMisc::insertKv(Map<string, string>* map, const string& k, const string& v)
{
	map->insert(MapPair<string, string>(k, v));
}

void XmsgMisc::updateKv(const Map<string, string>& upsert, const RepeatedPtrField<string>& remove, Map<string, string>& to)
{
	for (auto& it : upsert) 
		to[it.first] = it.second;
	for (auto& it : remove) 
		to.erase(it);
}

bool XmsgMisc::checkPlat(const string& plat)
{
	return plat == "android" || plat == "ios" || plat == "windows" || plat == "mac" || plat == "linux" || plat == "web";
}

string XmsgMisc::getPlatType(const string& plat)
{
	if (plat == "android" || plat == "ios")
		return "mobile";
	if (plat == "windows" || plat == "mac" || plat == "linux")
		return "pc";
	if (plat == "web")
		return "web";
	LOG_FAULT("it`s a bug, unexpected plat: %s", plat.c_str())
	return "pc";
}

string XmsgMisc::makeCgtPlatDid(const string& cgt , const string& plat, const string& did)
{
	return cgt + "|" + plat + "|" + did;
}

string XmsgMisc::makePlatDid(const string& plat, const string& did)
{
	return plat + "|" + did;
}

bool XmsgMisc::parsePlatDid(const string platDid, string& plat, string& did)
{
	string::size_type i = platDid.find("|");
	if (i == string::npos)
		return false;
	plat = platDid.substr(0, i);
	did = platDid.substr(i + 1, platDid.length());
	return true;
}

string XmsgMisc::getApCcid(const string& apCgt, const string& ccid)
{
	return apCgt + "|" + ccid;
}

bool XmsgMisc::parseApCcid(const string& apCcid, string& apCgt, string& ccid)
{
	string::size_type i = apCcid.find("|");
	if (i == string::npos)
		return false;
	apCgt = apCcid.substr(0, i);
	ccid = apCcid.substr(i + 1, apCcid.length());
	return true;
}

XmsgMisc::~XmsgMisc()
{

}

