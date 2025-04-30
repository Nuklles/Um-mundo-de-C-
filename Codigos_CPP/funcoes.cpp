#include <iostream>

using namespace std;

// variavel global
int t;

//definindo algo
#define pi 3.14;
#define curtir cout << "Curta isso!\n";
//função qe não tem saída, não retorna nada.
void viver () {
    cout << "A vida é \numa maravilha";
}

//função que tem entrada
int somar (int &x, int &y){
    int t;
    t=1;
    
    int soma;
    soma = x+y;
    x=30;
    return soma; 

}

int main () {
    
    //int t;
    //t=0;

    viver();
    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout <<"Soma: " << s << endl;
    cout <<"Valor de t: " << t << endl;
    
    cout << pi;
    curtir;

    return 0;
}
