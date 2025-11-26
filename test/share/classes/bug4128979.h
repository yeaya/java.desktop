#ifndef _bug4128979_h_
#define _bug4128979_h_
//$ class bug4128979
//$ extends javax.swing.JApplet

#include <java/lang/Array.h>
#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Container;
	}
}

class $export bug4128979 : public ::javax::swing::JApplet {
	$class(bug4128979, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug4128979();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	static void addButtons(::java::awt::Container* c);
	virtual void init() override;
	using ::javax::swing::JApplet::list;
	static void main($StringArray* args);
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
};

#endif // _bug4128979_h_