/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 17: Clases y objetos. Sobrecarga de operadores
    21/03/2020 **/
#include <iostream>
using namespace std;
class Tiempo
{
private:
    int hrs;
    int mins;
    int segs;
public:
    Tiempo()
    {
        segs = 0;
        mins = 0;
        hrs = 0;
    }
    void verHora()
    {
        cout << hrs << ":" << mins << ":" << segs;
    }
    void leerTiempo()
    {
        cin >> hrs >> mins >> segs;
    }
    Tiempo & void operator ++()
    {
        segs++;
        if(segs > 59)
        {
            segs -= 60;
            ++mins;
        }
        if(mins > 59)
        {
            mins -= 60;
            hrs++;
        }
        return * this;
    }
};
int main()
{
    Tiempo t;
    cout << "\nIntroduzca hora (hh:mm:ss): ";
    t.leerTiempo();
    cout << "visualizar t";
    t.verHora();
    ++t;
    cout << "\nDespués de incrementar, t = ";
    t.verHora();
    return 0;
}
