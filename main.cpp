#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct RecordedFine {
    int value ;
    string streetname ;
    string status;
    Date dateofrecordedfine;
};

struct OwnedCar {
    string model;
    int platenumber ;
    int productionyear;

} ;

struct DriverInformation {
    string name ;
    string license;
    Date Birthdate;
    OwnedCar C;
    RecordedFine R ;

}D[2]  ;

     string drivername;
     int choice;
     int platenumber;
     int day,month,year;

// Functions Declarations
void Driver1();
void Driver2();
void Car1Driver2();
void Car2Driver2();
void Search();
void PayFine();
void TotalUnpaidFinesOfDriver();
void AddFine();
void Menu();


int main()
{
   D[0].name = "Ahmed Ali";
   D[0].license= "506aBD";
   D[0].Birthdate.day= 1;
   D[0].Birthdate.month= 5;
   D[0].Birthdate.year= 2000;
   D[0].C.model="Peugeot";
   D[0].C.platenumber=123567;
   D[0].C.productionyear=2012;
   D[0].R.value;
   D[0].R.streetname;
   D[0].R.status;
   D[0].R.dateofrecordedfine.day;
   D[0].R.dateofrecordedfine.month;
   D[0].R.dateofrecordedfine.year;

   D[1].name = "Mark David";
   D[1].license= "605CBA";
   D[1].Birthdate.day= 1;
   D[1].Birthdate.month= 1;
   D[1].Birthdate.year= 1999;
   D[1].C.model="Volvo";
   D[2].C.model="Toyota";
   D[1].C.platenumber=456781;
   D[2].C.platenumber=789101;
   D[1].C.productionyear=2011;
   D[2].C.productionyear=2015;
   D[1].R.value;
   D[2].R.value;
   D[1].R.streetname;
   D[2].R.streetname;
   D[1].R.status;
   D[2].R.status;
   D[1].R.dateofrecordedfine.day;
   D[1].R.dateofrecordedfine.month;
   D[1].R.dateofrecordedfine.year;
   D[2].R.dateofrecordedfine.day;
   D[2].R.dateofrecordedfine.month;
   D[2].R.dateofrecordedfine.year;

  Menu();

return 0;
}

// Functions Definitions

 void Driver1()
 {
   cout<<"Name of the Driver : "<<D[0].name<<"\n";
   cout<<"license : " <<D[0].license<<"\n";
   cout<<"Birthdate : "<<D[0].Birthdate.day<< "/"<<D[0].Birthdate.month<<"/"<<D[0].Birthdate.year<<"\n";
   cout<<"Car Model : "<<D[0].C.model<<"\n";
   cout<<"Plate Number : "<<D[0].C.platenumber<<"\n";
   cout<<"Date Of Production of the Car : " <<D[0].C.productionyear<<"\n";
   cout<<"Fine Value : " <<D[0].R.value<<"\n";
   cout<<"Place Where Fine was Recorded : " <<D[0].R.streetname<<"\n";
   cout<<"Status of the Fine : " <<D[0].R.status<<"\n";
   cout<<"Date of Recorded/Paid Fine : " <<D[0].R.dateofrecordedfine.day<<"/"
   <<D[0].R.dateofrecordedfine.month<<"/"<<D[0].R.dateofrecordedfine.year<<"\n";

   }


void Driver2()
{
   cout<<"Name of the Driver : "<<D[1].name<<"\n";
   cout<<"license of the Driver : " <<D[1].license<<"\n";
   cout<<"Birthdate : "  << D[1].Birthdate.day<< "/"<<D[1].Birthdate.month<<"/"<<D[1].Birthdate.year<<"\n";
   cout<<"Car 1 Model : "<<D[1].C.model<<"\n";
   cout<<"Car 2 Model : "<<D[2].C.model<<"\n";
   cout<<"Plate Number of Car 1 : "<<D[1].C.platenumber<<"\n";
   cout<<"Plate Number of Car 2: "<<D[2].C.platenumber<<"\n";
   cout<<"Date Of Production of the Car 1 : "<<D[1].C.productionyear<<"\n";
   cout<<"Date Of Production of the Car 2 : "<<D[2].C.productionyear<<"\n";
   cout<<"Fine Value on Car 1 : "<<D[1].R.value<<"\n";
   cout<<"Fine Value on Car 2 : " <<D[2].R.value<<"\n";
   cout<<"Place Where Fine was Recorded on Car 1 : " <<D[1].R.streetname<<"\n";
   cout<<"Place Where Fine was Recorded on Car 2 : " <<D[2].R.streetname<<"\n";
   cout<<"Status of the Fine on Car 1 : " <<D[1].R.status<<"\n";
   cout<<"Status of the Fine on Car 2 : " <<D[2].R.status<<"\n";

   cout<<"Date of Recorded/Paid Fine on Car 1 : " <<D[1].R.dateofrecordedfine.day<<"/"
   <<D[1].R.dateofrecordedfine.month<<"/"<<D[1].R.dateofrecordedfine.year<<"\n";

   cout<<"Date of Recorded/Paid Fine on Car 2 : " <<D[2].R.dateofrecordedfine.day<<"/"
   <<D[2].R.dateofrecordedfine.month<<"/"<<D[2].R.dateofrecordedfine.year<<"\n";

}


void Car1Driver2()
{
   cout<<"Name of the Driver : "<<D[1].name<<"\n";
   cout<<"license of the Driver : " <<D[1].license<<"\n";
   cout<<"Birthdate : "  << D[1].Birthdate.day<< "/"<<D[1].Birthdate.month<<"/"<<D[1].Birthdate.year<<"\n";
   cout<<"Car 1 Model : "<<D[1].C.model<<"\n";
   cout<<"Plate Number of Car 1 : "<<D[1].C.platenumber<<"\n";
   cout<<"Date Of Production of the Car 1 : "<<D[1].C.productionyear<<"\n";
   cout<<"Fine Value on Car 1 : "<<D[1].R.value<<"\n";
   cout<<"Place Where Fine was Recorded on Car 1 : " <<D[1].R.streetname<<"\n";
   cout<<"Status of the Fine on Car 1 : " <<D[1].R.status<<"\n";
   cout<<"Date of Recorded/Paid Fine on Car 1 : " <<D[1].R.dateofrecordedfine.day<<"/"
   <<D[1].R.dateofrecordedfine.month<<"/"<<D[1].R.dateofrecordedfine.year<<"\n";

}

void Car2Driver2()
{
   cout<<"Name of the Driver : "<<D[1].name<<"\n";
   cout<<"license of the Driver : " <<D[1].license<<"\n";
   cout<<"Birthdate : "  << D[1].Birthdate.day<< "/"<<D[1].Birthdate.month<<"/"<<D[1].Birthdate.year<<"\n";
   cout<<"Car 2 Model : "<<D[2].C.model<<"\n";
   cout<<"Plate Number of Car 2: "<<D[2].C.platenumber<<"\n";
   cout<<"Date Of Production of the Car 2 : "<<D[2].C.productionyear<<"\n";
   cout<<"Fine Value on Car 2 : " <<D[2].R.value<<"\n";
   cout<<"Place Where Fine was Recorded on Car 2 : " <<D[2].R.streetname<<"\n";
   cout<<"Status of the Fine on Car 2 : " <<D[2].R.status<<"\n";
   cout<<"Date of Recorded/Paid Fine on Car 2 : " <<D[2].R.dateofrecordedfine.day<<"/"
   <<D[2].R.dateofrecordedfine.month<<"/"<<D[2].R.dateofrecordedfine.year<<"\n";
}


void Search() // search for the Driver's information either by his name or his car's plate number
{
     cout<<"Search By : "<<"\n"<<"1- By Driver's Name :"<<"\n"<<"2- By Plate Number of The car "<<"\n";
     cin>> choice;

     if(choice==1){
      cout<<"Enter The Name of the Driver : ";
      cin.ignore() ;
      getline(cin,drivername);
      cout<<"    ....................................................................."<<"\n";

     if (drivername== D[0].name){
        Driver1();
        cout<<"Press 1 to Search Again or any number Return to Menu : "<<"\n";
        cin>>choice;
        system("CLS");
        if(choice==1)

            Search();
        else
           Menu();
     }
     else if (drivername==D[1].name){
          Driver2();
          cout<<"Press 1 to Search Again or any number Return to Menu : "<<"\n";
          cin>>choice;
          system("CLS");
          if(choice==1)

            Search();
        else
            Menu();
        }
      else{
           cout<<"You Entered Wrong Name!"<<"\n"<<"Press 1 to Search Again or any number Return to Menu : ";
           cin>>choice;
           system("CLS");
           if(choice==1)

            Search();
           else
            Menu();
       }
     }
     else if (choice==2){
         cout<<"Enter Plate Number of the Car : ";
         cin>>platenumber;
         cout<<"    ....................................................................."<<"\n";

         if(platenumber==D[0].C.platenumber){
             Driver1();
             cout<<"Press 1 to Search Again or any number Return to Menu : "<<"\n";
             cin>>choice;
             system("CLS");
             if(choice==1)
              {
               Search();
              }
            else
               Menu();
         }

         else if (platenumber==D[1].C.platenumber){
           Car1Driver2();
           cout<<"Press 1 to Search Again or any number Return to Menu : "<<"\n";
           cin>>choice;
           system("CLS");
           if(choice==1)
             {
              Search();
             }
            else
               Menu();
         }

         else if (platenumber==D[2].C.platenumber){
             Car2Driver2();
             cout<<"Press 1 to Search Again or any number Return to Menu : "<<"\n";
             cin>>choice;
             system("CLS");
             if(choice==1)
               {
                Search();
               }
             else
                Menu();
         }
         else{
           cout<<"You Entered Wrong Plate Number!"<<"\n"<<"Press 1 to Search Again or any number Return to Menu : ";
           cin>>choice;
           system("CLS");
           if(choice==1)

            Search();
           else
            Menu();
       }
    }
 }

void PayFine() // This Function is Specified for the Driver to Pay for his Cars' Fines
{
   int payment;
   float change;

   cout<<"Enter your Car Plate Number for Paying your Fine : ";
   cin>>platenumber;

   if(platenumber==D[0].C.platenumber){
       cout<<"Please Enter your Fine Payment Here : ";
       cin>>payment;

       if(payment==D[0].R.value){
           D[0].R.value=0;
           cout<<"Enter Date for the Payment : "<<"\n";
           cin>>day;
           cin>>month;
           cin>> year;

           D[0].R.dateofrecordedfine.day= day;
           D[0].R.dateofrecordedfine.month= month;
           D[0].R.dateofrecordedfine.year= year;
           D[0].R.status= "Fine Paid !" ;

           cout<<"Fine Paid Successfully! "<<"\n";
       }

       else if (payment>D[0].R.value){
           change=payment-D[0].R.value;
           D[0].R.value=0;

           cout<<"Enter Date for the Payment : "<<"\n";
           cin>>day;
           cin>>month;
           cin>> year;

           D[0].R.dateofrecordedfine.day= day;
           D[0].R.dateofrecordedfine.month= month;
           D[0].R.dateofrecordedfine.year= year;
           D[0].R.status= "Fine Paid !" ;

           cout<<"Fine Paid Successfully and Change= "<<change<<"\n";
       }
       else if(payment<D[0].R.value){
           D[0].R.status= "Fine Not Paid ! " ;

           cout<<"Fine Not Paid ! "<<"\n";
       }
  }

  else if(platenumber==D[1].C.platenumber){
       cout<<"Please Enter your Fine Payment Here : ";
       cin>>payment;
       if(payment==D[1].R.value){
           D[1].R.value=0;
           cout<<"Enter Date for the Payment : "<<"\n";
           cin>>day;
           cin>>month;
           cin>> year;

           D[1].R.dateofrecordedfine.day= day;
           D[1].R.dateofrecordedfine.month= month;
           D[1].R.dateofrecordedfine.year= year;
           D[1].R.status= "Fine Paid !" ;

           cout<<"Fine Paid Successfully! "<<"\n";
       }
       else if (payment>D[1].R.value){
           change=payment-D[1].R.value;
           D[1].R.value=0;

           cout<<"Enter Date for the Payment : "<<"\n";
           cin>>day;
           cin>>month;
           cin>> year;

           D[1].R.dateofrecordedfine.day= day;
           D[1].R.dateofrecordedfine.month= month;
           D[1].R.dateofrecordedfine.year= year;
           D[1].R.status= "Fine Paid !" ;

           cout<<"Fine Paid Successfully and Change= "<<change<<"\n";
       }
       else if(payment<D[1].R.value){
           D[1].R.status= "Fine Not Paid ! " ;

           cout<<"Fine Not Paid ! "<<"\n";
       }
  }
  else if(platenumber==D[2].C.platenumber){
       cout<<"Please Enter your Fine Payment Here : ";
       cin>>payment;

       if(payment==D[2].R.value){
           D[2].R.value=0;

           cout<<"Enter Date for the Payment : "<<"\n";
           cin>>day;
           cin>>month;
           cin>> year;

           D[2].R.dateofrecordedfine.day= day;
           D[2].R.dateofrecordedfine.month= month;
           D[2].R.dateofrecordedfine.year= year;
           D[2].R.status= "Fine Paid !" ;

           cout<<"Fine Paid Successfully! "<<"\n";
       }
       else if (payment>D[2].R.value){
           change=payment-D[2].R.value;
           D[2].R.value=0;

           cout<<"Enter Date for the Payment : "<<"\n";
           cin>>day;
           cin>>month;
           cin>> year;

           D[2].R.dateofrecordedfine.day= day;
           D[2].R.dateofrecordedfine.month= month;
           D[2].R.dateofrecordedfine.year= year;
           D[2].R.status= "Fine Paid !" ;

           cout<<"Fine Paid Successfully and Change= "<<change<<"\n";
       }
       else if(payment<D[2].R.value){
           D[2].R.status= "Fine Not Paid ! " ;

           cout<<"Fine Not Paid ! "<<"\n";
       }
  }
}

void TotalUnpaidFinesOfDriver() // This Function is for Searching for the Total Unpaid Fines
                                 // on the Driver's Cars
{
    int total=0;

    cout<<"Enter Driver's Name to Display Driver's Total Unpaid Fines : ";
    cin.ignore();
    getline(cin,drivername);

    if(drivername==D[0].name){
        if(D[0].R.value>0){
            cout<<"Unpaid Fines on The Driver's Car = "<<D[0].R.value<<"\n";

            cout<<"Date Of Recorded Fine : "<<D[0].R.dateofrecordedfine.day<<"/"
            <<D[0].R.dateofrecordedfine.month<<"/"<<D[0].R.dateofrecordedfine.year<<"\n";

            cout<<"Street Where Fine Was Recorded : "<<D[0].R.streetname<<"\n";
        }

        else{
            cout<<"Driver has No Unpaid Fines! "<<"\n";
        }
    }

    else if(drivername==D[1].name){
        if(D[1].R.value>0||D[2].R.value>0){
            total=D[1].R.value+D[2].R.value;

            cout<<"Total Unpaid Fines on The Driver's Car = "<<total<<"\n";

            cout<<"Fines on Car 1 = "<<D[1].R.value<<"\n";
            cout<<"Fines on Car 2 = "<<D[2].R.value<<"\n";

            cout<<"Date Of Recorded Fine on Car 1 : "<<D[1].R.dateofrecordedfine.day<<"/"
            <<D[1].R.dateofrecordedfine.month<<"/"<<D[1].R.dateofrecordedfine.year<<"\n";
            cout<<"Date Of Recorded Fine on Car 2 : "<<D[2].R.dateofrecordedfine.day<<"/"
            <<D[2].R.dateofrecordedfine.month<<"/"<<D[2].R.dateofrecordedfine.year<<"\n";

            cout<<"Street Where Fine Was Recorded on Car 1 : "<<D[1].R.streetname<<"\n";
            cout<<"Street Where Fine Was Recorded on Car 2 : "<<D[2].R.streetname<<"\n";
        }
        else{
            cout<<"Driver has No Unpaid Fines! "<<"\n";
        }
    }
}


void AddFine() // This Function is Specified for the Traffic Officer
                 // to Add/Record fines on Cars using their Plate Number if their speed violated maximum speed of the road
{
   string street;
   int maximum_speed=120;
   int car_speed;

   cout<<"Enter Plate Number of the Car to See if The Maximum Speed of the Road was "<<"\n"<<"Violated or Not : ";
   cin>>platenumber;

   if(platenumber==D[0].C.platenumber){
       cout<<"Enter Speed of the Car  : ";
       cin>>car_speed;

       if(car_speed>=maximum_speed){
           cout<<"Enter Name of Street where Maximum Speed was Violated : " ;
           cin.ignore();
           getline(cin,street);

           cout<<"Enter Date when Maximum Speed was Violated : " ;
           cin>>day>>month>>year;

           D[0].R.streetname  =street;

           D[0].R.value=2*(car_speed-maximum_speed);

           D[0].R.dateofrecordedfine.day= day;
           D[0].R.dateofrecordedfine.month= month;
           D[0].R.dateofrecordedfine.year= year;

           cout<<"Fine is Successfully Recorded ! "<<"\n";

       }
       else if(car_speed<maximum_speed){
           cout<<"The Maximum Speed was not Violated !"<<"\n";
       }
   }
       else if(platenumber==D[1].C.platenumber){
          cout<<"Enter Speed of the Car : ";
          cin>>car_speed;

           if(car_speed>=maximum_speed){
           cout<<"Enter Name of Street where Maximum Speed was Violated : " ;
           cin.ignore();
           getline(cin,street);

           cout<<"Enter Date when Maximum Speed was Violated : " ;
           cin>>day>>month>>year;

           D[1].R.streetname=street;

           D[1].R.value=2*(car_speed-maximum_speed);

           D[1].R.dateofrecordedfine.day= day;
           D[1].R.dateofrecordedfine.month= month;
           D[1].R.dateofrecordedfine.year= year;

           cout<<"Fine is Successfully Recorded ! "<<"\n";
       }
       else if(car_speed<maximum_speed){
           cout<<"The Maximum Speed was not Violated!"<<"\n";
       }
   }
   else if(platenumber==D[2].C.platenumber){

       cout<<"Enter Speed of the Car : ";
       cin>>car_speed;

       if(car_speed>=maximum_speed){
           cout<<"Enter Name of Street where Maximum Speed was Violated : " ;
           cin.ignore();
           getline(cin,street);

           cout<<"Enter Date when Maximum Speed was Violated : " ;
           cin>>day>>month>>year;

           D[2].R.streetname  =street;

           D[2].R.value =2*(car_speed-maximum_speed);

           D[2].R.dateofrecordedfine.day= day;
           D[2].R.dateofrecordedfine.month= month;
           D[2].R.dateofrecordedfine.year= year;

           cout<<"Fine is Successfully Recorded ! "<<"\n";
         }

         else if(car_speed<maximum_speed){
           cout<<"The Maximum Speed was not Violated!"<<"\n";
       }
   }
    else{
        cout<<"You Entered Wrong Plate Number !"<<"\n"<<"Press 1 to Retry or 2 to Return to Menu : ";
        cin>>choice;
        system("CLS");
        if(choice==1){
            AddFine();
        }
        else if(choice==2){
            Menu();
        }
    }
}

void Menu() // This Function contains all the choices available for both
            // the Driver and the Traffic officer to choose what they want to do
{
   while(true){
     cout<<"\t"<<"\t"<<"\t"<<"Traffic Control System"<<"\n";

     cout<<"Enter as: "<<"\n"<<"\n";

     cout<<"1 - Traffic Officer "<<"\n";
     cout<<"2 - Driver "<<"\n";
     cin>>choice;
     cout<<"    ....................................................................."<<"\n";
     if(choice==1){
         cout<<"1 - Search for Car Information "<<"\n";
         cout<<"2 - Add Fine for Speed Violation "<<"\n";
         cout<<"3 - Search for Unpaid Fines "<<"\n";
         cin>>choice;
         cout<<"    ....................................................................."<<"\n";
         if(choice==1){
             Search();
             system("PAUSE");
             system("CLS");

         }
         else if (choice==2){
             AddFine();
             system("PAUSE");
             system("CLS");

         }
         else if (choice==3){
             TotalUnpaidFinesOfDriver();
             system("PAUSE");
             system("CLS");
         }
     }
     else if (choice==2){
         cout<<"1 - Search for Car Information "<<"\n";
         cout<<"2 - Pay Car's Fine "<<"\n";
         cout<<"3 - Search for Unpaid Fines "<<"\n";
         cin>>choice;
         cout<<"    ....................................................................."<<"\n";
         if(choice==1){
             Search();
         }
         else if (choice==2){
             PayFine();
         }
         else if (choice==3){
             TotalUnpaidFinesOfDriver();
         }
     }
     else
        break;

system("PAUSE");
system("CLS");
}
}


