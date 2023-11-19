#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <forward_list>
#include <list>
#include <set>
#include <deque>
#include <utility>
#include <map>
#include <unordered_map>



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

//map 
struct Edge{
    unsigned long v1;
    unsigned long v2;
    Edge(): v1(5), v2(5){}
    Edge(unsigned long _v1, unsigned long _v2) : v1(_v1),  v2(_v2){
        
    };
    friend std::ostream& operator<<(std::ostream& os, const Edge& edge);
};
std::ostream& operator<<(std::ostream& os, const Edge& e) {
    os << e.v1 << "," << e.v2;
return os;
}
//comparator function
struct EdgeCompare{
    bool operator()(const Edge& lhs, const Edge& rhs) const{
        return lhs.v1+lhs.v2 < rhs.v1+rhs.v2;
    }
};

int main() {
    // // vector
    // // the size of the of vector is double by increace the size of vector
    // // std::vector<int> Vec{1,2,3};
    // // std::cout<< Vec.capacity() << '\n';
    // // Vec.push_back(4);
    // // std::cout<< Vec.capacity() << '\n';
    // // Vec.push_back(5);
    // // std::cout<< Vec.capacity() << '\n'; 
    // // Vec.push_back(6);
    // // std::cout<< Vec.capacity() << '\n';
    // // Vec.push_back(7);
    // // std::cout<< Vec.capacity() << '\n';
    // // this shrink the size before double it 
    // std::vector<int> Vec{1,2,3};
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(4);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(5);
    // std::cout<< Vec.capacity() << '\n'; 
    // Vec.shrink_to_fit();
    // std::cout<< Vec.capacity() << '\n'; 
    // Vec.push_back(6);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(7);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.push_back(8);
    // std::cout<< Vec.capacity() << '\n';
    // Vec.erase(Vec.begin());
    // std::cout<< Vec.capacity() << '\n';
    // Vec.erase(Vec.begin());
    // std::cout<< Vec.capacity() << '\n';
    // Vec.shrink_to_fit();
    // std::cout<< Vec.capacity() << '\n';
    // Vec.erase(Vec.begin());
    // std::cout<< Vec.capacity() << '\n';
    // Vec.shrink_to_fit();
    // std::cout<< Vec.capacity() << '\n';


    // // c-style for loop 
    // for (int i = 0; i < Vec.size(); i++){
    //     std::cout<< Vec[i] << '\n';
    // }
    // std::cout<< '\n' << '\n';
    // // modern for loop 
    // // wrong output , NOT TO USE 
    // for (auto& elem: Vec){
    //     std::cout<< elem << '\n';
    // }
    // std::cout<< '\n' << '\n';
    
    // // best practice with using vector loop with iterator function 
    // for (std::vector<int>::iterator it = Vec.begin(); it != Vec.end(); it++){
    //     std::cout<< *it << '\n';
    // }

    // // avoid copy the all vector when add a new value in it by using reserve 
    // // prevent unnecessary allocation of data 
    // std::vector<long> vec2;
    // vec2.reserve(50);
    // for(size_t i=1; i!=50; ++i){
    //     vec2.push_back(i);
    // }


    // std::list<int> list1;
    // list1.push_back(1);
    // list1.push_back(2);
    // list1.push_back(3);
    // list1.push_back(4);
    // printlist(list1);

    
    // // insert tak position , value 
    // list1.insert(list1.begin(), 100);
    // printlist(list1);
    // list1.insert(list1.end(), 200);
    // printlist(list1);
    
    // //next 
    // auto it = cbegin(list1);
    // it = std::next( it, list1.size()/2);
    // list1.insert(it , 300);
    // printlist(list1);
    
    // //advance
    // it = cbegin(list1);
    // std::advance(it, list1.size()/2);
    // std::cout<< "middle value : " << *it <<'\n';
    
    // list1.sort();
    // printlist(list1);
    
    // list1.remove_if([](int n){return n <2;});
    // printlist(list1);

    // std::list<int> list2{11,22,33,44,55,66};
    // // list1.merge(list2);
    // // std::cout<< "merge list1 : " <<' ';
    // // printlist(list1);
    // // std::cout<< "merge list2 : " <<' ';
    // // printlist(list2);
    
    // auto it2 = list2.begin();
    // std::advance(it2,2);
    // list1.splice(end(list1), list2, it2, end(list2));
    // std::cout<< "splice list1 : " <<' ';
    // printlist(list1);
    // std::cout<< "splice list2 : " <<' ';
    // printlist(list2);


    // /////////////////////////////////////////////
    // //forward_list
    // std::forward_list<int> flist{1,2,-3,100, 4,5};
    // flist.push_front(0);
    // printlist(flist);
    // push_back(flist,6);
    // push_back(flist,7);
    // printlist(flist);
    // // flist.sort();   
    // printlist(flist);

    // std::forward_list<int> flist2{11,2,-3,100,44, 44,55};
    // flist.merge(flist2);
    // // flist.sort(); 
    // printlist(flist);
    // std::cout<< "---------\n";
    // printlist(flist2);
    // std::cout<< "---------\n";
    // //remove consecutive group of equivalent elements
    // flist.unique();
    // printlist(flist);
    // // auto last = std::unique(flist.begin(), flist.end());
    // // last = std::unique(flist.begin(), flist.end());
    // // flist.erase(last, flist.end());
    // flist.sort();
    // std::cout<< "---------\n";
    // printlist(flist);
    // flist.unique();
    // std::cout<< "---------\n";
    // printlist(flist);


    // // deque
    // std::deque<int> deque1{1,2,3,4};
    // printdeque(deque1);
    // std::cout << deque1[1] <<'\n';
    // // there is a two ways iterator are equivalent 
    // std::deque<int>::iterator itdeq = deque1.begin();
    // // auto it = deque1.begin();
    // it++;
    // it++;
    // deque1.insert(itdeq, 555);
    // printdeque(deque1);
    // auto end = deque1.end();
    // int distance = std::distance(deque1.begin(), end);
    // itdeq = deque1.begin();
    // std::advance(itdeq,distance/2);
    // deque1.insert(itdeq,777);
    // printdeque(deque1);
    // deque1.push_back(111);
    // deque1.push_front(222);
    // printdeque(deque1);
    
    // //set
    // std::set<int> set1{1,2,3,4};
    // set1.insert(1);
    // set1.insert(2);
    // set1.insert(-2);
    // std::cout<< "num : " << set1.count(8) <<'\n';
    // // std::cout<< "num : " << set1.contains(4) <<'\n';
    // // find return 
    // set1.erase(3);
    // auto found = set1.find(5);
    // if (found != set1.end()){
    //     std::cout << "num found" <<'\n';
    // }
    // for(auto el : set1){
    //     std::cout<< el << '\n';
    // }
    // std::cout <<'\n';
    // std::set<int> set2{8,9,10,11,12,13};
    // auto lower = set2.lower_bound(9);
    // auto upper = set2.upper_bound(12);
    // for(auto it = lower; it!=upper; ++it){
    //     std::cout<< *it << ',';
    // }
    // std::cout <<'\n';
    // set2.erase(lower, upper);
    // for(auto el: set2){
    //     std::cout<< el << ',';
    // }
    // std::cout <<'\n';
    // set1.merge(set2);
    // std::cout <<"set1: ";
    // for(auto el: set1){
    //     std::cout<< el << ',';
    // }
    // std::cout <<'\n';
    // std::cout <<"set2: ";
    // for(auto el: set2){
    //     std::cout<< el << ',';
    // }
    // std::cout <<'\n';

    // //unordered_List
    // std::cout << "unordered- set :" << '\n';
    // std::unordered_set<int> unset1{1,2,3,4,5,6,7,8,9};
    // // unset1.reserve(12);
    // unset1.insert(11);
    // unset1.insert(12);
    // unset1.insert(10);
    // unset1.insert(15);
    // unset1.insert(100);
    // unset1.erase(15);
    // unset1.erase(1);
    // unset1.erase(2);
    // unset1.erase(3);
    // unset1.erase(4);
    // std::cout << unset1.bucket_count() << '\n';
    // std::cout << unset1.load_factor() << '\n';
    // printunset(unset1);
    // // for(int i = 0; i < unset1.bucket_count(); i++){
    // //     std::cout << unset1.bucket_size(i) << '\n';
    // // }
    // std::unordered_set<int> unset2{11,12,13,14,15,16,17,18,19};
    // unset1.merge(unset2);
    // std::cout << "unset1: ";
    // printunset(unset1);
    // std::cout << "unset2: ";
    // printunset(unset2);
    // std::cout << "max-bucket-number: " <<unset1.max_bucket_count() << '\n';
    // std::cout << "max-bucket-number: " <<unset2.max_bucket_count() << '\n';

    // //multiset
    // std::multiset<int> muset1{1,2,3,3,3,3,4,4,4,4,4,4};
    // std::cout << muset1.count(4) << '\n';
    // muset1.erase(4);
    // std::cout << muset1.count(4) << '\n';
    // printmuset(muset1);


    // //pair
    // using student_t = std::pair<int, std::string>;
    // std::vector<student_t> students;
    // for(int i = 0; i < 5; i++){
    //     std::pair<int, std::string> student(i, "eslam");
    //     students.push_back(student);
    // }
    // for(auto student: students){
    //     std::cout<< student.first << ',';
    //     std::cout<< student.second << '\n';
    // }

    // //map
    // std::map<std::string, Edge> map1;
    // map1["e1"] = Edge{0,0};
    // std::cout<<map1["e1"] << '\n';
    // map1["e1"] = Edge{1,1};
    // std::cout<<map1.at("e1")<< '\n';
    // map1["e5"] = Edge{5,5};
    // map1.insert(std::pair("e2", Edge(2L,2L)));
    // std::cout << map1.at("e2") << '\n';
    // //use a structured binding, to return successfull and retrieve an iterator to where the element was inserted
    // const auto[it, success] = map1.insert(std::pair("e3", Edge(3,3)));
    // std::cout << "new edge was added... " << success << '\n';
    // std::cout << it->first << " : " << success << '\n';
    // std::cout << it->second << " : " << success << '\n';
    // //classic iterator 
    // for(std::map<std::string, Edge>::iterator it = map1.begin(); it != map1.end(); ++it){
    //     std::cout << it -> first << '\n';
    // }
    // // ranged based loops
    // for(const auto & keys : map1 ){
    //     std::cout << keys.first << " : " << keys.second<< '\n';
    // }
    // // ranged based loops with structured bindings
    // for(const auto & [keys,values] : map1 ){
    //     std::cout << keys << " : " << values << '\n';
    // }
    // std::map<Edge,std::string,EdgeCompare> map2;
    // Edge e1(11,11);
    // Edge e2(10,10);    
    // map2[e1] = "any1";
    // map2[e2] = "any2";
    // for(const auto & [keys,values] : map2 ){
    //     std::cout << keys << " : " << values << '\n';
    // }

    //multimap
    std::multimap<std::string, int> mumap = {{"amir1",6}, {"mai2", 7}};
    mumap.insert(std::pair{"eslam",11});
    mumap.insert(std::pair{"eslam",66});
    mumap.insert(std::pair{"eslam",55});
    // mumap.erase("eslam");
    // auto find = mumap.find("eslam");
    // mumap.erase(find);
    for(const auto & keys : mumap ){
        std::cout << keys.first << " : " << keys.second<< '\n';
    }
    std::cout << "--------------" << '\n';
    //iterate over keys to do any thing 
    auto fentry = mumap.lower_bound("eslam");
    auto lentry = mumap.upper_bound("eslam");
    for( ; fentry != lentry; ++fentry){
        std::cout << fentry->first <<" , " << fentry->second << '\n';
    }

    //unordered_map
    // std::unordered_map<std::string, Edge> unmap;
    Edge e1(4,4);
    Edge e2(5,4);
    Edge e3(4,6);
    Edge e4(3,8);
    using StringEdge = std::unordered_map<std::string, Edge>;
    StringEdge unmap = {{"str2", e2}, {"str3", e3}, {"str4", e4}};
    unmap.insert({"str1", e1});
    unmap.erase("str2");
    StringEdge::iterator begin = unmap.begin();
    unmap.erase(begin);
    Edge e6(12,34);
    //undate item 
    unmap["str4"] = e6;
    //add new item
    unmap["str5"] = e6;
    for(const auto & keys : unmap ){
        std::cout << keys.first << " : " << keys.second<< '\n';
    }
    std::cout << "bucket_count : " << unmap.bucket_count() << '\n';
    std::cout << "load_factor  : " << unmap.load_factor() << '\n';

    return 0;    
}

