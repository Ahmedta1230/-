#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,x,vec1[3],vec2[3],i;

    cout<<"\t\t\t\t\t\t\t calculator \n";
    S1:
    cout<<"choose the type of vector 2D or 3D \nif 2D press 2 \nif 3D press 3 \n";
    cin>>x;
    if(x>3){
        cout<<"the input isn't correct . please enter 2 or 3 \n \n";
        goto S1;
    }
    if(x<2){
        cout<<"the input isn't correct. please enter 2 or 3 \n \n";
        goto S1;
    }


cout<<endl;
    cout<<"Enter the first vector \n";
    for(i=0;i<=(x-1);i++){
        cout<<"Enter the vector 1"<<"-"<<i+1<<"\n";
        cin>>vec1[i];
    }
cout<<endl<<endl;



        cout<<"Enter the second vector \n";
    for(i=0;i<=(x-1);i++){
        cout<<"Enter the vector 1"<<"-"<<i+1<<"\n";
        cin>>vec2[i];
    }
cout<<endl<<endl;
S2:

    cout<<"choose the operation type \n";
    cout<<"1.dot product \n2.cross product \n3.addition vectors \n4.subtraction vectors \n5.Exit \n";
    cin>>n;
cout<<endl<<endl;


    if(n==1){
            if(x==2){
                cout<<"the result is"<<" "<<(vec1[0]*vec2[0])+(vec1[1]*vec2[1]);
            }
            if(x==3){
            cout<<"the result is"<<" "<<((vec1[0]*vec2[0])+(vec1[1]*vec2[1])+(vec1[2]*vec2[2]));
            }
    }



    if(n==2){
        if(x==2){
                cout<<"the result is"<<"  "<<(vec1[0]*vec2[1])-(vec1[1]*vec2[0]);
            }
            if(x==3){
            double c=(vec1[1]*vec2[2])-(vec1[2]*vec2[1]);
            double k=-((vec1[0]*vec2[2])-(vec1[2]*vec2[0]));
            double v=(vec1[0]*vec2[1])-(vec1[1]*vec2[0]);
            cout<<"the result is"<<"  "<<"("<<c<<","<<k<<","<<v<<") \n \n";
            cout<<"the magnitude is"<<pow((pow(c,2)+pow(k,2)+pow(v,2)),0.5)<<"\n \n";
            }
    }



    if(n==3){
         if(x==2){
            cout<<"the result is"<<"  "<<"("<<vec1[0]+vec2[0]<<","<<vec1[1]+vec2[1]<<")";
            }
            if(x==3){
            cout<<"the result is"<<"  "<<"("<<vec1[0]+vec2[0]<<","<<vec1[1]+vec2[1]<<","<<vec1[2]+vec2[2]<<")";
            }
    }



    if(n==4){
        if(x==2){
            cout<<"the result is"<<"  "<<"("<<vec1[0]-vec2[0]<<","<<vec1[1]-vec2[1]<<")";
            }
            if(x==3){
            cout<<"the result is"<<"  "<<"("<<vec1[0]-vec2[0]<<","<<vec1[1]-vec2[1]<<","<<vec1[2]-vec2[2]<<")";
            }
    }



    if(n==5){
        cout<<"\nthe program is Exit.bye\n\n";
    }



    if(n>5){
        cout<<"this opition isn't exist \n \n";
        goto S2;
    }
    return 0;
}
