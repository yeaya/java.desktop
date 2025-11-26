#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$1_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$1_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$1
//$ extends java.awt.Canvas

#include <java/awt/Canvas.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
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

class BasicSplitPaneUI$1 : public ::java::awt::Canvas {
	$class(BasicSplitPaneUI$1, $NO_CLASS_INIT, ::java::awt::Canvas)
public:
	BasicSplitPaneUI$1();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	virtual void paint(::java::awt::Graphics* g) override;
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$1_h_