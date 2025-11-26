#ifndef _javax_swing_plaf_metal_MetalSliderUI_h_
#define _javax_swing_plaf_metal_MetalSliderUI_h_
//$ class javax.swing.plaf.metal.MetalSliderUI
//$ extends javax.swing.plaf.basic.BasicSliderUI

#include <javax/swing/plaf/basic/BasicSliderUI.h>

#pragma push_macro("SAFE_HORIZ_THUMB_ICON")
#undef SAFE_HORIZ_THUMB_ICON
#pragma push_macro("SAFE_VERT_THUMB_ICON")
#undef SAFE_VERT_THUMB_ICON
#pragma push_macro("SLIDER_FILL")
#undef SLIDER_FILL
#pragma push_macro("TICK_BUFFER")
#undef TICK_BUFFER

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JSlider;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalSliderUI : public ::javax::swing::plaf::basic::BasicSliderUI {
	$class(MetalSliderUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI)
public:
	MetalSliderUI();
	void init$();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JSlider* slider) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	static ::javax::swing::Icon* getHorizThumbIcon();
	::java::awt::Rectangle* getPaintTrackRect();
	virtual int32_t getThumbOverhang();
	virtual ::java::awt::Dimension* getThumbSize() override;
	virtual int32_t getTickLength() override;
	virtual int32_t getTrackLength();
	virtual int32_t getTrackWidth();
	static ::javax::swing::Icon* getVertThumbIcon();
	virtual void installUI(::javax::swing::JComponent* c) override;
	void oceanPaintTrack(::java::awt::Graphics* g);
	virtual void paintFocus(::java::awt::Graphics* g) override;
	virtual void paintMajorTickForHorizSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t x) override;
	virtual void paintMajorTickForVertSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t y) override;
	virtual void paintMinorTickForHorizSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t x) override;
	virtual void paintMinorTickForVertSlider(::java::awt::Graphics* g, ::java::awt::Rectangle* tickBounds, int32_t y) override;
	virtual void paintThumb(::java::awt::Graphics* g) override;
	virtual void paintTrack(::java::awt::Graphics* g) override;
	void prepareFilledSliderField();
	virtual void scrollDueToClickInTrack(int32_t dir) override;
	static const int32_t TICK_BUFFER = 4;
	bool filledSlider = false;
	static ::java::awt::Color* thumbColor;
	static ::java::awt::Color* highlightColor;
	static ::java::awt::Color* darkShadowColor;
	static int32_t trackWidth;
	static int32_t tickLength;
	int32_t safeLength = 0;
	static ::javax::swing::Icon* horizThumbIcon;
	static ::javax::swing::Icon* vertThumbIcon;
	static ::javax::swing::Icon* SAFE_HORIZ_THUMB_ICON;
	static ::javax::swing::Icon* SAFE_VERT_THUMB_ICON;
	$String* SLIDER_FILL = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("SAFE_HORIZ_THUMB_ICON")
#pragma pop_macro("SAFE_VERT_THUMB_ICON")
#pragma pop_macro("SLIDER_FILL")
#pragma pop_macro("TICK_BUFFER")

#endif // _javax_swing_plaf_metal_MetalSliderUI_h_