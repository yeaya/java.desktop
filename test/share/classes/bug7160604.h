#ifndef _bug7160604_h_
#define _bug7160604_h_
//$ class bug7160604
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug7160604 : public ::javax::swing::JApplet {
	$class(bug7160604, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug7160604();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	void lambda$init$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug7160604_h_