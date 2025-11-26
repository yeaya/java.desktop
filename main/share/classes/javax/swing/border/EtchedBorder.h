#ifndef _javax_swing_border_EtchedBorder_h_
#define _javax_swing_border_EtchedBorder_h_
//$ class javax.swing.border.EtchedBorder
//$ extends javax.swing.border.AbstractBorder

#include <javax/swing/border/AbstractBorder.h>

#pragma push_macro("LOWERED")
#undef LOWERED
#pragma push_macro("RAISED")
#undef RAISED

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
		namespace border {

class $export EtchedBorder : public ::javax::swing::border::AbstractBorder {
	$class(EtchedBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	EtchedBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$();
	void init$(int32_t etchType);
	void init$(::java::awt::Color* highlight, ::java::awt::Color* shadow);
	void init$(int32_t etchType, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual int32_t getEtchType();
	virtual ::java::awt::Color* getHighlightColor(::java::awt::Component* c);
	virtual ::java::awt::Color* getHighlightColor();
	virtual ::java::awt::Color* getShadowColor(::java::awt::Component* c);
	virtual ::java::awt::Color* getShadowColor();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static const int32_t RAISED = 0;
	static const int32_t LOWERED = 1;
	int32_t etchType = 0;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* shadow = nullptr;
};

		} // border
	} // swing
} // javax

#pragma pop_macro("LOWERED")
#pragma pop_macro("RAISED")

#endif // _javax_swing_border_EtchedBorder_h_