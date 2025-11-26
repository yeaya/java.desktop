#ifndef _com_sun_java_swing_plaf_motif_MotifTabbedPaneUI_h_
#define _com_sun_java_swing_plaf_motif_MotifTabbedPaneUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifTabbedPaneUI
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Rectangle;
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifTabbedPaneUI : public ::javax::swing::plaf::basic::BasicTabbedPaneUI {
	$class(MotifTabbedPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI)
public:
	MotifTabbedPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* tabbedPane);
	virtual int32_t getTabRunIndent(int32_t tabPlacement, int32_t run) override;
	virtual int32_t getTabRunOverlay(int32_t tabPlacement) override;
	virtual void installDefaults() override;
	virtual void paintContentBorderBottomEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintContentBorderRightEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintContentBorderTopEdge(::java::awt::Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintFocusIndicator(::java::awt::Graphics* g, int32_t tabPlacement, $Array<::java::awt::Rectangle>* rects, int32_t tabIndex, ::java::awt::Rectangle* iconRect, ::java::awt::Rectangle* textRect, bool isSelected) override;
	virtual void paintTabBackground(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) override;
	virtual void paintTabBorder(::java::awt::Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) override;
	virtual void uninstallDefaults() override;
	::java::awt::Color* unselectedTabBackground = nullptr;
	::java::awt::Color* unselectedTabForeground = nullptr;
	::java::awt::Color* unselectedTabShadow = nullptr;
	::java::awt::Color* unselectedTabHighlight = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTabbedPaneUI_h_