#ifndef _com_apple_laf_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_h_
#define _com_apple_laf_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_h_
//$ class com.apple.laf.AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter
//$ extends javax.swing.border.Border

#include <javax/swing/border/Border.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter : public ::javax::swing::border::Border {
	$class(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, 0, ::javax::swing::border::Border)
public:
	AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter();
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	static ::com::apple::laf::AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter* instance();
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance$;
	::java::awt::Color* startColor = nullptr;
	::java::awt::Color* endColor = nullptr;
	::java::awt::Color* borderLines = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_h_