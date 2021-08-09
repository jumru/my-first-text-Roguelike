#include <iostream>
#include <cstdlib>

using namespace std;



void DaNet()
{
    cout << "\n\n \t\t\t\t ----------\n\t\t\t\t | 1. Yes  |" << "\n\t\t\t\t | 2. No |\n\t\t\t\t ----------\n"<<endl<<"\t\t\t\t";
}

int VV(int x)
{
    int y;
    cin >> y;
    cout << "\n\t\t";
    if (y<1 || y>x)
    do 
    {
        cout << "*/Non-existent action selected\n\t\t";
        cout << "*/Choose one of the options in the list\n\n\t\t\t\t";
        cin >> y;
        cout << "\n\t\t";
    } while (y < 1 || y > x);
    return y;
}

int VNet(int pp)
{ if(pp==2)
    while (pp == 2)
    {
        cout << "\n \t\t (You decided to take your time and collect your thoughts)";
        cout << "\n\t\t continue?" << endl << "\t\t\t\t";
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
    cout << "You picked up " << grib << "th mushroom \n";
    system("pause");
    return grib;
}

int Zona(int x)
{
    switch (x)
    {
    case 1:
        cout << "\n\t\t Only the passage leading straight is visible";
        cout << "\n\n \t\t Go straight?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;

    case 2:
        cout << "\n\t\t Two paths are visible: left and right";
        cout << "\n\n \t\t Which way to go?";
        cout << "\n\n\t\t\t\t --------------\n\t\t\t\t | 1. left  |" << "\n\t\t\t\t | 2. right |\n\t\t\t\t --------------\n" << endl << "\t\t\t\t";
        pp = VV(2);
        break;

    case 3:
        cout << "\n\t\t Turning to the right is visible";
        cout << "\n\n \t\t To turn?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;

    case 4:
        cout << "\n\t\t Left turn visible";
        cout << "\n\n \t\t To turn?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;

    case 5 :
        cout << "\n\t\t You ran into a dead end";
        cout << "\n\n \t\t to turn back?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        cout << "\n\t\t There is a crash, you see the maze change";
        cout << "\n\n\t\t Continue walking?";
        DaNet();
        pp = VV(2);
        VNet(pp);
        break;
    }
    return pp;
}

int main()
{
    

    grib = 0;

    cout << "\n \t\t Before you is the entrance to the mysterious labyrinth\n \t\t Would you like to enter for the test, young mushroom picker?";
    DaNet();
    pp = VV(2);
    system("cls");
    while (pp == 2)
    {
        cout << "\n \t\t (You decided to take your time and collect your thoughts)";
        cout << "\n\t\t Enter the Labyrinth?" << endl << "\t\t\t\t";
        DaNet();
        pp = VV(2);
        system("cls");
    }

    cout << "\n \t\t (You go into the labyrinth)\n\t\t The entrance is immediately overgrown behind your back. There is no other way out but how to move on";
    cout << "\n\t\t */Your goal is to collect all the mushrooms, and of course find a way out to survive";
    cout << "\n\n\t\t You see a mushroom under your feet\n\n\t\t Take a mushroom?";
    DaNet();
    pp = VV(2);
    if (pp == 1)
    {
        grib = vzgrib();
    }
    cout << "\n\n\t\t Go straight?";
    DaNet();
    pp = VV(2);
    system("cls");
    VNet(pp);
    do
    {
        cout << "\n\t\t (You go further)" << endl;
        var = 1 + rand() % 5;
        Zona(var);
        bollgrib = 1 + rand() % 2;
        if (bollgrib == 1)
        {
            cout << "\n\n\t\t You see a mushroom under your feet\n\n\t\t Take a mushroom?";
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



    cout << "\n\n\t\t The game is exited, all game progress has been lost.\n\n \t\t *Achievement unlocked [weakling]\n" << endl;
    system("pause");
    return 0;
}

