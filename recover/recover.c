#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
//open memory card
//repeat until the end of card
    //read 512 bytes into a buffer
    //if start of new jpeg
        //if first jpeg
        //...
        //Else
        //...

    //Else
        //If  already found jpeg

//close any remaining files





/*notes
the first 3 bytes of jpeg are :0xff 0xd8 0xff



*/

//open memory card
FILE *file = fopen(argv[1], "r");
//repeat until the end of the card

while (fread(buffer, 1, BLOCK_SIZE, raw_file) == BLOCK_SIZE)
{


}

}