#ifndef _javax_swing_plaf_basic_BasicToolBarUI$1ToolBarDialog_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$1ToolBarDialog_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog
//$ extends javax.swing.JDialog

#include <javax/swing/JDialog.h>

namespace java {
	namespace awt {
		class Dialog;
		class Frame;
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

class BasicToolBarUI$1ToolBarDialog : public ::javax::swing::JDialog {
	$class(BasicToolBarUI$1ToolBarDialog, $NO_CLASS_INIT, ::javax::swing::JDialog)
public:
	BasicToolBarUI$1ToolBarDialog();
	using ::javax::swing::JDialog::add;
	using ::javax::swing::JDialog::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0, ::java::awt::Frame* owner, $String* title, bool modal);
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0, ::java::awt::Dialog* owner, $String* title, bool modal);
	virtual ::javax::swing::JRootPane* createRootPane() override;
	using ::javax::swing::JDialog::remove;
	using ::javax::swing::JDialog::repaint;
	using ::javax::swing::JDialog::show;
	using ::javax::swing::JDialog::isFocusCycleRoot;
	using ::javax::swing::JDialog::list;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$1ToolBarDialog_h_