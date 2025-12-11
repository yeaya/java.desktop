#ifndef _com_apple_laf_AquaScrollBarUI_h_
#define _com_apple_laf_AquaScrollBarUI_h_
//$ class com.apple.laf.AquaScrollBarUI
//$ extends javax.swing.plaf.ScrollBarUI

#include <javax/swing/plaf/ScrollBarUI.h>

#pragma push_macro("MIN_ARROW_COLLAPSE_SIZE")
#undef MIN_ARROW_COLLAPSE_SIZE

namespace apple {
	namespace laf {
		class JRSUIConstants$Hit;
		class JRSUIConstants$ScrollBarPart;
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaScrollBarUI$ModelListener;
			class AquaScrollBarUI$ScrollListener;
			class AquaScrollBarUI$TrackListener;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
		class Dimension;
		class Graphics;
		class Point;
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
		class JScrollBar;
		class Timer;
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
	namespace apple {
		namespace laf {

class AquaScrollBarUI : public ::javax::swing::plaf::ScrollBarUI {
	$class(AquaScrollBarUI, 0, ::javax::swing::plaf::ScrollBarUI)
public:
	AquaScrollBarUI();
	void init$();
	virtual void configureScrollBarColors();
	virtual ::com::apple::laf::AquaScrollBarUI$ModelListener* createModelListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::com::apple::laf::AquaScrollBarUI$ScrollListener* createScrollListener();
	virtual ::com::apple::laf::AquaScrollBarUI$TrackListener* createTrackListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Rectangle* getDragBounds();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::apple::laf::JRSUIConstants$Hit* getPartHit(int32_t x, int32_t y);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::apple::laf::JRSUIConstants$ScrollBarPart* getPressedPart();
	virtual ::java::awt::Point* getScrollToHereStartPoint(int32_t clickPosX, int32_t clickPosY);
	virtual ::apple::laf::JRSUIConstants$State* getState(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$ScrollBarPart* pressedPart);
	virtual float getThumbPercent();
	virtual float getThumbStart();
	virtual ::java::awt::Rectangle* getTrackBounds();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isHorizontal();
	virtual void layoutContainer(::java::awt::Container* fScrollBarContainer);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void scrollByBlock(int32_t direction);
	virtual void scrollByUnit(int32_t direction);
	virtual bool shouldShowArrows();
	virtual void startTimer(bool initial);
	virtual void syncState(::javax::swing::JComponent* c);
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static const int32_t kInitialDelay = 300;
	static const int32_t kNormalDelay = 100;
	static const int32_t MIN_ARROW_COLLAPSE_SIZE = 64;
	bool fIsDragging = false;
	::javax::swing::Timer* fScrollTimer = nullptr;
	::com::apple::laf::AquaScrollBarUI$ScrollListener* fScrollListener = nullptr;
	::com::apple::laf::AquaScrollBarUI$TrackListener* fTrackListener = nullptr;
	::apple::laf::JRSUIConstants$Hit* fTrackHighlight = nullptr;
	::apple::laf::JRSUIConstants$Hit* fMousePart = nullptr;
	::javax::swing::JScrollBar* fScrollBar = nullptr;
	::com::apple::laf::AquaScrollBarUI$ModelListener* fModelListener = nullptr;
	::java::beans::PropertyChangeListener* fPropertyChangeListener = nullptr;
	::com::apple::laf::AquaPainter* painter = nullptr;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* hitToPressedPartMap;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("MIN_ARROW_COLLAPSE_SIZE")

#endif // _com_apple_laf_AquaScrollBarUI_h_