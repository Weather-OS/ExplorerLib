/*
This is an unlicensed software.
You can change, Redistribute and Modify the contents of this software. However, any tamping of this software is not tolerated.
THIS SOFTWARE IS PROVIDED AS IS AND THE OWNER IS NOT RESPONSIBLE FOR ANY DAMAGE IT CAUSES.

---------------------------------------
use Explorerlib to access Explorer.exe.

Tips and tricks:

Make sure you end your Directories with "\\".
You can use explorer namespace using "using namespace explorer;" (note: not recommended).
This code is explained with Comments.

*/

#include <iostream>
#include <cstring>
#include <sstream>
#include <fstream>
#include <windows.h>

#define _CST__EXPLORER_SESSION "data$(winmain@session)"
#define _EXPORT__EXPLORER_DATA 1
#define _TOEXPORT__EXPLORER "byte$(explorer@mainbyte)"

const char* __ExplorerExecutable = "Explorer.exe ";
const char* __ExplorerCD = "cd ";
const char* __ExplorerNewDir = "mkdir ";
const char* __ExplorerRemoveDir = "rmdir ";
const char* __ExplorerRename = "ren ";

char _buffer_[256]; //Code buffer


namespace explorer
{
//USAGE : explorer::Open( Directory to open );. Opens explorer in the defined directory
void open( std::string __Directory ){
	
	__Directory = "\"" + __Directory + "\"";

	const char* OpenExplorer = __Directory.c_str(); //Convert OpenExplorer to const char*
	
	strncpy(_buffer_, __ExplorerExecutable, sizeof(_buffer_));
	strncat(_buffer_, OpenExplorer, sizeof(_buffer_)); //Add the result to the buffer
	
	system(_buffer_);
}

//USAGE : explorer::mkdir( Directory to cd, Directory name to create );. Creates a folder in a specified directory.
void mkdir( std::string __Directory, std::string __dirName ) {
	
	__dirName = "\"" + __dirName + "\"";
	
	const char* cdExplorer = __Directory.c_str();
	const char* newdirExplorer = __dirName.c_str();
	
	strncpy(_buffer_, __ExplorerNewDir, sizeof(_buffer_));
	strncat(_buffer_, cdExplorer, sizeof(_buffer_));
	strncat(_buffer_, newdirExplorer, sizeof(_buffer_)); //In here we are adding 3 Things together
	
	system(_buffer_);
}

//USAGE : explorer::rmdir( Directory to cd, Directory name to remove );. Removes a folder in a specified directory.
void rmdir( std::string __Directory, std::string __dirName ) {
	
	__dirName = "\"" + __dirName + "\"";
	
	const char* cdExplorer = __Directory.c_str();
	const char* removedirExplorer = __dirName.c_str();
	
	strncpy(_buffer_, __ExplorerRemoveDir, sizeof(_buffer_));
	strncat(_buffer_, cdExplorer, sizeof(_buffer_));
	strncat(_buffer_, removedirExplorer, sizeof(_buffer_));
	
	system(_buffer_);
}

void rename( std::string __Directory, std::string __dirName, std::string __newdirName ) {
	
	std::string newstring = "";
	__Directory = "\"" + __Directory;
	__dirName = __dirName + "\"";
	__dirName += " ";
	
	const char* cdExplorer = __Directory.c_str();
	const char* dirExplorer = __dirName.c_str();
	
	if(__newdirName.std::string::find(" ") != std::string::npos){
		
	newstring = "\"" + __newdirName + "\"";
	const char* charstring = newstring.c_str();
	
	strncpy(_buffer_, __ExplorerRename, sizeof(_buffer_));
	strncat(_buffer_, cdExplorer, sizeof(_buffer_));
	strncat(_buffer_, dirExplorer, sizeof(_buffer_));
	strncat(_buffer_, charstring, sizeof(_buffer_));
	
	} else {
		
	const char* newdirExplorer = __newdirName.c_str();
	
	strncpy(_buffer_, __ExplorerRename, sizeof(_buffer_));
	strncat(_buffer_, cdExplorer, sizeof(_buffer_));
	strncat(_buffer_, dirExplorer, sizeof(_buffer_));
	strncat(_buffer_, newdirExplorer, sizeof(_buffer_));
	
	}
	
	system(_buffer_);
}
}