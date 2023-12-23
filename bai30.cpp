
#include<iostream>
#include<fstream> 
#include<stdio.h>
using namespace std;
//Khai bao lop 
class Queue{
  private: 
    int Q[N];
    int F, R;
  public:
    void inSert(int x);
    int remove();
    bool isEmpty();
};
//===Chuong trinh chinh===
int main ()
{
//Tạo 2 đối tượng 
  Queue Q1, Q2;
 
  ifstream fin ("daysonguyen-bai30.txt") ;
//Khai báo biến
  int x;
//Doc day so tu tep 
  cout<<"Day so nguyen doc tu tep la:\n";
  while (fin>>x)
  {
  cout<<x<<" ";
    if (x>=0) Q1.inSert(x);
    else Q2.inSert(x);
  }
//Dua ra man hinh va tep 
  cout<<"\nDay cac so duong la:\n";
  while(!Q1.isEmpty())
  {
    x = Q1.remove();
    cou<<x<<" ";    
  }
  cout<<" \nDay cac so am la: ";
    while (!Q2.isEmpty ()){
      x = Q2.remove () ;
      cout<<x<<" ";
    }
  cout<<endl;
  return 0;
}
//===Dinh nghia ham===
void Queue::insert(int x)
{
  //Kiem tra hang doi day
  if(F==0 && R==N-1 || R+1==F)
  {
    cout<<"Hang doi da day. ";
    return;
  }
  //Tang R len 1 
  if (R==-1) F-R=0;
  else if (R==N-1) R=0;
  else R++;
  //Bo sung x tai vi tri R
  Q[R] = x;
}

int Queue::remove()
{
  //Kiem tra rong 
  if (F==-1)
  {
    cout<<"Hang doi da rong.";
    return 1;
  }
  
  int tg = Q[F];
  //Tang F len 1 
  if (F=-R) F-R=-1;
  else if (F==N-1) F=0;
  else F++;
 
  return tg;
}
bool Queue::isEmpty()
{
  return F==-1;
}
