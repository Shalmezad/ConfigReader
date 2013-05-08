#include <iostream>
#include "include/ConfigReader.h"

using namespace std;

int main()
{
    ConfigReader cr;
    cout<<cr.readValues("myConfig.txt");
    cout<<"The value of someVar is: "<<cr.getConfig("someVar")<<endl;
    cout<<"The value of someOtherVar is: "<<cr.getConfig("someOtherVar")<<endl;
    return 0;
}
