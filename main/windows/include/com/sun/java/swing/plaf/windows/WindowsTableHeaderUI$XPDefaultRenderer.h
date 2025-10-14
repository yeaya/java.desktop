#ifndef _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI$XPDefaultRenderer_h_
#define _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI$XPDefaultRenderer_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer
//$ extends sun.swing.table.DefaultTableCellHeaderRenderer

#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsTableHeaderUI;
						class XPStyle$Skin;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsTableHeaderUI$XPDefaultRenderer : public ::sun::swing::table::DefaultTableCellHeaderRenderer {
	$class(WindowsTableHeaderUI$XPDefaultRenderer, $NO_CLASS_INIT, ::sun::swing::table::DefaultTableCellHeaderRenderer)
public:
	WindowsTableHeaderUI$XPDefaultRenderer();
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::firePropertyChange;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::contains;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::enable;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getBounds;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getSize;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getLocation;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::add;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* this$0);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::repaint;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::setUI;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::requestFocus;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::requestFocusInWindow;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::remove;
	::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI* this$0 = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin = nullptr;
	bool isSelected = false;
	bool hasFocus$ = false;
	bool hasRollover = false;
	int32_t column = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI$XPDefaultRenderer_h_