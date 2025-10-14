#ifndef _bug4714674_h_
#define _bug4714674_h_
//$ class bug4714674
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug4714674 : public ::java::lang::Object {
	$class(bug4714674, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4714674();
	void init$();
	static void main($StringArray* args);
	void pass();
	bool passed();
	void test();
	bool passed$ = false;
};

#endif // _bug4714674_h_