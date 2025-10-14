#ifndef _javax_swing_border_BevelBorder_h_
#define _javax_swing_border_BevelBorder_h_
//$ class javax.swing.border.BevelBorder
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

class $import BevelBorder : public ::javax::swing::border::AbstractBorder {
	$class(BevelBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder)
public:
	BevelBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	void init$(int32_t bevelType);
	void init$(int32_t bevelType, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	void init$(int32_t bevelType, ::java::awt::Color* highlightOuterColor, ::java::awt::Color* highlightInnerColor, ::java::awt::Color* shadowOuterColor, ::java::awt::Color* shadowInnerColor);
	virtual int32_t getBevelType();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual ::java::awt::Color* getHighlightInnerColor(::java::awt::Component* c);
	virtual ::java::awt::Color* getHighlightInnerColor();
	virtual ::java::awt::Color* getHighlightOuterColor(::java::awt::Component* c);
	virtual ::java::awt::Color* getHighlightOuterColor();
	virtual ::java::awt::Color* getShadowInnerColor(::java::awt::Component* c);
	virtual ::java::awt::Color* getShadowInnerColor();
	virtual ::java::awt::Color* getShadowOuterColor(::java::awt::Component* c);
	virtual ::java::awt::Color* getShadowOuterColor();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void paintLoweredBevel(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void paintRaisedBevel(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	static const int32_t RAISED = 0;
	static const int32_t LOWERED = 1;
	int32_t bevelType = 0;
	::java::awt::Color* highlightOuter = nullptr;
	::java::awt::Color* highlightInner = nullptr;
	::java::awt::Color* shadowInner = nullptr;
	::java::awt::Color* shadowOuter = nullptr;
};

		} // border
	} // swing
} // javax

#pragma pop_macro("LOWERED")
#pragma pop_macro("RAISED")

#endif // _javax_swing_border_BevelBorder_h_