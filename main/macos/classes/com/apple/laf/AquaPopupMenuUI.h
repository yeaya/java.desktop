#ifndef _com_apple_laf_AquaPopupMenuUI_h_
#define _com_apple_laf_AquaPopupMenuUI_h_
//$ class com.apple.laf.AquaPopupMenuUI
//$ extends javax.swing.plaf.basic.BasicPopupMenuUI

#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>

#pragma push_macro("OVERLAP_SLACK")
#undef OVERLAP_SLACK

namespace java {
	namespace awt {
		class Graphics;
		class Graphics2D;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
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
	namespace apple {
		namespace laf {

class AquaPopupMenuUI : public ::javax::swing::plaf::basic::BasicPopupMenuUI {
	$class(AquaPopupMenuUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicPopupMenuUI)
public:
	AquaPopupMenuUI();
	void init$();
	virtual void clipEdges(::java::awt::Graphics2D* g2d, ::java::awt::Rectangle* popupBounds);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual bool isPopupTrigger(::java::awt::event::MouseEvent* e) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintRoundRect(::java::awt::Graphics2D* g2d, ::java::awt::Rectangle* popupBounds);
	static const int32_t OVERLAP_SLACK = 10;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("OVERLAP_SLACK")

#endif // _com_apple_laf_AquaPopupMenuUI_h_