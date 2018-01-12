#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("E.txt","r",stdin);
    int T,d,m,y,d2,m2,y2,i,j,x,c=0;
    map<int,int>mymap,mymap2;

    string data[13]={"5515", "Baishakh", "Jaishtha", "Ashar", "Sraban", "Bhadra", "Ashwin", "Kartik" ,"Agrahayan", "Poush", "Magh", "Falgun", "Chaitra"};

    for(i=1;i<=366;i++)
    {
        if(i!=366)
        {
            mymap[i]=(i+262)%365;//1st jan=18th poush = 263th day
        }
        mymap2[i]=(i+262)%366;
        //cout<<i<<" "<<mymap[i]<<" "<<mymap2[i]<<endl;
    }

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&d,&m,&y);
        //Year
        if(m<=4)
        {
            if(d>=14 && m==4)//new year
            {
                y2=y-593;
            }
            else if(d<=13 && m==4)
            {
                y2=y-594;
            }
            else
            {
                y2=y-594;
            }
        }
        else//new year
        {
            y2=y-593;
        }

        bool leap=false;
        m2=0;
        //day
        if( (y%400)==0 || ( (y%100)!=0 && (y%4)==0 )  )
        {
            leap=true;
        }
        d2=d;
        for(i=2;i<=12 && m>1;i++)
        {
            if(i==2 || i==4 || i==6 || i==8 || i==9 || i==11)
            {
                d2+=31;
            }
            else if(i==3)
            {
                if(leap==true)
                {
                    d2+=29;
                }
                else
                {
                    d2+=28;
                }
            }
            else
            {
                d2+=30;
            }
            if(m==i)
            {
                break;
            }
        }

        if(leap==true)
        {
            x=mymap2[d2];
        }
        else
        {
            x=mymap[d2];
        }
        //month and day
        //cout<<x<<endl;
        if(x>=1 && x<=155)//31*5
        {
            if(x%31==0)
            {
                m2=floor(x/31);
                d2=31;
            }
            else
            {
                m2=floor(x/31)+1;
                d2=x-(m2-1)*31;
            }
        }
        if(x==0 || x>155)
        {
            if(x==0)
            {
                m2=12;
                d2=30;
            }
            else if(leap==false ||  x<=305)
            {
                x=x-155;
                if(x%30==0)
                {
                    m2=floor(x/30)+5;
                    d2=30;
                }
                else
                {
                    m2=floor(x/30)+1+5;
                    d2=x-floor(x/30)*30;
                }
            }
            else
            {
                if(x>=306 && x<=336)
                {
                    m2=11;
                    d2=x-305;
                }
                else
                {
                    m2=12;
                    d2=x-336;
                }
            }
        }
        //cout<<d2<<" "<<m2<<" "<<y2<<endl;
        cout<<"Case "<<++c<<": "<<d2<<", "<<data[m2]<<", "<<y2<<endl;
        //cout<<endl;
    }
    return 0;
}

