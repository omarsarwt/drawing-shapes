#include <bits/stdc++.h>
#include <stdio.h>
#include <windows.h>
#include <thread>
#include <chrono>
using namespace std;
class modify;
//----------------------for set color----------------------
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),value);
}
//----------------------for set form of writing------------
void setform(string s){
    for(char c: s)
    {
        this_thread::sleep_for(chrono::milliseconds(70));
        cout<<c;
    }
}
//----------------------shapes-----------------------------
class shapes{
protected:
int width,height,rows;
public:
    shapes(int w=0,int h=0,int r=0):width(w),height(h),rows(r){}
    virtual double area()=0;
    virtual double perimeter()=0;
    void printarea(){
        cout<<this->area()<<endl;
    }
    void printperimeter(){
        cout<<this->perimeter()<<endl;
    }
};
//----------------------square---------------------------
class square:public shapes{
    shapes::rows;
    shapes::width;
    friend int add(square a , square b);
public:
    square(int h=0):shapes(0,h){
        for(int i=0;i<height;i++){
           for(int j=0;j<height;j++){
               if(i==0 || i==height-1)
                cout<<"* ";
               else if(j==0 || j==height-1)
                cout<<"* ";
               else
               cout<<"  ";
           }
           cout<<endl;
        }
    }
    void printmodification(){
        for(int i=0;i<height;i++){
           for(int j=0;j<height;j++){
               if(i==0 || i==height-1)
                cout<<"* ";
               else if(j==0 || j==height-1)
                cout<<"* ";
               else
               cout<<"  ";
           }
           cout<<endl;
        }
    }
    double area(){
       return pow(height,2);
    }
    double perimeter(){
        return 4*height;
    }
};
//----------------------rectangle------------------------
class rectangle:public shapes{
    shapes::rows;
public:
    rectangle(int h=0,int w=0):shapes(w,h){
        for(int i=0;i<width;i++){
           for(int j=0;j<height;j++){
               if(i==0 || i==width-1)
                cout<<"* ";
               else if(j==0 || j==height-1)
                cout<<"* ";
               else
               cout<<"  ";
           }
           cout<<endl;
        }
    }
    rectangle add(rectangle a);
    void combination(){
        for(int i=0;i<width;i++){
            for(int j=0;j<height;j++){
               if(i==0 || i==width-1)
                cout<<"* ";
               else if(j==0 || j==height-1)
                cout<<"* ";
               else
               cout<<"  ";
            }
            cout<<endl;
        }
    }
    double area(){
       return height*width;
    }
    double perimeter(){
        return 2*(width+height);
    }
};
//----------------------triangle--------------------
class triangle :public shapes{
shapes::height;
shapes::width;
friend int add(triangle a ,triangle b);
protected:
    int e=1;
public:
    triangle(int r=0):shapes(0,0,r){
        for(int i=0;i<rows;i++){
            //first draw
            for(int j=0;j<=i;j++)
            cout<<"*";
            cout<<"\t\t|\t";
            //second draw
            for(int j=rows-1;j>i;j--)
            cout<<" ";
            for(int h=0;h<=i;h++)
            cout<<"*";
            cout<<"\t\t|\t";
            //third draw
            for(int j=rows-1;j>=i;j--)
            cout<<" ";
            for(int k=0;k<e;k++)
            cout<<"*";
            cout<<endl;
            e=e+2;
        }
        cout<<endl<<endl;
    }
    double area(){
        return 0.5*rows*rows;
    }
    double perimeter(){
        return 3*rows;
    }
};
//----------------------designated-------------------
class designated:public shapes{
friend int add(designated a,designated b);
public:
    designated(int r):shapes(0,0,r){
        int e=1;
        for(int i=1;i<=rows;i++){
            for(int j=rows-i;j>0;j--)
            cout<<" ";
            for(int k=1;k<=e;k++)
            cout<<"*";
            cout<<endl;
            e=e+2;
        }
        e=2*rows-1;
        int f=rows-1;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<rows-f;j++)
            cout<<" ";
            if(i!=1){
            for(int k=1;k<=e;k++)
            cout<<"*";
            cout<<endl;
            }
            e=e-2;
            f=f-1;
        }
    }
    double area(){
        return 12*pow((2*rows-1),2);
    }
    double perimeter(){
        return 4*rows;
    }
};
//----------------------modify ^^ -------------------
class modify{
    friend int setheight(modify a);
    friend int setwidth(modify a);
    int x,y;
public:
    modify(int xx=0,int yy=0):x(xx),y(yy){}
    modify operator=(modify f){
      x=f.x;
      y=f.y;
      return *this;
    }
    modify operator+=(modify f){
        x+=f.x;
        y+=f.y;
        return *this;
    }
    modify operator-=(modify f){
      x-=f.x;
      y-=f.y;
      if(x<0)
        x=-x;
      if(y<0)
        y=-y;
      return *this;
    }
    modify operator-(){
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    return *this;
    }
};
//----------------------add square-------------------
int add(square a , square b){
    int height=a.height+b.height;
    return height;
}
//----------------------add rectangle----------------
rectangle rectangle::add(rectangle a){
     rectangle result;
     result.height=a.height+height;
     result.width=a.width+width;
     return result;
}
//----------------------add triangle-----------------
int add(triangle a ,triangle b){
  int rows=a.rows+b.rows;
  return rows;
}
//----------------------add designated---------------
int add(designated a,designated b){
  int rows=a.rows+b.rows;
  return rows;
}
//----------------------set height & rows------------
int setheight(modify a){
   int height=a.x;
   return height;
}
//----------------------set width--------------------
int setwidth(modify a){
   int width=a.y;
   return width;
}
