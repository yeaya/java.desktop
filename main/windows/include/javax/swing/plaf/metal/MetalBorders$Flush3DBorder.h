#ifndef _javax_swing_plaf_metal_MetalBorders$Flush3DBorder_h_
#define _javax_swing_plaf_metal_MetalBorders$Flush3DBorder_h_
//$ class javax.swing.plaf.metal.MetalBorders$Flush3DBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalBorders$Flush3DBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(MetalBorders$Flush3DBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	MetalBorders$Flush3DBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* newInsets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalBorders$Flush3DBorder_h_