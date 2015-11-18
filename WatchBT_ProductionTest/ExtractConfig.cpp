using System;
#include "stdafx.h"

#include "ExtractConfig.h"

int MatchNameWithConfigFile(char* compare, string file_name){

	string config_name, config_value;

	ifstream ConfigFile (file_name.c_str());
	if (!ConfigFile.fail()){
		OutputDebugString(file_name.c_str());
		OutputDebugString(" Loading... \n");
		if (ConfigFile.is_open())
		{	
			while ( !ConfigFile.eof())
			{
				ConfigFile >> config_name;
				OutputDebugString(config_name.c_str());
				if (compare == config_name){
					OutputDebugString(" Matched\n");
					return 1;
				}
			}
		}	
		OutputDebugString(" No Matched\n");
		return 0;
	} else {
		OutputDebugString(file_name.c_str()); 
		OutputDebugString(" is not found!\n");
		return 0;
	}
	return 0;
}

