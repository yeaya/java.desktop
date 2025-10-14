#ifndef _Test6462562_h_
#define _Test6462562_h_
//$ class Test6462562
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BACKSPACE")
#undef BACKSPACE
#pragma push_macro("DELETE")
#undef DELETE

class Test6462562$TestFormattedTextField;
namespace java {
	namespace text {
		class DateFormat;
		class NumberFormat;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

class $export Test6462562 : public ::java::lang::Object {
	$class(Test6462562, 0, ::java::lang::Object)
public:
	Test6462562();
	void init$();
	virtual ::Test6462562$TestFormattedTextField* create(::java::text::NumberFormat* format);
	virtual ::Test6462562$TestFormattedTextField* create(::java::text::DateFormat* format);
	virtual ::java::util::Date* date(::java::text::DateFormat* format, $String* spec);
	static void main($StringArray* args);
	virtual void test();
	virtual void testCurrencyFormat();
	virtual void testDateFormat();
	virtual void testIntegerFormat();
	virtual void testPercentFormat();
	static $String* BACKSPACE;
	static $String* DELETE;
	bool failed = false;
};

#pragma pop_macro("BACKSPACE")
#pragma pop_macro("DELETE")

#endif // _Test6462562_h_