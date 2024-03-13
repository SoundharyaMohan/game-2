/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    const char* choice[]={"ROCK","PAPER","SCISSOR"};
    cout<<"\t\t\t***RULES***\t\t\t"<<endl;
    cout<<"->Rock beats scissor"<<endl;
    cout<<"->Scissor beats paper"<<endl;
    cout<<"->Paper beats rock"<<endl;
    int user;
    cout<<"Enter your choice:";
    cin>>user;
    if(user<0 || user>2){
        cout<<"Invalid input enter the valid input(0 or 1 or 2):";
        cin>>user;
    }
    int com=rand()%3;
    cout<<"Your choice is "<<choice[user]<<"."<<endl;
    cout<<"Computer choice is "<<choice[com]<<"."<<endl;
    if(user==com){
        cout<<"It is a draw!"<<endl;
    }
    else if((user==0&&com==2)||(user==1&&com==0)||(user==2&&com==1)){
        cout<<"You Win!"<<endl;
    }
    else{
        cout<<"Computer win!"<<endl;
    }
    return 0;
}