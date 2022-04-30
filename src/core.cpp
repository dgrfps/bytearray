#include <iostream>

#include <fstream>
#include <istream>
#include <ostream>

#define INCASE(v) if((v))
#define EXIT(vd) { vd; return 1; }

uint8_t buffer[42]; //THE OUTPUT BYTE BUFFER

/*  
    PROGRAM OUTPUT:

    uint8_t buffer[42] {
        67,111,110,118,101,114,116,105,110,103,32,115,116,114,105,110,103,32,116,111,32,98,121,116,101,115,32,97,110,100,32,118,105,99,101,45,118,101,114,115,97,33
    };
*/

int main(int argc, char **argv)
{
    std::string input = "Converting string to bytes and vice-versa!";
    
    unsigned char buff[input.length()];
    std::copy(input.begin(), input.end(), buff);

    printf("uint8_t buffer[%i] {", input.length());

    for(int i = 0; i < input.length(); i++){
        ((i+1) == input.length() ? printf("%i", (uint8_t)buff[i]) : printf("%i,", (uint8_t)buff[i]));
        buffer[i] = (uint8_t)buff[i];
    }

    printf("};\n");

    //THIS PART BELOW IS JUST TO REVEAL THE OUTPUT
    for(int i = 0; i < (sizeof(buffer)/sizeof((buffer)[0])); i ++)
        printf("%c", (char)buffer[i]);
}