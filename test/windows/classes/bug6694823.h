#ifndef _bug6694823_h_
#define _bug6694823_h_
//$ class bug6694823
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Insets;
		class Robot;
		class Toolkit;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPopupMenu;
	}
}

class $export bug6694823 : public ::java::lang::Object {
	$class(bug6694823, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug6694823();
	void init$();
	static void checkPopup();
	static void createGui();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JPopupMenu* popup;
	static ::java::awt::Toolkit* toolkit;
	static ::java::awt::Insets* screenInsets;
	static ::java::awt::Robot* robot;
};

#endif // _bug6694823_h_