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
in general ; log (n) is the number of times we should divide the n on 2 to reach the result  <br/>
In pseudocode: <br/>
Repeat until the (sub)array is of size 0: <br/>
Calculate the middle point of the current (sub)array. <br/>
If the target is in the middle, stop. <br/>
Otherwise, if the target is less than what’s in the middle, repeat, changing the end point to be just to the left of the middle. <br/>
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
*Best case :Ω(n) <br/>
### Selection Sort( putting the highest value to the end) <br/>
pseudocode: <br/>
* Repeat until no unsorted element remains: <br/>
* Search the unsorted part of the data to find the smallest value <br/>
* Swap the smallest found value with the first element of the unsorted part <br/>
*worst case :O(n²) <br/>
*Best case :Ω(n²) <br/>
### Merge Sort <br/>
sort left half of the array  <br/>
sort the right half of the array  <br/>
merge sorted halves <br/>
*O(n log n)* <br/>
##### fastest to slowest: =>apply exponential <br/>
*o(1)   => 0 <br/>
 *o(log n)  => binary search <br/>
*o(n) => linear search <br/>
*o(n log n) =>  merge sort <br/>
*o(n²)  =>buble sort /selection sort  <br/><br/><br/>
PS: <br/>
*segmentation fault dumped ;  <br/>
means you touched memory you should not have touched(like iterating over a length that is higher than the array) <br/>
*Big-O notation  == asymptotic notation <br/><br/>
comparing algorithms depends on the runing time and how much space it needs  <br/>
scalability ;is how much the resource changes when we change input  <br/><br/>

## 4/Memory<br/>

### 1.hexadecimal<br/>
*we use hexadecimal (base 16) for memory addresses in the system<br/>
*prefix all hexadecimal numbers with 0x <br/>
### 2.Pointers <br/>
*without pointers, we pass copies of variables to the function(not the actual data) but with pointers we pass the actual variables <br/>
*a pointer is an adress of a location in memory where variables live <br/>
*the pb is when we make change in one function it can affect the other function <br/>
* a pointer is a memory adresse <br/>
*pointers allow us   to pass varibles between functions not copies <br/>
int k;<br/>
k = 5<br/>
int * pk; // declaring pk as a pointer<br/>
pk = &k // pk holds the adresse of K<br/>
we can derefrence p with the * operator<br/>
pointers allow us to pass variables between functions(not copies of them)<br/>
* setting the pointer to null is a good practice<br/>
*theres no type string ; theres char* c
* if arr is an array then &arr[i] is a pointer to the ith element of arr <br/>
##### What is the difference between “&” and “*” operators in C
The & is a unary operator in C which returns the memory address of the passed operand. This is also known as address of operator.###
The * is a unary operator which returns the value of object pointed by a pointer variable. It is known as value of operator. It is also used for declaring pointer variable.



##### how does computer memory work  <br/>
• Every file on your computer lives on your disk drive, be it a hard disk drive (HDD) or a solid-state drive (SSD).  <br/>
• Disk drives are just storage space; we can’t directly work there. Manipulation and use of data can only take place in RAM, so we have to move data there.  <br/>
### 3.Defining Custom Types <br/>
 using typedef we can create data types that already exist or data taypes of our own <br/>
like cs50 did for the string ,it created a datatype string but it actually doesnt exist ,only char does ; <br/>
typedef <oldname> <newname>; <br/>
typedef char *string; <br/>

### 4.Dynamic Memory allocation<br/>
Dynamic memory allocation comes from the heap, usually we work with memory that comes from the stack <br/>

##### Key Difference Between Stack and Heap Memory <br/>
Stack is a linear data structure whereas Heap is a hierarchical data structure. <br/>
Stack memory will never become fragmented whereas Heap memory can become fragmented as blocks of memory are first allocated and then freed. <br/>
Stack accesses local variables only while Heap allows you to access variables globally. <br/>
But first let's define each <br/>
######   What is a Stack?<br/>
A stack is a special area of computer’s memory which stores temporary variables created by a function.<br/>
It is a temporary storage memory. When the computing task is complete, the memory of the variable will be automatically erased. The stack section mostly contains methods, local variable, and reference variables.<br/>

######  What is Heap?<br/>
The heap is a memory used by programming languages to store global variables. By default, all global variable are stored in heap memory space. It supports Dynamic memory allocation.<br/>

The heap is not managed automatically for you and is not as tightly managed by the CPU. It is more like a free-floating region of memory.<br/>


###### When to use the Heap or stack?<br/>
You should use heap when you require to allocate a large block of memory. For example, you want to create a large size array or big structure to keep that variable around a long time then you should allocate it on the heap.<br/>
when we use th heap <br/>
we use malloc ( how many bytes we ll use ) <br/>
always check for null after a malloc <br/>
the rules for dynamic memory allocation :<br/>
1/ every block of memory that you malloc () must be free<br/>
2/ only the memory that you malloc should be free<br/>
3/ Do not free() a block of memory more than once <br/>	
However, If you are working with relatively small variables that are only required until the function using them is alive. Then you need to use the stack, which is faster and easier.<br/><br/>
######  Garbage collector<br/>
look for things that are not used anymore in the heap and gets rid of them <br/>
	
###### 	The difference between a stack overflow and buffer overflow<br/>
stack overflow refers specifically to the case when the execution stack grows beyond the memory that is reserved for it. For example, if you call a function which recursively calls itself without termination, you will cause a stack overflow as each function call creates a new stack frame and the stack will eventually consume more memory than is reserved for it. <br/>

Buffer overflow refers to any case in which a program writes beyond the end of the memory allocated for any buffer (including on the heap, not just on the stack). For example, if you write past the end of an array allocated from the heap, you've caused a buffer overflow.	 <br/>
	
	
#### Strings<br/>
there's no string, there's only a reference to a character<br/>
string s  =  char* s <br/>
"==" would compare the 2 strings memory addresses instead of the actual strings<br/>
to print the address instead of the actual string, you have to type printf("%p\n,s) instead of printf("%s"\n,s)<br/>
string s is actually the adresse of the first char of the string <br/>
since strings are already adresses so we dont need to add a * or & whenever we call them <br/><br/><br/>

	
the problems solved in this part are #### filter-less and #### recover <br/>

## 5/Data structures <br/>

### Stack(LIFO) <br/>
• This data structure is commonly implemented in one of two ways: as an array or as a linked list.  <br/>
side effects might be ignoring the first elements got in (like emails) <br/>
the functions are push and pop <br/>

### Queue(FIFO) <br/>

This data structure is commonly implemented in one of two ways: as an array or as a linked list.  <br/>
the functions are enqueue(add to the end) and dequeue(removing) <br/>
we have the concept of the head and the tail <br/>

	
	








  
