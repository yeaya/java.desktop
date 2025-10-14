#ifndef _bug6925473_h_
#define _bug6925473_h_
//$ class bug6925473
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LONG_TEXT")
#undef LONG_TEXT

class $export bug6925473 : public ::java::lang::Object {
	$class(bug6925473, 0, ::java::lang::Object)
public:
	bug6925473();
	void init$();
	static void main($StringArray* args);
	static $String* LONG_TEXT;
};

#pragma pop_macro("LONG_TEXT")

#endif // _bug6925473_h_