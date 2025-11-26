#ifndef _javax_swing_plaf_synth_SynthGraphicsUtils_h_
#define _javax_swing_plaf_synth_SynthGraphicsUtils_h_
//$ class javax.swing.plaf.synth.SynthGraphicsUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
				class SynthMenuItemLayoutHelper;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class MenuItemLayoutHelper$LayoutResult;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthGraphicsUtils : public ::java::lang::Object {
	$class(SynthGraphicsUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SynthGraphicsUtils();
	void init$();
	static void applyInsets(::java::awt::Rectangle* rect, ::java::awt::Insets* insets, bool leftToRight);
	virtual int32_t computeStringWidth(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Font* font, ::java::awt::FontMetrics* metrics, $String* text);
	virtual void drawLine(::javax::swing::plaf::synth::SynthContext* context, Object$* paintKey, ::java::awt::Graphics* g, int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	virtual void drawLine(::javax::swing::plaf::synth::SynthContext* context, Object$* paintKey, ::java::awt::Graphics* g, int32_t x1, int32_t y1, int32_t x2, int32_t y2, Object$* styleKey);
	static int32_t getIconHeight(::javax::swing::Icon* icon, ::javax::swing::plaf::synth::SynthContext* context);
	static int32_t getIconWidth(::javax::swing::Icon* icon, ::javax::swing::plaf::synth::SynthContext* context);
	virtual int32_t getMaximumCharHeight(::javax::swing::plaf::synth::SynthContext* context);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Font* font, $String* text, ::javax::swing::Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Font* font, $String* text, ::javax::swing::Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex);
	static ::java::awt::Dimension* getPreferredMenuItemSize(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::SynthContext* accContext, ::javax::swing::JComponent* c, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, int32_t defaultTextIconGap, $String* acceleratorDelimiter, bool useCheckAndArrow, $String* propertyPrefix);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Font* font, $String* text, ::javax::swing::Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex);
	virtual $String* layoutText(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::FontMetrics* fm, $String* text, ::javax::swing::Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, ::java::awt::Rectangle* viewR, ::java::awt::Rectangle* iconR, ::java::awt::Rectangle* textR, int32_t iconTextGap);
	static void paint(::javax::swing::plaf::synth::SynthContext* context, ::javax::swing::plaf::synth::SynthContext* accContext, ::java::awt::Graphics* g, ::javax::swing::Icon* checkIcon, ::javax::swing::Icon* arrowIcon, $String* acceleratorDelimiter, int32_t defaultTextIconGap, $String* propertyPrefix);
	static void paintAccText(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	static void paintArrowIcon(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	static void paintBackground(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh);
	static void paintBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	static void paintCheckIcon(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	static void paintIcon(::javax::swing::Icon* icon, ::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	static void paintIcon(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	static void paintMenuItem(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	virtual void paintText(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, $String* text, ::java::awt::Rectangle* bounds, int32_t mnemonicIndex);
	virtual void paintText(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, $String* text, int32_t x, int32_t y, int32_t mnemonicIndex);
	virtual void paintText(::javax::swing::plaf::synth::SynthContext* ss, ::java::awt::Graphics* g, $String* text, ::javax::swing::Icon* icon, int32_t hAlign, int32_t vAlign, int32_t hTextPosition, int32_t vTextPosition, int32_t iconTextGap, int32_t mnemonicIndex, int32_t textOffset);
	static void paintText(::java::awt::Graphics* g, ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper* lh, ::sun::swing::MenuItemLayoutHelper$LayoutResult* lr);
	::java::awt::Rectangle* paintIconR = nullptr;
	::java::awt::Rectangle* paintTextR = nullptr;
	::java::awt::Rectangle* paintViewR = nullptr;
	::java::awt::Insets* paintInsets = nullptr;
	::java::awt::Rectangle* iconR = nullptr;
	::java::awt::Rectangle* textR = nullptr;
	::java::awt::Rectangle* viewR = nullptr;
	::java::awt::Insets* viewSizingInsets = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthGraphicsUtils_h_