#include <iostream>
#include<string>
#include<list>

void printlist(const std::list<int>& list){
    for( const auto& el : list){
        std::cout<< el << " , ";
        }
    std::cout<< '\n';
}

void push_back(std::forward_list<int>& list , int val ) {
    auto pos = begin(list);
    // get the distance of the list 
    int distance = std::distance(begin(list),
                                    end(list));
    std::advance(pos, distance-1);
    list.insert_after(pos, val);
}

void printlist(const std::forward_list<int>& flist){
    for( const auto& el : flist){
        std::cout<< el << " , ";
        }
    std::cout<< '\n';
}



int main() {
    
    std::list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    printlist(list1);
    
    // insert tak position , value 
    list1.insert(list1.begin(), 100);
    printlist(list1);
    list1.insert(list1.end(), 200);
    printlist(list1);
    
    //next 
    auto it = cbegin(list1);
    it = std::next( it, list1.size()/2);
    list1.insert(it , 300);
    printlist(list1);
    
    //advance
    it = cbegin(list1);
    std::advance(it, list1.size()/2);
    std::cout<< "middle value : " << *it <<'\n';
    
    list1.sort();
    printlist(list1);
    
    list1.remove_if([](int n){return n <2;});
    printlist(list1);
    
    std::list<int> list2{11,22,33,44,55,66};
    // list1.merge(list2);
    // std::cout<< "merge list1 : " <<' ';
    // printlist(list1);
    // std::cout<< "merge list2 : " <<' ';
    // printlist(list2);
    
    auto it2 = list2.begin();
    std::advance(it2,2);
    list1.splice(end(list1), list2, it2, end(list2));
    std::cout<< "splice list1 : " <<' ';
    printlist(list1);
    std::cout<< "splice list2 : " <<' ';
    printlist(list2);


    /////////////////////////////////////////////
    //forward_list
    std::forward_list<int> flist{1,2,-3,100, 4,5};
    flist.push_front(0);
    printlist(flist);
    push_back(flist,6);
    push_back(flist,7);
    printlist(flist);
    // flist.sort();   
    printlist(flist);

    std::forward_list<int> flist2{11,2,-3,100,44, 44,55};
    flist.merge(flist2);
    // flist.sort(); 
    printlist(flist);
    std::cout<< "---------\n";
    printlist(flist2);
    std::cout<< "---------\n";
    //remove consecutive group of equivalent elements
    flist.unique();
    printlist(flist);
    auto last = std::unique(flist.begin(), flist.end());
    // last = std::unique(flist.begin(), flist.end());
    // flist.erase(last, flist.end());
    flist.sort();
    std::cout<< "---------\n";
    printlist(flist);
    flist.unique();
    std::cout<< "---------\n";
    printlist(flist);


    
    return 0;

    
}

