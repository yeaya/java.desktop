#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameUI_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameUI
//$ extends javax.swing.plaf.basic.BasicInternalFrameUI

#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameTitlePane;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
		class KeyStroke;
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

class $export MotifInternalFrameUI : public ::javax::swing::plaf::basic::BasicInternalFrameUI {
	$class(MotifInternalFrameUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameUI)
public:
	MotifInternalFrameUI();
	void init$(::javax::swing::JInternalFrame* w);
	virtual void activateFrame(::javax::swing::JInternalFrame* f) override;
	virtual ::javax::swing::JComponent* createNorthPane(::javax::swing::JInternalFrame* w) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* w);
	virtual void deactivateFrame(::javax::swing::JInternalFrame* f) override;
	::javax::swing::JInternalFrame* getFrame();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* x) override;
	virtual void installDefaults() override;
	virtual void installKeyboardActions() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void setColors(::javax::swing::JInternalFrame* frame);
	virtual void setupMenuCloseKey() override;
	virtual void setupMenuOpenKey() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallKeyboardActions() override;
	::java::awt::Color* color = nullptr;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* shadow = nullptr;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* titlePane = nullptr;
	::javax::swing::KeyStroke* closeMenuKey = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameUI_h_