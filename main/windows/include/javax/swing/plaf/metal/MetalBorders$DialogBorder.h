#ifndef _javax_swing_plaf_metal_MetalBorders$DialogBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$DialogBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$DialogBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalBorders$DialogBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(MetalBorders$DialogBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	MetalBorders$DialogBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Color* getActiveBackground();
	virtual ::java::awt::Color* getActiveHighlight();
	virtual ::java::awt::Color* getActiveShadow();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* newInsets) override;
	virtual ::java::awt::Color* getInactiveBackground();
	virtual ::java::awt::Color* getInactiveHighlight();
	virtual ::java::awt::Color* getInactiveShadow();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	static const int32_t corner = 14;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$DialogBorder_h_