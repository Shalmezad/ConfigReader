#include "../include/ConfigReader.h"
#include <fstream>
#include <iostream>

using namespace std;

ConfigReader::ConfigReader()
{

}

bool ConfigReader::readValues(string filename)
{
    //open the file for reading.
    string inputLine;
    ifstream configFile(filename.c_str());
    if(configFile.is_open()){
        //file is open, we are good to go
        while(configFile.good()){
            //grab a line of input
            getline(configFile, inputLine);
            //create a new configuration to add.
            configuration newConfig;
            //Find the = sign.
            int equalsSign = inputLine.find("=");
            //is there an = sign?
            if(equalsSign != string::npos){
                //split the line.
                newConfig.configName = inputLine.substr(0,equalsSign);
                newConfig.configValue = inputLine.substr(equalsSign+1);
                configs.push_back(newConfig);
            }
        }
        //don't forget to close the file when done
        configFile.close();
        return true;
    }
    else{
        //file is not open.
        return false;
    }
}

string ConfigReader::getConfig(string varName)
{
    //search the vector for the configuration.
    for(int a=0; a<configs.size(); a++){
        //do we have a match?
        if(configs[a].configName == varName){
            //we have a match.
            return configs[a].configValue;
        }
    }
    return "";
}
