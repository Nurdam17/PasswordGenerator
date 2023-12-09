#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

static const char random_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwyz" "0123456789" "!@#$%^&*";
int strLength=sizeof(random_chars)-1;

char Gen_Random(){
    return random_chars[rand()%strLength];
}
int main(){
    int n,c=0,s=0;
    srand(time(0));
    cout<<"Enter the length of the password you want: ";
    cin>>n;
    cout<<"Your new password: ";
    N:
    char C; string D;
    for(int i=0;i<n;i++){
        C=Gen_Random();
        D+=C;
        if(isdigit(C)) c++;
        if(C=='!' || C=='@' || C=='#' || C=='$' || C=='%' || C=='^' || C=='&' || C=='*'){
            s++;
        }
    }
    if(n>2 && (s==0 || c==0)){
        goto N;
    }
    cout<<D<<endl;
    return 0;
}
