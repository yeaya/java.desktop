#ifndef _bug4222153_h_
#define _bug4222153_h_
//$ class bug4222153
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug4222153 : public ::javax::swing::JApplet {
	$class(bug4222153, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4222153();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	void lambda$init$0();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug4222153_h_