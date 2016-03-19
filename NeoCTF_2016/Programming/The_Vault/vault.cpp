#include <stdio.h>
 
static unsigned char vault[] = {  
//secure combination
  0x7c, 0x7c, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x7c, 0x7c,      
  0x0a, 0x7c, 0x7c, 0x2f, 0x2f, 0x24, 0x5c, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c,      
  0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c,      
  0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c,      
  0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c,      
  0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c,      
  0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x2f, 0x24, 0x5c, 0x5c, 0x7c,      
  0x7c, 0x0a, 0x7c, 0x7c, 0x28, 0x31, 0x30, 0x30, 0x29, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x7c, 0x20, 0x52, 0x45, 0x53, 0x45, 0x52, 0x56, 0x45,      
  0x20, 0x42, 0x41, 0x4e, 0x4b, 0x20, 0x4f, 0x46, 0x20, 0x4e, 0x45, 0x4F,      
  0x20, 0x20, 0x7c, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,      
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x28, 0x31, 0x30, 0x30, 0x29,
  0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x5c, 0x5c, 0x24, 0x2f, 0x2f, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7e, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x27, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d,
  0x2d, 0x2d, 0x2d, 0x27, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x5c, 0x24, 0x2f,
  0x2f, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x3c, 0x3c, 0x20, 0x2f, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x24, 0x5c, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f,
  0x2f, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x5c, 0x5c, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20,
  0x3e, 0x3e, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x3e, 0x3e, 0x7c, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x4c, 0x5c, 0x5c, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f,
  0x2f, 0x20, 0x2f, 0x2f, 0x2f, 0x2e, 0x2e, 0x29, 0x20, 0x5c, 0x5c, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x58, 0x58, 0x58, 0x58, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x7c, 0x3c, 0x3c, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x3c, 0x3c, 0x7c, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x5c, 0x20, 0x2f, 0x2f,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c,
  0x7c, 0x20, 0x3c, 0x7c, 0x7c, 0x20, 0x20, 0x3e, 0x5c, 0x20, 0x20, 0x7c,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x7c, 0x3e, 0x3e, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x3e, 0x3e, 0x7c,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x24, 0x2f,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x7c, 0x7c, 0x20, 0x20, 0x24, 0x24, 0x20, 0x2d, 0x2d, 0x2f, 0x20, 0x20,
  0x7c, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x7c, 0x3c, 0x3c, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x3c, 0x3c,
  0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x46, 0x72, 0x65, 0x65, 0x20, 0x74,
  0x6f, 0x20, 0x55, 0x73, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x2a, 0x5c, 0x5c, 0x20, 0x20, 0x7c, 0x5c, 0x5f, 0x2f, 0x20, 0x20,
  0x2f, 0x2f, 0x2a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x7c, 0x3e, 0x3e, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c, 0x3e,
  0x3e, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x2a, 0x5c, 0x5c, 0x2f, 0x5f, 0x5f, 0x5f, 0x5c, 0x5f,
  0x2f, 0x2f, 0x2a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x7c, 0x3c, 0x3c, 0x7c, 0x7c, 0x0a, 0x7c, 0x7c,
  0x3c, 0x3c, 0x5c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x52, 0x61, 0x74,
  0x69, 0x6e, 0x67, 0x3a, 0x20, 0x45, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f,
  0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x46, 0x20, 0x4C, 0x41, 0x47, 0x7B,
  0x48, 0x49, 0x5F, 0x5c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
  0x20, 0x20, 0x20, 0x20, 0x58, 0x58, 0x20, 0x58, 0x58, 0x58, 0x58, 0x58,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x3e, 0x3e, 0x7c, 0x7c, 0x0a, 0x7c,
  0x7c, 0x2f, 0x2f, 0x24, 0x5c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7e, 0x7c,
  0x20, 0x20, 0x20, 0x20, 0x52, 0x45, 0x50, 0x55, 0x42, 0x4c, 0x49, 0x43,
  0x5f, 0x4f, 0x46, 0x5F, 0x4E, 0x45, 0x4F, 0x7d, 0x41, 0x5F, 0x20, 0x20,
  0x7c, 0x7e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x24, 0x5c, 0x5c, 0x7c, 0x7c, 0x0a,
  0x7c, 0x7c, 0x28, 0x31, 0x30, 0x30, 0x29, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x20, 0x20, 0x20, 0x4f, 0x4e, 0x45, 0x20, 0x48, 0x55, 0x4e,
  0x44, 0x52, 0x45, 0x44, 0x20, 0x52, 0x55, 0x50, 0x45, 0x45, 0x53, 0x20,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x28, 0x31, 0x30, 0x30, 0x29, 0x7c, 0x7c,
  0x0a, 0x7c, 0x7c, 0x5c, 0x5c, 0x24, 0x2f, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f,
  0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f,
  0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f,
  0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f,
  0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f,
  0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x2f, 0x5c, 0x5c, 0x24, 0x2f, 0x2f, 0x7c,
  0x7c, 0x0a, 0x7c, 0x7c, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
  0x7c, 0x7c, 0x0a, 0x00
};
 
int main(void)
{
    printf("Welcome to the most secure bank in NEO.");
    printf("%s\n", vault);
    return 0;
}
