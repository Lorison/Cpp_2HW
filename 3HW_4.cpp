#include <iostream>
#include <string>
#include <clocale>
#include <windows.h>

using namespace std;

// �������� ���������
string numberToText(int num) {
    if (num < -99 || num > 99) return "";

    // ������� ��������� �������������
    string units[] = {"", "����", "���", "���", "������", "����", 
                     "�����", "����", "������", "������"};
    string teens[] = {"������", "�����������", "����������", "����������",
                     "������������", "����������", "�����������",
                     "����������", "������������", "������������"};
    string tens[] = {"", "������", "��������", "��������", "�����",
                    "���������", "����������", "���������",
                    "�����������", "���������"};

    if (num == 0) return "����";
    
    string result;
    bool negative = false;
    
    // ��������� ������������� �����
    if (num < 0) {
        negative = true;
        num = -num;
    }

    // ������ ������������ ������:
    if (num >= 20) {
        result = tens[num / 10];
        if (num % 10 != 0) {
            result += " " + units[num % 10];
        }
    } else if (num >= 10) {
        result = teens[num - 10];
    } else {
        result = units[num];
    }

    if (negative) {
        result = "����� " + result;
    }

    return result;
}
// ��������� ���������
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    // ���� �����
    int num1, num2;
    
    cout << "������� ����� �����: ";
    cin >> num1;
    
    cout << "������� ����� �����: ";
    cin >> num2;

    // �������� ��������� (-99 �� 99)
    if (num1 <= -100 || num1 >= 100 || num2 <= -100 || num2 >= 100) {
        cout << "������! ���� �� ����� ��� ���������!" << endl;
        system("pause");  // �������� ����� ���������
        return 0;
    }

    // �������������� � �����
    string text1 = numberToText(num1);
    string text2 = numberToText(num2);

    // ��������� � ����� ����������
    if (num1 < num2) {
        cout << text1 << " ������ ��� " << text2 << endl;
    } else if (num1 > num2) {
        cout << text1 << " ������ ��� " << text2 << endl;
    } else {
        cout << text1 << " ����� " << text2 << endl;
    }

    // �������� ����� ��������� �������
    cout << "\n������� Enter ��� ������...";
    cin.ignore();  // ������� ������
    cin.get();     // �������� ������� Enter

    return 0;
}