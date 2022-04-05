/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 19: Genericidad: plantillas (templates)
    25/03/2020 **/
#ifndef _MINMAX_H
#define _MINMAX_H
//plantilla de funcion max
template <class T> T max(T a, T b)
{
    if(a > b)
        return a;
    else
        return b;
}
//planilla de función min
template <class T> T min(T a, T b)
{
    if(a < b)
        return a;
    else
        return b;
}
#endif // _MINMAX_H
