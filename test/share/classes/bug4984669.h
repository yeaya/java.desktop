#ifndef _bug4984669_h_
#define _bug4984669_h_
//$ class bug4984669
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug4984669 : public ::javax::swing::JApplet {
	$class(bug4984669, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4984669();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug4984669_h_