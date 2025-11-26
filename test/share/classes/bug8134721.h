#ifndef _bug8134721_h_
#define _bug8134721_h_
//$ class bug8134721
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug8134721 : public ::java::lang::Object {
	$class(bug8134721, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8134721();
	void init$();
	static void main($StringArray* args);
	static void testNPE();
};

#endif // _bug8134721_h_