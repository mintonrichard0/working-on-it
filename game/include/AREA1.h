#include<iostream>
using namespace std;
class AREA1
{
    public:
    bool mapB=false;
    int x;
    int y;
    int arrxy[5][5]={{1,2,3,4,5},{1,2,3,4,5}};
        AREA1();
        ~AREA1();

        void mapC(int mainY, int mainX){
            y=mainY;
            x=mainX;

        }//end mapC
        void mapN(){

            do{
                int inPut;
                cout << "1 up y\n2 down y\n3 up x\n4 down x\n map end y4 x4";
                cin>>inPut;
                system("clear");
                if(inPut==1){y++; cout << "y:["<< y<<"][x:"<<x<<"]\n";}
                if(inPut==2){y--; cout << "y:["<< y<<"][x:"<<x<<"]\n";}
                if(inPut==3){x++;cout << "y:["<< y<<"][x:"<<x<<"]\n";}
                if(inPut==4){x--;cout << "y:["<< y<<"][x:"<<x<<"]\n";}
                if(y<1){system("clear");cout << "choose again\n"; y++;}
                if(y==5){system("clear");cout << "choose again\n"; y--;}
                if(x<1){system("clear");cout << "choose again\n"; x++;}
                if(x==5){system("clear");cout << "choose again\n"; x--;}
                if(x==4&&y==4){mapB=true;}

            }while(!mapB);
    }//end mapN



};//end of class

