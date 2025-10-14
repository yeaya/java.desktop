#ifndef _Test6860438_h_
#define _Test6860438_h_
//$ class Test6860438
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KEY")
#undef KEY
#pragma push_macro("VALUE")
#undef VALUE

namespace java {
	namespace util {
		class Enumeration;
	}
}

class $export Test6860438 : public ::java::lang::Object {
	$class(Test6860438, 0, ::java::lang::Object)
public:
	Test6860438();
	void init$();
	virtual void check(Object$* key, Object$* value, bool present, int32_t size);
	virtual void check(bool condition, $String* methodName);
	virtual void checkEnumeration(::java::util::Enumeration* e, Object$* elem, bool present, $String* error);
	static void main($StringArray* args);
	virtual void test();
	static $String* KEY;
	static $String* VALUE;
};

#pragma pop_macro("KEY")
#pragma pop_macro("VALUE")

#endif // _Test6860438_h_