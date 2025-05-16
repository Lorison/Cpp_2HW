#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    // ������������� ��������� �������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    // ���� ������
    char gender;
    string zodiac;
    int age;
    
    cout << "������� ��� (�������-m/�������-f): ";
    cin >> gender;
    gender = tolower(gender);
    
    cout << "������� ���� �� ������ ������� �� ���������� (��� - cancer, �������� - scorpio, ���� - pisces, ����� - taurus, ���� - virgo, ������� - capricorn): ";
    cin >> zodiac;
    for (char &c : zodiac) {
        c = tolower(c);
    }
    
    cout << "������� �������: ";
    cin >> age;

    // �������� ������ �������
    bool isWaterSign = (zodiac == "cancer" || zodiac == "scorpio" || zodiac == "pisces");
    bool isEarthSign = (zodiac == "taurus" || zodiac == "virgo" || zodiac == "capricorn");

    // ����� ������������
    cout << "\n���� ������������:\n";
    
    if (gender == 'm' && isWaterSign && age < 40) {
        cout << "������� ����� ������������ ����. ����� �������� ����, ��� ������ �������� ����� �����������.\n";
    } 
    else if (gender == 'f' && isEarthSign && age >= 15 && age <= 30) {
        cout << "����������� ����� �������� ��� ������� � ��������, ���������� �������� ���������� � ����������������� ���������.\n"
             << "����� �� ������ ������, �� � ���������: ������� ����, ������� ������� ����.\n";
    }
    else {
        cout << "�������� ��� ��� ��������� � ����������. ��������� ������� ����� ;)\n";
    }

    cout << "\n������� Enter ��� ������...";
    cin.ignore();
    cin.get();

    return 0;
}