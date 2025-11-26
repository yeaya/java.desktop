#ifndef _bug8013566_h_
#define _bug8013566_h_
//$ class bug8013566
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug8013566 : public ::java::lang::Object {
	$class(bug8013566, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8013566();
	void init$();
	static void main($StringArray* args);
	static void test(::javax::swing::JFrame* frame);
};

#endif // _bug8013566_h_