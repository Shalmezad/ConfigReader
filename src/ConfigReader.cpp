#include "../include/ConfigReader.h"
#include <fstream>

using namespace std;

ConfigReader::ConfigReader()
{

}

bool ConfigReader::readValues(string filename)
{
    //open the file for reading.
    ifstream configFile(filename.c_str());
    if(configFile.is_open()){
        //file is open, we are good to go
        return true;
    }
    else{
        //file is not open.
        return false;
    }
}
