#include <stdio.h>
#include <stdlib.h>

int main() {
    // Inicializar contadores de votos
    int votos[5] = {0};

    // Numero total de votaciones // modificable a la cantidad de personas que tengan
    int totalVotos = 10;

    // Imprimir las opciones de votacion
    printf("\n  B I E N V E N I D O!\n ======================\n\n Programa: Lab C\n Copyright: R\n Autor: Hello C\n Fecha: 26/11/23 06:00\n Descripcion: Este programa realiza las funciones para el enunciado del Tema 1.\n");
    printf("\nJORNADA ESCOLAR -> Seleccione una de las opciones donde le gustaria realizar el Fin de Curso:\n");
    printf("\n    1. Pic Nic\n    2. Bicicleteada al Parque 2 de Febrero\n    3. Viaje de excursion a Itati\n    4. Un fiesta-baile\n    5. Un desfile de mascaras por la peatonal\n\n");

    // Recoger los votos y actualizar el arreglo de votos
    for (int i = 0; i < totalVotos; i++) {
        int opcion;
        printf("- Ingrese el numero de la opcion que prefiere (1-5): ");
        scanf("%d", &opcion);

        // Verificar que la opcion sea válida (entre 1 y 5)
        if (opcion >= 1 && opcion <= 5) {
            votos[opcion - 1]++;
        } else {
            printf("\nOpcion no valida. Por favor, ingrese un numero entre 1 y 5.\n\n");
            i--;  // Decrementar el índice para repetir la votacion
        }
    }

    // Definir las opciones de votacion
    const char* opciones[5] = {"Pic Nic", "Bicicleteada al Parque 2 de Febrero", "Viaje de excursion a Itati", "Un fiesta-baile", "Un desfile de mascaras por la peatonal"};

    // Mostrar los resultados de la votacion
    printf("\nRESULTADOS DE LA VOTACION:\n");
    for (int i = 0; i < 5; i++) {
        printf("    %d. %s: %d votos\n", i + 1, opciones[i], votos[i]);
    }

    // Determinar la opcion ganadora
    int opcionGanadora = 1;
    int maxVotos = votos[0];

    for (int i = 1; i < 5; i++) {
        if (votos[i] > maxVotos) {
            maxVotos = votos[i];
            opcionGanadora = i + 1;
        }
    }

    // Mostrar la opcion ganadora
    printf("\nLa opcion ganadora es %s con %d votos.\n\n", opciones[opcionGanadora - 1], maxVotos);

    system("pause");
    return 0;
}
