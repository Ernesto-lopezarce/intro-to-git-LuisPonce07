#include <stdio.h>
#include <stdio.h>

int main() {

    int edad;
    float promedio;
    int reprobadas;
    int faltas;

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Promedio: ");
    scanf("%f", &promedio);

    printf("Materias reprobadas: ");
    scanf("%d", &reprobadas);

    printf("Faltas acumuladas: ");
    scanf("%d", &faltas);

    printf("\n===== RESULTADOS DE EVALUACION =====\n");

    // 1. Estado de reinscripcion
    if (reprobadas > 3) {
        printf("Estado de reinscripcion: NO puede reinscribirse.\n");
    }
    else if (reprobadas == 3) {
        printf("Estado de reinscripcion: Revision especial.\n");
    }
    else {
        printf("Estado de reinscripcion: Puede reinscribirse.\n");
    }

    // 2. Elegibilidad para beca
    if (promedio >= 9.0 && reprobadas == 0 && faltas < 5) {

        // if anidado
        if (edad >= 18) {
            printf("Beca: Elegible para solicitar beca.\n");
            printf("Ademas, es mayor de edad.\n");
        }
        else {
            printf("Beca: Elegible para solicitar beca.\n");
            printf("Ademas, es menor de edad.\n");
        }

    }
    else {
        printf("Beca: NO es elegible para beca.\n");
    }

    // 3. Situacion critica
    if (promedio < 6.0 || reprobadas > 4 || faltas > 15) {
        printf("ALERTA: El estudiante esta en situacion critica.\n");
    }

    printf("====================================\n");

    return 0;
}