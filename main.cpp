#include <iostream>
#include <string>

using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    int Integer;
    cout << "\n" "Введите число:" << endl;
    cin >> Integer;

    string Roman;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    Roman = M[Integer/1000]+C[(Integer%1000)/100]+X[(Integer%100)/10]+I[(Integer%10)];

    cout << "\n" "Римское число: " << Roman << endl;
}


