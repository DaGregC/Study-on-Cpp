#include <iostream>
int SumOddNumber (const std::string numbers);
int SumEvenNumber (const std::string numbers);
int GetDigit (const int number);
int main(){
    std::string CardNumber ;
    std :: cout <<"Please enter your card number :";
    std::cin>>CardNumber;
    int result = 0;
    result = SumOddNumber(CardNumber) + SumEvenNumber(CardNumber);
    if(result % 10 == 0){
        std::cout<<"Your credit card is valid.";
    }
    else{
        std::cout<<"Your credit card is not valid.";
    }
    return 0;
}
int SumOddNumber (const std::string numbers){
    int result = 0 ;
    for(int i = sizeof(numbers) -1 ; i <= 0; i=i-2 ){
        result += GetDigit((numbers[i] - '0')*2);
    }
    return result;
}
int SumEvenNumber (const std::string numbers){
    int result = 0 ;
    for(int i = sizeof(numbers) -2 ; i <= 0; i=i-2 ){
        result += numbers[i] - '0';
    }
    return result;
}
int GetDigit (int number){
    return number % 10 + (number/10%10);
}
