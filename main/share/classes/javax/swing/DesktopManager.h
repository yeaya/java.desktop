#ifndef _javax_swing_DesktopManager_h_
#define _javax_swing_DesktopManager_h_
//$ interface javax.swing.DesktopManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {

class $export DesktopManager : public ::java::lang::Object {
	$interface(DesktopManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void activateFrame(::javax::swing::JInternalFrame* f) {}
	virtual void beginDraggingFrame(::javax::swing::JComponent* f) {}
	virtual void beginResizingFrame(::javax::swing::JComponent* f, int32_t direction) {}
	virtual void closeFrame(::javax::swing::JInternalFrame* f) {}
	virtual void deactivateFrame(::javax::swing::JInternalFrame* f) {}
	virtual void deiconifyFrame(::javax::swing::JInternalFrame* f) {}
	virtual void dragFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY) {}
	virtual void endDraggingFrame(::javax::swing::JComponent* f) {}
	virtual void endResizingFrame(::javax::swing::JComponent* f) {}
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f) {}
	virtual void maximizeFrame(::javax::swing::JInternalFrame* f) {}
	virtual void minimizeFrame(::javax::swing::JInternalFrame* f) {}
	virtual void openFrame(::javax::swing::JInternalFrame* f) {}
	virtual void resizeFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {}
	virtual void setBoundsForFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {}
};

	} // swing
} // javax

#endif // _javax_swing_DesktopManager_h_