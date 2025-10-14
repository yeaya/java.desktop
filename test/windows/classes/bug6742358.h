#ifndef _bug6742358_h_
#define _bug6742358_h_
//$ class bug6742358
//$ extends javax.swing.JApplet

#include <java/lang/Array.h>
#include <javax/swing/JApplet.h>

namespace javax {
	namespace swing {
		class JSlider;
	}
}

class $export bug6742358 : public ::javax::swing::JApplet {
	$class(bug6742358, $NO_CLASS_INIT, ::javax::swing::JApplet)
public:
	bug6742358();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	static ::javax::swing::JSlider* createSlider(bool vertical, bool enabled, bool filled, bool inverted);
	virtual void init() override;
	using ::javax::swing::JApplet::list;
	static void main($StringArray* args);
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
};

#endif // _bug6742358_h_