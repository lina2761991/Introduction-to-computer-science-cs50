# Introduction-to-computer-science-cs50
These are the problems I solved while studying the courses of cs50 Introduction to computer science <br/>
In this file you can find the bullet points I learnt in each chapter


## 1/ C 

Both compiler and interpreter convert source code to machine code.<br/>
Machines understand only binary code<br/>
There are 2 types of languages; High Level Languages (like c , java ...) and Low Level Languages (like assembly,COBOL....)<br/>
### compiler vs Interpreter:<br/>

compiler:<br/>
takes the code source and translate whole of it to machine code at once ,after this we get an executable file that is ready to run<br/>
->any error can stop the whole program from working <br/>
compilation is slow<br/>
requires less memory<br/><br/>
Interpreter: <br/>
takes the code source and translate it to machine code line by line <br/>
interpretation is fast <br/>
requires more memory<br/>
memory management is more complex <br/>
the interpreter is responsible for allocating and freeing the memory dynamically <br/>
### Command lines:<br/>
ls : seing the list of files and directories under the current directory<br/>
cd : change directory ; go to a certain directory <br/>
mkdir :make a directory <br/>
cp s d : copy source destination  // this is if we wanna copy a file , but if we wanna copy a folder we have to write “ cp -r s d”<br/>
rm : to remove a file <br/>
rm -r folerName : to remove a folder <br/>
mv : move from one location to another <br/>
pwd: path of the current directory <br/>
setwd : change path <br/>

### variables and scoopes <br/>
local variables: access only within the function in which they are created <br/>
global variables: can be accessed by any function in the program <br/>
