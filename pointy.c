# include <stdio.h>

int main() {

  //declares and initializes an unsigned int to some value > 2.1 billion
  unsigned int i = 3000000000;

  //declares a char * that points to the address of your unsigned int
  char * ptr = &i;
  
  printf( "int in hex: %x \n", i);

  //use your pointer to print out each individual byte of your int
  for( int times = 0; times < 4; times++) {
    printf( "individual bytes: %hhx \n", *ptr);
    ptr++;
  }

  for( int times = 0; times < 4; times++) {
    (*ptr)++;
  }
  printf( "after incrementing by 1: %x, %u \n", i, i);

   for( int times = 0; times < 4; times++) {
    (*ptr) += 16;
  }
    printf( "after incrementing by 16: %x, %u \n", i, i);

  return 0;
}
