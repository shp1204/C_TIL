// FIRST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    /* 1. 줄바꿈 해보기 */
    std::cout << "안녕하세요\n" << "반갑습니다\n";

    // 사용자 정의함수 - typedef
    typedef unsigned short unit16;
    unit16 port;

    port = 65535;
    std::cout << port << '\n';


    // 사용자 정의함수 - enum
    enum languages{ c=10, cplusplus=20, java=30} myLanguage;
    myLanguage = cplusplus;
    std::cout << "cplusplus = " << myLanguage << '\n';
    // return 0;

    // 전역 변수, 지역 변수를 이용한 프로그램 작성
    //Func();
    //std::cout << "main : count = " << count << '\n';
    //return 0;

    // 정적 변수

    // 표준 입출력 프로그램 작성
    int number;
    char letter;
    float rnumber;

    cout << "정수 문자 실수 순서로 입력하세요 --> ";
    cin >> number >> letter >> rnumber;
    cout << "당신이 입력한 정수는 " << number << "입니다." << '\n';
    cout << "당신이 입력한 문자는 " << letter << "입니다." << '\n';
    cout << "당신이 입력한 실수는 " << rnumber << "입니다." << '\n';

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
