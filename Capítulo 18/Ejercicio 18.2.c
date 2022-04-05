/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 20: Excepciones
    31/03/2020 **/
#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
    float clasification;
    int total_copies;
    char* title;
    char* author;
    int pages;
public:
    void Book(){}
    void Book(title, author, pages);
    void Set_Copies(int c) : total_copies(c){}
};
class General_Works : public Book
{
protected:
    int first_summary = 000;
};
