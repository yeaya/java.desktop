#ifndef _bug7036025_h_
#define _bug7036025_h_
//$ class bug7036025
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIR")
#undef DIR

class $export bug7036025 : public ::java::lang::Object {
	$class(bug7036025, 0, ::java::lang::Object)
public:
	bug7036025();
	void init$();
	static void main($StringArray* args);
	static $String* DIR;
};

#pragma pop_macro("DIR")

#endif // _bug7036025_h_