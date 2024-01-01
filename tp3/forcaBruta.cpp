/* INF112 - PROGRAMAÇÃO II
   Trabalho Prático 3 - Recursividade e backtracking
   Versão 1 - Força Bruta
   Laís Reis de Sales - 96862
   01 de novembro de 2023
*/

#include <iostream>
#include <string>
#include <chrono>

//VARIÁVEIS GLOBAIS
//Como serão usadas em todas as funções, é uma escolha aceitável
std::string string1, string2;
int tamanho_minimo;
int n;
bool primeiro; // flag para indicar qual string foi usada como base

bool verifica_comum(int *combinacoes){
    std::string subsequencia, string_escolhida, string;

    if (primeiro){ //vê qual string foi utilizada como base para criar o vetor combinações
        string_escolhida = string2;
        string = string1;
    } else {
        string_escolhida = string1;
        string = string2;
    }

    //cria a string subsequência utilizando o vetor combinações (binário) e a string base
    //ou seja, vê qual caracter da string base está presente nessa subsequência
    for (int i = 0; i < n; i++){ 
        if (combinacoes[i] == 1){
            subsequencia += string_escolhida[i];
        }
    }

    bool iguais = true;
    int j = 0; //importante definir esse j fora, para que o for continue de onde a última iteração parou
    for (int i = 0; i < subsequencia.length(); i++){
        iguais = false; 
        for (j; j < string.length(); j++){
            if (string[j] == subsequencia[i]){ //se encontra uma correspondência
                iguais = true; //muda para verdadeiro
                j++;
                break; //para o for
            }
        } //só vai entrar aqui se não tiver encontrado uma correspondência, ou seja
        if(!iguais){ //esse caracter não tá na string ou na ordem necessária
            return iguais; //retorna falso
        }
    }
    return iguais;
}

void imprime_maior_subsequencia(int *combinacoes, int inicio, int fim, int &maior_tamanho){
    if (inicio >= fim){
        inicio = 0;
        int total_letras = 0; // quantas letras tem na subsequencia;
        for (int i = 0; i < n; i++){
            if (combinacoes[i] == 1){
                total_letras++;
            }
        } //verifica se a quantidade de letras na subsequência é menor que o tamanho mínimo
        if (total_letras < tamanho_minimo){
            total_letras = 0; //não faz a verificação e zera o contador de caracteres
        } else {
            bool verificacao = verifica_comum(combinacoes);
            if (verificacao){ //verifica se é subsequencia comum, se for:
                if (maior_tamanho < total_letras){ //vê se é maior
                    maior_tamanho = total_letras; //atualiza a variável global
                }
            }
        }
    } else {
        //calcula todas as combinações usando binário
        //se na posição do caracter tiver 1, significa que este caracter faz parte da subsequência
        //se tiver 0, não faz parte
        combinacoes[inicio] = 0;
        imprime_maior_subsequencia(combinacoes, inicio + 1, fim, maior_tamanho);
        combinacoes[inicio] = 1;
        imprime_maior_subsequencia(combinacoes, inicio + 1, fim, maior_tamanho);
    }

}

         //permite que o usuário forneça a entrada assim que executar o programa
int main(int argc, char **argv){
    // marca o tempo de início
    auto start_time = std::chrono::high_resolution_clock::now();

    if(argc > 4 || argc < 4){ //garante que a entrada terá a quantidade de argumentos necessários
        std::cerr << "Erro: a entrada do programa deve ser feita assim: " << argv[0] << " <arg1> <arg2> <arg3>\n";
        return 1;
    }

    //guarda as entradas dos usuários
    tamanho_minimo = atoi(argv[1]);
    string1 = argv[2];
    string2 = argv[3];

    //pega o tamanho de cada string
    int tamanho_1 = string1.length();
    int tamanho_2 = string2.length();


    //verifica se o tamanho das strings atende o mínimo digitado pelo usuário
    if(tamanho_1 < tamanho_minimo || tamanho_2 < tamanho_minimo){
        std::cout << 0 << std::endl;
    } else { //vê qual string é menor, isso pode poupar tempo se uma string for muito maior que a outra
        if (tamanho_1 > tamanho_2){
            n = tamanho_2;
            primeiro = true;
        } else {
            n = tamanho_1;
            primeiro = false;
        }

        //vetor que indica qual caracter da string vai estar na subsequencia
        int maior_tamanho = 0;
        int *combinacoes = new int[n];
        imprime_maior_subsequencia(combinacoes, 0, n, maior_tamanho);
        std::cout << "Maior subsequencia: " << maior_tamanho << std::endl; //imprime a maior sequência
        delete[] combinacoes; //apaga a alocação dinâmica
    }

    // marca o tempo de fim
    auto end_time = std::chrono::high_resolution_clock::now();
    // calcula a diferença de tempo em nanossegundos
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);
    // converte a diferença para segundos
    double seconds = duration.count() * 1e-9;
    std::cout << "Tempo de execução: " << seconds << " segundos" << std::endl; //imprime o tempo que durou


    return 0;
}