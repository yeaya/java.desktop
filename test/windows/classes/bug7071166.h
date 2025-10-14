#ifndef _bug7071166_h_
#define _bug7071166_h_
//$ class bug7071166
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("POSITIONS")
#undef POSITIONS

class $export bug7071166 : public ::java::lang::Object {
	$class(bug7071166, 0, ::java::lang::Object)
public:
	bug7071166();
	void init$();
	static void main($StringArray* args);
	static $ints* POSITIONS;
};

#pragma pop_macro("POSITIONS")

#endif // _bug7071166_h_