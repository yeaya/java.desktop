#ifndef _TestCustomStyleFactory_h_
#define _TestCustomStyleFactory_h_
//$ class TestCustomStyleFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GTK_LAF_CLASS")
#undef GTK_LAF_CLASS

class $export TestCustomStyleFactory : public ::java::lang::Object {
	$class(TestCustomStyleFactory, 0, ::java::lang::Object)
public:
	TestCustomStyleFactory();
	void init$();
	static void main($StringArray* args);
	static $String* GTK_LAF_CLASS;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _TestCustomStyleFactory_h_