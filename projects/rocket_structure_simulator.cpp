////////////////////////////
//Rocket Structure Simulator
//By Chris G
////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class FuelTank
{
private:
    int MAX_capacity = 0, capacity = 0;

    friend class Rocket;

public:
    FuelTank() {}

    void setMAX_capacity(int inputMAX_capacity)
    {
        this->MAX_capacity = inputMAX_capacity;
    }

    void charge_TANK()
    {
        if (capacity < MAX_capacity)
        {
            do
            {
            capacity++;
            cout << "FuelTank: capacity = " << capacity << " / " << MAX_capacity << "\n";
            } while (capacity < MAX_capacity);
        }

    }
};

class Frame
{
private:
    int weight = 0; //tons

    friend class Rocket;

public:
    Frame() {}

    void setWeight(int inputWeight)
    {
        this->weight = inputWeight;
    }
};

class Oxidizer
{
private:
    int performanceRate = 0; //0-100%
    int capacity = 0;

    friend class Rocket;

public:
    Oxidizer() {}

    void setPerformanceRate(int inputRate)
    {
        this->performanceRate = inputRate;
    }

    void setCapacity(int inputCapacity)
    {
        this->capacity = inputCapacity;
    }
};

class Pumps
{
private:
    int performanceRate = 0; //0-100%

    friend class Rocket;

public:
    Pumps() {}

    void setPerformanceRate(int inputRate)
    {
        this->performanceRate = inputRate;
    }
};

class Thruster
{
private:
    int power = 0, performanceRate = 0;

    friend class Rocket;

public:
    Thruster() {}

    void setPower(int inputpower)
    {
        this->power = inputpower;
    }

    void setPerformanceRate(int inputRate)
    {
        this->performanceRate = inputRate;
    }
};

class guidanceSystem
{
private:
    int signalStrength = 0;
    string computerNAME;

    friend class Rocket;

public:
    guidanceSystem() {}

    void setSignalStrength(int inputSignalStr)
    {
        this->signalStrength = inputSignalStr;
    }

    void setComputerNAME(string inputNAME)
    {
        this->computerNAME = inputNAME;
    }
};

class Rocket: private FuelTank, private Frame, private Oxidizer, private Pumps, private Thruster, private guidanceSystem
{
private:

    string rocketName;

    string rocketSpecs;

public:
    Rocket()
    {
        //Creating parts of the rocket

        //FUEL TANK
        FuelTank MyFuelTankV1;
        MyFuelTankV1.setMAX_capacity(300);

        //FRAME
        Frame Cubic1F;
        Cubic1F.setWeight(27);

        //OXIDIZER
        Oxidizer OxideIT;
        OxideIT.setCapacity(200);
        OxideIT.setPerformanceRate(80); //80% energy gain

        //PUMPS
        Pumps GOTHEREV2PUMPSsystem;
        GOTHEREV2PUMPSsystem.setPerformanceRate(95); //95 %

        //THRUSTER
        Thruster ULTRApowerV12;
        ULTRApowerV12.setPerformanceRate(84); //84%
        ULTRApowerV12.setPower(200000); //N ->

        //GUIDANCE SYSTEM
        guidanceSystem teslaBOTspace;
        teslaBOTspace.setComputerNAME("xiaomiSPACE v1.2");
        teslaBOTspace.setSignalStrength(-223);

        rocketSpecs = "FuelTank: capacity = " + to_string(MyFuelTankV1.capacity) + "\n"
                    + "FuelTank: MAX capacity = " + to_string(MyFuelTankV1.MAX_capacity) + "\n"
                    + "\n"
                    + "Frame: weight = " + to_string(Cubic1F.weight) + "\n"
                    + "\n"
                    + "Oxidizer: performance rate = " + to_string(OxideIT.performanceRate) + "\n"
                    + "Oxidizer: capacity = " + to_string(OxideIT.capacity) + "\n"
                    + "\n"
                    + "Pumps: performance rate = " + to_string(GOTHEREV2PUMPSsystem.performanceRate) + "\n"
                    + "\n"
                    + "Thruster: power = " + to_string(ULTRApowerV12.power) + "\n"
                    + "Thruster: performance rate = " + to_string(ULTRApowerV12.performanceRate) + "\n"
                    + "\n"
                    + "Guidance system: signal strength = " + to_string(teslaBOTspace.signalStrength) + "\n"
                    + "Guidance system: computer name = " + teslaBOTspace.computerNAME + "\n"
                    + "\n";
    }

    void setRocketName(string inputName)
    {
        this->rocketName = inputName;
    }

    void ShowRocketSpecs()
    {
        cout << "THIS ROCKET SPECS: " << "\n";
        cout << rocketSpecs;
        cout << "\n Rocket name: " + rocketName + "\n";
    }
};

int main()
{
    Rocket MyRocket;
    MyRocket.setRocketName("SRAMARS"); //Rakieta najpotężniejsza nie do powstrzymania

    MyRocket.ShowRocketSpecs();

    return 0;
}
