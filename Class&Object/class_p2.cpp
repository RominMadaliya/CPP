#include<iostream>

using namespace std;

class batsman
{
    private:

    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;

    int clacavg(int runs, int innings, int  notout)
    {
        batavg=runs/(innings-notout);

        return batavg; 
    }

    public:

    void readdata()
    {

        cout << "Enter Batsman code :";
        cin>>bcode;
        cin.ignore();
        cout<<"Enter the Batsman name:";
        gets(bname);
        cout<<"How many Ennings Playing ? :";
        cin>>innings;
        cout<<"How many match Player is notout ? :";
        cin>>notout;
        cout<<"How many runs Batsman score ? :";
        cin>>runs;
        batavg=clacavg(runs,innings,notout);
    }

    void displaydata()
    {
        cout<<"Batsman code is :"<<bcode<<endl;
        cout<<"Batsman name is :"<<bname<<endl;
        
        cout<<"Batsman Avarege is :"<<batavg<<endl;

    }
    

};

int main()
{
    batsman data;
    data.readdata();
    cout<<"-----------------"<<endl;
    data.displaydata();

    return 0;
}