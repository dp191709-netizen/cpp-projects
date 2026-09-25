// #include <iostream>
// using namespace std;
// char arr[]{'0','1','2','3','4','5','6','7','8','9'};
// void board(){
// cout<<"   |   |   "<<endl;
// cout<<" "<<arr[1]<<" | "<<arr[2]<<" | "<<arr[3]<<" "<<endl;
// cout<<"___|___|___"<<endl;
// cout<<"   |   |   "<<endl;
// cout<<" "<<arr[4]<<" | "<<arr[5]<<" | "<<arr[6]<<" "<<endl;
// cout<<"___|___|___"<<endl;
// cout<<"   |   |   "<<endl;
// cout<<" "<<arr[7]<<" | "<<arr[8]<<" | "<<arr[9]<<" "<<endl;
// cout<<"   |   |   "<<endl;
// }
// int checkwin(){
        
//         if(arr[1]==arr[2]&&arr[2]==arr[3])
//         return 1;
//         if(arr[4]==arr[5]&&arr[5]==arr[6])
//         return 1;
//         if(arr[7]==arr[8]&&arr[8]==arr[9])
//         return 1;
//         if(arr[1]==arr[4]&&arr[4]==arr[7])
//         return 1;
//         if(arr[2]==arr[5]&&arr[5]==arr[8])
//         return 1;
//         if(arr[3]==arr[6]&&arr[6]==arr[9])
//         return 1;
//         if(arr[1]==arr[5]&&arr[5]==arr[9])
//         return 1;
//         if(arr[3]==arr[5]&&arr[5]==arr[7])
//         return 1;
//         int count=0;
//         for(int i=1;i<=9;i++)
//         {if( arr[i]=='X'||arr[i]=='O')
//             count ++;

//         }
//         if (count==9) 
//         return 0; 
//         return -1;

// }
// int main(){
// board();
// int player=1;
// char mark='X';
// int status = -1;
// cout<<"player 1 please enter your name ";
// string s1;
// cin>>s1;
// cout<<"player 2 please enter your name ";
// string s2;
// cin>>s2;
// while(status==-1){
//     if (player==1){
//         mark='X';
//     }
//     if (player==2){
//         mark='O';
//     }if(player==1)    cout<<"enter your position player "<< " "<<player<<" ";
//     int x;
//     cin>>x;
//     if(x>9||x<0){cout<<"invalid entry ";}
//     arr[x]=mark;
//     board();
//     int d=checkwin();
//     if (d==1&&player==1){
//         cout<<"congratulations  "<<s1<<" you won";
//         status =2;
//     }
//     if (d==1&&player==2){
//         cout<<"congratulations  "<<s2<<" you won";
//         status =2;
//     }
//     if (d==0){
//         cout<<"draw";
//         status =2;
//     }
//     if(player==1){
//         player=2;
//     }
//     else if(player==2){
//         player=1;
//     }

// }
// }
