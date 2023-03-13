//How to find substring or a character or reverse directly or fetching words ---> IMP
#include<iostream>
#include<conio.h>
#include<string>
#include<vector> //to erase a particular character from the strings
using namespace std;

void stringReverse(string &s);
int countWords(string &s1);
void trim(string &s1);
void removeExtraSpaces(string &s1);
void splitStringToWords(string &s1,string words[]);

int main()
{
    string s1;

    s1.assign("mysirg education services"); //s1="mysirg education services";

    cout<<s1<<endl;

    s1=s1+" private limited";
    //s1.append(" private limited");

    cout<<s1<<endl;

    s1.pop_back();
    /* OR
    auto it=s1.end();
    s1.erase(it-1);
    cout<<s1<<endl;
    //or
    s1.erase(s1.length()); //s1.size();
    */

    cout<<s1<<endl;

    while(1)
    {
        string::iterator it;
        //auto it; //error: declaration of 'auto it' has no initializer
        for(it=s1.begin();it!=s1.end();it++)
            if(*it=='g')
            {
                s1.erase(it,it+1);
                break;
            }
        if(it==s1.end())
            break;
    }
    cout<<s1<<endl;

    ///IMP
    string substring="services";
    size_t index=s1.find(substring);
    if(index!=string::npos)
        s1.erase(index,substring.length()); //erase services (particular substrings from the string)
    else
        cout<<"substring does not exist in the string"<<endl;
    cout<<s1<<endl;

    s1.push_back('.');

    cout<<s1<<endl;
    cout<<endl;

    s1="mysirg  education   services  private limited";

    //Reverse a string
    stringReverse(s1);

    cout<<s1<<endl;

    //Remove leading spaces from the string s1;
    trim(s1);

    cout<<s1<<endl;

    //count words
    int w=countWords(s1);
    cout<<"Word count="<<w<<endl;

    removeExtraSpaces(s1);

    cout<<s1<<endl;

    cout<<s1.length()<<endl;

    //split string s1 into words
    string words[w];  //w stores the countWords
    splitStringToWords(s1,words);

    for(int i=0;i<=4;i++)
        cout<<i<<"-"<<words[i]<<endl;

    getch();
}
void splitStringToWords(string &s1,string words[]) ///IMP
{
    //int w=countWords(s1);
    int i=0;
    trim(s1);
    removeExtraSpaces(s1);
    string word="";
    for(auto x: s1)
    {
        if(x==' ')
        {
            words[i]=word;
            i++;
            word="";
        }
        else
            word+=x;
    }
    if(i!=countWords(s1))
        words[i]=word;
}
void removeExtraSpaces(string &s1)
{
    //input:-"  my cdbc  dhgcjs   ndkjcbb   "
    trim(s1);
    //input:-"my cdbc  dhgcjs   ndkjcbb"
    for(auto it=s1.begin();(it+1)!=s1.end();it++)
        if(*it==' ' && *(it+1)==' ')//if(*it==" " && *it == *(it+1)) ---> NOTE:- difference on string and character.Mistake due to python syntax
        {
            s1.erase(it,it+1);
            it--;///IMP
        }      // ----------------------> Not working well
}
void trim(string &s1)
{
    while(s1.front()==' ')
        s1.erase(s1.begin(),s1.begin()+1);
    while(s1.back()==' ')
        s1.pop_back();
}
int countWords(string &s1)
{
    //input:-"  my cdbc  dhgcjs   ndkjcbb   "
    string s=s1;
    cout<<s<<endl;
    trim(s);
    //input:-"my cdbc  dhgcjs   ndkjcbb"
    removeExtraSpaces(s);
    cout<<s<<endl;
    int countWord=1;
    //input:-"my cdbc dhgcjs ndkjcbb"
    for(auto it=s.begin();it!=s.end();it++)
        if(*it==' ')
        {
            //cout<<*(it+1)<<" ";
            countWord++;
            //cout<<countWord<<"     ";
        }
    return countWord;
}
void stringReverse(string &s)
{
    //input:-"  my cdbc   ndkjcbb   "
   string s1;
   for(auto it=s.rbegin();it!=s.rend();it++) //reverse_iterator
        s1.push_back(*it);
   s1.swap(s);
}

/* Erase a Particular character from the string
input:-mysirg educgatgion servigces private limite
output:-mysir educgtgin servigce private limite

vector<string::iterator> v1;
for(auto it=s1.begin();it!=s1.end();it++)
   if(*it=='g')
     v1.push_back(it);
for(auto it=v1.begin();it!=v1.end();it++)
   s1.erase(*it,*it+1);
cout<<s1<<endl;
*/
