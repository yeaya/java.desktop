#ifndef _TestProxyLazyValue_h_
#define _TestProxyLazyValue_h_
//$ class TestProxyLazyValue
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TestProxyLazyValue : public ::java::lang::Object {
	$class(TestProxyLazyValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestProxyLazyValue();
	void init$();
	static void main($StringArray* args);
	static void testProxyLazyValue();
	static void testUserProxyLazyValue();
};

#endif // _TestProxyLazyValue_h_