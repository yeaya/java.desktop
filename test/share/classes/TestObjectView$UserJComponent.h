#ifndef _TestObjectView$UserJComponent_h_
#define _TestObjectView$UserJComponent_h_
//$ class TestObjectView$UserJComponent
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

#pragma push_macro("TEST_COLOR")
#undef TEST_COLOR
#pragma push_macro("USER_COLOR")
#undef USER_COLOR

namespace java {
	namespace awt {
		class Color;
	}
}

class $export TestObjectView$UserJComponent : public ::javax::swing::JComponent {
	$class(TestObjectView$UserJComponent, 0, ::javax::swing::JComponent)
public:
	TestObjectView$UserJComponent();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	void init$();
	virtual ::java::awt::Color* getUserColor();
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setUserColor(::java::awt::Color* color);
	static ::java::awt::Color* USER_COLOR;
	static ::java::awt::Color* TEST_COLOR;
	::java::awt::Color* color = nullptr;
};

#pragma pop_macro("TEST_COLOR")
#pragma pop_macro("USER_COLOR")

#endif // _TestObjectView$UserJComponent_h_