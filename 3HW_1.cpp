#include <iostream>
#include <iomanip>
#include <clocale>
#include <windows.h> // ��� ������ � ���������� � Windows

using namespace std;

int main() {
    // ��������� ��������� � ������ ��� ���������
    SetConsoleOutputCP(1251); // ��������� ������ Windows-1251
    SetConsoleCP(1251);       // ��������� ����� Windows-1251
    setlocale(LC_ALL, "Russian");

    // ����� ��������� ��� ������� ���
    cout << "������� ���������� ��� ��������� ��� (||):" << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(10) << "A" << setw(10) << "B" << setw(10) << "A || B" << endl;
    cout << "----------------------------------------" << endl;
    
    // ����� ���� ���������� ��� ���
    cout << setw(10) << true << setw(10) << true << setw(10) << (true || true) << endl;
    cout << setw(10) << false << setw(10) << true << setw(10) << (false || true) << endl;
    cout << setw(10) << true << setw(10) << false << setw(10) << (true || false) << endl;
    cout << setw(10) << false << setw(10) << false << setw(10) << (false || false) << endl;

    // ����� ��������� ��� ������� �
    cout << "\n������� ���������� ��� ��������� � (&&):" << endl;
    cout << "----------------------------------------" << endl;
    cout << left << setw(10) << "A" << setw(10) << "B" << setw(10) << "A && B" << endl;
    cout << "----------------------------------------" << endl;
    
    // ����� ���� ���������� ��� �
    cout << setw(10) << true << setw(10) << true << setw(10) << (true && true) << endl;
    cout << setw(10) << false << setw(10) << true << setw(10) << (false && true) << endl;
    cout << setw(10) << true << setw(10) << false << setw(10) << (true && false) << endl;
    cout << setw(10) << false << setw(10) << false << setw(10) << (false && false) << endl;

    // �������� ������� Enter ����� ��������� �������
    cout << "\n������� Enter ��� ������...";
    cin.ignore(); // ������� ������ �����
    cin.get();    // �������� �����

    return 0;
}