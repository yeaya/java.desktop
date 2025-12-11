#ifndef _com_apple_laf_AquaInternalFrameManager_h_
#define _com_apple_laf_AquaInternalFrameManager_h_
//$ class com.apple.laf.AquaInternalFrameManager
//$ extends javax.swing.DefaultDesktopManager

#include <javax/swing/DefaultDesktopManager.h>

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
namespace java {
	namespace util {
		class Vector;
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

class AquaInternalFrameManager : public ::javax::swing::DefaultDesktopManager {
	$class(AquaInternalFrameManager, $NO_CLASS_INIT, ::javax::swing::DefaultDesktopManager)
public:
	AquaInternalFrameManager();
	void init$();
	virtual void activateFrame(::javax::swing::JInternalFrame* f) override;
	virtual void activateNextFrame();
	virtual void activateNextFrame(::javax::swing::JInternalFrame* f);
	virtual void activatePreviousFrame();
	virtual void addIcon(::java::awt::Container* c, ::javax::swing::JInternalFrame$JDesktopIcon* desktopIcon);
	virtual void closeFrame(::javax::swing::JInternalFrame* f) override;
	virtual void deiconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f) override;
	void switchFrame(bool next);
	::javax::swing::JInternalFrame* fCurrentFrame = nullptr;
	::javax::swing::JInternalFrame* fInitialFrame = nullptr;
	::com::apple::laf::AquaInternalFramePaneUI* fCurrentPaneUI = nullptr;
	::java::util::Vector* fChildFrames = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameManager_h_