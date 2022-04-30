#include <iostream>

#include <fstream>
#include <istream>
#include <ostream>

#define INCASE(v) if((v))
#define EXIT(vd) { vd; return 1; }

uint8_t buffer[42]; //THE OUTPUT BYTE BUFFER, YOU MAY NOW NEED THIS AND THE LINE 29/30.

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
