#ifndef OP_H
#define OP_H

class Op {
    public:
        virtual std::string op_string() = 0;
        virtual void apply(std::stack<double>& s) = 0;
};

#endif
