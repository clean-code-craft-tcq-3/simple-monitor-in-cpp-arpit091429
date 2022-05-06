#include "NewBatteryState.h"
#include <assert.h>

void testBattery()
{
    NewBatteryState n;
    // temperature test
    assert(n.checkBatteryIsOk(0, 30, 0.5) == true);
    assert(n.checkBatteryIsOk(-1, 30, 0.5) == false);
    assert(n.checkBatteryIsOk(45, 30, 0.5) == true);
    assert(n.checkBatteryIsOk(46, 30, 0.5) == false);
    assert(n.checkBatteryIsOk(30, 30, 0.5) == true);

    // SOC test
    assert(n.checkBatteryIsOk(45, 19, 0.5) == false);
    assert(n.checkBatteryIsOk(45, 20, 0.5) == true);
    assert(n.checkBatteryIsOk(45, 80, 0.5) == true);
    assert(n.checkBatteryIsOk(45, 81, 0.5) == false);
    assert(n.checkBatteryIsOk(45, 50, 0.5) == true);

    // Range test
    assert(n.checkBatteryIsOk(45, 50, 0.8) == false);
    assert(n.checkBatteryIsOk(45, 50, 0.9) == false);
    assert(n.checkBatteryIsOk(45, 50, 0.7) == true);
}
