#ifndef _bug6604281_h_
#define _bug6604281_h_
//$ class bug6604281
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug6604281 : public ::java::lang::Object {
	$class(bug6604281, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6604281();
	void init$();
	static void fail($String* s);
	static void main($StringArray* args);
};

#endif // _bug6604281_h_