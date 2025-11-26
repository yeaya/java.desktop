#ifndef _bug6274267_h_
#define _bug6274267_h_
//$ class bug6274267
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug6274267 : public ::java::lang::Object {
	$class(bug6274267, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6274267();
	void init$();
	static void main($StringArray* args);
	void setupUI1();
	void setupUI2();
	void test();
	::javax::swing::JFrame* frame = nullptr;
	::java::awt::Component* left = nullptr;
};

#endif // _bug6274267_h_