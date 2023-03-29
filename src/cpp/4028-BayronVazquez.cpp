#include <stdio.h>
#include <inttypes.h>

int main()
{
    int_fast16_t numeros[100];
    int_fast16_t limiteInferior, limiteSuperior;
    uint_fast8_t n, i, contador = 0;

    // ESCANEAMOS EL VALOR DE N, LA CANTIDAD DE NUMEROS
    scanf("%" SCNuFAST8, &n);

    // ESCANEAMOS LOS NUMEROS Y LOS ALMACENAMOS EN EL ARRAY
    for( i=0; i<n; ++i )
    {
        scanf("%" SCNdFAST16, &numeros[i]);
    }

    // ESCANEAMOS LOS LIMITES, INFERIOR Y SUPERIOR
    scanf("%" SCNdFAST16, &limiteInferior);
    scanf("%" SCNdFAST16, &limiteSuperior);

    // RECORREMOS EL ARRAY PARA CONTAR LOS NUMEROS QUE SE ENCUENTRAN EN ESE RANGO
    for( i=0; i<n; ++i )
    {
        if( numeros[i] >= limiteInferior && numeros[i] <= limiteSuperior )
        {
            ++contador;
        }
    }

    printf("%" SCNuFAST8, contador);

    return 0;
}