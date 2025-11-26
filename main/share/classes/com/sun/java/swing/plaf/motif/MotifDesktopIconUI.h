#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopIconUI_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopIconUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopIconUI
//$ extends javax.swing.plaf.basic.BasicDesktopIconUI

#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>

#pragma push_macro("LABEL_DIVIDER")
#undef LABEL_DIVIDER
#pragma push_macro("LABEL_HEIGHT")
#undef LABEL_HEIGHT

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopIconUI$DesktopIconActionListener;
						class MotifDesktopIconUI$DesktopIconMouseListener;
						class MotifDesktopIconUI$IconButton;
						class MotifDesktopIconUI$IconLabel;
						class MotifInternalFrameTitlePane;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Font;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class JInternalFrame;
		class JInternalFrame$JDesktopIcon;
		class JPopupMenu;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifDesktopIconUI : public ::javax::swing::plaf::basic::BasicDesktopIconUI {
	$class(MotifDesktopIconUI, 0, ::javax::swing::plaf::basic::BasicDesktopIconUI)
public:
	MotifDesktopIconUI();
	void init$();
	virtual ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$DesktopIconActionListener* createDesktopIconActionListener();
	virtual ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$DesktopIconMouseListener* createDesktopIconMouseListener();
	virtual ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton* createIconButton(::javax::swing::Icon* i);
	virtual ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconLabel* createIconLabel(::javax::swing::JInternalFrame* frame);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::javax::swing::Icon* getDefaultIcon();
	virtual ::javax::swing::JInternalFrame$JDesktopIcon* getDesktopIcon();
	virtual ::javax::swing::JInternalFrame* getFrame();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void hideSystemMenu();
	virtual void installComponents() override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void setDefaultIcon(::javax::swing::Icon* newIcon);
	virtual void setDesktopIcon(::javax::swing::JInternalFrame$JDesktopIcon* d);
	virtual void setFrame(::javax::swing::JInternalFrame* f);
	virtual void showSystemMenu();
	virtual void uninstallComponents() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$DesktopIconActionListener* desktopIconActionListener = nullptr;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$DesktopIconMouseListener* desktopIconMouseListener = nullptr;
	::javax::swing::Icon* defaultIcon = nullptr;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton* iconButton = nullptr;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconLabel* iconLabel = nullptr;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* sysMenuTitlePane = nullptr;
	::javax::swing::JPopupMenu* systemMenu = nullptr;
	::java::util::EventListener* mml = nullptr;
	static const int32_t LABEL_HEIGHT = 18;
	static const int32_t LABEL_DIVIDER = 4;
	static ::java::awt::Font* defaultTitleFont;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("LABEL_DIVIDER")
#pragma pop_macro("LABEL_HEIGHT")

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopIconUI_h_