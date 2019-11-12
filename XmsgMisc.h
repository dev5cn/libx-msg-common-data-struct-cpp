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

#ifndef XMSGMISC_H_
#define XMSGMISC_H_

#include <libmisc.h>
#include <google/protobuf/message.h>
#include <google/protobuf/map.h>
using namespace google::protobuf;

class XmsgMisc
{
public:
	static bool getBool(const Map<string, string>& map, const string& key, bool& val); 
	static bool getStr(const Map<string, string>& map, const string& key, string& val); 
	static bool getLong(const Map<string, string>& map, const string& key, ullong& val); 
	static bool getBool(const Map<string, string>& map, const string& key); 
	static string getStr(const Map<string, string>& map, const string& key); 
	static ullong getLong(const Map<string, string>& map, const string& key); 
public:
	static void insertKv(Map<string, string>* map, const string& k, const string& v); 
	static void updateKv(const Map<string, string>& upsert, const RepeatedPtrField<string>& remove, Map<string, string>& to); 
	static bool checkPlat(const string& plat); 
	static string getPlatType(const string& plat); 
	static string makeCgtPlatDid(const string& cgt , const string& plat, const string& did); 
	static string makePlatDid(const string& plat, const string& did); 
	static bool parsePlatDid(const string platDid, string& plat, string& did); 
	static string getApCcid(const string& apCgt, const string& ccid); 
	static bool parseApCcid(const string& apCcid, string& apCgt, string& ccid); 
private:
	XmsgMisc();
	virtual ~XmsgMisc();
};

#endif 
