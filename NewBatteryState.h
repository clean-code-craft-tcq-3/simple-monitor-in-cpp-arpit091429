#include "Battery.h"
class NewBatteryState : public Battery
{
    bool checkTempRange(float temperature)
    {
        if (temperature < 0 || temperature > 45)
        {
            cout << "Temperature out of range!\n";
            return false;
        }
        else
            return true;
    }
    bool checkSocRange(float soc)
    {
        if (soc < 20 || soc > 80)
        {
            cout << "State of Charge out of range!\n";
            return false;
        }
        else
            return true;
    }
    bool checkChargeRateRange(float chargeRate)
    {
        if (chargeRate > 0.8)
        {
            cout << "Charge Rate out of range!\n";
            return false;
        }
        else
            return true;
    }
      public:
    bool checkBatteryIsOk(float t, float s, float c)
    {
        return (checkTempRange(t) && checkSocRange(s) && checkChargeRateRange(c));
    }
};
