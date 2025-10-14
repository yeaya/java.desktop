#ifndef _com_sun_java_swing_plaf_windows_WindowsTreeUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsTreeUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTreeUI
//$ extends javax.swing.plaf.basic.BasicTreeUI

#include <javax/swing/plaf/basic/BasicTreeUI.h>

#pragma push_macro("HALF_SIZE")
#undef HALF_SIZE
#pragma push_macro("SIZE")
#undef SIZE

namespace javax {
	namespace swing {
		class JComponent;
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
		namespace tree {
			class TreeCellRenderer;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTreeUI : public ::javax::swing::plaf::basic::BasicTreeUI {
	$class(WindowsTreeUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTreeUI)
public:
	WindowsTreeUI();
	void init$();
	virtual ::javax::swing::tree::TreeCellRenderer* createDefaultCellRenderer() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void ensureRowsAreVisible(int32_t beginRow, int32_t endRow) override;
	static const int32_t HALF_SIZE = 4;
	static const int32_t SIZE = 9;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("HALF_SIZE")
#pragma pop_macro("SIZE")

#endif // _com_sun_java_swing_plaf_windows_WindowsTreeUI_h_