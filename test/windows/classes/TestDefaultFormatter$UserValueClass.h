#ifndef _TestDefaultFormatter$UserValueClass_h_
#define _TestDefaultFormatter$UserValueClass_h_
//$ class TestDefaultFormatter$UserValueClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export TestDefaultFormatter$UserValueClass : public ::java::lang::Object {
	$class(TestDefaultFormatter$UserValueClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestDefaultFormatter$UserValueClass();
	void init$($String* str);
	virtual $String* toString() override;
	$String* str = nullptr;
};

#endif // _TestDefaultFormatter$UserValueClass_h_