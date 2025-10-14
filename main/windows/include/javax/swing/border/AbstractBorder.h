#ifndef _javax_swing_border_AbstractBorder_h_
#define _javax_swing_border_AbstractBorder_h_
//$ class javax.swing.border.AbstractBorder
//$ extends javax.swing.border.Border
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/border/Border.h>

namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}

namespace javax {
	namespace swing {
		namespace border {

class $import AbstractBorder : public ::javax::swing::border::Border, public ::java::io::Serializable {
	$class(AbstractBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::java::io::Serializable)
public:
	AbstractBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getBaseline(::java::awt::Component* c, int32_t width, int32_t height);
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::java::awt::Component* c);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets);
	virtual ::java::awt::Rectangle* getInteriorRectangle(::java::awt::Component* c, int32_t x, int32_t y, int32_t width, int32_t height);
	static ::java::awt::Rectangle* getInteriorRectangle(::java::awt::Component* c, ::javax::swing::border::Border* b, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual bool isBorderOpaque() override;
	static bool isLeftToRight(::java::awt::Component* c);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
};

		} // border
	} // swing
} // javax

#endif // _javax_swing_border_AbstractBorder_h_