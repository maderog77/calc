#ifndef SCALAR_OPS_H
#define SCALAR_OPS_H

#include <string>
#include <stack>

#include "op.h"

class Add : public Op {
    public:
        std::string op_string() { return "+"; }
        void apply(std::stack<double>& s) {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            double c = a + b;
            s.push(c);
        }
};

#endif

