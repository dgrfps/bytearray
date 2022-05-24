# SAMPLE  
This is a sample payload, this file will be:
 1. Converted to binary array (**READER**)
 2. Dumped to a header file (**payload.h**)
 3. Header file will be compiled by **PAYLOADER**
 4. **Payloader** will write a file using the binary array located at **payload.h**
 5. Payloader will execute the wrote file

Payloader is a simple bypass to some kinds of antivirus. 

> ***Bypass would be better if used array as a string (and then converted to an array) instead of declaring the array in the header file.***