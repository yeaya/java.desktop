#ifndef _javax_swing_plaf_basic_BasicBorders$SplitPaneDividerBorder_h_
#define _javax_swing_plaf_basic_BasicBorders$SplitPaneDividerBorder_h_
//$ class javax.swing.plaf.basic.BasicBorders$SplitPaneDividerBorder
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/Border.h>
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
			namespace basic {

class $export BasicBorders$SplitPaneDividerBorder : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(BasicBorders$SplitPaneDividerBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	BasicBorders$SplitPaneDividerBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* highlight, ::java::awt::Color* shadow);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* shadow = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicBorders$SplitPaneDividerBorder_h_