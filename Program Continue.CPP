#include<iostream.h>
#include<conio.h>

 int main()
 {

 	int bilangan,jumlah=0;

   	for (bilangan=1; bilangan <=5; bilangan++)
      {

         if (bilangan ==3 || bilangan==4) continue;
         jumlah += bilangan;
         }
         	cout<<"Deret Bilangan : 1 + 2 + 3 + 4 +  " << bilangan << endl;
            cout<<"Jumlah Deret Bilangan  = " <<jumlah;


getch();
}

