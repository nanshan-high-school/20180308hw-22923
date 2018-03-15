#include <iostream>
using namespace std;
int main(){
    char englishWord;
    int wordIntoNumber = 0;
        cout << "請輸入身份證字號的第一個英文字母:";
        cin >> englishWord;

    switch (englishWord){
        case 'A':
            wordIntoNumber += 10;
        break;
        case 'B':
            wordIntoNumber += 11;
        break;
        case 'C':
            wordIntoNumber += 12;
        break;
        case 'D':
            wordIntoNumber += 13;
        break;
        case 'E':
            wordIntoNumber += 14;
        break;
        case 'F':
            wordIntoNumber += 15;
        break;
        case 'G':
            wordIntoNumber += 16;
        break;
        case 'H':
            wordIntoNumber += 17;
        break;
        case 'J':
            wordIntoNumber += 18;
        break;
        case 'K':
            wordIntoNumber += 19;
        break;
        case 'L':
            wordIntoNumber += 20;
        break;
        case 'M':
            wordIntoNumber += 21;
        break;
        case 'N':
            wordIntoNumber += 22;
        break;
        case 'P':
            wordIntoNumber += 23;
        break;
        case 'Q':
            wordIntoNumber += 24;
        break;
        case 'R':
            wordIntoNumber += 25;
        break;
        case 'S':
            wordIntoNumber += 26;
        break;
        case 'T':
            wordIntoNumber += 27;
        break;
        case 'U':
            wordIntoNumber += 28;
        break;
        case 'V':
            wordIntoNumber += 29;
        break;
        case 'X':
            wordIntoNumber += 30;
        break;
        case 'Y':
            wordIntoNumber += 31;
        break;
        case 'W':
        wordIntoNumber += 32;
        break;
        case 'Z':
            wordIntoNumber += 33;
        break;
        case 'I':
            wordIntoNumber += 34;
        break;
        case 'O':
            wordIntoNumber += 35;
        break;
    }
    int idNumber;
        cout << "請輸入身份證字號的數字:";
        cin >> idNumber
    
    int n8 = idNumber/10000000%10;
    int n7 = idNumber/1000000%10;
    int n6 = idNumber/100000%10;
    int n5 = idNumber/10000%10;
    int n4 = idNumber/1000%10;
    int n3 = idNumber/100%10;
    int n2 = idNumber/10%10;
    int n1 = idNumber/1%10;

    if ((wordIntoNumber/10 + wordIntoNumber%10*9 + n8*8 + n7*7 + n6*6 + n5*5 + n4*4 + n3*3 + n2*2 + n1)%10 == 0){
        cout << "是正確的身分證字號\n";
    }else {
        cout << "不是正確的身分證字號\n";
    }
    return 0;
}
