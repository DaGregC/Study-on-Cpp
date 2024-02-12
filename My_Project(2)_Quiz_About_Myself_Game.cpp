#include <iostream>
int main(){
    std::string questions[]={"What is my name? :","How old is me? :","What is my birthday? :","Is the Earth flat? :"};
    std::string answers[][4]={{"A,Geoge.","B,Gregory.","C,Chow","D,Boss"},
                             {"A,14","B,15","C,16","D,17"},
                             {"A,Jan 24","B,Feb 12","C,May 14","D,Sep 11"},
                              {"A,Yes","B,No","C,Sometimes","D,IDK"}};
    int score=0;
    int size=sizeof(questions)/sizeof(questions[0]);
    char answerkey[]= { 'B','C','A','B'};
    char guess;
    for(int i = 0;i <size;i++){
        std::cout<<"***************************************************************\n";
        std::cout<<questions[i]<<'\n';
        std::cout<<"***************************************************************\n";
        for(int j=0;j<sizeof(answers[0])/sizeof(answers[0][0]);j++){
            std::cout<<answers[i][j]<<'\n';
        }
        std::cout<<"Your choice is :";
        std::cin>>guess;
        guess=toupper(guess);
        if(guess==answerkey[i]){
            std::cout<<"Correct.\n";
            score++;
        }
        else{
            std::cout<<"Wrong answer! The correct answer is "<<answerkey[i]<<'\n';
        }
    }
    std::cout<<"No. of questions :"<<size<<'\n';
    std::cout<<"Correct #"<<score<<'\n';
    std::cout<<"Correct rate :"<<(score/(double)size)*100<<"%\n";
    return 0 ;
}