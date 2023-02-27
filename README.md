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

## 2/ Arrays <br/>
arrays hold values of the same type at different locations in the memory<br/> 
decclaration : type name [size]<br/>
### debugging<br/>
using printf<br/>
using debugger : we set a breakpoint then we can use the step over, step into or step through <br/>
### commandline args <br/>
int main(int argc , string argv[]){} <br/>
argc ; is the argument count  <br/>
argv; array of strings of the elements that were written after compilation <br/>
### compiling <br/>
the compiler that we used in c is gcc , theres also clang
#### steps of compiling <br/>
preprocessing: include librairies contain functions that prewritten like printf<br/>
compiling: convert the code from c to assembly(cpu can understand)<br/>
assembling: convert the assemby code to machine code( binary 0 and 1) <br/> 
linking: links the code ,the libriaries giving the whole machine code <br/>
### cryptography<br/>
encrypting and decrypting<br/>
for example cipher is an algorithm that encrypts text.<br/>
we use a key in the encryption<br/>
### strings <br/>
string is an array of characters <br/>
when the string ends theres \0( c adds it at the end)<br/>
(%s ,string ,%i is int and %c is a character)<br/>
strlen; tells the length of a string <br/>

## 3/ Algorithms <br/>

### Recursion <br/>
a function that calls itself and the iteration gets smaller and smaller as we go through <br/>
Constant Time — O(1) <br/>
It doesn't depend on the input (n); like always returning the same value or extracting the first element (zero effort) <br/>
### Linear Search <br/>
In linear search, the idea of the algorithm is to iterate across the array from left to right, searching for a specified element. <br/>
In pseudocode: <br/>
• Repeat, starting at the first element: <br/>
• If the first element is what you’re looking for (the target), stop. <br/>
• Otherwise, move to the next element. <br/>
*worst case:O(n) <br/>
*Best case :Ω(1) <br/>
### Binary Search
*we should have a sorted array <br/>
*we divide the values that we have into 2 and each part into 2 <br/>
*An algorithm is said to have a logarithmic time complexity when it reduces the size of the input data in each step (division by 2 )
note <br/>
log28 = 3 // the log here means how many times should we divide the 8 on 2 to reach the result(which is 3 ) ,it is log 2 of 8 which is 3  <br/>
in general ; log (n) is the number of times we should devide the n on 2 to reach the result  <br/>
In pseudocode: <br/>
Repeat until the (sub)array is of size 0: <br/>
Calculate the middle point of the current (sub)array. <br/>
If the target is in the middle, stop. <br/>
Otherwise, if the target is less than what’s in the middle, repeat, changing the end <br/>
point to be just to the left of the middle. <br/>
Otherwise, if the target is greater than what’s in the middle, repeat, changing the start point to be just to the right of the middle. <br/>
/////////////////////////<br/>
def binary_search(data, value):<br/>
    n = len(data)<br/>
    left = 0<br/>
    right = n - 1<br/>
    while left <= right:<br/>
        middle = (left + right) /2<br/>
        if value < data[middle]:<br/>
            right = middle - 1<br/>
        elif value > data[middle]:<br/>
            left = middle + 1<br/>
        else:<br/>
            return middle<br/>
    raise ValueError('Value is not in the list)<br/>
    
if __name__ == '__main__':<br/>
    data = [1, 2, 3, 4, 5, 6, 7, 8, 9]<br/>
    print(binary_search(data, 8))<br/>
////////////////////////////<br/>
*O(log n)<br/>
*Ω(1)<br/>
### Sorting: <br/>
### Bubble Sort (swapping each adjasscent pair) <br/>
*An algorithm is said to have  a quadratic time complexity when it needs to perform a linear time operation for each value in the input data <br/>
pseudocode: <br/>
*set the swap counter to a non-zero value <br/>
*repeat until the swap counter is 0: <br/>
	- reset swap counter to 0 <br/>
	- look at each adjacent pair <br/>
 		.if 2 adjacent elements are not in order, swamp them and add one to the swap counter  <br/>
*worst case :O(n²) <br/>
*Best case :O(n) <br/>
### Selection Sort( putting the highest value to the end) <br/>
pseudocode: <br/>
* Repeat until no unsorted element remains: <br/>
* Search the unsorted part of the data to find the smallest value <br/>
* Swap the smallest found value with the first element of the unsorted part <br/>
*worst case :O(n²) <br/>
*Best case :O(n²) <br/>
### Merge Sort <br/>
sort left half of the array  <br/>
sort the right half of the array  <br/>
merge sorted halves <br/>
*O(n log n)* <br/>
fastest to slowest: =>apply exponential <br/>
*o(1)   => 0 <br/>
 *o(log n)  => binary search <br/>
*o(n) => linear search <br/>
*o(n log n) =>  merge sort <br/>
*o(n²)  =>buble sort /selection sort  <br/>
PS: <br/>
*segmentation fault dumped ;  <br/>
means you touched memory you should not have touched(like iterating over a length that is higher than the array) <br/>
*Big-O notation  == asymptotic notation <br/>
comparing algorithms depends on the runing time and how much space it needs  <br/>
scalability ;is how much the resource changes when we change input  <br/>



