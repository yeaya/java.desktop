#ifndef _Test6461042_h_
#define _Test6461042_h_
//$ class Test6461042
//$ extends javax.swing.JComponent
//$ implements javax.swing.border.Border

#include <java/lang/Array.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

class $export Test6461042 : public ::javax::swing::JComponent, public ::javax::swing::border::Border {
	$class(Test6461042, $NO_CLASS_INIT, ::javax::swing::JComponent, ::javax::swing::border::Border)
public:
	Test6461042();
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
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	using ::javax::swing::JComponent::list;
	static void main($StringArray* args);
	using ::javax::swing::JComponent::paintBorder;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual $String* toString() override;
};

#endif // _Test6461042_h_