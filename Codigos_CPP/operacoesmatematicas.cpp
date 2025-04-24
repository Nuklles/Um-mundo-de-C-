#include <iostream>
#include <math.h> //biblioteca com várias funções matemáticas

using namespace std;

int main () {

    int a=5, b=4;

    int soma = a+b; 
    cout << "A soma de 5 e 4 e: " << soma << endl;
    //Caso queira imprimir isso só uma vez e poupar processamento do computado, basta realizar:
    //cout << "Soma:" << a+b ,, endl;

    //Assim a conta será feita somente uma vez.

    int diminui = a-b;
    cout << "A subtracao de 5 e 4 e: " << diminui << endl;

    int mult = a*b;
    cout << "A multiplicacao de 5 e 4 e: " << mult << endl;
    
    int quocidiv = a/b;
    cout << "Quociente de 5 e 4 e: " << quocidiv << endl;
    //tem que fazer o quociente e o resto 
    int resto = a%b;
    cout << "O resto de 5 e 4 e: " << resto << endl;
    // se quiser o número quebrado
    float div = (float)a / (float)b;
    cout << "A divisao de 5 e 4 e: " << div << endl;

    //potência
    float pot = pow (a,b); //a^b a elevado a b
    cout << "A potencia 5 e 4 e: " << pot << endl;
    
    //Incremento
    cout << "A antigo " << a << endl;
    a = a+1;
    //Também pode ser feito assim: 
    //a+=1;
    //a++;
    cout << "A novo " << a << endl; 
    
    //Decremento
    cout << "A antigo " << a << endl;
    a = a-2;
    //Também pode ser feito assim: 
    //a-=1;
    //a--;
    cout << "A novo " << a << endl; 

    //Incremento e Decremento podem ser feitas com multiplicações e divisões também
    return 0;
}
