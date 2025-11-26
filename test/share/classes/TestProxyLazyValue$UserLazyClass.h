#ifndef _TestProxyLazyValue$UserLazyClass_h_
#define _TestProxyLazyValue$UserLazyClass_h_
//$ class TestProxyLazyValue$UserLazyClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONSTRUCTOR_ARG")
#undef CONSTRUCTOR_ARG
#pragma push_macro("RESULT_1")
#undef RESULT_1
#pragma push_macro("RESULT_2")
#undef RESULT_2

class $export TestProxyLazyValue$UserLazyClass : public ::java::lang::Object {
	$class(TestProxyLazyValue$UserLazyClass, 0, ::java::lang::Object)
public:
	TestProxyLazyValue$UserLazyClass();
	void init$();
	void init$(int32_t arg);
	static $String* method1();
	static $String* method2($String* arg);
	static const int32_t CONSTRUCTOR_ARG = 100;
	static $String* RESULT_1;
	static $String* RESULT_2;
	int32_t arg = 0;
};

#pragma pop_macro("CONSTRUCTOR_ARG")
#pragma pop_macro("RESULT_1")
#pragma pop_macro("RESULT_2")

#endif // _TestProxyLazyValue$UserLazyClass_h_