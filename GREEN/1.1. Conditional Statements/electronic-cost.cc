#include<iostream>
using namespace std;

// function declaration
int electronicCost(float kWspend);
float electronicCost2(float kWspend);

int main() {

    float kWspend;
    cout << "Enter your electric spend (kW): ";
    cin >> kWspend;

    cout << "Last month, you spend " << electronicCost(kWspend) << " VND for electronic." << endl;

    cin.get();
    cin.get();

    return 0;
}

// function definition
int electronicCost(float kWspend)  {
    // 5000: < 100 kW
    // 5200: 101 - 200 kW
    // 5500: 200 - 500 kW
    // 6000: > 500 kW
    int total = 5000 * kWspend;

    if (kWspend > 100) {
        total += (kWspend - 100) * 200;
    } else return total;

    if (kWspend > 200) { 
        total += (kWspend - 200) * 300;
    } else return total;

    if (kWspend > 500) {
        total += (kWspend - 500) * 500;
    }
    return total;
}

float electronicCost2(float kWspend) {
    if (kWspend <= 100) {
        return kWspend * 5000;
    } else if (kWspend <= 200) {
        return 100 * 5000 + (kWspend - 100) * 5200;
    } else if (kWspend <= 500) {
        return 100 * 5000 + 100 * 5200 + (kWspend - 200) * 5500;
    } else {
        return 100 * 5000 + 100 * 5200 + 300 * 5500 + (kWspend - 500) * 6000;
    }
}