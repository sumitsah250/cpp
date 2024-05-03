#include<iostream>
#include<list>
using namespace std;
void dispaly( list<int> &lst){

    list<int> ::iterator iter = lst.begin();
    for(int i=0;i<lst.size();i++){
            cout<<*iter<<endl;
            iter++;
    }
    cout<<endl;
}
int main(){
    list<int> list1;
    list<int> list2(6);
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(10);

  /// removing elements from the list
 
    // list1.pop_back();//removes elements from the back
    // list1.pop_front(); // removes elements from the front
    // list1.remove(9); // removes the given element from the list 


 // shorting the list
//  list1.sort();



 
    dispaly(list1);

    list<int> :: iterator iter;
    iter=list2.begin();

    *iter=23;
    iter++;
    
    *iter=24;
    iter++;

    *iter=25;
    iter++;
    dispaly(list2);
  /// merging he list
    // list1.merge(list2);
    // dispaly(list1);

//reversing the list
list1.reverse();
dispaly(list1);


 



    return 0;
}