#include <stdio.h>
#include <time.h>

int main() {

        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
       /* char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);*/
        int dia, mes, ano, dian, mesn, anon;
        dia = tiempo->tm_mday;

        printf("%d", dia);


        char fechanac[11], fechaactual[11];

        return 0;
}
