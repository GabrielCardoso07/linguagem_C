/*Arquivo: datas.c
Data criacao: 05/01/2023
Autor: Gabriel Rodrigues Ferreira Cardoso
*/
 #include <stdio.h>

 typedef
    struct Data{
        int dia, mes, ano;
    }
Data;

const char strmes[13][4] = {
"", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
"JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int main(int argc, char** argv) {
    Data data;
    printf("Digite uma data(D/M/YYYY):");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    printf("Outros formatos:\n");
    printf("- %02d.%02d.%04d\n", data.dia, data.mes, data.ano);
    printf("- %02d-%02d-%04d\n", data.mes, data.dia, data.ano);
    printf("- %02d/%02d/%02d\n", data.dia, data.mes, data.ano%100);
    printf("- %02d%s%04d\n", data.dia, strmes[data.mes], data.ano);
    return 0;
}