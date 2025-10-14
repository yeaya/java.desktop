#ifndef _bug5076514_h_
#define _bug5076514_h_
//$ class bug5076514
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ACCESS_CLIPBOARD")
#undef ACCESS_CLIPBOARD

class $export bug5076514 : public ::java::lang::Object {
	$class(bug5076514, 0, ::java::lang::Object)
public:
	bug5076514();
	void init$();
	static void main($StringArray* args);
	static $String* ACCESS_CLIPBOARD;
	static bool isCheckPermissionCalled;
};

#pragma pop_macro("ACCESS_CLIPBOARD")

#endif // _bug5076514_h_