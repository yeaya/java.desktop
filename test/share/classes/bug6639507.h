#ifndef _bug6639507_h_
#define _bug6639507_h_
//$ class bug6639507
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dialog;
	}
}

class $export bug6639507 : public ::java::lang::Object {
	$class(bug6639507, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6639507();
	void init$();
	static void assertEmptyTitle(::java::awt::Dialog* dialog, $String* ctr);
	static void main($StringArray* args);
};

#endif // _bug6639507_h_