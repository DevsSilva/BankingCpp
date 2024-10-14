#include <iostream>

void CheckBalance(double balance);
double Deposit();
double Withdraw(double balance);

int main(){    
    double balance = 0;
    int choice;
    do{
        std::cout << "What do you wish to do?" << '\n';
        std::cout << "(1) Check the balance in your acount" << '\n';
        std::cout << "(2) Make a deposit into your acount" << '\n';
        std::cout << "(3) Make a withdraw from your acount " << '\n';
        std::cout << "(4) Exit the program " << '\n';
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);


        switch(choice){
            case 1: CheckBalance(balance);
                break;
            case 2: balance = balance + Deposit();
                    std::cout << "Your balance is now at: " << balance << "$" << '\n';
                break;
            case 3: balance = balance - Withdraw(balance);
                    std::cout << "Your balance is now at: " << balance << "$" << '\n';
                break;
            case 4:
                std::cout << "GoodBye!" << '\n';
                break;
            default:
                std::cout << "Invalid Option! " << '\n';
                break;
        }       
    
    
    }while(choice != 4);
    return 0;
}

void CheckBalance(double balance){
    std::cout << "Your balance is currently at: " << balance << "$" << '\n';
    
}

double Deposit(){
    double amount;
    do{
    std::cout << "How much would you like to deposit: ";
    std::cin >> amount;
    if(amount <=0){
        std::cout << "Invalid amount! " << '\n';
    }
    }while(amount <=0 );
    return amount;
}

double Withdraw(double balance){
    double WithdrawAmount;
    do{
    std::cout << "How much would you like to withdraw: ";
    std::cin >> WithdrawAmount;
    if(WithdrawAmount <=0){
        std::cout << "Invalid Amount! " << '\n';

        }
    }while(WithdrawAmount <=0);
    return WithdrawAmount;
}
