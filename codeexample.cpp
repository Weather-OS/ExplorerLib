#include <iostream>
#include "ExplorerLib.h"

using namespace explorer;
using namespace std;

int main(){
	//EXAPMLE NO 1.
	
	open("C:\\Windows"); //Opens C:\Windows. 
	open("C:\\Program files"); //This also supports spaces.
	
	mkdir("C:\\Users\\%USERNAME%\\Desktop\\", "Hello world"); //Instead of the username itself, You can place "%USERNAME%". This also supports spaces.
	
	rename("C:\\Users\\%USERNAME%\\Desktop\\", "Hello world", "NewDir name"); //Both support spaces.
	
	rmdir("C:\\Users\\%USERNAME%\\Desktop\\", "NewDir name"); //Removing a directory
	
}