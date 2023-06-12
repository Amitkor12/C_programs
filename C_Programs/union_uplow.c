//finding higher bit and lower bit using union
// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>

// enum byte{
// HIGH,
// LOW
// };

union breakbit{
    int32_t data;
    int16_t array[2];
    int16_t low;
    int16_t high;
    
}var;

// struct breakbit_1{
//     int16_t low;
//     int16_t high;
// }var_1;

int main() {
    union breakbit *pvar_1;
    printf("\n%d",sizeof(var));
    // printf("\n%d",sizeof(var.uplow));
    var.data = 0x12345678;
    pvar_1 = &var;
    
    // printf("\nlower value:%x\n",pvar_1->low);
    // printf("Higher bit value:%x\n",*(&pvar_1->high+1));
   
    // printf(" bit value:%x\n",var.low);

    printf("\nlower value:%x\n",var.array[0]);
    printf("Higher bit value:%x\n",var.array[1]);
    return 0;
}