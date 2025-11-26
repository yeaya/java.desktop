#ifndef _bug6209975$ReturnObject_h_
#define _bug6209975$ReturnObject_h_
//$ class bug6209975$ReturnObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export bug6209975$ReturnObject : public ::java::lang::Object {
	$class(bug6209975$ReturnObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6209975$ReturnObject();
	void init$();
	$volatile(int32_t) itsValue = 0;
};

#endif // _bug6209975$ReturnObject_h_