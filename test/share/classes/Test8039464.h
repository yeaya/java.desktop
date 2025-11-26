#ifndef _Test8039464_h_
#define _Test8039464_h_
//$ class Test8039464
//$ extends javax.swing.JApplet

#include <java/lang/Array.h>
#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Container;
	}
}

class $export Test8039464 : public ::javax::swing::JApplet {
	$class(Test8039464, 0, ::javax::swing::JApplet)
public:
	Test8039464();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	using ::javax::swing::JApplet::list;
	void init$();
	virtual void init() override;
	static void init(::java::awt::Container* container);
	static void main($StringArray* args);
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
};

#endif // _Test8039464_h_