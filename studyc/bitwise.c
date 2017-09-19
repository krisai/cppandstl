
#include <stdio.h>

void prtBin(unsigned int num){
	unsigned mask = 1u << 31;
	for (; mask; mask >>= 1){
		printf("%d", num & mask ? 1 : 0);
	}
	printf("\n");
}

int main(){
	//   octal decimal binary hexadecimal
	//  and &  xor  ^   or |   not ~
	
	// 	  0101 (decimal 5)
	//XOR 0011 (decimal 3)
	//  = 0110 (decimal 6)

	//     0101 (decimal 5)
	//	OR 0011 (decimal 3)
	//	 = 0111 (decimal 7)

	//    0110 (decimal 6)
	//AND 1101 (decimal 13)
	 // = 0100 (decimal 4)

	// NOT 10101011
	  // = 01010100

	printf("%x\n", 0xee & 0x99);
	printf("%x\n", 0xcc ^ 0x11);
	printf("%x\n", 0xcc | 0x11);
	printf("%x\n", ~ 0x11);
	printf("%d\n", 0xA5);
	printf("%x\n", 0xA5 << 2);
	prtBin(0x12);
	return 0;
}

