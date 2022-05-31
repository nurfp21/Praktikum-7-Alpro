#include <iostream>
using namespace std;

class Barang {
  public :
    void input();
    void sort();
    void outputsort();
    void search();

  private :
    int banyak, id[30], stok[30], t, cari_id, v;
    string nama[30], u;

};

void Barang::input()
{
  cout<<"Masukkan banyak macam barang : "; cin>>banyak;
  for(int i=0; i<banyak; i++)
    {
      cout<<"Barang ke- "<<i+1<<endl;
      cout<<"Masukkan id barang : "; cin>>id[i];
      cout<<"Masukkan nama barang : "; cin>>nama[i];
      cout<<"Masukkan jumlah stok barang : "; cin>>stok[i];
      cout<<"=================================="<<endl;
    }
}

void Barang::sort()
{
  for(int i=1; i<banyak; i++)
    {
      for(int j=banyak-1; j>=1; j--)
        {
          if(stok[j]>stok[j-1])
          {
            t=stok[j];
            stok[j]=stok[j-1];
            stok[j-1]=t;
            u=nama[j];
            nama[j]=nama[j-1];
            nama[j-1]=u;
            v=id[j];
            id[j]=id[j-1];
            id[j-1]=v;
          }
        }
    }
}
void Barang::outputsort()
{
  cout<<"Data Barang Setelah Diurut : "<<endl;
  for(int i=0; i<banyak; i++)
    {
      cout<<stok[i]<<" "<<nama[i]<<" "<<id[i]<<endl;
    }
}

void Barang::search()
{
  cout<<"Masukkan id barang yang ingin dicari : "; cin>>cari_id;
  for(int i=0; i<banyak; i++)
    {
      if(cari_id==id[i])
      {
        cout<<id[i]<<" "<<nama[i]<<" "<<stok[i];
      }
    }
}


int main() 
{
  Barang barang;
  barang.input();
  barang.sort();
  barang.outputsort();
  barang.search();
}

