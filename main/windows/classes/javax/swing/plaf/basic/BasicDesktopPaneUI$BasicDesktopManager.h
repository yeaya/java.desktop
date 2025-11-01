#ifndef _javax_swing_plaf_basic_BasicDesktopPaneUI$BasicDesktopManager_h_
#define _javax_swing_plaf_basic_BasicDesktopPaneUI$BasicDesktopManager_h_
//$ class javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager
//$ extends javax.swing.DefaultDesktopManager
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDesktopPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicDesktopPaneUI$BasicDesktopManager : public ::javax::swing::DefaultDesktopManager, public ::javax::swing::plaf::UIResource {
	$class(BasicDesktopPaneUI$BasicDesktopManager, $NO_CLASS_INIT, ::javax::swing::DefaultDesktopManager, ::javax::swing::plaf::UIResource)
public:
	BasicDesktopPaneUI$BasicDesktopManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicDesktopPaneUI* this$0);
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicDesktopPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDesktopPaneUI$BasicDesktopManager_h_