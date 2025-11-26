#ifndef _bug4174551_h_
#define _bug4174551_h_
//$ class bug4174551
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug4174551 : public ::javax::swing::JApplet {
	$class(bug4174551, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4174551();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	static void lambda$init$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug4174551_h_