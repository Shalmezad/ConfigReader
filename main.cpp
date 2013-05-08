#include <iostream>
#include "include/ConfigReader.h"

using namespace std;

int main()
{
    ConfigReader cr;
    cout<<cr.readValues("myConfig.txt");
    return 0;
}
