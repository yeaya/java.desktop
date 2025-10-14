#ifndef _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTableHeaderUI
//$ extends javax.swing.plaf.basic.BasicTableHeaderUI

#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>

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
		namespace table {
			class JTableHeader;
			class TableCellRenderer;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsTableHeaderUI : public ::javax::swing::plaf::basic::BasicTableHeaderUI {
	$class(WindowsTableHeaderUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableHeaderUI)
public:
	WindowsTableHeaderUI();
	void init$();
	static int32_t access$000(::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* x0);
	static ::javax::swing::table::JTableHeader* access$100(::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* x0);
	static ::javax::swing::table::JTableHeader* access$200(::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* x0);
	static ::javax::swing::table::JTableHeader* access$300(::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* x0);
	static ::javax::swing::table::JTableHeader* access$400(::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* x0);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* h);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::table::TableCellRenderer* originalHeaderRenderer = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI_h_