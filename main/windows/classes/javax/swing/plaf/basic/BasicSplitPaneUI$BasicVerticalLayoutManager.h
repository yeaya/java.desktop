#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$BasicVerticalLayoutManager_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$BasicVerticalLayoutManager_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager
//$ extends javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager

#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicHorizontalLayoutManager.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSplitPaneUI$BasicVerticalLayoutManager : public ::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager {
	$class(BasicSplitPaneUI$BasicVerticalLayoutManager, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager)
public:
	BasicSplitPaneUI$BasicVerticalLayoutManager();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$BasicVerticalLayoutManager_h_