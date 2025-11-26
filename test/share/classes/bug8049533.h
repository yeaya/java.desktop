#ifndef _bug8049533_h_
#define _bug8049533_h_
//$ class bug8049533
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PRECISE_WHEEL_ROTATION")
#undef PRECISE_WHEEL_ROTATION

class $export bug8049533 : public ::java::lang::Object {
	$class(bug8049533, 0, ::java::lang::Object)
public:
	bug8049533();
	void init$();
	static void main($StringArray* args);
	static double PRECISE_WHEEL_ROTATION;
};

#pragma pop_macro("PRECISE_WHEEL_ROTATION")

#endif // _bug8049533_h_