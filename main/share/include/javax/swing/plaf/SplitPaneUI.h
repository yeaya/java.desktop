#ifndef _javax_swing_plaf_SplitPaneUI_h_
#define _javax_swing_plaf_SplitPaneUI_h_
//$ class javax.swing.plaf.SplitPaneUI
//$ extends javax.swing.plaf.ComponentUI

#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JSplitPane;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import SplitPaneUI : public ::javax::swing::plaf::ComponentUI {
	$class(SplitPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	SplitPaneUI();
	void init$();
	virtual void finishedPaintingChildren(::javax::swing::JSplitPane* jc, ::java::awt::Graphics* g) {}
	virtual int32_t getDividerLocation(::javax::swing::JSplitPane* jc) {return 0;}
	virtual int32_t getMaximumDividerLocation(::javax::swing::JSplitPane* jc) {return 0;}
	virtual int32_t getMinimumDividerLocation(::javax::swing::JSplitPane* jc) {return 0;}
	virtual void resetToPreferredSizes(::javax::swing::JSplitPane* jc) {}
	virtual void setDividerLocation(::javax::swing::JSplitPane* jc, int32_t location) {}
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_SplitPaneUI_h_