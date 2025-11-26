#ifndef _bug6953396_h_
#define _bug6953396_h_
//$ class bug6953396
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug6953396 : public ::java::lang::Object {
	$class(bug6953396, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6953396();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) flag;
};

#endif // _bug6953396_h_