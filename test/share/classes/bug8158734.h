#ifndef _bug8158734_h_
#define _bug8158734_h_
//$ class bug8158734
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TYPE")
#undef TYPE
#pragma push_macro("TYPE_2")
#undef TYPE_2

class $export bug8158734 : public ::java::lang::Object {
	$class(bug8158734, 0, ::java::lang::Object)
public:
	bug8158734();
	void init$();
	static void main($StringArray* args);
	static $String* TYPE;
	static $String* TYPE_2;
	static bool myClassloaderWasUsed;
};

#pragma pop_macro("TYPE")
#pragma pop_macro("TYPE_2")

#endif // _bug8158734_h_