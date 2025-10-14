#ifndef _bug7045593_h_
#define _bug7045593_h_
//$ class bug7045593
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JTextField;
	}
}

class $export bug7045593 : public ::java::lang::Object {
	$class(bug7045593, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7045593();
	void init$();
	static void assertEquals(int32_t i1, int32_t i2);
	static void main($StringArray* args);
	static $volatile(::javax::swing::JTextField*) jtf;
};

#endif // _bug7045593_h_