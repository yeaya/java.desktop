#ifndef _javax_swing_plaf_metal_MetalScrollButton_h_
#define _javax_swing_plaf_metal_MetalScrollButton_h_
//$ class javax.swing.plaf.metal.MetalScrollButton
//$ extends javax.swing.plaf.basic.BasicArrowButton

#include <javax/swing/plaf/basic/BasicArrowButton.h>

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalScrollButton : public ::javax::swing::plaf::basic::BasicArrowButton {
	$class(MetalScrollButton, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicArrowButton)
public:
	MetalScrollButton();
	using ::javax::swing::plaf::basic::BasicArrowButton::contains;
	using ::javax::swing::plaf::basic::BasicArrowButton::enable;
	using ::javax::swing::plaf::basic::BasicArrowButton::getBounds;
	using ::javax::swing::plaf::basic::BasicArrowButton::getSize;
	using ::javax::swing::plaf::basic::BasicArrowButton::getLocation;
	using ::javax::swing::plaf::basic::BasicArrowButton::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicArrowButton::add;
	using ::javax::swing::plaf::basic::BasicArrowButton::getMousePosition;
	void init$(int32_t direction, int32_t width, bool freeStanding);
	virtual int32_t getButtonWidth();
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::plaf::basic::BasicArrowButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocus;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicArrowButton::repaint;
	using ::javax::swing::plaf::basic::BasicArrowButton::remove;
	virtual void setFreeStanding(bool freeStanding);
	using ::javax::swing::plaf::basic::BasicArrowButton::setUI;
	static ::java::awt::Color* shadowColor;
	static ::java::awt::Color* highlightColor;
	bool isFreeStanding = false;
	int32_t buttonWidth = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalScrollButton_h_