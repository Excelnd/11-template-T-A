// 11 template T A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct A {};
struct B {};

template<typename T = A>
struct X;

template <>
struct X<A> {
	static void f() { cout << 1 << endl; }
};

template<>
struct X<B> {
	static void f() { cout << 2 << endl; }
};

template< template<typename T = B> class C>
void g() {
	C<>::f();
}

int main()
{
	g<X>();

    return 0;
}

