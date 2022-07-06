#include<iostream>
using namespace std;

class Media
{
    protected:
    char title[20], pub[20];
    public:
    virtual void readdata();
    virtual void showdata()=0;
};
void Media::readdata()
{
    cout<<"Enter title:";
    cin>>title;
    cout<<"Enter publication";
    cin>>pub;
}
class Book: public Media
{
    private:
    int no_of_page;
    public:
    void readdata();
    void showdata();
};
void Book::readdata()
{
    Media::readdata();
    cout<<"Enter number of pages:"<<endl;
    cin>>no_of_page;
}
void Book::showdata()
{
    cout<<"Data on book"<<endl;
    cout<<"Title of book:"<<title<<endl;
    cout<<"Publication of book:"<<pub<<endl;
    cout<<"Number of pages:"<<no_of_page<<endl;

}
class DVD: public Media{
    private:
    int dur;
    public:
    void readdata();
    void showdata();
};
void DVD::readdata()
{
    Media::readdata();
    cout<<"enter time duration of DVD:";
    cin>>dur;
}
void DVD::showdata()
{
    cout<<"Data on DVD:"<<endl;
    cout<<"Title of DVD:"<<title<<endl;
    cout<<"publication of DVD:"<<pub<<endl;
    cout<<"time duration of dvd:"<<dur;

}
int main()
{
    Media *md;
    Book bk;
    md = &bk;
    cout<<"Enter data on book"<<endl;
    md->readdata();
    md->showdata();
    DVD dv;
    md = &dv;
    cout<<"Enter data on DVD:"<<endl;
    md->readdata();
    md->showdata();
    return 0;
}
