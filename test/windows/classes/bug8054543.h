#ifndef _bug8054543_h_
#define _bug8054543_h_
//$ class bug8054543
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug8054543 : public ::java::lang::Object {
	$class(bug8054543, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8054543();
	void init$();
	void check(Object$* o1, Object$* o2);
	static void main($StringArray* args);
};

#endif // _bug8054543_h_