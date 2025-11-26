#ifndef _bug7082443_h_
#define _bug7082443_h_
//$ class bug7082443
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GTK_LAF_CLASS")
#undef GTK_LAF_CLASS

class $export bug7082443 : public ::java::lang::Object {
	$class(bug7082443, 0, ::java::lang::Object)
public:
	bug7082443();
	void init$();
	static void main($StringArray* args);
	static $String* GTK_LAF_CLASS;
};

#pragma pop_macro("GTK_LAF_CLASS")

#endif // _bug7082443_h_