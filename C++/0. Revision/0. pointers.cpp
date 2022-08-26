#include <iostream>


int main() {

// ----------------------------------------------------------------------------------
  //INTRODUCTION TO POINTER

  // memory allocation
  // int - 4 bytes (32 bits)
  // char - 1 byte (8 bits)
  // float - 4 bytes (32 bits)

  // pointers variables that store address of another variable

  // creating a pointer

  int a;
  int *p;

  // & is used to get the address of a variable
  // though a is intialized with address at first it is not yet assigned a value
  p = &a; 
  a = 5;

  // * is used to get the value of the variable at the address
  // * is also called dereference operator
  
  std::cout << "Value stored at " << p << " address is " << *p << std::endl;
  // OUTPUTS: Value stored at 0x61ff08 address is 5

  // Changing the value of the address using pointer and dereferencing operator
  *p = 10;

  std::cout << "Value stored at " << p << " address is " << *p << std::endl;
  // OUTPUTS: Value stored at 0x61ff08 address is 10


// -------------------------------------------------------------------------------------------
  // POINTER ARITHMETIC

  std::cout << "The address of p is " << p << " address value of p+1 is " << p + 1 << "\nThe size of p is " << sizeof(p) << " bytes" << std::endl;
  // OUTPUTS: The address of p is 0x61ff08 address value of p+1 is 0x61ff0c
  // The size of p is 4 bytes

// -------------------------------------------------------------------------------------------
  // POINTER TYPES

// int* stores int
// char* stores char
// float* stores float


  return 0;
}


