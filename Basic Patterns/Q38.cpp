//  1  1  1  1  1  1  1  1  1
//     2  2  2  2  2  2  2
//        3  3  3  3  3
//           4  4  4
//              5



#include<iostream>//Number Spiral
using namespace std;
int main(){
    int i,j,r,n,x,y,k;
    n = 1;
    x = 1;

    cout<<"Enter Rows : "; cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=(2*r)-1;j++){
            if(i==j ){
                for(int k=i;k<=(2*r)-i;k++){
                    cout<<" "<<n<<" ";
                }
                    n++;
                }
            else cout<<"   ";
            if(k+j == 8) break;
            
        }
        x++;
        cout<<endl;
    }
    
}