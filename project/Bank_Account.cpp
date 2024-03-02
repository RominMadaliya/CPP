#include <iostream>
using namespace std;

class Bank_Details
{
protected:
    long long int Account_Number;
    double Account_Balance;
    string Name;
    string Ifsc_code;
    string Password;

public:
    Bank_Details(){};

    Bank_Details(string Name1, long long int Acc_Number1, string Ifsc_code1, double Account_Balance1, string Password1)
    {
        Name = Name1;
        Account_Number = Acc_Number1;
        Ifsc_code = Ifsc_code1;
        Account_Balance = Account_Balance1;
        Password = Password1;
    }

    void Check_Balance()
    {
        cout << endl
             << "Hii" << '\t' << Name << ",Yor Account Details" << endl;

        cout << endl
             << "Name :" << Name;
        cout << endl
             << "Account Number :" << Account_Number;
        cout << endl
             << "IFSC Code :" << Ifsc_code;
        cout << endl
             << "Account Balance :" << Account_Balance;
    }

    void Deposit_Amount()
    {
        double amount;
        cout << endl
             << "ENTER AMOUNT YOU WANT TO ADD IN YOUR ACCOUNT :";
        cin >> amount;

        if (amount <= 0)
        {
            cout << endl
                 << "YOU ENTERED INVALID AMOUNT!";
        }
        else
        {
            Account_Balance = Account_Balance + amount;
        }

        cout<<endl<<"CURRENT STATUS is "<<endl;
        Check_Balance();
    }

    void Withdrawal_Amount()
    {
        double amount;
        cout << endl
             << "ENTER AMOUNT YOU WANT TO WITHDRAW IN YOUR ACCOUNT :";
        cin >> amount;

        if (amount <= 0 || amount > Account_Balance)
        {
            cout << endl
                 << "YOU ENTERED INVALID AMOUNT!";
        }
        else
        {
            Account_Balance = Account_Balance - amount;
        }
        cout<<endl<<"CURRENT STATUS is "<<endl;
        Check_Balance();
    }

    bool Check_Password(string pass)
    {
        if (Password != pass)
        {
            cout << endl
                 << "YOU ENTERED WRONG PASSWORD!";
            return false;
        }
        else
        {
            return true;
        }
    }

    void Transaction(Bank_Details &client,double amount)
    {
        Account_Balance=Account_Balance-amount;
        client.Account_Balance+=amount;
        cout<<endl<<"CURRENT STATUS is "<<endl;
        Check_Balance();
    }

};

int main()
{
    Bank_Details User[10];

    User[1] = Bank_Details{"Ansh Chovatiya", 52090100005566, "BARB00SURAT", 500000.69, "@ANSH033c"};
    User[2] = Bank_Details{"Vivek Madaliaya", 8347431419, "KKBK0000883", 150000, "@VIVEK033m"};
    User[3] = Bank_Details{"Krushn Manadakana", 8347521654, "KKBK0000888", 450000, "@KRUSHN033m"};
    User[4] = Bank_Details{"Nayan Vadodariya", 9099122323, "UBIN0531235", 350000, "@NAYAN33v"};
    User[5] = Bank_Details{"Poonam Koladiya", 312302010088136, "UBIN0531235", 500000, "@POONAM033k"};
    User[6] = Bank_Details{"Arzoo Vadodariya", 52090100005544, "BARB0SARTHA", 600050, "@ARZ00033v"};
    User[7] = Bank_Details{"Kashish Panchani", 312302010088456, "UBIN0534256", 150000, "@KASHISH033p"};
    User[8] = Bank_Details{"Kush Javiya", 52090100005452, "BARB0VANTHA", 100000, "@KUSH033j"};
    User[9] = Bank_Details{"Divyesh Dankhara", 8347431521, "KKBK0000554", 600000, "@DIVYESH033d"};
    User[10] = Bank_Details{"Romin Madaliaya", 52090100006084, "BARB0BILKHA", 250000, "@ROMIN033m"};

    int number;

    do
    {

        cout << endl;
        cout << "***********************************************************************************************************************************************" << endl;

        cout << endl;
        cout << "CHECK BALANCE ENTER 1 " << endl;

        cout << endl;
        cout << "DEPOSITE MONEY ENTER 2 " << endl;

        cout << endl;
        cout << "WITHDRAWAL MONEY ENTER 3 " << endl;

        cout << endl;
        cout << "IF YOU WANT TO TRANSFER MONEY ENTER 4 " << endl;

        cout << endl;
        cout << "IF YOU WANT TO EXIT ENTER 0 " << endl;

        cout << endl;
        cout << "***********************************************************************************************************************************************" << endl;

        cout << endl
             << "ENTER THE NUMBER :"
             << "  ";
        cin >> number;

        int n;
      
        if (number == 0)
        {
            goto end;
        }

        else if (number > 4 || number < 0)
        {
            cout << endl
                 << "INVALID NUMBER" << endl
                 << endl;
            goto end;
        }

        cout << endl;

        cout << "Enter user Number:";
        cin >> n;

        if (n < 0 || n > 10)
        {
            cout << endl
                 << "INVALID USER NUMBER!" << endl
                 << endl;
            goto end;
        }

        else
        {
         string pass;
         getchar();
         cout<<endl<<"ENTER YOUR PASSWORD : ";
         getline(cin,pass);
        bool Check;

        Check = User[n].Check_Password(pass);

        if(Check==false)
        {
            goto end;
        }
        }







        if (number == 1)
        {
            User[n].Check_Balance();
        }

        else if (number == 2)
        {
            User[n].Deposit_Amount();
        }

        else if (number == 3)
        {
            User[n].Withdrawal_Amount();
        }
        else if (number==4)
        {
            int Client_Usernum;
            double Amount;

            cout<<endl<<"ENTER THE USER NUMBER OF CLIENT :  ";
            cin>>Client_Usernum; 

            cout<<endl<<"ENTER THE AMOUNT YOU WANT TO TRANSFER :  ";
            cin>>Amount;

            User[n].Transaction(User[Client_Usernum],Amount);
        }

        cout << endl;
        cout << endl
             << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

    end:
        cout << endl
             << "YOUR SESSION IS COMPLETED THANK YOU!" << endl;

        cout << endl;
        cout << "-------------------------------------------------------------------------------------------------------------------------------------- " << endl;

        cout << endl
             << endl
             << endl
             << endl
             << endl
             << " ";

    } while (number != 0);

    return 0;
}