#ifndef _TAB_h_
#define _TAB_h_
//$ class TAB
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

#pragma push_macro("TAB")
#undef TAB

namespace java {
	namespace awt {
		class Container;
	}
}

class $export TAB : public ::javax::swing::JApplet {
	$class(TAB, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	TAB();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	static void initTest(::java::awt::Container* contentPane);
	void lambda$init$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#pragma pop_macro("TAB")

#endif // _TAB_h_