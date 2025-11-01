#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI$MotifDesktopManager_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI$MotifDesktopManager_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager
//$ extends javax.swing.DefaultDesktopManager
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopPaneUI;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JDesktopPane;
		class JInternalFrame;
		class JInternalFrame$JDesktopIcon;
		class JLayeredPane;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifDesktopPaneUI$MotifDesktopManager : public ::javax::swing::DefaultDesktopManager, public ::javax::swing::plaf::UIResource {
	$class(MotifDesktopPaneUI$MotifDesktopManager, $NO_CLASS_INIT, ::javax::swing::DefaultDesktopManager, ::javax::swing::plaf::UIResource)
public:
	MotifDesktopPaneUI$MotifDesktopManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI* this$0);
	virtual void adjustBoundsForIcon(::javax::swing::JInternalFrame$JDesktopIcon* icon, int32_t x, int32_t y);
	virtual void adjustIcons(::javax::swing::JDesktopPane* desktop);
	virtual void beginDraggingFrame(::javax::swing::JComponent* f) override;
	virtual void beginResizingFrame(::javax::swing::JComponent* f, int32_t direction) override;
	virtual void dragFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY) override;
	virtual void endDraggingFrame(::javax::swing::JComponent* f) override;
	virtual void endResizingFrame(::javax::swing::JComponent* f) override;
	virtual ::javax::swing::JInternalFrame$JDesktopIcon* getIconAt(::javax::swing::JDesktopPane* desktop, ::javax::swing::JInternalFrame$JDesktopIcon* icon, int32_t x, int32_t y);
	virtual void iconifyFrame(::javax::swing::JInternalFrame* f) override;
	virtual void resizeFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) override;
	virtual void setBoundsForFrame(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI* this$0 = nullptr;
	::javax::swing::JComponent* dragPane = nullptr;
	bool usingDragPane = false;
	::javax::swing::JLayeredPane* layeredPaneForDragPane = nullptr;
	int32_t iconWidth = 0;
	int32_t iconHeight = 0;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopPaneUI$MotifDesktopManager_h_