using System;
#include "stdafx.h"
#include "ExportFunction.h"
#include "ExtractConfig.h"

void DebugPrint(const char *str, ...){
  char buf[2048];

  va_list ptr;
  va_start(ptr,str);
  vsprintf(buf,str,ptr);
  OutputDebugString(buf);

}
int MatchNameWithConfigFile(char* compare, string file_name){

	string config_name, config_value;

	ifstream ConfigFile (file_name.c_str());
	if (!ConfigFile.fail()){
		DebugPrint("%s Loading...", file_name.c_str());
		if (ConfigFile.is_open()){	
			while ( !ConfigFile.eof()){
				ConfigFile >> config_name;
				DebugPrint("\nGet %s", config_name.c_str());
				if (compare == config_name){
					DebugPrint(" Matched\n", config_name.c_str());
					return 1;
				}
			}
		}	
		DebugPrint("%s is not matched\n", config_name);
		return 0;
	}else{
		DebugPrint("%s is not found!", file_name.c_str()); 
		return 0;
	}
	return 0;
}

