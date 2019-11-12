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

#ifndef LIBX_MSG_COMMON_DAT_STRUCT_CPP_H_
#define LIBX_MSG_COMMON_DAT_STRUCT_CPP_H_

#define X_MSG_AP																								"ap"				
#define X_MSG_CHANNEL_STATUS																				"cs"				
#define X_MSG_IM_AUTH																						"a"					
#define X_MSG_IM_GROUP																						"g"					
#define X_MSG_IM_HLR																							"h"					
#define X_MSG_IM_MGR																							"mg"				
#define X_MSG_IM_ORG																							"o"					
#define X_MSG_MSC																								"m"					
#define X_MSG_OSS																								"os"				
#define X_MSG_PUSH																							"p"					
#define X_MSG_LEN_MIN_SALT																					0x08				
#define X_MSG_LEN_MIN_USER_NAME																				0x04				
#define X_MSG_LEN_MAX_USER_NAME																				0x40				
#include "ChannelGlobalTitle.h"
#include "XmsgMisc.h"
#include "cpp/dat-x-msg-common.pb.h"
#include "cpp/mgr-x-msg-ne.pb.h"
#include "cpp/net-x-msg-ne-common.pb.h"
#include "ne/XmsgNeMgr.h"
#include "ne/XmsgNeUsr.h"

#endif 
