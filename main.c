// Online C compiler to run C program online
#include <stdio.h>
//problem1
/*
int main() {
    int num, count=0;
    printf("enter num");
    scanf("%d",&num);
    while(num!=0){
        if((num&1)==1){
            count++;
            num=num>>1;
        }
        else{
            num=num>>1;
        }
    }
    printf("%d",count);
    return 0;
}
*/
//problem 2
/*
void swap(int *a, int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main() {
    int a=5;
    int b=6;
    printf("%d %d\n", a, b);
    swap(&a,&b);
    printf("%d %d\n", a, b);
return 0;
}
*/
//problem 3
/*
int main() {
    unsigned char x = 0b10101010;
    // set bit 3 which is the third bit from LSB
    printf("%d\n",x);
    unsigned char y =x|0b00010000;
    printf("%d\n",y);
    // clear bit 6 which is the sixth bit from LSB
    unsigned char z =x&0b11011111;
    printf("%d\n",z);
    // toggle bit 0
    unsigned char A =x^0b00000001;
    printf("%d\n",A);
    // check if bit 7 is set which is bit num 7 starting from 0 
    if((x>>7)&1){
        printf("bit 7 is set");
    }
    else{
        printf("bit 7 is not set");
    }

return 0;
}
*/
//problem 4
/*
#define Set_bit(Reg,Bit) (Reg|=(1<<Bit))
#define Clr_bit(Reg,Bit) (Reg&=~(1<<Bit))
#define Tog_bit(Reg,Bit) (Reg^=(1<<Bit))
#define Read_bit(Reg,Bit) ((Reg>>Bit)&1)
int main() {
    unsigned char reg = 0b00001100;
    printf("Original reg: %02X\n", reg);

    Set_bit(reg, 0);     // set bit 0
    printf("After SET_BIT 0: %02X\n", reg);

    Clr_bit(reg, 3);   // clear bit 3
    printf("After CLEAR_BIT 3: %02X\n", reg);

    Tog_bit(reg, 2);  // toggle bit 2
    printf("After TOGGLE_BIT 2: %02X\n", reg);

    printf("Read bit 2: %d\n", Read_bit(reg, 2));
    printf("Read bit 0: %d\n", Read_bit(reg, 0));    

return 0;
}
*/
//problem 5
/*
The variable x is a global variable with an initial value of 5, 
so it is stored in the .data section in RAM, 
because initialized variables need memory at runtime 
and their initial value is copied from Flash during startup. 


The static variable y is uninitialized, so it goes into the .bss section in RAM,
which is automatically cleared to zero at program startup. 


The constant variable z is read-only with a value of 10, 
so it is stored in Flash memory (often in the .text) 
because its value never changes, 
saving RAM and allowing the CPU to access it directly from non-volatile memory.
*/
