#ifndef _com_apple_laf_AquaSplitPaneDividerUI_h_
#define _com_apple_laf_AquaSplitPaneDividerUI_h_
//$ class com.apple.laf.AquaSplitPaneDividerUI
//$ extends javax.swing.plaf.basic.BasicSplitPaneDivider

#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaSplitPaneUI;
			class AquaUtils$LazyKeyedSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JSplitPane;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSplitPaneDividerUI : public ::javax::swing::plaf::basic::BasicSplitPaneDivider {
	$class(AquaSplitPaneDividerUI, 0, ::javax::swing::plaf::basic::BasicSplitPaneDivider)
public:
	AquaSplitPaneDividerUI();
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::add;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::getMousePosition;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::list;
	void init$(::com::apple::laf::AquaSplitPaneUI* ui);
	static ::javax::swing::JButton* access$000(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$100(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JSplitPane* access$200(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$300(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$400(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static int32_t access$500(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$600(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$700(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$800(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* access$900(::com::apple::laf::AquaSplitPaneDividerUI* x0);
	static ::javax::swing::JButton* createButtonForDirection(int32_t direction);
	virtual ::javax::swing::JButton* createLeftOneTouchButton() override;
	virtual ::javax::swing::JButton* createRightOneTouchButton() override;
	virtual int32_t getDirection(bool isLeft);
	static ::javax::swing::border::Border* getHorizontalSplitDividerGradientVariant();
	virtual int32_t getMaxDividerSize();
	virtual ::apple::laf::JRSUIConstants$State* getState();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	using ::javax::swing::plaf::basic::BasicSplitPaneDivider::remove;
	::com::apple::laf::AquaPainter* painter = nullptr;
	static ::com::apple::laf::AquaUtils$LazyKeyedSingleton* directionArrows;
	static const int32_t kMaxPopupArrowSize = 9;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSplitPaneDividerUI_h_