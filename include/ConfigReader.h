#ifndef CONFIGREADER_H
#define CONFIGREADER_H

#include <vector>
#include <string>

/** \brief A Configuration Pair
 * Storage for configuration name and value
 */
struct configuration
{
    /**
     *The name of the configuration variable
     */
    std::string configName;
    /**
     *The value of the configuration variable
     */
    std::string configValue;
};

/** \brief A Configuration Reader
 * Reads/parses configuration files */
class ConfigReader
{
    public:
        /** Constructor*/
        ConfigReader();
        /** \brief Reads a configuration file
         * \param filename The name of the file to read
         * \return True if file was read successfully*/
        bool readValues(std::string);
        /** \brief Returns the configuration value
         * \param varName Name of the configuration variable
         * \return Value of the configuration variable*/
        std::string getConfig(std::string);
    private:
        /** Storage for configuration pairs*/
        std::vector<configuration> configs;
};

#endif // CONFIGREADER_H
