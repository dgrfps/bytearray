# C++ String to Byte-Array
Small code to transform a string into a byte array and vice-versa.

Example input: 
```cpp 
std::string input = "Converting string to bytes and vice-versa!";
```
Will output via console this:
```cpp 
uint8_t buffer[42] {67,111,110,118,101,114,116,105,110,103,32,115,116,114,105,110,103,32,116,111,32,98,121,116,101,115,32,97,110,100,32,118,105,99,101,45,118,101,114,115,97,33};
Converting string to bytes and vice-versa! 
```

The 2nd output line is the reverse conversion:
```cpp
for(int i = 0; i < (sizeof(buffer)/sizeof((buffer)[0])); i ++)
    printf("%c", (char)buffer[i]);
```
