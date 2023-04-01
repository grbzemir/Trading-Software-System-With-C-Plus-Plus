#include<iostream>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
#include<stddef.h>

using namespace std;

int main()

{

  char baslat;
  float shop(void);
  char secim;


  baslatX:
     
    system("color B");
    cout <<"Merhaba Ticaret Yazilim Sistemine Hosgeldiniz" << endl;
    cout <<"Lutfen Baslatmak icin 'B' tusuna basiniz" << endl;

    baslat:
     
    cin>>baslat;

    if ( baslat == 'b' || baslat == 'B')
    
    {

        float sonuc = shop();
        time_t t=time(NULL);
        tm* tPtr=localtime(&t);

        cout<<"Fatura Tarihi: ";
        cout<<tPtr->tm_mday <<endl ;
        cout<<1 + tPtr->tm_mon <<endl ;
        cout<<1900 + tPtr->tm_year <<endl;

        cout<<"Fatura Zamani: ";
        cout<<tPtr->tm_hour<<endl;
        cout<<tPtr->tm_min<<endl;
        cout<<tPtr->tm_sec<<endl;

        cout<<"Fatura Tutariniz: " <<sonuc<<endl;
       

        if ( sonuc > 50000 && 100000)

        {

            sonuc=sonuc-(0.05*sonuc);
            cout<<"Fatura Tutariniz : 5%"<<endl;
            
        }

        else if ( sonuc > 100000 && 125000)
        
        {
              
              sonuc=sonuc-(0.1*sonuc);
              cout<<"Fatura Tutariniz : 10%"<<endl;
            
        }

          else if ( sonuc > 125000 && 150000)
        
        {
              
              sonuc=sonuc-(0.25*sonuc);
              cout<<"Fatura Tutariniz : 25%"<<endl;
            
        }


          else if ( sonuc > 150000)
        
        {
              
              sonuc=sonuc-(0.5*sonuc);
              cout<<"Fatura Tutariniz : 50%"<<endl;
            
        }

         cout <<"Toplam Fatura Tutari : " <<sonuc<<endl;
         Tekrar:

         cout<<"Alisverise Devam Etmek Ister Misiniz? (E/H)"<<endl;
         cin>>secim;

         if ( secim == 'e' || secim == 'E')

         {

             goto baslatX;
         }

         else if ( secim == 'h' || secim == 'H')

         {

             cout<<"Alisverisiniz Iptal Edilmistir"<<endl;
         }

         else

         {
             cout<<"Yanlis Secim Yaptiniz"<<endl;
             goto Tekrar;
         
         
            
         }
         
    }

         else

         {

            cout<<"Yanlis Secim Yaptiniz"<<endl;
            goto baslat;

         }

    
        
    }




    float shop()

    {

        shop:

        char secim;
        char urun;
        int miktar;
        float fatura=0;

        itemlevel:

        cout<<"*****************MERHABALAR*****************"<<endl;
        cout<<" _____Lutfen Adimlari Takip Ediniz____"<<endl;
        cout<<" |  [1] Lutfen Buzdolabi Icin A'e Basiniz         |"<<endl;
        cout<<" |  [2] Lutfen Bulasik Makinesi Icin B'ye Basiniz |"<<endl;
        cout<<" |  [3] Lutfen Televizyon Icin C'e Basiniz        |"<<endl;
        cout<<" |  [4] Lutfen Bilgisayar Icin D'e Basiniz        |"<<endl;
        cout<<" |  [5] Lutfen Telefon Icin E'e Basiniz           |"<<endl;
      
        
        cout<<"Seciminiz:";
        cin>>secim;

        if ( secim =='a' || secim =='A' || secim =='b' || secim =='B' || secim =='c' || secim =='C' || secim =='d' || secim =='D' || secim =='e' || secim =='E' )

        {

         if ( secim == 'a' || secim =='A')

         {
          
          buzdolabiX:
          cout<< "__________Buzdolabi Detaylari__________"<<endl;
          cout<< " | [1] Samsung => Fiyat : 40000TL   |"<<endl;
          cout<< " | [2] Beko    => Fiyat : 35000TL   |"<<endl;
          cout<< " | [3] Arcelik => Fiyat : 30000TL   |"<<endl;
          cout<< " | [4] Huawei  => Fiyat : 25000TL   |"<<endl;
          cout<< " | [5] Vestel  => Fiyat : 20000TL   |"<<endl;
          cout<< " | [6] Lg      => Fiyat : 15000TL   |"<<endl;
          cout<<"Lutfen Urun Seciniz"<<endl;
          cin>>urun;

          if ( urun =='1')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*40000;

            
          }

          else if ( urun=='2')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*35000;
            
          }

          else if ( urun=='3')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*30000;
            
          }

          else if ( urun=='4')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*25000;
            
          }

          else if ( urun=='5')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*20000;
            
          }

          else if ( urun=='6')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*15000;
            
          }

          else

          {

            cout<<"Yanlis Secim Yaptiniz"<<endl;
            goto buzdolabiX;
            
          }
          
         }

        }


         if ( secim =='b' || secim == 'B')

         {
          
          bulasikX:
          cout<< "__________Bulasik Makinasi Detaylari__________"<<endl;
          cout<< " | [1] Samsung => Fiyat : 40000TL   |"<<endl;
          cout<< " | [2] Beko    => Fiyat : 35000TL   |"<<endl;
          cout<< " | [3] Arcelik => Fiyat : 30000TL   |"<<endl;
          cout<< " | [4] Huawei  => Fiyat : 25000TL   |"<<endl;
          cout<< " | [5] Vestel  => Fiyat : 20000TL   |"<<endl;
          cout<< " | [6] Lg      => Fiyat : 15000TL   |"<<endl;

          cout<<"Lutfen Urun Seciniz"<<endl;
          cin>>urun;


          if ( urun =='1')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*40000;

            
          }

          else if ( urun=='2')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*35000;
            
          }

          else if ( urun=='3')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*30000;
            
          }

          else if ( urun=='4')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*25000;
            
          }

          else if ( urun=='5')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*20000;
            
          }

          else if ( urun=='6')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+miktar*15000;
            
          }

          else

          {

            cout<<"Yanlis Secim Yaptiniz"<<endl;
            goto bulasikX;
            
          }
          
         if ( secim =='c' || secim =='C')

         {
          
          televisionX:
          cout<< " __________Televizyon Detaylari__________"<<endl;
          cout<< " | [1] Samsung => Fiyat : 40000TL   |"<<endl;
          cout<< " | [2] Beko    => Fiyat : 35000TL   |"<<endl;
          cout<< " | [3] Arcelik => Fiyat : 30000TL   |"<<endl;
          cout<< " | [4] Huawei  => Fiyat : 25000TL   |"<<endl;
          cout<< " | [5] Vestel  => Fiyat : 20000TL   |"<<endl;
          cout<< " | [6] Lg      => Fiyat : 15000TL   |"<<endl;

          cout<<"Lutfen Urun Seciniz"<<endl;
          cin>>urun;

          if ( urun == '1')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+40000*miktar;

            
          }

          else if ( urun== '2')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+35000*miktar;
            
          }

          else if ( urun== '3')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+30000*miktar;
            
          }

          else if ( urun== '4')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+25000*miktar;
            
          }

          else if ( urun== '5')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+20000*miktar;
            
          }

          else if ( urun== '6')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+15000*miktar;
            
          }

          else

          {

            cout<<"Yanlis Secim Yaptiniz"<<endl;
            goto televisionX;
            
          }

         }

          if ( secim == 'd' || secim =='D')
          
          {
          
          BilgisayarX:
          cout<< "__________Bilgisayar Detaylari__________"<<endl;
          cout<< " | [1] Samsung => Fiyat : 40000TL   |"<<endl;
          cout<< " | [2] Beko    => Fiyat : 35000TL   |"<<endl;
          cout<< " | [3] Arcelik => Fiyat : 30000TL   |"<<endl;
          cout<< " | [4] Huawei  => Fiyat : 25000TL   |"<<endl;
          cout<< " | [5] Vestel  => Fiyat : 20000TL   |"<<endl;
          cout<< " | [6] Lg      => Fiyat : 15000TL   |"<<endl;
          
          cout<<"Lutfen Urun Seciniz"<<endl;
          cin>>urun;

          if ( urun =='1')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+40000*miktar;

            
          }

          else if ( urun=='2')

          {

            cout<<" Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+35000*miktar;
            
          }

          else if ( urun=='3')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+30000*miktar;
            
          }

          else if ( urun=='4')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+25000*miktar;
            
          }

          else if ( urun=='5')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+20000*miktar;
            
          }

          else if ( urun=='6')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+15000*miktar;
            
          }

          else

          {

            cout<<"Yanlis Secim Yaptiniz"<<endl;
            goto BilgisayarX;
            
          }


          if ( secim == 'a' || secim =='A')

         {
          
          TelefonX:
          cout<< "__________Telefon Detaylari__________"<<endl;
          cout<< " | [1] Samsung => Fiyat : 40000TL   |"<<endl;
          cout<< " | [2] Beko    => Fiyat : 35000TL   |"<<endl;
          cout<< " | [3] Arcelik => Fiyat : 30000TL   |"<<endl;
          cout<< " | [4] Huawei  => Fiyat : 25000TL   |"<<endl;
          cout<< " | [5] Vestel  => Fiyat : 20000TL   |"<<endl;
          cout<< " | [6] Lg      => Fiyat : 15000TL   |"<<endl;

          cout<<"Lutfen Urun Seciniz"<<endl;
          cin>>urun;
          
         

          if ( urun == '1')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+40000*miktar;

            
          }

          else if ( urun=='2')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+35000*miktar;
            
          }

          else if ( urun=='3')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+30000*miktar;
            
          }

          else if ( urun=='4')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+25000*miktar;
            
          }

          else if ( urun=='5')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+20000*miktar;
            
          }

          else if ( urun=='6')

          {

            cout<<"Lutfen Urun Miktarini Giriniz"<<endl;
            cin>>miktar;
            fatura=fatura+15000*miktar;
            
          }

          else

          {

            cout<<"Yanlis Secim Yaptiniz"<<endl;
            goto TelefonX;
            
          }


         }

            
          }

          else

          {

            cout<<"Yanlis Secim Yaptiniz Lutfen Tekrar Deneyiniz"<<endl;
            goto shop;
            

       
         
          }

          return fatura;


      

         }
         
        }