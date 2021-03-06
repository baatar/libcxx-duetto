//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <set>

// class set

//       iterator find(const key_type& k);
// const_iterator find(const key_type& k) const;

#include <set>
#include <cassert>

#include "../../min_allocator.h"

int main()
{
    {
    typedef int V;
    typedef std::set<int> M;
    {
        typedef M::iterator R;
        V ar[] =
        {
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12
        };
        M m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        R r = m.find(5);
        assert(r == m.begin());
        r = m.find(6);
        assert(r == next(m.begin()));
        r = m.find(7);
        assert(r == next(m.begin(), 2));
        r = m.find(8);
        assert(r == next(m.begin(), 3));
        r = m.find(9);
        assert(r == next(m.begin(), 4));
        r = m.find(10);
        assert(r == next(m.begin(), 5));
        r = m.find(11);
        assert(r == next(m.begin(), 6));
        r = m.find(12);
        assert(r == next(m.begin(), 7));
        r = m.find(4);
        assert(r == next(m.begin(), 8));
    }
    {
        typedef M::const_iterator R;
        V ar[] =
        {
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12
        };
        const M m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        R r = m.find(5);
        assert(r == m.begin());
        r = m.find(6);
        assert(r == next(m.begin()));
        r = m.find(7);
        assert(r == next(m.begin(), 2));
        r = m.find(8);
        assert(r == next(m.begin(), 3));
        r = m.find(9);
        assert(r == next(m.begin(), 4));
        r = m.find(10);
        assert(r == next(m.begin(), 5));
        r = m.find(11);
        assert(r == next(m.begin(), 6));
        r = m.find(12);
        assert(r == next(m.begin(), 7));
        r = m.find(4);
        assert(r == next(m.begin(), 8));
    }
    }
#if __cplusplus >= 201103L
    {
    typedef int V;
    typedef std::set<int, std::less<int>, min_allocator<int>> M;
    {
        typedef M::iterator R;
        V ar[] =
        {
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12
        };
        M m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        R r = m.find(5);
        assert(r == m.begin());
        r = m.find(6);
        assert(r == next(m.begin()));
        r = m.find(7);
        assert(r == next(m.begin(), 2));
        r = m.find(8);
        assert(r == next(m.begin(), 3));
        r = m.find(9);
        assert(r == next(m.begin(), 4));
        r = m.find(10);
        assert(r == next(m.begin(), 5));
        r = m.find(11);
        assert(r == next(m.begin(), 6));
        r = m.find(12);
        assert(r == next(m.begin(), 7));
        r = m.find(4);
        assert(r == next(m.begin(), 8));
    }
    {
        typedef M::const_iterator R;
        V ar[] =
        {
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12
        };
        const M m(ar, ar+sizeof(ar)/sizeof(ar[0]));
        R r = m.find(5);
        assert(r == m.begin());
        r = m.find(6);
        assert(r == next(m.begin()));
        r = m.find(7);
        assert(r == next(m.begin(), 2));
        r = m.find(8);
        assert(r == next(m.begin(), 3));
        r = m.find(9);
        assert(r == next(m.begin(), 4));
        r = m.find(10);
        assert(r == next(m.begin(), 5));
        r = m.find(11);
        assert(r == next(m.begin(), 6));
        r = m.find(12);
        assert(r == next(m.begin(), 7));
        r = m.find(4);
        assert(r == next(m.begin(), 8));
    }
    }
#endif
}
