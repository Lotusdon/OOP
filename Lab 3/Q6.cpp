#include <iostream>
#include <string>
using namespace std;

class Smartphone {
private:
    string company;
    string model;
    string display_resolution;
    string ram;
    string rom;
    string storage;

public:
   
    void setCompany(string company) {
        this->company = company;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setDisplayResolution(string display_resolution) {
        this->display_resolution = display_resolution;
    }

    void setRam(string ram) {
        this->ram = ram;
    }

    void setRom(string rom) {
        this->rom = rom;
    }

    void setStorage(string storage) {
        this->storage = storage;
    }

    
    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    string getDisplayResolution() {
        return display_resolution;
    }

    string getRam() {
        return ram;
    }

    string getRom() {
        return rom;
    }

    string getStorage() {
        return storage;
    }

    
    void makePhoneCall() {
        cout << "Making a phone call..." << endl;
    }

    void sendMessage() {
        cout << "Sending a message..." << endl;
    }

    void connectToWifi() {
        cout << "Connecting to Wi-Fi..." << endl;
    }

    void browseInternet() {
        cout << "Browsing the internet..." << endl;
    }
};

int main() {
    
    Smartphone smartphone1;
    smartphone1.setCompany("Apple");
    smartphone1.setModel("iPhone 14");
    smartphone1.setDisplayResolution("2532x1170");
    smartphone1.setRam("6GB");
    smartphone1.setRom("128GB");
    smartphone1.setStorage("128GB");

    Smartphone smartphone2;
    smartphone2.setCompany("Samsung");
    smartphone2.setModel("Galaxy S23");
    smartphone2.setDisplayResolution("2340x1080");
    smartphone2.setRam("8GB");
    smartphone2.setRom("256GB");
    smartphone2.setStorage("256GB");

   
    cout << "Smartphone 1 details: " << endl;
    cout << "Company: " << smartphone1.getCompany() << endl;
    cout << "Model: " << smartphone1.getModel() << endl;
    cout << "Display Resolution: " << smartphone1.getDisplayResolution() << endl;
    cout << "RAM: " << smartphone1.getRam() << endl;
    cout << "ROM: " << smartphone1.getRom() << endl;
    cout << "Storage: " << smartphone1.getStorage() << endl;

    cout << endl;

    cout << "Smartphone 2 details: " << endl;
    cout << "Company: " << smartphone2.getCompany() << endl;
    cout << "Model: " << smartphone2.getModel() << endl;
    cout << "Display Resolution: " << smartphone2.getDisplayResolution() << endl;
    cout << "RAM: " << smartphone2.getRam() << endl;
    cout << "ROM: " << smartphone2.getRom() << endl;
    cout << "Storage: " << smartphone2.getStorage() << endl;

    
    smartphone1.makePhoneCall();
    smartphone2.sendMessage();
    smartphone1.connectToWifi();
    smartphone2.browseInternet();

    return 0;
}
