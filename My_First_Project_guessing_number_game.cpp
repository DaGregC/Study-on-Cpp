#include <iostream>
#include <iomanip>
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main() {
    int choice;
    double balance = 1000;
    do{std::cout
    << "******************************************BANKING PROGRAM***************************************************";
    std::cout << "Please enter 1-4 to choose your action" << '\n';
    std::cout << "1.Show Balancing" << '\n';
    std::cout << "2.Deposit" << '\n';
    std::cout << "3.Withdraw" << '\n';
    std::cout << "4.Exit" << '\n';
    std::cin >> choice;
    switch(choice){
        case 1 : showbalance(balance);
            break;
        case 2 : balance+=deposit();
            showbalance(balance);
            break;
        case 3 : balance-=withdraw(balance);
            showbalance(balance);
            break;
        case 4 : std::cout<<"Thank you for your visiting\n";
            break;
        default: std::cout<<"Invalid choice\n";
    }
    }while (choice!=4);

    return 0;
}
void showbalance(double balance){
    std::cout<<"Balance :$"<<std::setprecision(2)<<std::fixed<<balance<<'\n';
}
double deposit(){
    double amount;
    do{
    std::cout<<"Please enter the amount you want to deposit :$";
    std::cin>>amount;
    if(amount < 0){
        std::cout<<"Invalid amount , please try again."<<'\n';
        return 0;
    }}while(amount<=0);
    return amount;
}
double withdraw(double balance){
    double amount;
    do{std::cout<<"Please enter the amount you want to withdraw :$";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"invalid amount , please try again.\n";
        return 0;
    }
    else if(amount<0){
        std::cout<<"invalid amount , please try again.\n";
        return 0;
    }

    }while (amount>=balance);
    return amount;

}
