#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char id[10];
    int chegada;
    int tempo_execucao;
    int prioridade;
    int tempo_restante;
} Processo;

// FIFO
// void simularFIFO(Processo fila[], int n) {

//     int tempo = 0;

//     for (int i = 0; i < n; i++) {

//         printf("\n--- FIFO Executando %s ---\n", fila[i].id);

//         while (fila[i].tempo_restante > 0) {

//             printf("Tempo %d | Processo %s executando...\n",
//                    tempo,
//                    fila[i].id);

//             fila[i].tempo_restante--;

//             tempo++;
//         }
//         printf("Processo %s finalizado no tempo %d\n",
//                fila[i].id,
//                tempo);
//     }
// }

int main() {

    FILE *file;
    Processo p[10];
    int i = 0;
    file = fopen("processos.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }

    while (fscanf(file,
                  "%s %d %d %d %d",
                  p[i].id,
                  &p[i].chegada,
                  &p[i].tempo_execucao,
                  &p[i].prioridade,
                  &p[i].tempo_restante) == 5) {

        i++;
    }

    fclose(file);
    printf("Processos carregados: %d\n", i);
    return 0;
}