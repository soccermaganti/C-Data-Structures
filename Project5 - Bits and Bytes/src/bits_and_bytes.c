#include <stdio.h>

void print_it() {
  // TODO
  printf("Bit operations are fun!\n");
}

void print_int() {
  // TODO
//printf("TODO\n");
 signed int x = 10;
 signed int y = 13;
 int sum = x + y;
 printf("x = %d\n", x);
 printf("y = %d\n", y);
 printf("size of signed int in bytes is %zu.\n", sizeof(int));
 printf("size of signed int in bits is %zu.\n", sizeof(int) * 8);  
 printf("%d + %d = %d.\n", x,y,sum);
 
}


void print_float() {
  // TODO
  //printf("TODO\n");
 float x = 10.000000;
 float y = 13.000000;
 float  sum = x + y; 
 printf("x = %f\n", x);
 printf("y = %f\n", y);
 printf("size of single float in bytes is %zu.\n", sizeof(float));
 printf("size of single float in bits is %zu.\n", sizeof(float) * 8);  
 printf("%f + %f = %f.\n", x,y,sum);
 printf("%f + %f = %d.\n",x,y, (int)sum);
}

void print_char() {
  // TODO
  //printf("TODO\n");
 char c = 'C';
 char a = 65;
 char f = 'F';
 char e = 'E';
 char b = 'B';

 printf("c = %c\n", c);
 printf("a = %c\n", a);
 printf("%c%c%c%c%c%c%c%c\n",c,a,f,e,b,a,b,e);
 printf("number of bytes: %zu.\n", sizeof(char) * 9);
}

void packing_bytes() {
  // TODO
  //printf("TODO \n");
 unsigned char b3 = 202;
  unsigned char b2 = 254;
  unsigned char b1 = 186;
  unsigned char b0 = 190;
  unsigned int u = 0;

  // u = b0 >> 16 | b1;
  // u = u >> 16 | b2;
  // u = u >> 16 | b3;
  u = b3 << 8 | b2;
  u = u << 8 | b1;
  u = u << 8 | b0;
  printf("%X\n",u);
}

void unpacking_bytes() {
  // TODO
  //printf("TODO 6\n");
 unsigned int i1 = 1835098984u;
 unsigned int i2 = 1768842611u; 

 char c,c1,c2,c3,c4,c5,c6,c7;

 c3 = i1;
 c2 = (i1 >> 8);
 c1 = (i1 >> 16);
 c = (i1 >> 24);

 c7 = i2;
 c6 = (i2 >> 8);
 c5 = (i2 >> 16);
 c4 = (i2 >> 24);
 printf("%c%c%c%c%c%c%c%c\n",c,c1,c2,c3,c4,c5,c6,c7);


}

void print_bits() {
  // TODO
  //printf("TODO\n");
}

void extracting_fields() {
  // TODO
  //printf("TODO\n");
   unsigned int number = 0xCAFEBABE;

   unsigned int field, field1, field2, field3, field4, field5,field6,field7,field8,field9;

  field = number >> 29;
  field1 = (number << 3) >> 28;
  field2 = (number << 7) >> 28;
  field3 = (number << 11) >> 29;
  field4 = (number << 14) >> 29;
  field5 = (number << 17) >> 28;
  field6 = (number << 21) >> 28;
  field7 = (number << 25) >> 29;
  field8 = (number << 28) >> 30;
  field9 = (number << 30) >> 30;

  printf("%d %d %d %d %d %d %d %d %d %d\n",field, field1, field2, field3, field4, field5,field6,field7,field8,field9);

  
  //unsigned int number1 = number >> 
}

void updating_fields() {
  // TODO
  //printf("TODO\n");
  unsigned int number = 17512807u;

  unsigned int number1 = 8;
  unsigned int newNumber1 = 7;
  number1 = number1 << 18;
  newNumber1 = ~(newNumber1 << 18);

  unsigned int number2 = 17;
  unsigned int newNumber2 = 14;
  number2 = number2 << 10;
  newNumber2 = ~(newNumber2 << 10);

  number = (number | number1) & newNumber1;
  number = (number | number2) & newNumber2;

  printf("%08X\n", number);
}

