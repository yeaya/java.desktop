#ifndef _Test7034614$BrokenBorder_h_
#define _Test7034614$BrokenBorder_h_
//$ class Test7034614$BrokenBorder
//$ extends java.awt.Component
//$ implements javax.swing.border.Border

#include <java/awt/Component.h>
#include <javax/swing/border/Border.h>

namespace java {
	namespace awt {
		class Graphics;
		class Insets;
	}
}

class Test7034614$BrokenBorder : public ::java::awt::Component, public ::javax::swing::border::Border {
	$class(Test7034614$BrokenBorder, $NO_CLASS_INIT, ::java::awt::Component, ::javax::swing::border::Border)
public:
	Test7034614$BrokenBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::java::awt::Component::validate;
	virtual $String* toString() override;
	void validate(::java::awt::Insets* insets);
	::java::awt::Insets* insets = nullptr;
};

#endif // _Test7034614$BrokenBorder_h_