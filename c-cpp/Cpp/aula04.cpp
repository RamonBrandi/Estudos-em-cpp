#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


int main()
{
    vector<int>vetor;
    int va,auxiliar;

    for (int i=0; i < 10; i++)
    {
        vetor.push_back(i+1);
        cout<<setw(3)<<i<<" -> "<<setw(3)<<vetor[i]<<endl;;
    }

    // inverte posicoes do vetor v
    for (int i=0; i<10; i += 2 )
    {
        auxiliar = vetor[i];
        vetor[i]     = vetor[i+1];
        vetor[i+1]   = auxiliar;
    }

    // Resultado
    for (int i=0; i<10; i += 1)
        cout<<"Valor atualizado --: " <<setw(3)<<vetor[i]<<endl;

    return 0;
}