#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int buscaSequencial(int *vetor, int chave, const int TAMANHO)
{
int i = 0;
 
while(i < TAMANHO && chave > vetor[i])
  i++;
 
if(i < TAMANHO && chave == vetor[i])
	return i;
   else
	return -1;
}

	return 0;
}
