#ifndef _com_apple_laf_AquaInternalFramePaneUI$AquaDockingDesktopManager_h_
#define _com_apple_laf_AquaInternalFramePaneUI$AquaDockingDesktopManager_h_
//$ class com.apple.laf.AquaInternalFramePaneUI$AquaDockingDesktopManager
//$ extends com.apple.laf.AquaInternalFrameManager

#include <com/apple/laf/AquaInternalFrameManager.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFramePaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
		class JInternalFrame$JDesktopIcon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFramePaneUI$AquaDockingDesktopManager : public ::com::apple::laf::AquaInternalFrameManager {
	$class(AquaInternalFramePaneUI$AquaDockingDesktopManager, $NO_CLASS_INIT, ::com::apple::laf::AquaInternalFrameManager)
public:
	AquaInternalFramePaneUI$AquaDockingDesktopManager();
	void init$(::com::apple::laf::AquaInternalFramePaneUI* this$0);
	virtual void addIcon(::java::awt::Container* c, ::javax::swing::JInternalFrame$JDesktopIcon* desktopIcon) override;
	virtual void deiconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void openFrame(::javax::swing::JInternalFrame* f) override;
	::com::apple::laf::AquaInternalFramePaneUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFramePaneUI$AquaDockingDesktopManager_h_