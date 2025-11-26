#ifndef _javax_swing_plaf_metal_MetalTreeUI_h_
#define _javax_swing_plaf_metal_MetalTreeUI_h_
//$ class javax.swing.plaf.metal.MetalTreeUI
//$ extends javax.swing.plaf.basic.BasicTreeUI

#include <javax/swing/plaf/basic/BasicTreeUI.h>

#pragma push_macro("HORIZ_LINE_STYLE")
#undef HORIZ_LINE_STYLE
#pragma push_macro("HORIZ_STYLE_STRING")
#undef HORIZ_STYLE_STRING
#pragma push_macro("LEG_LINE_STYLE")
#undef LEG_LINE_STYLE
#pragma push_macro("LEG_LINE_STYLE_STRING")
#undef LEG_LINE_STYLE_STRING
#pragma push_macro("LINE_STYLE")
#undef LINE_STYLE
#pragma push_macro("NO_LINE_STYLE")
#undef NO_LINE_STYLE
#pragma push_macro("NO_STYLE_STRING")
#undef NO_STYLE_STRING

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Insets;
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
		namespace tree {
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalTreeUI : public ::javax::swing::plaf::basic::BasicTreeUI {
	$class(MetalTreeUI, 0, ::javax::swing::plaf::basic::BasicTreeUI)
public:
	MetalTreeUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void decodeLineStyle(Object$* lineStyleFlag);
	virtual int32_t getHorizontalLegBuffer() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	using ::javax::swing::plaf::basic::BasicTreeUI::isLocationInExpandControl;
	virtual bool isLocationInExpandControl(int32_t row, int32_t rowLevel, int32_t mouseX, int32_t mouseY);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintHorizontalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf) override;
	virtual void paintHorizontalSeparators(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void paintVerticalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::javax::swing::tree::TreePath* path) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::java::awt::Color* lineColor;
	static $String* LINE_STYLE;
	static $String* LEG_LINE_STYLE_STRING;
	static $String* HORIZ_STYLE_STRING;
	static $String* NO_STYLE_STRING;
	static const int32_t LEG_LINE_STYLE = 2;
	static const int32_t HORIZ_LINE_STYLE = 1;
	static const int32_t NO_LINE_STYLE = 0;
	int32_t lineStyle = 0;
	::java::beans::PropertyChangeListener* lineStyleListener = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("HORIZ_LINE_STYLE")
#pragma pop_macro("HORIZ_STYLE_STRING")
#pragma pop_macro("LEG_LINE_STYLE")
#pragma pop_macro("LEG_LINE_STYLE_STRING")
#pragma pop_macro("LINE_STYLE")
#pragma pop_macro("NO_LINE_STYLE")
#pragma pop_macro("NO_STYLE_STRING")

#endif // _javax_swing_plaf_metal_MetalTreeUI_h_