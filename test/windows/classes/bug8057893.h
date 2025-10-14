#ifndef _bug8057893_h_
#define _bug8057893_h_
//$ class bug8057893
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug8057893 : public ::java::lang::Object {
	$class(bug8057893, 0, ::java::lang::Object)
public:
	bug8057893();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static $volatile(bool) isComboBoxEdited;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug8057893_h_