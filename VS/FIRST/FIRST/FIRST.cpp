// FIRST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    /* 1. �ٹٲ� �غ��� */
    std::cout << "�ȳ��ϼ���\n" << "�ݰ����ϴ�\n";

    // ����� �����Լ� - typedef
    typedef unsigned short unit16;
    unit16 port;

    port = 65535;
    std::cout << port << '\n';


    // ����� �����Լ� - enum
    enum languages{ c=10, cplusplus=20, java=30} myLanguage;
    myLanguage = cplusplus;
    std::cout << "cplusplus = " << myLanguage << '\n';
    // return 0;

    // ���� ����, ���� ������ �̿��� ���α׷� �ۼ�
    //Func();
    //std::cout << "main : count = " << count << '\n';
    //return 0;

    // ���� ����

    // ǥ�� ����� ���α׷� �ۼ�
    int number;
    char letter;
    float rnumber;

    cout << "���� ���� �Ǽ� ������ �Է��ϼ��� --> ";
    cin >> number >> letter >> rnumber;
    cout << "����� �Է��� ������ " << number << "�Դϴ�." << '\n';
    cout << "����� �Է��� ���ڴ� " << letter << "�Դϴ�." << '\n';
    cout << "����� �Է��� �Ǽ��� " << rnumber << "�Դϴ�." << '\n';

    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
