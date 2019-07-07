#include <stdio.h>
#include "init.h"
#include "time.h"

int main()
{
    clock_t a,b;   
    a = clock();   
    DES_Encrypt("source.txt","01010101","encoding.txt");   
    b = clock();   
    printf("Encryption consumption %d milliseconds\n",b-a);    
    a = clock();   
    DES_Decrypt("encoding.txt","01010101","deconding.txt");   
    b = clock();   
    printf("Decryption consumption %d milliseconds\n",b-a);   
    getchar();   
    return 0; 
}