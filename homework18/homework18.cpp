#include <iostream>

using namespace std;



//1-ci
//float cube(float num)
//{
//	return pow(num, 3);
//}




//2-ci
//float number(float num1, float num2)
//{
//	if (num1 > num2) return num1;
//	else return num2;
//}




//3-cu
//float number2(float num3)
//{
//	if (num3 > 0 || num3 == 0) return num3;
//}




//4-cu
//float calc(float numb1, float numb2, char op)
//{
//	float answer;
//
//    switch (op)
//    {
//    case '+':
//        answer = numb1 + numb2;
//        break;
//    case '-':
//        answer = numb1 - numb2;
//        break;
//    case '*':
//        answer = numb1 * numb2;
//        break;
//    case '/':
//        if (numb2 != 0) answer = numb1 / numb2;
//        else
//        {
//            cerr << "sifira bolme xetasi" << endl;
//            answer = 0;
//            break;
//    default:
//        cerr << "basqa simvol qoyuldugu ucun islemedi" << endl;
//        answer = 0;
//        break;
//        }
//    }
//
//    return answer;
//
//}




//5-ci
//void square(int length) {
//    if (length < 1)
//    {
//        cout << "Uzunlug 1 veya daha boyuk olmalidi" << endl;
//        return;
//    }
//    for (int i = 0; i < length; ++i)
//    {
//        for (int j = 0; j < length; ++j)
//        {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//}




//6-ci
//int sade(int numbr) {
//    if (numbr <= 1) {
//        return 0;
//    }
//    if (numbr <= 3) {
//        return 1;
//    }
//    if (numbr % 2 == 0 || numbr % 3 == 0) {
//        return 0;
//    }
//
//    for (int i = 5; i * i <= numbr; i += 6) {
//        if (numbr % i == 0 || numbr % (i + 2) == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}




//7-ci
//unsigned faktorial(int sayi) 
//{
//    if (sayi < 0)
//    {
//        cout << "Menfi eded olmaz" << endl;
//        return 0;
//    }
//    unsigned answer2 = 1;
//    for (int i = 1; i <= sayi; ++i) 
//    {
//        answer2 *= i;
//    }
//    return answer2;
//}




//8-ci
//double quvvethesab(double ust, int quvvet) {
//    double cavab = 1;
//    for (int i = 0; i < quvvet; ++i)
//    {
//        cavab *= ust;
//    }
//    return cavab;
//}




//9-cu
//int toplam(int sayi1, int sayi2) 
//{
//    int toplam = 0;
//    int start = min(sayi1, sayi2);
//    int end = max(sayi1, sayi2);
//    for (int i = start; i <= end; ++i) {
//        toplam += i;
//    }
//    return toplam;
//}



int main()
{


    //1-ci
    //cout << cube(2);



    //2-ci
    //int num1, num2;
    //cin >> num1 >> num2;
    //int b_num = (num1, num2);
    //cout << "En boyuk eded: " << b_num;
    //return 0;



    //3-cu
    //int num3;
    //cin >> num3;
    //if (number2(num3)) cout << "True" << endl;
    //else cout << "False";
    //return 0;



    //4-cu
    //float numb1 , numb2;
    //char op;
    //cin >> numb1 >> numb2>>op;
    //float answer = calc(numb1, numb2, op);
    //cout << "Cavab: " << answer << endl;
    //return 0;



    //5-ci
    //int length;
    //cout << "Kvadratin olcusun yazin: ";
    //cin >> length;
    //square(length);
    //return 0;



    //6-ci
    //int sayi;
    //cout << "Bir eded yazin: ";
    //cin >> sayi;
    //if (sade(sayi)) {
    //    cout << sayi << " ededi sadedir" << endl;
    //}
    //else {
    //    cout << sayi << " ededi sade deyil" << endl;
    //}
    //return 0;



    //7-ci
    //int sayi;
    //cout << "Eded daxil edin: ";
    //cin >> sayi;
    //unsigned long long sonuc = faktorial(sayi);
    //if (sayi >= 0) cout << sayi << " ededin faktoriali: " << sonuc << endl;
    //return 0;



    //8-ci
    //double ust;
    //int quvvet;
    //cout << "Ededi yazin: ";
    //cin >> ust;
    //cout << "Quvveti yazin: ";
    //cin >> quvvet;
    //double cavab = quvvethesab(ust, quvvet);
    //cout << ust << " ustu " << quvvet << " = " << cavab << endl;
    //return 0;



    //9-cu
    //int sayi1, sayi2;
    //cout << "Birinci ededi yaz: ";
    //cin >> sayi1;
    //cout << "ikinci ededi yaz: ";
    //cin >> sayi2;
    //int sonuc = toplam(sayi1, sayi2);
    //cout << sayi1 << " ve " << sayi2 << " arasındaki butun ededlerin cemi: " << sonuc << endl;
    //return 0;
}