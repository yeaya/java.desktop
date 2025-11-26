#ifndef _bug8065098_h_
#define _bug8065098_h_
//$ class bug8065098
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export bug8065098 : public ::javax::swing::JApplet {
	$class(bug8065098, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug8065098();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug8065098_h_