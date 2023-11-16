#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <forward_list>
#include <list>
#include <set>
#include <deque>


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

void printdeque(const std::deque<int>& data){
    std::for_each(std::begin(data), std::end(data), 
                  [](const int& n){ 
                      std::puts(std::to_string(n).c_str());
                  });
                  std::cout <<'\n';
}

void printunset(const std::unordered_set<int>& unset){
    for( const auto& el : unset){
        std::cout<< el << " , ";
        }
    std::cout<< '\n';
}

void printmuset(const std::multiset<int>& muset){
    for( const auto& el : muset){
        std::cout<< el << " , ";
        }
    std::cout<< '\n';
}

int main() {
    // vector
    // the size of the of vector is double by increace the size of vector
    // std::vector<int> Vec{1,2,3};
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(4);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(5);
    // std::cout<< Vec.capacity() << '\n'; 
    // Vec.push_back(6);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(7);
    // std::cout<< Vec.capacity() << '\n';
    // this shrink the size before double it 
    std::vector<int> Vec{1,2,3};
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(4);
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(5);
    std::cout<< Vec.capacity() << '\n'; 
    Vec.shrink_to_fit();
    std::cout<< Vec.capacity() << '\n'; 
    Vec.push_back(6);
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(7);
    std::cout<< Vec.capacity() << '\n';
    Vec.push_back(8);
    std::cout<< Vec.capacity() << '\n';
    Vec.erase(Vec.begin());
    std::cout<< Vec.capacity() << '\n';
    Vec.erase(Vec.begin());
    std::cout<< Vec.capacity() << '\n';
    Vec.shrink_to_fit();
    std::cout<< Vec.capacity() << '\n';
    Vec.erase(Vec.begin());
    std::cout<< Vec.capacity() << '\n';
    Vec.shrink_to_fit();
    std::cout<< Vec.capacity() << '\n';


    // c-style for loop 
    for (int i = 0; i < Vec.size(); i++){
        std::cout<< Vec[i] << '\n';
    }
    std::cout<< '\n' << '\n';

    // modern for loop 
    // wrong output , NOT TO USE 
    for (auto& elem: Vec){
        std::cout<< elem << '\n';
    }
    
    std::cout<< '\n' << '\n';
    
    // best practice with using vector loop with iterator function 
    for (std::vector<int>::iterator it = Vec.begin(); it != Vec.end(); it++){
        std::cout<< *it << '\n';
    }

    // avoid copy the all vector when add a new value in it by using reserve 
    // prevent unnecessary allocation of data 
    std::vector<long> vec2;
    vec2.reserve(50);
    for(size_t i=1; i!=50; ++i){
        vec2.push_back(i);
    }


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
    // auto last = std::unique(flist.begin(), flist.end());
    // last = std::unique(flist.begin(), flist.end());
    // flist.erase(last, flist.end());
    flist.sort();
    std::cout<< "---------\n";
    printlist(flist);
    flist.unique();
    std::cout<< "---------\n";
    printlist(flist);


    // deque
    std::deque<int> deque1{1,2,3,4};
    printdeque(deque1);
    std::cout << deque1[1] <<'\n';
    // there is a two ways iterator are equivalent 
    std::deque<int>::iterator itdeq = deque1.begin();
    // auto it = deque1.begin();
    it++;
    it++;
    deque1.insert(itdeq, 555);
    printdeque(deque1);
    auto end = deque1.end();
    int distance = std::distance(deque1.begin(), end);
    itdeq = deque1.begin();
    std::advance(itdeq,distance/2);
    deque1.insert(itdeq,777);
    printdeque(deque1);
    
    deque1.push_back(111);
    deque1.push_front(222);
    printdeque(deque1);
    
    //set
    std::set<int> set1{1,2,3,4};
    set1.insert(1);
    set1.insert(2);
    set1.insert(-2);
    std::cout<< "num : " << set1.count(8) <<'\n';
    // std::cout<< "num : " << set1.contains(4) <<'\n';
    // find return 
    set1.erase(3);
    auto found = set1.find(5);
    if (found != set1.end()){
        std::cout << "num found" <<'\n';
    }
    for(auto el : set1){
        std::cout<< el << '\n';
    }
    std::cout <<'\n';
    
    std::set<int> set2{8,9,10,11,12,13};
    auto lower = set2.lower_bound(9);
    auto upper = set2.upper_bound(12);
    for(auto it = lower; it!=upper; ++it){
        std::cout<< *it << ',';
    }
    std::cout <<'\n';
    
    set2.erase(lower, upper);
    for(auto el: set2){
        std::cout<< el << ',';
    }
    std::cout <<'\n';
    set1.merge(set2);
    std::cout <<"set1: ";
    for(auto el: set1){
        std::cout<< el << ',';
    }
    std::cout <<'\n';
    std::cout <<"set2: ";
    for(auto el: set2){
        std::cout<< el << ',';
    }
    std::cout <<'\n';

    //unordered_List
    std::cout << "unordered- set :" << '\n';
    std::unordered_set<int> unset1{1,2,3,4,5,6,7,8,9};
    // unset1.reserve(12);
    unset1.insert(11);
    unset1.insert(12);
    unset1.insert(10);
    unset1.insert(15);
    unset1.insert(100);
    unset1.erase(15);
    unset1.erase(1);
    unset1.erase(2);
    unset1.erase(3);
    unset1.erase(4);
    
    std::cout << unset1.bucket_count() << '\n';
    std::cout << unset1.load_factor() << '\n';
    printunset(unset1);
    // for(int i = 0; i < unset1.bucket_count(); i++){
    //     std::cout << unset1.bucket_size(i) << '\n';
    // }
    std::unordered_set<int> unset2{11,12,13,14,15,16,17,18,19};
    unset1.merge(unset2);
    std::cout << "unset1: ";
    printunset(unset1);
    std::cout << "unset2: ";
    printunset(unset2);
    std::cout << "max-bucket-number: " <<unset1.max_bucket_count() << '\n';
    std::cout << "max-bucket-number: " <<unset2.max_bucket_count() << '\n';

    //multiset
    std::multiset<int> muset1{1,2,3,3,3,3,4,4,4,4,4,4};
    std::cout << muset1.count(4) << '\n';
    muset1.erase(4);
    std::cout << muset1.count(4) << '\n';
    printmuset(muset1);


    return 0;    
}

