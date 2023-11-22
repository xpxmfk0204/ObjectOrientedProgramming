// #include <iostream>
// using namespace std;

// class TV {
//     public:
//     TV() {
//         X = 1000;
//         Y = 500;
//         nSwitch = 1;
//         voltage = 220;
//         onoff = false;
//         bright = 50;
//     };
//     int nSwitch;
//     float voltage;
//     bool onoff;
//     int X, Y;

//     void turnOn() {
//         if(this->onoff) onoff = false;
//         else onoff = true;
//     }
//     void brightControl() {
//         bright = float(rand() % 100);
//     };
//     float const getBrightness() {
//         return bright;
//     };
//     private:
//     float bright;
//     void turnChannel(int n) {channel = n;}
//     void volumeControl() {
//         volume = float(rand() % 10);
//     }
//     int channel;
//     float volume;
// };

// class Oscope : public TV {
//     public:
//     Oscope() {
//         X = 512;
//     };
//     float getVoltage() {
//         if (!onoff) return 0;
//         return (float)(rand() % 50) - 25.;
//     }
//     float getCurrent() {
//         if (!onoff) return 0;
//         return (float)(rand() % 20) - 10.;
//     }
// };

// int main(void) {
//     TV tv1, tv2;
//     Oscope os1, os2;
//     cout << "(" << os1.X << " " << os1.Y << ")\n";
//     os1.turnOn();
//     cout << " on/off " << os1.onoff << " " << os2.onoff << endl;

//     cout << " bright \n";
//     cout << os1.getBrightness() << " " << os2.getBrightness() << endl;
//     cout << " voltage \n";
//     cout << os1.getVoltage() << " " << os2.getVoltage() << endl;
// }