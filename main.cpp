#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Nem "NELEMENTS", hanem "N_ELEMENTS" kell.
    int* b = new int[N_ELEMENTS];

    //Nincs lezarva a parancs, a fordito tovobb megy es hibat dob. Hianyzik: ";"
    //Nem karaktert akarunk megadni hanem szöveget ezért "" kell ez helyett: ''
    std::cout << "1-100 ertekek duplazasa: " << std::endl;
    //A for nincs befelyezve, kell még a lefutási feltétel, és a léptetési mérték.
    //"N_ELEMENTS+1" mivel: "1-100 ertekek duplazasa
    for (int i = 0; i < N_ELEMENTS+1; i++)
    {
        b[i] = i * 2;
        int szam = b[i];
        if(i>0)
        std::cout << "Ertek: " << szam << std::endl;
    }
    //Az 'i' önmagában csak áll mint egy fa... meg kell adni a feltételt, hogy mi alapján fusson a for pl.: "i<420"

    std::cout << "Atlag szamitasa: " << std::endl;

    //Itt kell egy alapérték pl.: atlag = 0, ha nem akarunk semmit, fontos a kinullázás. Hiszen, a memória kiosztáskor "yxnjiíkyghxweitn2378" is lehet ott.
    //A későbbiekben "atlag += b[i];" valamit hozzáadunk. Tehát, ha nem adunk alap értéket, akkor baj van.
    //hádeazátlagazdouble,mivelnemfeltétlenülegészszám.
    double atlag = 0;

    // "...< N_ELEMENTS,..." helyett ez kell: < "...N_ELEMENTS;..."
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Nincs lezarva a parancs, a fordito tovobb megy es hibat dob. Hianyzik: ";"
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}