#include <iostream>
#include <stack>
#include <string>
#include <map>
using namespace std;

#include "scalar_ops.h"
#include "op.h"

int main() {
    Add *add_op = new Add;
    map<string, Op*> op_map;
    op_map["+"] = add_op;
    
    stack<double> s;

    string input;
    while(cin >> input) {
        if(op_map.find(input) != op_map.end()) {
            op_map[input]->apply(s);
        } else if(input == ".s") {
            stack<double> temp = s;
            while(!temp.empty()) {
                double val = temp.top();
                cout << val << " ";
                temp.pop();
            }
            cout << endl;
        } else {
            double val = stod(input);
            s.push(val);
        }
    }

    return 0;
}

