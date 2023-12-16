#include<iostream>
using namespace std;

class media {
            protected:
            char title[20];
            int price;

            public:
            void getdata() {
                cout<<"Enter title of publication"<<endl;
                cin>>title;
                cout<<"Enter price of publication"<<endl;
                cin>>price;
            }
            void showdata() {
                cout<<"\n Title:"<<title;
                cout<<"\n Price:"<<price;
            }

};
class Pages : public media{
        protected:
        int nopage;
        public:
        void getdata() {
            media::getdata();
            cout<<"Enter number of pages"<<endl;
            cin>>nopage;
        }
        void showdata(){
            media::showdata();
            cout<<"\nNumber of Pages"<<nopage;
        }
      
};
class ptape : public media {
            protected:
            int playtime;
            public:
            void getdata(){
                media::getdata();
                cout<<"Enter playing time of tape"<<endl;
                cin>>playtime;
            }

            void showdata() {
                media::showdata();
                cout<<"\nPlaying time"<<playtime;
            }
};

int main() {
    media m;
    Pages pg;
    ptape pt;
    m.getdata();
    pg.getdata();
    pt.getdata();
    m.showdata();
    pg.showdata();
    pt.showdata();
return 0;
}