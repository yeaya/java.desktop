#ifndef _javax_swing_Box_h_
#define _javax_swing_Box_h_
//$ class javax.swing.Box
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class LayoutManager;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace javax {
	namespace swing {

class $export Box : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(Box, $NO_CLASS_INIT, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	Box();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t axis);
	static ::java::awt::Component* createGlue();
	static ::javax::swing::Box* createHorizontalBox();
	static ::java::awt::Component* createHorizontalGlue();
	static ::java::awt::Component* createHorizontalStrut(int32_t width);
	static ::java::awt::Component* createRigidArea(::java::awt::Dimension* d);
	static ::javax::swing::Box* createVerticalBox();
	static ::java::awt::Component* createVerticalGlue();
	static ::java::awt::Component* createVerticalStrut(int32_t height);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	using ::javax::swing::JComponent::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setLayout(::java::awt::LayoutManager* l) override;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_Box_h_