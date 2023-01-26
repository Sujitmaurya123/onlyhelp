#include<iostream>
using namespace std;
template<class T>
class vecter{
    public:
    T*arr;
    int size;
    vecter(int m){
        size=m;
        arr=new T[size];
    }
    T dotproduct(vecter &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
vecter<float>v1(3);
v1.arr[0]=2.34;
v1.arr[1]=5.34;
v1.arr[2]=7.34;
vecter<float>v2(3);
v2.arr[0]=2.34;
v2.arr[1]=7.34;
v2.arr[2]=8.34;
float a=v1.dotproduct(v2);
cout<<a<<endl;
return 0;
}