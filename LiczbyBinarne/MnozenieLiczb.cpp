#include <iostream>

using namespace std;
string Dodaj(string a, string b)
{
    int i , przn=0, suma;
    string c="";
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size() ) b = '0' + b;

    for(int i=a.size()-1 ; i>=0 ;i--)
    {
        suma=przn+a[i]-'0'+b[i]-'0';
        przn=suma/2;
        suma=suma%2;
        c=char(suma+'0')+c;

        //if(suma < 10) c = char(suma+'0') + c;
        //else c = char(suma + 'A' - 10) + c;
    }
    if(przn==1) c='1'+c;
    return c;
}
int main()
{
    string a,b,c = "0";
    int i;
    cout << "Liczba 1: " ; cin >> a ;
    cout << "Liczba 2: " ; cin >> b ;

    for(i=b.size()-1;i>=0;i--)
    {

        if(b[i]=='1')c=Dodaj(c,a);
        a=a+'0';
    }
    cout << "Iloczyn = " << c;
    return 0;
}
