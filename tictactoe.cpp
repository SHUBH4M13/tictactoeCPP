#include<iostream>
#include<string>
using namespace std;

string playername(){
    string pl1;
    string pl2;
    cout<<"enter player 1 name :";
    cin>>pl1;
    cout<<"enter player 2 name :";
    cin>>pl2;
    return pl1;
    return pl2;
}

void structure(){
    cout<<"   |   |   "<<endl;
    cout<<"0,0|0,1|0,2"<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<"1,0|1,1|1,2"<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<"2,0|2,1|2,2"<<endl;
    cout<<"   |   |   "<<endl;
}


void ColumnWin(int p1, int p2 , char arr[3][3]){
    if( arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O' ){
        p1 += 1;
    }
    if( arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X'  ){
        p2 += 1;
    }
    if( arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O' ){
        p1 += 1;
    }
    if( arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X'  ){
        p2 += 1;
    }
    if( arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O' ){
        p1 += 1;
    }
    if( arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X'  ){
        p2 += 1;
    }
    
}

void rowWin(int p1, int p2 , char arr[3][3]){
    if( arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O' ){
        p1 += 1;
    }
    if( arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X'  ){
        p2 += 1;
    }
    if( arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O' ){
        p1 += 1;
    }
    if( arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X'  ){
        p2 += 1;
    }
    if( arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O' ){
        p1 += 1;
    }
    if( arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X'  ){
        p2 += 1;
    }
}

void diagonalWin( int p1 , int p2 , char arr[3][3]){
    if( arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O' ){
        p1 += 1;
    }
    if( arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X'  ){
        p2 += 1;
    }
    if( arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O' ){
        p1 += 1;
    }
    if( arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X'  ){
        p2 += 1;
    }
}

void displayResult(string pl1, string pl2 , int p1 , int p2){
    if( p1 == 1){
        cout<<"player 1 won the game"<<endl;
    }
    else if( p2 == 1){
        cout<<"player 2 won the game"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
};

int main(){
    int i,j,k,a,b;
    string pl1;
    string pl2;
    char arr[3][3];
    int p1 = 0;
    int p2 = 0;
    playername();
    structure();
    int play = 9;
    for( k = 0 ; k < 9 ; k++){
   // for( i = 0 ; i < 3 ; i++){
        //for( j = 0 ; j < 3 ; j++){
        if( k == 0 || k % 2 == 0){
            cout<<"player 1 turn"<<endl;
            cout<<"enter postion"<<endl;
            cin>>a>>b;
            arr[a][b] = 'X';
            
        }
        else{
            cout<<"player 2 turn"<<endl;
            cout<<"postion"<<endl;
            cin>>a>>b;
            arr[a][b] = 'O';
        }
        ColumnWin(p1,p2,arr);
        rowWin(p1,p2,arr);
        diagonalWin(p1,p2,arr);
    }
    
    displayResult(pl1 , pl2 , 1 , 0);

}
