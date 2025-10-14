#ifndef _javax_swing_plaf_basic_BasicToolBarUI$1_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$1_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$1
//$ extends javax.swing.JFrame

#include <javax/swing/JFrame.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicToolBarUI$1 : public ::javax::swing::JFrame {
	$class(BasicToolBarUI$1, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	BasicToolBarUI$1();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0, $String* title, ::java::awt::GraphicsConfiguration* gc);
	virtual ::javax::swing::JRootPane* createRootPane() override;
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$1_h_