#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define o número de entradas
#define N 2

// Define a estrutura de um neurônio
typedef struct {
    double *w; // vetor de pesos
    double b; // bias
    double y; // saída
} neuronio;

// Cria um novo neurônio com pesos aleatórios entre -1 e 1
neuronio *novo_neuronio() {
    neuronio *n = (neuronio *) malloc(sizeof(neuronio));
    n->w = (double *) malloc(N * sizeof(double));
    for (int i = 0; i < N; i++) {
        n->w[i] = (rand() / (double) RAND_MAX) * 2 - 1;
    }
    n->b = (rand() / (double) RAND_MAX) * 2 - 1;
    n->y = 0;
    return n;
}

// Libera a memória alocada para um neurônio
void liberar_neuronio(neuronio *n) {
    free(n->w);
    free(n);
}

// Calcula a soma ponderada das entradas com os pesos e o bias
double soma_ponderada(neuronio *n, double *x) {
    double s = 0;
    for (int i = 0; i < N; i++) {
        s += n->w[i] * x[i];
    }
    s += n->b;
    return s;
}

// Aplica a função de ativação (degrau) na soma ponderada
double ativacao(double s) {
    if (s >= 0) {
        return 1;
    } else {
        return 0;
    }
}

// Propaga o sinal de entrada pela rede e atualiza a saída do neurônio
void propagar(neuronio *n, double *x) {
    double s = soma_ponderada(n, x);
    n->y = ativacao(s);
}

// Calcula o erro entre a saída desejada e a saída obtida
double erro(double d, double y) {
    return d - y;
}

// Ajusta os pesos e o bias do neurônio com base no erro e na taxa de aprendizagem
void ajustar(neuronio *n, double *x, double e, double alpha) {
    for (int i = 0; i < N; i++) {
        n->w[i] += alpha * e * x[i];
    }
    n->b += alpha * e;
}

// Treina a rede com um conjunto de dados de entrada e saída desejada
void treinar(neuronio *n, double **X, double *D, int M, double alpha, int epocas) {
    for (int i = 0; i < epocas; i++) {
        double E = 0; // erro quadrático médio
        for (int j = 0; j < M; j++) {
            propagar(n, X[j]); // propaga o sinal de entrada
            double e = erro(D[j], n->y); // calcula o erro
            ajustar(n, X[j], e, alpha); // ajusta os pesos e o bias
            E += pow(e, 2); // acumula o erro quadrático
        }
        E /= M; // calcula o erro quadrático médio
        printf("Epoca %d, Erro %f\n", i + 1, E); // imprime o erro
    }
}

// Testa a rede com um conjunto de dados de entrada e imprime as saídas
void testar(neuronio *n, double **X, int M) {
    for (int i = 0; i < M; i++) {
        propagar(n, X[i]); // propaga o sinal de entrada
        printf("Entrada: %f, %f, Saida: %f\n", X[i][0], X[i][1], n->y); // imprime a saída
    }
}

// Função principal que cria a rede, treina-a e testa-a
int main() {
    srand(0); // inicializa o gerador de números aleatórios

    // Cria o conjunto de dados de entrada (X) e saída desejada (D) para o problema da porta AND
    int M = 4; // número de exemplos
    double **X = (double **) malloc(M * sizeof(double *)); // aloca a matriz de entradas
    double *D = (double *) malloc(M * sizeof(double)); // aloca o vetor de saídas desejadas
    X[0] = (double []) {0, 0}; D[0] = 0; // exemplo 1
    X[1] = (double []) {0, 1}; D[1] = 0; // exemplo 2
    X[2] = (double []) {1, 0}; D[2] = 0; // exemplo 3
    X[3] = (double []) {1, 1}; D[3] = 1; // exemplo 4

    // Cria um novo neurônio
    neuronio *n = novo_neuronio();

    // Define os parâmetros do treinamento
    double alpha = 0.1; // taxa de aprendizagem
    int epocas = 15; // número de épocas

    // Treina a rede com os dados
    treinar(n, X, D, M, alpha, epocas);

    // Testa a rede com os mesmos dados
    testar(n, X, M);

    // Libera a memória alocada
    liberar_neuronio(n);
    free(X);
    free(D);


   system("pause");
}
