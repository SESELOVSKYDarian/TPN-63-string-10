#include <iostream>
#include <string>
using namespace std;
string DividirPalabra(string f);
int main()
{
	string frase;
	cout<<"Ingrese una frase: ";
	getline (cin, frase);
	cout<<"La frase dividida es: "<<DividirPalabra(frase)<<endl;
}
string DividirPalabra(string f)
{
	string palabra;
    string resultado;
    for (int i=0; i<f.size(); i++)
    {
        if (f[i] == ' ') {
            resultado += "\"" + palabra + "\" ";
            palabra = "";
        } else {
            palabra += f[i];
        }
    }
    resultado += "\"" + palabra + "\" ";
    return resultado;
}