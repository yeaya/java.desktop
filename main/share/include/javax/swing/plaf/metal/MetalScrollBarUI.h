#ifndef _javax_swing_plaf_metal_MetalScrollBarUI_h_
#define _javax_swing_plaf_metal_MetalScrollBarUI_h_
//$ class javax.swing.plaf.metal.MetalScrollBarUI
//$ extends javax.swing.plaf.basic.BasicScrollBarUI

#include <javax/swing/plaf/basic/BasicScrollBarUI.h>

#pragma push_macro("FREE_STANDING_PROP")
#undef FREE_STANDING_PROP

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
		class JButton;
		class JComponent;
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
				class MetalBumps;
				class MetalScrollButton;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalScrollBarUI : public ::javax::swing::plaf::basic::BasicScrollBarUI {
	$class(MetalScrollBarUI, 0, ::javax::swing::plaf::basic::BasicScrollBarUI)
public:
	MetalScrollBarUI();
	void init$();
	virtual void configureScrollBarColors() override;
	virtual ::javax::swing::JButton* createDecreaseButton(int32_t orientation) override;
	virtual ::javax::swing::JButton* createIncreaseButton(int32_t orientation) override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMinimumThumbSize() override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	void oceanPaintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* thumbBounds);
	virtual void paintThumb(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* thumbBounds) override;
	virtual void paintTrack(::java::awt::Graphics* g, ::javax::swing::JComponent* c, ::java::awt::Rectangle* trackBounds) override;
	virtual void setThumbBounds(int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::java::awt::Color* shadowColor;
	static ::java::awt::Color* highlightColor;
	static ::java::awt::Color* darkShadowColor;
	static ::java::awt::Color* thumbColor;
	static ::java::awt::Color* thumbShadow;
	static ::java::awt::Color* thumbHighlightColor;
	::javax::swing::plaf::metal::MetalBumps* bumps = nullptr;
	::javax::swing::plaf::metal::MetalScrollButton* increaseButton = nullptr;
	::javax::swing::plaf::metal::MetalScrollButton* decreaseButton = nullptr;
	int32_t scrollBarWidth = 0;
	static $String* FREE_STANDING_PROP;
	bool isFreeStanding = false;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("FREE_STANDING_PROP")

#endif // _javax_swing_plaf_metal_MetalScrollBarUI_h_