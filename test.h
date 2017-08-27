#include <iostream>
#include <string>


class test
{
    public:
        test();
        ~test();
        void set(int in);
        int get() const;

    private:
        int m_count;
};
