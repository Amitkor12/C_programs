#include <stdio.h>
#include <stdint.h>

typedef union _uplow                                                                                     
{                                                                                                  
  uint32_t word;
  int16_t low;
  int16_t high;                                                                                         
} uplow;


int main(){
    uplow my_var;
my_var.word = 44444444;
//printf ("Word : 0x%x\n low : 0x%x\n up  : 0x%x\n", my_var.word, my_var.reg.low, my_var.reg.up);
printf ("Word : 0x%x\n low : 0x%x\n up  : 0x%x\n", my_var.word, my_var.low, my_var.high);
}