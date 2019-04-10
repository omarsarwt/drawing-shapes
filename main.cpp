#include <bits/stdc++.h>
#include <stdio.h>
#include <windows.h>
#include <thread>
#include <chrono>
#include "shaping.h"
using namespace std;
int main(){
    string username;
    string password;
    do
	{
    SetColor(10);
    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t";setform("Login ^^");
    SetColor(5);
    cout<<"\n\n\t\t\t\t\t";setform("username: ");
    SetColor(6);
    getline(cin,username);
    if (username == "admin")
	{
	    SetColor(5);
        cout<<"\n\t\t\t\t\t";setform("password: ");
        SetColor(6);
        getline(cin, password);
        if (password != "admin")
		{
        SetColor(4);
        cout<<"\n\t\t\t\t\t";setform("Invalid password.Try again.");
        Sleep(1200);
		system("cls");
		}
    }
	else
	{
      SetColor(4);
      cout<<"\n\t\t\t\t\t";setform("Invalid username. Try again.");
      Sleep(1200);
	  system("cls");
	}
    } while (password != "admin");
    this_thread::sleep_for(chrono::milliseconds(500));
    system("cls");
    cout<<"\n\n\n\n\n\n\n\t\t          ";setform("\tDeveloped by : \"ENG\"- ");
    setform(" OMAR SARWT \n");
    cout<<"\n\t\t\t\t\t\t ";setform("      ALYAA KHALED \n");
    cout<<"\n\n\n\n\n\t\t\t       ";
    system("pause");
    system("cls");
    loop4:
    SetColor(14);
    cout<<"\n\n\t\t\t\t\t===================================="<<endl;
    cout<<"\t\t\t\t\t    WELCOME TO OUR SHAPE SYSYTEM   "<<endl;
    cout<<"\t\t\t\t\t===================================="<<endl<<endl;
    int t=6;
    bool flag=true;
    while(flag){
        SetColor(3);
        cout<<"**********************************"<<endl;
        cout<<"** NEW SHAPES    ==> press : 1  **"<<endl;
        cout<<"** COMBINATION   ==> press : 2  **"<<endl;
        cout<<"** MODIFY        ==> press : 3  **"<<endl;
        cout<<"** EXIT          ==> press : 4  **"<<endl;
        cout<<"**********************************"<<endl<<endl;
        loop1:
        SetColor(15);
        setform(" YOUR CHOICE : ");
        int num,nofmodify;
        char S_shape;
        cin>>num;
        if(!(num>=1 && num <=4)){
            SetColor(4);
            setform("\n INCORRECT CHOICE !! \n\n");
            goto loop1;
        }
        if(num!=4){
            SetColor(3);
            cout<<"\n**********************************"<<endl;
            cout<<"**     A- SQUARE                **"<<endl;
            cout<<"**     B- RECTANGLE             **"<<endl;
            cout<<"**     C- TRIANGLE              **"<<endl;
            cout<<"**     D- DESIGNATED            **"<<endl;
            cout<<"**********************************"<<endl<<endl;
            loop2:
            SetColor(15);
            setform(" CHOOSE SHAPE : ");
            cin>>S_shape;
            if(!(S_shape == 'A' || S_shape == 'B' || S_shape == 'C'|| S_shape == 'D')){
                SetColor(4);
                setform("\n INCORRECT CHARACTER !! \n\n");
                goto loop2;
            }
        }
        if(num==3){
            SetColor(3);
            cout<<"\n**********************************"<<endl;
            cout<<"**     1- INCREMENT             **"<<endl;
            cout<<"**     2- DECREMENT             **"<<endl;
            cout<<"**     3- RADICAL CHANGE        **"<<endl;
            cout<<"**********************************"<<endl<<endl;
            loop3:
            SetColor(15);
            setform(" YOUR CHOICE : ");
            cin>>nofmodify;
            if(!(nofmodify>=1 && nofmodify<=3)){
                 SetColor(4);
                 setform("\n INCORRECT CHOICE !! \n\n");
                 goto loop3;
            }
        }
        switch(num){
        case 1:
        if(S_shape=='A'){
            int height;
            SetColor(11);
            setform("\n Enter Height Of Square : ");
            cin>>height;cout<<"\n";
            SetColor(10);
            square x(height);
            shapes *p1=&x;
            SetColor(12);
            setform("\n Area Of Square = ");p1->printarea();
            setform(" perimeter Of Square = ");p1->printperimeter();cout<<"\n";
        }
        else if(S_shape=='B'){
            int height,width;
            loop5:
            SetColor(11);
            setform("\n Enter Height Then Width Of Rectangle : ");
            cin>>height>>width;
            if(height==width){
                SetColor(4);
                setform("\n Height Can't Equal Width \n");
                goto loop5;
            }
            cout<<"\n";
            SetColor(10);
            rectangle x(height,width);
            shapes *p1=&x;
            SetColor(12);
            setform("\n Area Of Square = ");p1->printarea();
            setform(" perimeter Of Rectangle = ");p1->printperimeter();cout<<"\n";
        }
        else if(S_shape=='C'){
            int rows;
            SetColor(11);
            setform("\n Enter Rows of Triangle : ");
            cin>>rows; cout<<"\n";
            SetColor(10);
            triangle x(rows);
            shapes *p1=&x;
            SetColor(12);
            setform("\n Area Of Triangle = ");p1->printarea();
            setform(" perimeter Of Triangle = ");p1->printperimeter();cout<<"\n";
        }
        else if(S_shape=='D'){
            int rows;
            SetColor(11);
            setform("\n Enter Rows of Designated  : ");
            cin>>rows;cout<<"\n";
            SetColor(10);
            designated x(rows);
            shapes *p1=&x;
            SetColor(12);
            cout<<"\n Area Of Designated = ";p1->printarea();
            cout<<" perimeter Of Designated = ";p1->printperimeter();cout<<"\n";
        }
        break;
        case 2:
        if(S_shape=='A'){
            int height1,height2;
            SetColor(11);
            setform("\n First And Second Height Of Square : ");
            cin>>height1>>height2;
            SetColor(4);
            setform("\n Squares Before Combination  : \n\n");
            SetColor(10);
            square x(height1);
            shapes *p1=&x;
            SetColor(12);
            setform("\n Area Of First Square = ");p1->printarea();
            setform(" Perimeter Of First Square = ");p1->printperimeter();cout<<"\n";
            SetColor(10);
            square y(height2);
            shapes *p2=&y;
            SetColor(12);
            setform("\n Area Of Second Square = ");p2->printarea();
            setform(" Perimeter Of Second Square = ");p2->printperimeter();
            SetColor(4);
            setform("\n Square After Combination : \n\n");
            SetColor(10);
            square z(add(x,y));
            shapes *p3=&z;
            SetColor(12);
            setform("\n Area Of Combined Square = ");p3->printarea();
            setform(" Perimeter Of Combined Square = ");p3->printperimeter();cout<<"\n";
        }
        else if(S_shape=='B'){
            int height1,width1,height2,width2;
            loop6:
            SetColor(11);
            setform("\n First Height And Width Of Rectangle :");
            cin>>height1>>width1;
            if(height1==width1){
                SetColor(4);
                setform("\n Height Can't Equal Width \n");
                goto loop6;
            }
            loop7:
            SetColor(11);
            setform("\n Second Height And Width Of Rectangle :");
            cin>>height2>>width2;
            if(height2==width2){
                SetColor(4);
                setform("\n Height Can't Equal Width \n");
                goto loop7;
            }
            SetColor(4);
            setform("\n Rectangles Before Combination : \n\n");
            SetColor(10);
            rectangle x(height1,width1);
            shapes *p1=&x;
            SetColor(12);
            setform("\n Area Of First Rectangle = ");p1->printarea();
            setform(" Perimeter Of First Rectangle = ");p1->printperimeter();cout<<"\n";
            SetColor(10);
            rectangle y(height2,width2);
            shapes *p2=&y;
            SetColor(12);
            setform("\n Area Of Second Rectangle = ");p2->printarea();
            setform(" Perimeter Of Second Rectangle = ");p2->printperimeter();cout<<"\n";
            rectangle z(x.add(y));
            SetColor(4);
            setform("\n Rectangle After Combination :\n\n");
            SetColor(10);
            z.combination();
            shapes *p3=&z;
            SetColor(12);
            setform("\n Area Of Combined Rectangle = ");p3->printarea();
            setform(" Perimeter Of Combined Rectangle = ");p3->printperimeter();cout<<"\n";
        }
        else if(S_shape=='C'){
             int rows1,rows2;
             SetColor(11);
             setform("\n Enter First And Second Rows Of Triangle : ");
             cin>>rows1>>rows2;
             SetColor(4);
             setform("\n Triangles Before Combination : \n\n");
             SetColor(10);
             triangle x(rows1);
             shapes *p1=&x;
             SetColor(12);
             setform("\n Area Of First Triangle = ");p1->printarea();
             setform(" Perimeter Of First Triangle = ");p1->printperimeter();cout<<"\n\n";
             SetColor(10);
             triangle y(rows2);
             shapes *p2=&y;
             SetColor(12);
             setform("\n Area Of Second Triangle = ");p2->printarea();
             setform(" Perimeter Of Second Triangle = ");p2->printperimeter();cout<<"\n\n";
             SetColor(4);
             setform("\n Triangle After Combination : \n\n");
             SetColor(10);
             triangle z(add(x,y));
             shapes *p3=&z;
             SetColor(12);
             setform("\n Area Of Combined Triangle = ");p3->printarea();
             setform(" Perimeter Of Combined Triangle = ");p3->printperimeter();cout<<"\n";
        }
        else if(S_shape=='D'){
             int rows1,rows2;
             SetColor(11);
             setform("\n Enter First And Second Rows Of designated : ");
             cin>>rows1>>rows2;
             SetColor(4);
             setform("\n Designated Before Combination : \n\n");
             SetColor(10);
             designated x(rows1);
             shapes *p1=&x;
             SetColor(12);
             setform("\n Area Of First Designated = ");p1->printarea();
             setform(" Perimeter Of First Designated = ");p1->printperimeter();cout<<"\n\n";
             SetColor(10);
             designated y(rows2);
             shapes *p2=&y;
             SetColor(12);
             setform("\n Area Of Second Designated = ");p2->printarea();
             setform(" Perimeter Of Second Designated = ");p2->printperimeter();cout<<"\n\n";
             SetColor(4);
             setform("\n Designated After Combination :\n\n");
             SetColor(10);
             designated z(add(x,y));
             shapes *p3=&z;
             SetColor(12);
             setform("\n Area Of Combined Designated = ");p3->printarea();
             setform(" Perimeter Of Combined Designated = ");p3->printperimeter();cout<<"\n\n";
        }
        break;
        case 3:
        if(S_shape=='A'){
            int height1,height2;
            SetColor(11);
            setform("\n Enter Height Of Square To Modify : ");
            cin>>height1;
            SetColor(4);
            setform("\n Square Before Modification : \n\n");
            SetColor(10);
            square f(height1);
            shapes *p1=&f;
            SetColor(12);
            setform("\n\n Area Of Square : ");p1->printarea();
            setform(" Perimeter Of Square : ");p1->printperimeter();
            SetColor(11);
            setform("\n Enter your Modification : ");
            cin>>height2;
            modify x(height1),y(height2);
            if(nofmodify==1){
               x+=y;
               SetColor(4);
               setform("\n Square After Modification :\n\n");
               SetColor(10);
               square z(setheight(x));
               shapes *p2=&z;
               SetColor(12);
               setform("\n Area Of Modified Square : ");p2->printarea();
               setform(" Perimeter Of Modified Square : ");p2->printperimeter();cout<<"\n";
           }
           else if(nofmodify==2){
              x-=y;
              -x;
              SetColor(4);
              setform("\n Square After Modification :\n\n");
              SetColor(10);
              square z(setheight(x));
              shapes *p2=&z;
              SetColor(12);
              setform("\n Area Of Modified Square : ");p2->printarea();
              setform(" Perimeter Of Modified Square : ");p2->printperimeter();cout<<"\n";
           }
           else if(nofmodify==3){
              x=y;
              SetColor(4);
              setform("\n Square After Modification :\n\n");
              SetColor(10);
              square z(setheight(x));
              shapes *p2=&z;
              SetColor(12);
              setform("\n Area Of Modified Square : ");p2->printarea();
              setform(" Perimeter Of Modified Square : ");p2->printperimeter();cout<<"\n";
           }
        }
        else if(S_shape=='B'){
              int height1,width1,height2,width2;
              loop8:
              SetColor(11);
              setform("\n Enter Height And Width Of Rectangle To Modify : ");
              cin>>height1>>width1;
              if(height1==width1){
                SetColor(4);
                setform("\n Height Can't Equal Width \n");
                goto loop8;
              }
              SetColor(4);
              setform("\n Rectangle Before Modification : \n\n");
              SetColor(10);
              rectangle f(height1,width1);
              shapes *p1=&f;
              SetColor(12);
              setform("\n Area Of Rectangle : ");p1->printarea();
              setform(" Perimeter Of Rectangle : ");p1->printperimeter();
              loop9:
              SetColor(11);
              setform("\n Enter Your Modification : ");
              cin>>height2>>width2;
              if(height2==width2){
                SetColor(4);
                setform("\n Height Can't Equal Width \n");
                goto loop9;
              }
              modify x(height1,width1),y(height2,width2);
              if(nofmodify==1){
                x+=y;
                SetColor(4);
                setform("\n Rectangle After Modification : \n\n");
                SetColor(10);
                rectangle z(setheight(x),setwidth(x));
                shapes *p2=&z;
                SetColor(12);
                setform("\n Area Of Modified Rectangle : ");p2->printarea();
                setform(" Perimeter Of Modified Rectangle : ");p2->printperimeter();cout<<"\n";
              }
              else if(nofmodify==2){
                x-=y;
                -x;
                SetColor(4);
                setform("\n Rectangle After Modification : \n\n");
                SetColor(10);
                rectangle z(setheight(x),setwidth(x));
                shapes *p2=&z;
                SetColor(12);
                setform("\n Area Of Modified Rectangle : ");p2->printarea();
                setform(" Perimeter Of Modified Rectangle : ");p2->printperimeter();cout<<"\n";
              }
              else if(nofmodify==3){
                x=y;
                SetColor(4);
                setform("\n Rectangle After Modification : \n\n");
                SetColor(10);
                rectangle z(setheight(x),setwidth(x));
                shapes *p2=&z;
                SetColor(12);
                setform("\n Area Of Modified Rectangle : ");p2->printarea();
                setform(" Perimeter Of Modified Rectangle : ");p2->printperimeter();cout<<"\n";
              }
        }
        else if(S_shape=='C'){
              int rows1,rows2;
              SetColor(11);
              setform("\n Enter Rows Of Triangle To Modify : ");
              cin>>rows1;
              SetColor(4);
              setform("\n Triangle Before Modification : \n\n");
              SetColor(10);
              triangle f(rows1);
              shapes *p1=&f;
              SetColor(12);
              setform("\n Area Of Triangle : ");p1->printarea();
              setform(" Perimeter Of Triangle : ");p1->printperimeter();
              SetColor(11);
              setform("\n\n Enter Your Modification : ");
              cin>>rows2;
              modify x(rows1),y(rows2);
              if(nofmodify==1){
                x+=y;
                SetColor(4);
                setform("\n Triangle After Modification : \n\n");
                SetColor(10);
                triangle z(setheight(x));
                shapes *p2=&z;
                SetColor(12);
                setform("\n Area Of Modified Triangle : ");p2->printarea();
                setform(" Perimeter Of Modified Triangle : ");p2->printperimeter();cout<<"\n";
              }
              else if(nofmodify==2){
                x-=y;
                -x;
                SetColor(4);
                setform("\n Triangle After Modification : \n\n");
                SetColor(10);
                triangle z(setheight(x));
                shapes *p2=&z;
                SetColor(12);
                setform("\n Area Of Modified Triangle : ");p2->printarea();
                setform(" Perimeter Of Modified Triangle : ");p2->printperimeter();cout<<"\n";
              }
              else if(nofmodify==3){
                x=y;
                SetColor(4);
                cout<<"\n Triangle After Modification : \n\n";
                SetColor(10);
                triangle z(setheight(x));
                shapes *p2=&z;
                SetColor(12);
                setform("\n Area Of Modified Triangle : ");p2->printarea();
                setform(" Perimeter Of Modified Triangle : ");p2->printperimeter();cout<<"\n";
              }
        }
        else if(S_shape=='D'){
                int rows1,rows2;
                SetColor(11);
                setform("\n Enter Rows Of Designated To Modify : ");
                cin>>rows1;
                SetColor(4);
                setform(" Designated Before Modification : \n\n");
                SetColor(10);
                designated f(rows1);
                shapes *p1=&f;
                SetColor(12);
                setform("\n Area Of Designated : ");p1->printarea();
                setform(" Perimeter Of Designated : ");p1->printperimeter();
                SetColor(11);
                setform("\n\n Enter Your Modification : ");
                cin>>rows2;
                modify x(rows1),y(rows2);
                if(nofmodify==1){
                    x+=y;
                    SetColor(4);
                    setform("\n Designated After Modification : \n\n");
                    SetColor(10);
                    designated z(setheight(x));
                    shapes *p2=&z;
                    SetColor(12);
                    setform("\n Area Of Modified Designated : ");p2->printarea();
                    setform(" Perimeter Of Modified Designated : ");p2->printperimeter();cout<<"\n";
                }
                else if(nofmodify==2){
                    x-=y;
                    -x;
                    SetColor(4);
                    setform("\n Designated After Modification : \n\n");
                    SetColor(10);
                    designated z(setheight(x));
                    shapes *p2=&z;
                    SetColor(12);
                    setform("\n Area Of Modified Designated : ");p2->printarea();
                    setform(" Perimeter Of Modified Designated : ");p2->printperimeter();cout<<"\n";
                }
                else if(nofmodify==3){
                    x=y;
                    SetColor(4);
                    setform("\n Designated After Modification : \n\n");
                    SetColor(10);
                    designated z(setheight(x));
                    shapes *p2=&z;
                    SetColor(12);
                    setform("\n Area Of Modified Designated : ");p2->printarea();
                    setform(" Perimeter Of Modified Designated : ");p2->printperimeter();cout<<"\n";
                }
        }
        break;
        case 4:
            SetColor(6);
            setform("\n Exiting in : ");
            while(t--){
                this_thread::sleep_for(chrono::seconds(1));
                cout<<t<<" Seconds...."<<endl;
                cout<<"\t      ";
            }
            SetColor(15);
            exit(0);
        }
        SetColor(5);
        setform(" DO you wanna continue 'Y/N' : ");
        char key;
        cin>>key;
        if(!(key =='Y' || key=='y'))
        flag=false;
        else{
            system("cls");
            goto loop4;
        }
   }
   SetColor(15);
}
