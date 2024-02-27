#include<iostream>


using namespace std;

class test
{
    private:

    int testcode;
    string discription; 
    int nocandidate;
    int centreqd;

    int calcntr(int nocandidate)
    {
        centreqd = (nocandidate/100)+1;
       return centreqd;
    }

    public:
    
   // void schedule()
   test()
    {
        cout<<"Enter test code :";
        cin>>testcode;
        cin.ignore();
        cout<<"Enter description :";
        getline(cin,discription);
        cout<<"Enter number of candidate:";
        cin>>nocandidate;

        calcntr(nocandidate);

    };

    void disptest()
    {
        cout<<"The test code is :"<<testcode<<endl;
        cout<<"Discription : "<<discription<<endl;
        cout<<"number of candidate is : "<<nocandidate<<endl;
        cout<<"number of center is : "<<centreqd<<endl;
                
    };

        
     ~test()
     {
      cout<<"Deallocate the data  ";
     }

};

int main()
{
    test data;
    // data.schedule();
    cout<<"-----------------"<<endl;
    data.disptest();

    return 0;
}
