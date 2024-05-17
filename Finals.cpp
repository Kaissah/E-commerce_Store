#include <iostream>
using namespace std;

int price(int x, int y)//multiply
{
	return x* y;
}
int change(int x, int y)//subtraction
{
	return x-y;
}
int main()
{
    start://label
    int user_choice,qty,flavor,item,a;//main identifiers
    char ans;// is when we need answer from the user
    int prices [13] = {0,80, 60,75,55,65,70, 60, 50, 70, 100, 95, 80};//array to determine the prices of our icecreams
    float total_amount = 0; 
    string choices [16] = {"Gelato", "Sorbet", "Frozen Yogurt", "Mochi Ice cream", "Chocolate Sin", "Honey Vanilla", "Strawberry Disease", "Coconut Banana",
    "Sweet Cherry", "Mangooey", "Blue Flower Lemonade", "Fig Newton froyo", "Fruity Sprinkles Tart", "S’mores", "Matcha Green Tea", "Passion Fruit"};
   //will output the different title flavors
do 
    { 
     
     cout<<"----MENU----"<<endl<<endl;
     cout<<"1. "<<choices[0]<<endl;
     cout<<"2. "<<choices[1]<<endl;
     cout<<"3. "<<choices[2]<<endl;
     cout<<"4. "<<choices[3]<<endl<<endl;
     cout<<"Please type the number of your choosen variety of Ice cream: ";
     cin>>user_choice;
     if(user_choice <=0 || user_choice>=5){ //1,2,3,4
	 
     cout<<"INVALID CHOICE \n ";
              cout<<"Do you want to retry? y/n: "; 
              cin>>ans;
              if(ans == 'y'|| ans=='Y'){
              	goto start;}
              		else
              		return 0;}
     cout<<endl;

        if (user_choice == 1) 
        {
         cout<<"You have selected "<< choices[0]<<":"<<endl;
         cout<<"1. "<<choices[4]<<" - PHP 80"<<endl<<"2. "<<choices[5]<<" - PHP 60"<<endl<<"3. "<<choices[6]<<" - PHP 75"<<endl<<endl;
         cout<<"Please type the number of your choosen flavor of Ice cream: ";
         cin>>flavor;
         if (flavor<=0 || flavor>=4)
          { 
              cout<<"INVALID CHOICE \n ";
              cout<<"Do you want to retry? y/n: ";
              cin>>ans;
              if(ans == 'y'|| ans=='Y'){
              	item=0;
              	goto start;}
              		else
              		return 0;
			  
          }
         cout<<endl;
         cout<<"Enter the Quantity: ";
         cin>>qty;//quantity
         
         
        }    
    
        else if (user_choice == 2)
        {
         cout<<"You have selected "<< choices[1]<<":"<<endl;
         cout<<"1. "<<choices[7]<<" - PHP 55"<<endl<<"2. "<<choices[8]<<" - PHP 65"<<endl<<"3. "<<choices[9]<<" - PHP 70"<<endl<<endl;
         cout<<"Please type the number of your choosen flavor of Ice cream: ";
         cin>>flavor;
         if (flavor<=0 || flavor>=4)
          { 
              cout<<"INVALID CHOICE \n ";
              cout<<"Do you want to retry? y/n: ";
              cin>>ans;
              if(ans == 'y'|| ans=='Y'){
              	item=0;
              	goto start;}
              		else
              		return 0;
          }
         prices[flavor+=3];
         cout<<endl;
         cout<<"Enter the Quantity: ";
         cin>>qty;
         
        }
         
        else if (user_choice == 3)
        {
         cout<<"You have selected "<< choices[2]<<":"<<endl;
         cout<<"1. "<<choices[10]<<" - PHP 60"<<endl<<"2. "<<choices[11]<<" - PHP 50"<<endl<<"3. "<<choices[12]<<" - PHP 70"<<endl<<endl;
         cout<<"Please type the number of your choosen flavor of Ice cream: ";
         cin>>flavor;
         if (flavor<=0 || flavor>=4)
          { 
              cout<<"INVALID CHOICE \n ";
              cout<<"Do you want to retry? y/n: ";
              cin>>ans;
              if(ans == 'y'|| ans=='Y'){
              	item=0;
              	goto start;}
              		else
              		return 0;
          }
         prices[flavor+=6];
         cout<<endl;
         cout<<"Enter the Quantity: ";
         cin>>qty;
         
        }
            
        else if (user_choice == 4)
        {
         cout<<"You have selected "<< choices[3]<<":"<<endl;
         cout<<"1. "<<choices[13]<<" - PHP 100"<<endl<<"2. "<<choices[14]<<" - PHP 95"<<endl<<"3. "<<choices[15]<<" - PHP 80"<<endl<<endl;
         cout<<"Please type the number of your choosen flavor of Ice cream: ";
         cin>>flavor;
         if (flavor<=0 || flavor>=4)
          { 
              cout<<"INVALID CHOICE \n ";
              cout<<"Do you want to retry? y/n: ";
              cin>>ans;
              if(ans == 'y'|| ans=='Y'){
              	item=0;
				goto start;}
              		else
              		return 0;
          }
         prices[flavor+=9];
         cout<<endl;
         cout<<"Enter the Quantity: ";
         cin>>qty;
         
        }
        
        item+=price(prices[flavor],qty);
        cout<<"your subtotal is: php "<<item<<endl;
        cout<<"Is there anything else you want to add? (y/n): ";
         cin>>ans;
         cout<<endl;
         
    } 
    
while (ans == 'y' || ans == 'Y');

    if (ans == 'n' || ans == 'N')
    {
	
	 
	
     total_amount = item;
    
     
     cout << "Your total amount is PHP " << total_amount << endl;
     
    
     cout<<"Please enter your payment: Php";
     cin>>a;

     cout<<"Your change is: Php"<<change(a,total_amount)<<endl;
     cout<<"----THANK YOU FOR SHOPPING----"<<endl;
     
     


}
    return 0;
}
