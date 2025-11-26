#ifndef _bug4314199_h_
#define _bug4314199_h_
//$ class bug4314199
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug4314199 : public ::javax::swing::JApplet {
	$class(bug4314199, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4314199();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	void createAndShowGUI();
	void createAndShowMessage($String* message);
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug4314199_h_