#include <iostream>
#include <ostream>
#include <queue>
#include <stack>
#include <list>
#include <vector>



void printstack(std::stack<int> stack){
        while (!stack.empty()) {
        int result = stack.top();
        stack.pop();
        std::cout << "result : " << result << '\n';
    }
}
void printqueue(std::queue<int, std::list<int>> queue){
        while (!queue.empty()) {
        int result = queue.front();
        queue.pop();
        std::cout << "result : " << result << '\n';
    }
}
void printpriqueue(std::priority_queue<int> priqueue){
        while (!priqueue.empty()) {
        int result = priqueue.top();
        std::cout << "result : " << result << '\n';
        priqueue.pop();
    }
}
struct Edge{
    int v1, v2;
    Edge(int _v1, int _v2): v1(_v1), v2(_v2){}
    friend std::ostream& operator<<(std::ostream& os, const Edge& e);

};
std::ostream& operator<<(std::ostream& os, const Edge& e){
    os << e.v1 << " , " << e.v2;
    return os;
};

struct EdgeCompare{
    bool operator()(const Edge& e1, const Edge& e2) const{
        int e1sum = e1.v1 + e1.v2;
        int e2sum = e2.v1 + e2.v2;
        return e1sum < e2sum;
    }
};
int main() {
    // //stack
    // std::stack<int> stack1({-2,-1,0,1,2});
    // stack1.push(11);
    // stack1.push(12);
    // stack1.push(13);
    // stack1.push(14);
    // std::cout << "top :" << stack1.top() << '\n';
    // stack1.pop();
    // std::cout << "top :" << stack1.top() << '\n';
    // printstack(stack1);
    
    // //queue
    // std::queue<int, std::list<int>> queue1({-3,-4,-2});
    // queue1.push(2);
    // queue1.push(3);
    // queue1.push(4);
    // queue1.push(5);
    // std::cout << "front : " << queue1.front() << '\n';
    // std::cout << "back  : " << queue1.back() << '\n';
    // queue1.pop();
    // std::cout << "front : " << queue1.front() << '\n';
    // std::cout << "back  : " << queue1.back() << '\n';
    // //underlying container
    // std::cout << "-----------------------" << '\n';
    // std::list<int> list1 = { 21,22,23,24};
    // std::queue<int ,std::list<int>> queueWithList(list1);
    // printqueue(queueWithList);

    // //priority_queue
    // std::priority_queue<int> priqueue;
    // priqueue.push(22);
    // priqueue.push(25);
    // priqueue.push(23);
    // printpriqueue(priqueue);

    std::priority_queue<Edge, std::vector<Edge>, EdgeCompare> edgesQueue;
    Edge e1(1,2);
    Edge e2(7,3);
    Edge e3(3,4);
    edgesQueue.push(e1);
    edgesQueue.push(e2);
    edgesQueue.push(e3);
    while (!edgesQueue.empty()) {
    Edge topEdge = edgesQueue.top();
    std::cout << "result : " << topEdge << '\n';
    edgesQueue.pop();
    }
    return 0;
}
