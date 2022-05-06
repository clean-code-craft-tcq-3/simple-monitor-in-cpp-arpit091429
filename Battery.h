#include <iostream>
using namespace std;

class Battery
{
  public:
    float temperature, stateOfCharge, chargeRate;
    bool  checkTempRange(float t);
    bool  checkSocRange(float s);
    bool  checkChargeRateRange(float c);
    bool  checkBatteryIsOk(float t, float s, float c);
};
