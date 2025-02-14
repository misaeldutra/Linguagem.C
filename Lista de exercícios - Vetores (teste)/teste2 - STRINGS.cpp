#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// temos tambem outras funções:
  // gets()
       // - Função para entrada e saida de dados; OBS : tambem deixar ultrapassar o limite do vetor;
       // - gets(<strings>);
  // fgets()
       // - Função para entrada e saida de dados; OBS : Último caractere sempre fica reservado ao '\0';
       // - entrada padrao: stdin;
       // - fgets(<string>, <tam>, stdin); 'stdin' = significa entrada de dados padrão;
  // puts()
       // - Função para saída de dados;
       // - Imprime string diretamente na tela; OBS: Não admite variáveis de outros tipos, ex: float, int..
       // - puts(<strings>);
  // fflush(stdin)
       // chamar sempre depois de uma entrada;
       // para que a proxima leitura da entrada de dados não dê problema; principalmente float e char
       // pois depois do primeiro fgets ou gets ou scanf, pode ocorrer do teclado travar e acabar ficando com um lixo de memoria no buffer;
       
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char s[10];
	
	printf("Informe algo: (leitura pelo gets) \n");
	gets(s); // pode ser usado no lugar do scanf; obs: não controla limite de tamanho de vetor;
	fflush(stdin);
	
	puts("\nResultado: "); // imprimir;
	puts(s);
	puts("");
	
	printf("Informe algo: (leitura pelo fgets) \n");
	fgets(s, 10, stdin); // ler usando agora o fgets; obs: ele limita! ou seja, é melhor para se usar;
	fflush(stdin);
	
	puts("\nResultado: ");
	puts(s);
	
	
	
	
	return 0;
}
