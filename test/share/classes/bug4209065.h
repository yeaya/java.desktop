#ifndef _bug4209065_h_
#define _bug4209065_h_
//$ class bug4209065
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug4209065 : public ::javax::swing::JApplet {
	$class(bug4209065, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4209065();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	void createTabbedPane();
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug4209065_h_