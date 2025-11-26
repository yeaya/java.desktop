#ifndef _Test4760089_h_
#define _Test4760089_h_
//$ class Test4760089
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

class $export Test4760089 : public ::javax::swing::JApplet {
	$class(Test4760089, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	Test4760089();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _Test4760089_h_