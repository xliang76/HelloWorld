#include "test.h"

test::test()
    :m_count(0)
{}

test::~test()
{}

void test::set(int in)
{
    m_count = in;
}

int test::get() const
{
    return m_count;
}
