#ifndef _bug4987336_h_
#define _bug4987336_h_
//$ class bug4987336
//$ extends javax.swing.JApplet

#include <javax/swing/JApplet.h>

#pragma push_macro("ANIM_IMAGE_RES")
#undef ANIM_IMAGE_RES
#pragma push_macro("IMAGE_RES")
#undef IMAGE_RES

namespace javax {
	namespace swing {
		class JLabel;
		class JSlider;
	}
}

class $export bug4987336 : public ::javax::swing::JApplet {
	$class(bug4987336, 0, ::javax::swing::JApplet)
public:
	bug4987336();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	void init$();
	static ::javax::swing::JLabel* createLabel($String* enabledImage, $String* disabledImage);
	static ::javax::swing::JSlider* createSlider(bool enabled, $String* firstEnabledImage, $String* firstDisabledImage, $String* secondEnabledImage, $String* secondDisabledImage);
	virtual void init() override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	using ::javax::swing::JApplet::list;
	static $String* IMAGE_RES;
	static $String* ANIM_IMAGE_RES;
};

#pragma pop_macro("ANIM_IMAGE_RES")
#pragma pop_macro("IMAGE_RES")

#endif // _bug4987336_h_