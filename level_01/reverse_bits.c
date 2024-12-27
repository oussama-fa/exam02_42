#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
      unsigned int i = 8;
      unsigned char res = 0;
      while (i--)
      {
        res = (res << 1) | (octet & 1);
        octet = octet >>1;
      }
      return (res);
}

