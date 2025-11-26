#ifndef _KeyBoardNavigation_h_
#define _KeyBoardNavigation_h_
//$ class KeyBoardNavigation
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Container;
	}
}

class $export KeyBoardNavigation : public ::javax::swing::JApplet {
	$class(KeyBoardNavigation, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	KeyBoardNavigation();
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

#endif // _KeyBoardNavigation_h_