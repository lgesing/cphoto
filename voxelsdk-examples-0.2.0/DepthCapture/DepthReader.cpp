
#include "CameraSystem.h"

#include "SimpleOpt.h"
#include "Common.h"
#include "Logger.h"
#include "UVCStreamer.h"
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace Voxel;

int main(int argc, char *argv[])
{
    std::ifstream file("raw.txt", std::ios::binary | std::ios::out);

    std::cout << "Read file:" << std::endl;
    int counter = 0;
    while (!file.eof())
    {


        char * buffer = new char [sizeof(int)];

        file.read(buffer,sizeof(int));

        std::cout <<  &buffer << std::endl;

        ++counter;
        if (counter > 10)
            break;
    }

    std::cout << "END" << std::endl;

    file.close();

    return 0;
}
