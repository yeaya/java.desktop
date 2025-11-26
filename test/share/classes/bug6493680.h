#ifndef _bug6493680_h_
#define _bug6493680_h_
//$ class bug6493680
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUMBER_OF_TRIES")
#undef NUMBER_OF_TRIES

class $export bug6493680 : public ::java::lang::Object {
	$class(bug6493680, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6493680();
	void init$();
	static void main($StringArray* args);
	static const int32_t NUMBER_OF_TRIES = 50;
};

#pragma pop_macro("NUMBER_OF_TRIES")

#endif // _bug6493680_h_