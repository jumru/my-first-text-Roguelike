#include <iostream>
#include <cstdlib>

using namespace std;



void DaNet()
{
    cout << "\n\n \t\t\t\t ----------\n\t\t\t\t | 1. Да  |" << "\n\t\t\t\t | 2. Нет |\n\t\t\t\t ----------\n"<<endl<<"\t\t\t\t";
}

int VV(int x)
{
    int y;
    cin >> y;
    cout << "\n\t\t";
    if (y<1 || y>x)
    do 
    {
        cout << "*/Выбрано не сущетвующее действие\n\t\t";
        cout << "*/Выберете один из варинтов в списке\n\n\t\t\t\t";
        cin >> y;
        cout << "\n\t\t";
    } while (y < 1 || y > x);
    return y;
}

int VNet(int pp)
{ if(pp==2)
    while (pp == 2)
    {
        cout << "\n \t\t (Ты решил не торопиться и собраться с мыслями)";
        cout << "\n\t\t продолжить?" << endl << "\t\t\t\t";
        DaNet();
        pp = VV(2);
        cout << endl;
        system("cls");
    }
    return pp;
}

int pp, grib, var, bollgrib;

int vzgrib()
{
    grib += 1;
    cout << "Вы подобрали " << grib << "й гриб\n";
    system("pause");
    return grib;
}

int Zona(int x)
{
    switch (x)
    {
    case 1:
        cout << "\n\t\t Виден лишь проход ведущий прямо";
        cout << "\n\n \t\t Идти прямо?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;

    case 2:
        cout << "\n\t\t Видно два пути: налево и направо";
        cout << "\n\n \t\t В какую сторону пойти?";
        cout << "\n\n\t\t\t\t --------------\n\t\t\t\t | 1. Налево  |" << "\n\t\t\t\t | 2. Направо |\n\t\t\t\t --------------\n" << endl << "\t\t\t\t";
        pp = VV(2);
        break;

    case 3:
        cout << "\n\t\t Виден поворот направо";
        cout << "\n\n \t\t Повернуть?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;

    case 4:
        cout << "\n\t\t Виден поворот налево";
        cout << "\n\n \t\t повернуть?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;

    case 5 :
        cout << "\n\t\t Ты уперся в тупик";
        cout << "\n\n \t\t повернуть назад?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        cout << "\n\t\t Раздется грохот, ты видишь как лабиринт меняться";
        cout << "\n\n\t\t Продолжить идти?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;
    }
    return pp;
}

int main()
{
    setlocale(0, "rus");

    grib = 0;

    cout << "\n \t\t Перед тобой вход в таинственный лабиринт\n \t\t Желаешь войти для прохождения испытания, юный грибник?";
    DaNet();
    pp = VV(2);
    system("cls");
    while (pp == 2)
    {
        cout << "\n \t\t (Ты решил не торопиться и собраться с мыслями)";
        cout << "\n\t\t Войти в Лабиринт?" << endl << "\t\t\t\t";
        DaNet();
        pp = VV(2);
        system("cls");
    }

    cout << "\n \t\t (Вы заходите в лабиринт)\n\t\t За вашей спиной тут же заростает вход. Больше нет выхода кроме того, как идти дальше";
    cout << "\n\t\t */Ваша цель собрать все грибы, ну и конечно же найти выход, чтобы выжить";
    cout << "\n\n\t\t Под ногами ты видишь гриб\n\n\t\t Взять гриб?";
    DaNet();
    pp = VV(2);
    if (pp == 1)
    {
        grib = vzgrib();
    }
    cout << "\n\n\t\t Идти прямо?";
    DaNet();
    pp = VV(2);
    system("cls");
    VNet(pp);
    do
    {
        cout << "\n\t\t (Ты идешь дальше)" << endl;
        var = 1 + rand() % 5;
        Zona(var);
        bollgrib = 1 + rand() % 2;
        if (bollgrib == 1)
        {
            cout << "\n\n\t\t Под ногами ты видишь гриб\n\n\t\t Взять гриб?";
            DaNet();
            pp = VV(2);
            if (pp == 1)
            {
                grib = vzgrib();
            }
            cout << endl;
        }
        cout << endl;
        system("cls");


    } while (pp!=0);



    cout << "\n\n\t\t Выполняется выход из игры, весь игровой прогресс был утерян.\n\n \t\t *Открыто достижение [Слабак]\n" << endl;
    system("pause");
    return 0;
}

