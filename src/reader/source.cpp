#include <iostream>
#include <fstream>

#define arraysize(buff) (sizeof(buff)/sizeof((buff)[0]))

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        printf("[ERROR] You should pass the payload file as argument.\n ---> Ex: ./reader samplepayload.\n");
        return 0;
    }

    std::string path = argv[1];

    std::ifstream file(path, std::ios_base::binary); //OPEN FILE
        
    file.seekg(0, std::ios::end); //GET THE SIZE TO ALLOC THE BUFFER
    size_t length = file.tellg();
    file.seekg(0, std::ios::beg);

    char buffer[length]; //ALLOC THE BUFFER
    file.read(buffer, length); //DUMP FILE BINARYS INSIDE THE BUFFER

    std::ofstream header(std::string("payload.h"), std::ios::ate);
    header <<   "#ifndef PAYLOAD_H\n"
                "\n"
                "int buffer_size = " << length << ";\n"
                "unsigned int buffer[" << length << "] {\n";

    for(int i = 0; i < arraysize(buffer); i++)
        header << (unsigned int) buffer[i] << "" << ((i < (arraysize(buffer)-1)) ? ",":"};\n");
    
    header <<   "\n#define PAYLOAD_H\n"
                "#endif";

    header.close();
    printf("[INFO] Saved payload as payload.h, include this header on the payloader and compile.\n");
}