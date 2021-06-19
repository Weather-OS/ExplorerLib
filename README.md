# ExplorerLib
A better way to manage folders in C++  

# How to use?

Make sure you include ExplorerLib.h in your code.

[explorer::open]
* Use it to open Explorer in a specified directory.  
How to use: 
`explorer::open( String your_directory )`  

[explorer::mkdir]
* Use it to create a directory in a specified directory.  
How to use:
`explorer::mkdir( String your_directory, String your_directory_name )`

[explorer::rmdir]
* Use it to remove a directory in a specified directory.  
How to use:
`explorer::rmdir( String your_directory, String your_directory_name )`

[explorer::rename]
* Use it to rename a directory in a specified directory.  
How to use:
`explorer::rename( String your_directory, String your_old_directory_name, String your_new_directory_name )`

# Tips and tricks

`"`s are added automatically.  
Make sure you end your directories with `\\`.  
You can use explorer::namespace using `using namespace explorer;` (note: not recommended).  


# More info
Please refer to `codeexample.cpp` for examples.  
Please refer to `ExplorerLib.h` for the code explained further.  

# Licensing 

This is an unlicensed software.  
You can change, Redistribute and Modify the contents of this software. However, any tamping of this software is not tolerated.  
THIS SOFTWARE IS PROVIDED AS IS AND THE OWNER IS NOT RESPONSIBLE FOR ANY DAMAGE IT CAUSES.  
