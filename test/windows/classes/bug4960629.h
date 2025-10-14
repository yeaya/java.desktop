#ifndef _bug4960629_h_
#define _bug4960629_h_
//$ class bug4960629
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JLabel;
	}
}

class $export bug4960629 : public ::java::lang::Object {
	$class(bug4960629, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4960629();
	void init$();
	virtual void createAndShowGUI();
	static void main($StringArray* args);
	void test();
	bool passed = false;
	::javax::swing::JLabel* label = nullptr;
	::javax::swing::JFrame* f = nullptr;
};

#endif // _bug4960629_h_