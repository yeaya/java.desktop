#ifndef _bug4247996_h_
#define _bug4247996_h_
//$ class bug4247996
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JToggleButton;
	}
}

class $export bug4247996 : public ::java::lang::Object {
	$class(bug4247996, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4247996();
	void init$();
	static void checkButtonsSize();
	static void createAndShowGUI();
	static ::java::awt::Point* getButtonCenter();
	static void main($StringArray* args);
	static ::javax::swing::JButton* button;
	static ::javax::swing::JToggleButton* toogleButton;
};

#endif // _bug4247996_h_