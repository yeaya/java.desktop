#ifndef _javax_swing_Box$Filler_h_
#define _javax_swing_Box$Filler_h_
//$ class javax.swing.Box$Filler
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace javax {
	namespace swing {

class $import Box$Filler : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(Box$Filler, $NO_CLASS_INIT, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	Box$Filler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$(::java::awt::Dimension* min, ::java::awt::Dimension* pref, ::java::awt::Dimension* max);
	virtual void changeShape(::java::awt::Dimension* min, ::java::awt::Dimension* pref, ::java::awt::Dimension* max);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	using ::javax::swing::JComponent::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual $String* toString() override;
};

	} // swing
} // javax

#endif // _javax_swing_Box$Filler_h_