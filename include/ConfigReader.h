#ifndef CONFIGREADER_H
#define CONFIGREADER_H

#include <vector>
#include <string>

struct configuration
{
    std::string configName;
    std::string configValue;
};

class ConfigReader
{
    public:
        ConfigReader();
        bool readValues(std::string);
        std::string getConfig(std::string);
    private:
        std::vector<configuration> configs;
};

#endif // CONFIGREADER_H
