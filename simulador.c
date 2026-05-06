
// typedef struct {
//     int id;
//     int tempo_total;     // tempo total que o processo precisa
//     int tempo_restante;  // quanto falta executar
// } Processo;

#include <stdio.h>
#include <stdlib.h> 
#include <stdlib.h>

// FIFO 
void simularFIFO(Processo fila[], int n) {
    int tempo = 0;

    for (int i = 0; i < n; i++) {
        printf("\n--- FIFO Executando %d ---\n", fila[i].id);

        while (fila[i].tempo_restante > 0) {
            printf("Tempo %d | Processo %d executando...\n", tempo, fila[i].id);

            fila[i].tempo_restante--;
            tempo++;
        }

        printf("Processo %d finalizado no tempo %d\n", fila[i].id, tempo);
    }
}
