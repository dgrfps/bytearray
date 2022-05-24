#include <iostream>
#include <fstream>

int main()
{
    std::ofstream sample("PAYLOAD.sh", std::ios_base::ate);
    sample <<   "echo ==================\n"
                "echo \n"
                "echo   SAMPLE PAYLOAD  \n"
                "echo \n"
                "echo ==================\n";
    sample.close();
    system("chmod 777 PAYLOAD.sh");
    system("./PAYLOAD.sh");

    return 0;
}