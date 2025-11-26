#ifndef _bug6544309_h_
#define _bug6544309_h_
//$ class bug6544309
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}

class $export bug6544309 : public ::java::lang::Object {
	$class(bug6544309, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6544309();
	void init$();
	void checkResult();
	static void main($StringArray* args);
	void setupUI();
	void test();
	void testImpl();
	::javax::swing::JDialog* dialog = nullptr;
	bool passed = false;
	static ::java::awt::Robot* robot;
};

#endif // _bug6544309_h_