#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$TabbedPaneScrollLayout_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$TabbedPaneScrollLayout_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneScrollLayout
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout

#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTabbedPaneUI$TabbedPaneScrollLayout : public ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout {
	$class(BasicTabbedPaneUI$TabbedPaneScrollLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout)
public:
	BasicTabbedPaneUI$TabbedPaneScrollLayout();
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void calculateTabRects(int32_t tabPlacement, int32_t tabCount) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	void layoutCroppedEdge();
	virtual int32_t preferredTabAreaHeight(int32_t tabPlacement, int32_t width) override;
	virtual int32_t preferredTabAreaWidth(int32_t tabPlacement, int32_t height) override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$TabbedPaneScrollLayout_h_