/** Dulce Adelina Zuñiga Ramos
    CAPÍTULO 20: Excepciones
    31/03/2020 **/
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Book
{
protected:
    float classification;
    int first_summary;
    int second_summary;
    int total_copies;
    string title;
    string author;
    int pages;
public:
    Book(){}
    Book(string t, string a, int p, int c)
    {
        title.append(t); cout << "title";
        author.append(a);cout << "autor";
        pages = p; cout << "pages";
        total_copies = c;
    }
    Set_Total_Copies(int c){ total_copies += c; }
    Read_Classification(){cout << classification;}
    Set_Classification(){classification += first_summary + second_summary;}
    Read_Book()
    {
        cout << "\"" << title << "\"\n";
        cout << "\"" << author << "\"\n";
        cout << pages << "pp \n";
    }
};
class General_Works : public Book
{
protected:
    int copies_general;
public:
    General_Works(string t, string a, int p, int c) : Book(t, a, p, c){
        first_summary = 000; copies_general = c; Set_Total_Copies(c);}
};
class Philosophy_Psycology : public Book
{
protected:
    int copies_phil_psy;
public:
    Philosophy_Psycology(string t, string a, int p, int c) : Book(t, a, p, c){
        first_summary = 100; copies_phil_psy = c; Set_Total_Copies(c);}
};
class Religion : public Book
{
protected:
    int copies_religion;
public:
    Religion(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 200; copies_religion = c; Set_Total_Copies(c);}
};
class Social_Sciences : public Book
{
protected:
    int copies_social;
public:
    Social_Sciences(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 300; copies_social = c; Set_Total_Copies(c);}
};
class Language : public Book
{
protected:
    int copies_language;
public:
    Language(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 400; copies_language = c; Set_Total_Copies(c);}
};
class Linguistics : public Language
{
protected:
    int copies_linguistics;
public:
    Linguistics(string t, string a, int p, int c) : Language(t, a, p, c)
    {second_summary = 10; copies_linguistics = c; Set_Total_Copies(c);}
};
class English : public Language
{
protected:
    int copies_english;
public:
    English(string t, string a, int p, int c) : Language(t, a, p, c)
    {second_summary = 20; copies_english = c; Set_Total_Copies(c);}
};
class Science : public Book
{
protected:
    int copies_science;
public:
    Science(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 500; copies_science = c; Set_Total_Copies(c);}
};
class Technology : public Book
{
protected:
    int copies_technology;
public:
    Technology(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 600; copies_technology = c; Set_Total_Copies(c);}
};
class Arts : public Book
{
protected:
    int copies_arts;
    Arts(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 700; copies_arts = c; Set_Total_Copies(c);}
};
class Literature : public Book
{
protected:
    int copies_literature;
public:
    Literature(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 800; copies_literature = c; Set_Total_Copies(c);}
};
class History_Geography : public Book
{
protected:
    int copies_history_geography;
public:
    History_Geography(string t, string a, int p, int c) : Book(t, a, p, c)
    {first_summary = 900; copies_history_geography = c; Set_Total_Copies(c);}
};
int main()
{
    string t = "Hierarchy";
    string a = "Zuñiga, Dulce";
    General_Works g("A Book", a, 13, 200);
    g.Set_Classification();
    g.Read_Classification();
    cout << "\n\n";
    English e("You Dont Have a Clue", "Priest, Judas", 340, 15);
    g.Read_Book();
    e.Read_Book();

    FILE *pf;
    pf = fopen("Libreria", "w");
    fputs(g.title, pf);fputs(g.author, pf);fputs(g.pages, pf);fputs("\n", pf)
    return 0;
}
