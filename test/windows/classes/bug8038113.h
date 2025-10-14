#ifndef _bug8038113_h_
#define _bug8038113_h_
//$ class bug8038113
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug8038113 : public ::javax::swing::JApplet {
	$class(bug8038113, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug8038113();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug8038113_h_