#ifndef _bug6587742_h_
#define _bug6587742_h_
//$ class bug6587742
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class JSlider;
	}
}

class $export bug6587742 : public ::javax::swing::JApplet {
	$class(bug6587742, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug6587742();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	static ::javax::swing::JSlider* createSlider(bool vertical, ::java::lang::Boolean* filled, bool enabled, bool inverted);
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
};

#endif // _bug6587742_h_