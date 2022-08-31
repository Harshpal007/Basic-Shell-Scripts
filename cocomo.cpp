#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void organic(double LOC)
{
    double effort=2.4*pow(LOC,1.05);
    double time=2.5*pow(effort,0.38);
     int staff=effort/time;
     cout<<"ORGANIC:-\n\n";
    cout<<"Effort required is"<<effort<<"person time\n";
    cout<<"Time required is"<<time<<"months\n";
    cout<<"Staff required"<<staff<<"persons\n";
}

void semi(double LOC)
{
    double effort=3.0*pow(LOC,1.12);
    double time=2.5*pow(effort,0.35);
    int staff=effort/time;
    cout<<"Semi-Detached\n\n";
    cout<<"Effort required is"<<effort<<"person time\n";
    cout<<"Time required is"<<time<<"months\n";
    cout<<"Staff required"<<staff<<"persons\n";
}
void embed(double LOC)
{
    double effort=3.6*pow(LOC,1.20);
    double time=2.5*pow(effort,0.32);
     int staff=effort/time;
     cout<<"Embedded\n\n";
    cout<<"Effort required is"<<effort<<"person time\n";
    cout<<"Time required is"<<time<<"months\n";
    cout<<"Staff required"<<staff<<"persons\n";
}

int main()
{
    cout<<"ENTER THE LINE OF CODES:- ";
    int LOC;
    cin>>LOC;
    if(LOC<=0) cout<<"WRONG INPUT";
    if(LOC>=1&&LOC<=100) organic(LOC);
    
    else if(LOC>=101&&LOC<=500) semi(LOC);
    else embed(LOC);
    return 0;
}