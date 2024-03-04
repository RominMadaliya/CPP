#include <iostream>
#include <iomanip>
using namespace std;

struct Bill
{
    string Dish_Name;
    float Dish_price;
    double total;
    int quantity;
};

class Resturent_Item
{
    string Reciepe_Name;
    double Reciepe_price;

public:
    Resturent_Item(){};

    Resturent_Item(string name, float price)
    {
        Reciepe_Name = name;
        Reciepe_price = price;
    }

    Bill Calculator(int quatity)
    {
        Bill answer;
        answer.Dish_Name = Reciepe_Name;
        answer.Dish_price = Reciepe_price;
        answer.quantity = quatity;
        answer.total = Reciepe_price * quatity;

        return answer;
    }
};

void menu()
{
    cout << endl
         << '\t' << '\t' << "WELCOME TO THE EPICUREAN HAVEN RESTURENT" << '\t' << '\t' << endl;
    cout << endl
         << "---------------------------ITEM----------------------------------" << endl;
    cout << endl
         << endl
         << endl;
    cout << endl
         << "                   SOUP                    " << endl;
    cout << "________________________________________________________________________" << endl;

    cout << endl
         << "NUMBER          ITEM                        RATE           " << endl;
    cout << endl
         << "   1            Tomato Soup                  100";
    cout << endl
         << "   2            Cream of Mushroom Soup       100";
    cout << endl
         << "   3            Lentil Soup                  120";
    cout << endl
         << "   4            VegetableSoup                130";
    cout << endl
         << "   5            French Onion Soup            140";
    cout << endl
         << "   6            Manchow Soup                 100";
    cout << endl
         << endl
         << endl;
    cout << endl
         << "                   CHINESE STARTER                    " << endl;
    cout << "________________________________________________________________________" << endl;
    cout << endl
         << "NUMBER          ITEM                        RATE           " << endl;
    cout << endl
         << "   7            Paneer Chilly                125";
    cout << endl
         << "   8            Veg. Chilly                  120";
    cout << endl
         << "   9            Paneer Manchurian            125";
    cout << endl
         << "   10           Veg. Munchurian              100";
    cout << endl
         << "   11           Veg.Sizwan                   100";
    cout << endl
         << "   12           Veg. Hong-Kong               130";
    cout << endl
         << endl
         << endl;
    cout << endl
         << "                   CHINESE RICE&NOODLES                    " << endl;
    cout << "________________________________________________________________________" << endl;
    cout << endl
         << "NUMBER          ITEM                        RATE           " << endl;
    cout << endl
         << "   13           Combination Rice             125";
    cout << endl
         << "   14           Sizwan Noodles               120";
    cout << endl
         << "   15            Hakka Noodles                125";
    cout << endl
         << "   16           Veg. Fried Rice              100";
    cout << endl
         << "   17           Sizwan Rice                  100";
    cout << endl
         << "   18           Hong-Kong Fried Rice         130";
}
int main()
{

    Resturent_Item Menu[50];

    Menu[1] = Resturent_Item{"Tomato Soup", 230.00};
    Menu[2] = Resturent_Item{"Cream of Mushroom Soup ", 230.00};
    Menu[3] = Resturent_Item{"Lentil Soup", 230.00};
    Menu[4] = Resturent_Item{"VegetableSoup", 230.00};
    Menu[5] = Resturent_Item{"French Onion Soup", 230.00};
    Menu[6] = Resturent_Item{"Manchow Soup", 230.00};
    Menu[7] = Resturent_Item{"Paneer Chilly ", 230.00};
    Menu[8] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[9] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[10] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[11] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[12] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[13] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[14] = Resturent_Item{"Kaju Kari", 230.00};
    Menu[15] = Resturent_Item{"Kaju Kari", 230.00};

    int Number;
    int count = 0;
    Bill Reciepe_no[30];

    do
    {
    start:
        cout << endl;
        cout << "***********************************************************************************************************************************************" << endl;

        cout << endl;
        cout << "FOR MENU ENTER 1 " << endl;

        cout << endl;
        cout << "ORDER DISH ENTER 2 " << endl;

        cout << endl;
        cout << "CHECK CURRENT STATUS ENTER 3 " << endl;

        cout << endl;
        cout << "PAY BILL ENTER 4 " << endl;

        cout << endl;
        cout << "IF YOU WANT TO EXIT ENTER 0 " << endl;

        cout << endl;
        cout << "***********************************************************************************************************************************************" << endl;

        cout << endl
             << "ENTER THE NUMBER :"
             << "  ";
        cin >> Number;

        if (Number == 0)
        {
            goto end;
        }
        else if (Number > 4 || Number < 0)
        {
            cout << endl
                 << "INVALID NUMBER" << endl
                 << endl;
            goto start;
        }

        else if (Number == 1)
        {

            menu();
        }

        else if (Number == 2)
        {
            int Dish_Numeber;
            int qty;

            cout << endl
                 << "ENTER THE DISH NUMBER :  ";
            cin >> Dish_Numeber;

            if (Dish_Numeber < 1 || Dish_Numeber > 15)
            {
                cout << endl
                     << "INVALID NUMBER" << endl
                     << endl;
                goto start;
            }

            cout << endl
                 << "ENTER DISH QUANTITY YOU WANT TO ORDERE IT :  ";
            cin >> qty;

            if (qty < 1)
            {
                cout << endl
                     << "INVALID NUMBER" << endl
                     << endl;
                goto start;
            }

            Reciepe_no[count] = Menu[Dish_Numeber].Calculator(qty);

            cout << endl
                 << "------------------------------------------------------------------------------------------------------------------------------------" << endl
                 << endl;
            cout << " YOUR ORDER IS CONFORMED";
            count++;
        }

        else if (Number == 3)
        {

            cout << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

            cout << "NO                  Name                 qty        price       Amount    " << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

            for (int i = 0; i < count; i++)
            {
                cout << endl
                     << i + 1 << "  " << setw(27) << Reciepe_no[i].Dish_Name << "            " << Reciepe_no[i].quantity << "          " << Reciepe_no[i].Dish_price << "          " << Reciepe_no[i].total << endl;
            }
        }

        else if (Number == 4)
        {
            double Total = 0, GST = 0;

            cout << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

            cout << "NO                  Name                 qty        price       Amount    " << endl;

            cout << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

            for (int i = 0; i < count; i++)
            {
                cout << endl
                     << i + 1 << "  " << setw(27) << Reciepe_no[i].Dish_Name << "            " << Reciepe_no[i].quantity << "          " << Reciepe_no[i].Dish_price << "          " << Reciepe_no[i].total << endl;

                Total += Reciepe_no[i].total;
            }

            GST = (Total * 18) / 100;
            cout << endl
                 << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << setw(30) << "GST" << '\t' << '\t' << '\t' << '\t' << '\t' << "  " << GST;

            cout << endl
                 << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
            Total += GST;
            cout
                << setw(30) << "TOTAL" << '\t' << '\t' << '\t' << '\t' << '\t' << "  " << Total;

            cout << endl;
            cout << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

            cout << endl
                 << '\t' << '\t' << "                    THANK YOU FOR VISIT!" << endl;
        }

    end:

        cout << endl << endl  << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||YOUR SESSION IS COMPLETE||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << " ";
    } while (Number != 0);

    return 0;
}
