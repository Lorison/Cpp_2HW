#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    // Устанавливаем кодировку консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    // Ввод данных
    char gender;
    string zodiac;
    int age;
    
    cout << "Введите пол (мужской-m/женский-f): ";
    cin >> gender;
    gender = tolower(gender);
    
    cout << "Введите один из знаков зодиака на английском (рак - cancer, скорпион - scorpio, рыбы - pisces, телец - taurus, дева - virgo, козерог - capricorn): ";
    cin >> zodiac;
    for (char &c : zodiac) {
        c = tolower(c);
    }
    
    cout << "Введите возраст: ";
    cin >> age;

    // Проверка знаков зодиака
    bool isWaterSign = (zodiac == "cancer" || zodiac == "scorpio" || zodiac == "pisces");
    bool isEarthSign = (zodiac == "taurus" || zodiac == "virgo" || zodiac == "capricorn");

    // Вывод предсказания
    cout << "\nВаше предсказание:\n";
    
    if (gender == 'm' && isWaterSign && age < 40) {
        cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.\n";
    } 
    else if (gender == 'f' && isEarthSign && age >= 15 && age <= 30) {
        cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n"
             << "Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.\n";
    }
    else {
        cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n";
    }

    cout << "\nНажмите Enter для выхода...";
    cin.ignore();
    cin.get();

    return 0;
}