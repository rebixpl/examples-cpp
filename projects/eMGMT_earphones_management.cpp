// eMGMT -> earphones management

#include <iostream>
#include <string>

#define ERROR_CODE_01 "not recognized model, thus brand not found"

// --------------------VARIABLES TO CHANGE
bool connectedLeft = false; // earphones connection to device indicator
bool connectedRight = false; // earphones connection to device indicator
std::string connectedModel = "MI AIRDOTS WHITE"; // model of connected earpods
/* MODELS
1. MI AIRDOTS WHITE
2. APPLE EARPODS
/* MODELS */
// --------------------VARIABLES TO CHANGEE

// VARIABLES TO NOT CHANGE
std::string connectedBrand = ERROR_CODE_01;
// VARIABLES TO NOT CHANGE

// xiaomi earphones class
class xiaomi{
private:
    std::string model = "none";
    bool connectedLeft = false;
    bool connectedRight = false;

public:
    xiaomi(const std::string inputModel, const bool inputConnectedLeft , const bool inputConnectedRight){
        model = inputModel;
        connectedLeft = inputConnectedLeft;
        connectedRight = inputConnectedRight;
    };

    void Status(){
        std::cout << "Brand: XIAOMI" << "\n";
        std::cout << "Model: " << model << "\n";

        // check connection with left earphone
        if (connectedLeft){
            std::cout << "Left earphones: connected." << "\n";
        } else {
            std::cout << "Left earphones: disconnected." << "\n";
        }

        // check connection with right earphone
        if (connectedRight){
            std::cout << "Right earphones: connected." << "\n";
        } else {
            std::cout << "Right earphones: disconnected." << "\n";
        }
    }
};

// apple earphones class
class apple{
private:
    std::string model = "none";
    bool connectedLeft = false;
    bool connectedRight = false;

public:
    apple(const std::string inputModel, const bool inputConnectedLeft , const bool inputConnectedRight){
        model = inputModel;
        connectedLeft = inputConnectedLeft;
        connectedRight = inputConnectedRight;
    };

    void Status(){
        std::cout << "Brand: APPLE" << "\n";
        std::cout << "Model: " << model << "\n";

        // check connection with left earphone
        if (connectedLeft){
            std::cout << "Left earphones: connected." << "\n";
        } else {
            std::cout << "Left earphones: disconnected." << "\n";
        }

        // check connection with right earphone
        if (connectedRight){
            std::cout << "Right earphones: connected." << "\n";
        } else {
            std::cout << "Right earphones: disconnected." << "\n";
        }
    }
};

template <typename T1,  typename T2>
class earpods{
private:
    T1 Brand;
    T1 Model;
    T2 LeftEP;
    T2 RightEP;

public:
    // Konstruktor inicjalizujący zmienne składowe
    earpods(const T1& inputBrand, const T1& inputModel, const T2& inputLeftEP, const T2& inputRightEP){
        Brand = inputBrand;
        Model = inputModel;
        LeftEP = inputLeftEP;
        RightEP = inputRightEP;
    };

    // return the values
    void ConnectEarpods(){
        if(Brand == "xiaomi"){
            xiaomi session(Model, LeftEP, RightEP);
            session.Status();
        } else if (Brand == "apple"){
            apple session(Model, LeftEP, RightEP);
            session.Status();
        }
    }
};

int main(){
    // check connected earphones model and set brand
    if(connectedModel == "MI AIRDOTS WHITE"){
        connectedBrand = "xiaomi";
    } else if(connectedModel == "APPLE EARPODS"){
        connectedBrand = "apple";
    } else {
        std::cout << connectedBrand << "\n";
    }
    earpods <std::string, bool> checkEarpods (connectedBrand, connectedModel,connectedLeft, connectedRight ); 
    checkEarpods.ConnectEarpods();
    
    return 0;
}
