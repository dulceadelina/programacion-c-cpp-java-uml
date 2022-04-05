#include <stdio.h>
#include <time.h>

int main() {

        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
       /* char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);*/
        int dia, mes, ano, dian, mesn, anon, edad;
        dia = tlocal->tm_mday;
        mes = (tlocal->tm_mon)+1;
        ano = (tlocal->tm_year)+1900;

        printf("%d/%d/%d", dia, mes, ano);
        printf("\nIngresa día, mes y año de tu fecha de nacimiento: ");
        scanf("%d%d%d", &dian, &mesn, &anon);
     //   printf("\n%d/%d/%d", dian, mesn, anon);.
        if(((anon + 1) == ano) && (mesn > mes))
        {
            int aux;
            aux = (12 - mesn) + mes;
            edad = aux;
            printf("\nTu edad: %d meses", edad);
        }

        else if((ano == anon))
           {
               edad = mes - mesn;
               printf("\nTu edad: %d meses", edad);
           }
        else if(mes>mesn)
        {
            edad = ano - anon;
            printf("\nTu edad: %d", edad);
        }
        else if(mes<mesn)
        {
            edad = (ano - anon) - 1;
            printf("\nTu edad: %d", edad);
        }

        return 0;
}
