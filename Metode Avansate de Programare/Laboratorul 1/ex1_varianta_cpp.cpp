#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>

usingnamespacestd;

intmain()
{
ifstreamfintrare;
ofstreamfiesire;
intch;
stringlinie;
fintrare.open("input.txt");
fiesire.open("output.txt");
if(fintrare.is_open())
{
fiesire<<"Copierelinieculinie:";
while(!fintrare.eof())
{
getline(fintrare,linie);
fiesire<<linie<<"";
}
}
fintrare.close();
fintrare.open("ex1in.txt");
if(fintrare.is_open())
{
fiesire<<"Copierecaractercucaracter:";
while(!fintrare.eof())
while(!fintrare.eof())
{
getline(fintrare,linie);
for(inti=0;i<linie.length();i++)
{
fiesire<<linie[i];
}
fiesire<<"";
}
}
fintrare.close();
fiesire.close();
system("pause");
return0;
}