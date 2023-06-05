#include <iostream>
#include <cmath>
#include <windows.h>
#include "../moduleskovalov/kovalov_lib.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);SetConsoleCP(1251);
    // ��������� ��'���� ����� ConeRoof
    ConeRoof Cone(3.0, 8.0);

    // ��������� ������� ��������
    cout << "�����: " << Cone.getRadius() << endl;
    cout << "������: " << Cone.getHeight() << endl;

    // ���� ������� ��������
    Cone.setRadius(4.0);
    Cone.setHeight(3.1);

    // ���������� �� ��������� ��'���
    cout << "��'�� �������� ����: " << Cone.calculateVolume() << endl;

    return 0;
}
