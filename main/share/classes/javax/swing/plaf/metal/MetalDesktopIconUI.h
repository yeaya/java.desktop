#ifndef _javax_swing_plaf_metal_MetalDesktopIconUI_h_
#define _javax_swing_plaf_metal_MetalDesktopIconUI_h_
//$ class javax.swing.plaf.metal.MetalDesktopIconUI
//$ extends javax.swing.plaf.basic.BasicDesktopIconUI

#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalDesktopIconUI$TitleListener;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalDesktopIconUI : public ::javax::swing::plaf::basic::BasicDesktopIconUI {
	$class(MetalDesktopIconUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicDesktopIconUI)
public:
	MetalDesktopIconUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installComponents() override;
	virtual void installDefaults() override;
	virtual void installListeners() override;
	virtual void uninstallComponents() override;
	virtual void uninstallListeners() override;
	::javax::swing::JButton* button = nullptr;
	::javax::swing::JLabel* label = nullptr;
	::javax::swing::plaf::metal::MetalDesktopIconUI$TitleListener* titleListener = nullptr;
	int32_t width = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalDesktopIconUI_h_