#ifndef _TestObjectView_h_
#define _TestObjectView_h_
//$ class TestObjectView
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestObjectView : public ::java::lang::Object {
	$class(TestObjectView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestObjectView();
	void init$();
	static void main($StringArray* args);
	static void testObjectView();
};

#endif // _TestObjectView_h_