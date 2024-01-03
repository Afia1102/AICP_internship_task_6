//created by Afia Mushtaq
//Superior University Lahore
//AICP_Internship1.0_task6

#include<iostream>
using namespace std;

//creating and initializing variables
float weight_cement_min=24.9;
float weight_cement_max=25.1;
float weight_sand_min=49.9;
float weight_sand_max=50.1;
float weight_gravel_min=49.9;
float weight_gravel_max=50.1;
int choice;
int weight;
int num;
int rejected_sacks=0;
double total_price;
int sand_price=2;
int gravel_price=2;
int cement_price=3;
//function declaration
void input_and_store(int choice, int& rejected_sacks);
void customer_order(int& choice, int& rejected_sacks);
int main(){
	
//craeting a repitative menu
do{
	//contents checked
	cout<<"Enter the number:"<<endl;
	cout<<"1- Customer_order\n"
	    <<"2-Exit\n"
		<<"Enter the choice:\n";
	cin>>choice;
	switch(choice){
		case 1:
			customer_order(choice,rejected_sacks);
			input_and_store(choice,rejected_sacks);
			break;
		case 2:
		   //exit the program
			return 0;
		default:
			cout<<"Invalid entry\n"; 	
	}
}while(choice==1||2);
return 0;
}

//Task1+Task3
//weight of sacks validated and rejected sacks reason given.
//Total price of sacks
void input_and_store(int choice, int& rejected_sacks) {
    cout << "\nEnter the weight of sack:";
    cin >> weight;

    if (choice == 1) {
        if (weight_sand_min <= weight && weight <= weight_sand_max) {
            cout << "Accepted\nReason: Weight is within range." << endl;
            cout << "Contents: Sand\nWeight: " << weight << endl;
            total_price += sand_price;
            cout<<"Total price:"<<total_price;
        } else {
            cout << "Rejected\nReason: Weight is out of range." << endl;
            rejected_sacks++;
            cout<<"Rejected sacks:"<<rejected_sacks;
        }
    } else if (choice == 2) {
        if (weight_gravel_min <= weight && weight <= weight_gravel_max) {
            cout << "Accepted\nReason: Weight is within range." << endl;
            cout << "Contents: gravel\nWeight: " << weight << endl;
            total_price += gravel_price;
            cout<<"Total price:"<<total_price;
        } else {
            cout << "Rejected\nReason: Weight is out of range." << endl;
            rejected_sacks++;
            cout<<"Rejected sacks:"<<rejected_sacks;
        }
    } else if (choice == 3) {
        if (weight_cement_min <= weight && weight <= weight_cement_max) {
            cout << "Accepted\nReason: Weight is within range." << endl;
            cout << "Contents: Cement\nWeight: " << weight << endl;
            total_price += cement_price;
            cout<<"Total price:"<<total_price;
        } else {
            cout << "Rejected\nReason: Weight is out of range." << endl;
            rejected_sacks++;
            cout<<"Rejected sacks:"<<rejected_sacks;
        }
    } else {
        cout << "Invalid entry" << endl;
    }
    
}
//Task_2
void customer_order(int& choice, int& rejected_sacks){
	
	  do{ 
	cout<<"Customer_order\n"
	    <<"1-Sand Sacks\n"
	    <<"2-Gravel Sacks\n"
	    <<"3-Cement Sacks\n"
		<<"4-Exit\n";
	    cin>>choice;
	    switch(choice){
	    	case 1:
	    	  cout<<"\nEnter the number of sacks you want to buy:\n";	
	    	  cin>>num;
	    	  for(int i=0;i<=num;i++){
	    	  	input_and_store(1,rejected_sacks);
			  }
			  break;
	    	case 2:
	    	  cout<<"Enter the number:\n";
	    	  cin>>num;
	    	  for(int i=0;i<=num;i++){
	    	  	input_and_store(2,rejected_sacks);
			  }
			  break;
	    	case 3:
	    	  cout<<"Enter the number:\n";
	    	  cin>>num;
	    	  for(int i=0;i<=num;i++){
	    	  	input_and_store(3,rejected_sacks);
			  }
			  break;
			case 4:
		   //exit the program
			exit(0);
			default:
			  	cout<<"Invalid entry\n";
		}
	}while(choice==1||2||3);
}

