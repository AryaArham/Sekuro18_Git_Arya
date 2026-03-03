#include <iostream>
#include <string>
using namespace std;

class RobotPemadam {
private:
    int jarak;
    string status;

public:
    void inputSensor(int x){
        jarak = x;
    }
    void prosesLogika(){
        if (jarak > 20) {
            status = "Maju Mencari Api";
        } else if (jarak <= 20 && jarak > 5){
            status = "UDAH DEKET NIH BRAY";
        } else {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }
    void cetakStatus(){
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status <<"]" << endl; 
    }
};

int main() {
    RobotPemadam robot;
    int InputJarak;

    while (true) {
        cout << "Masukkan angka: ";
        cin >> InputJarak;

        if (InputJarak == 67) break;

        robot.inputSensor(InputJarak);
        robot.prosesLogika();
        robot.cetakStatus();
    }
    return 0;

}