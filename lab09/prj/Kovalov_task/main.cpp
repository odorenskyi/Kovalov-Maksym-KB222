#include <iostream>
#include <cmath>
#include <conio.h>
#include "../moduleskovalov/kovalov_lib.h"
#define ARR_S 7
using namespace std;

int main()
{
   setlocale(LC_ALL, "ukr");
   float x, y, z, kwh;
   float tempC, tempSum = 0;
   int N;
   char char_input;
   bool exit = false, is_zero_bit = true;

   // 9.4

while (!exit) {
    cout << "\"n\" - ������� s_calculation()\n"
         << "\"v\" - 9.1\n"
         << "\"c\" - 9.2\n"
         << "\"x\" - 9.3\n"
         << "\"z/Z\" - ��������� ��������" << endl;
    char_input = _getch();
    cout << endl;
    switch (char_input) {

        case 'n':
            cout << "������ 9.0" << endl << "���������� �����." << endl;
            cout << "������ x,y,z:" << endl;
            cin >> x >> y >> z;
            if(cin.fail()){
                cin.clear();
                cin.ignore(10000, '\n');
                cout << ("�������� ������������ ��� �����. ������ �����.") << endl;
                break;
            }
            cout << s_calculation(x, y, z) << endl;
            break;
        case 'v':
            cout << "������ 9.1" << endl << "�-�� ������� �����������㳿 �� �����." << endl;
            cin >> kwh;
            if(cin.fail()){
                cin.clear();
                cin.ignore(10000, '\n');
                cout << ("�������� ������������ ��� �����. ������ �����.") << endl;
                break;
            }
            cout << kwh_calculation(kwh) << endl;
            break;
        case 'c':
            cout << "������ 9.2" << endl << "��������� �������� ����������� �� �� � �������." << endl;
            for (int i = 0; i < 12; i++) {
                cin >> tempC;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << ("�������� ������������ ��� �����. ������ �����.") << endl;
                    break;
                }
                tempSum = tempSum + tempC;
                tempC = 0;

                if (i == 11) {
                    tempSum = tempSum / 12;
                    cout << "������� ����������� � �� �� ������: " << round(tempSum * 100) / 100 << "�C" << endl;
                    cout << "������� ����������� � �� �� �����������: " << round(avg_calculation(tempSum * 100)) / 100 << "�F" << endl << endl;
                    break;
                }
            }
            break;
            case 'x':
               cout << "������ 9.3" << endl << "ʳ������ �������� �������/����" << endl << "������ �����: ";
               cin >> N;
               if(cin.fail() || N < 0 || N > 5740500){
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << ("�������� ������������ ��� �����. ������ ����� �� 0 �� 5740500") << endl;
                    break;
               }

               is_zero_bit = (N >> 9) % 2 == 0;
               if(is_zero_bit == false){
                   cout << "ʳ������ �������� ������� � N:"<< binary_calculation(N) << endl;
               }else{
                   cout << "ʳ������ �������� ���� � N:"<< binary_calculation(N) << endl;
               }
            break;
            case 'z':
            case 'Z':
                exit = true;
                cout << "�������� ������ ���������." << endl;
                break;
            default:
                cout << "\a" << "��������, �� ������� � ��� ��������� ���������.\n��� �������� Caps Lock.\n" << endl;
                break;
        }
    }
    cout << "�������� ����-��� ������...";
    _getch();
    return 0;
}


