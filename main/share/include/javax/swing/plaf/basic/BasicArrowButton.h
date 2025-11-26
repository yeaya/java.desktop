#ifndef _javax_swing_plaf_basic_BasicArrowButton_h_
#define _javax_swing_plaf_basic_BasicArrowButton_h_
//$ class javax.swing.plaf.basic.BasicArrowButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

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
			namespace basic {

class $import BasicArrowButton : public ::javax::swing::JButton {
	$class(BasicArrowButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	BasicArrowButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(int32_t direction, ::java::awt::Color* background, ::java::awt::Color* shadow, ::java::awt::Color* darkShadow, ::java::awt::Color* highlight);
	void init$(int32_t direction);
	virtual int32_t getDirection();
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	void paintScaledTriangle(::java::awt::Graphics* g, double x, double y, double size, int32_t direction, bool isEnabled);
	virtual void paintTriangle(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t size, int32_t direction, bool isEnabled);
	void paintUnscaledTriangle(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t size, int32_t direction, bool isEnabled);
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	virtual void setDirection(int32_t direction);
	using ::javax::swing::JButton::setUI;
	int32_t direction = 0;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* highlight = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicArrowButton_h_