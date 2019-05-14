#include<iostream.h>
#include<conio.h>

 int main()
 {

 	int bilangan,jumlah=0;

   	for (bilangan=0; bilangan < 20; bilangan++)
      {
      	jumlah+=bilangan;

         if (bilangan >=5) break;
         }
         	cout<<"Deret Bilangan : 1+ 2+ +...+  " << bilangan << endl;
            cout<<"Jumlah Deret Bilangan  = " <<jumlah;


getch();
}


