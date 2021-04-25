unsigned char swap_nibbles(unsigned char c)
{
     unsigned char temp1, temp2;

     temp1 = c & 0x0F;
     temp2 = c & 0xF0;
     temp1=temp1 << 4;
     temp2=temp2 >> 4;

     return(temp2|temp1); //adding the bits
}