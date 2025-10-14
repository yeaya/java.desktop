#ifndef _com_sun_java_swing_plaf_windows_WindowsTreeUI$WindowsTreeCellRenderer_h_
#define _com_sun_java_swing_plaf_windows_WindowsTreeUI$WindowsTreeCellRenderer_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTreeUI$WindowsTreeCellRenderer
//$ extends javax.swing.tree.DefaultTreeCellRenderer

#include <javax/swing/tree/DefaultTreeCellRenderer.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsTreeUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTreeUI$WindowsTreeCellRenderer : public ::javax::swing::tree::DefaultTreeCellRenderer {
	$class(WindowsTreeUI$WindowsTreeCellRenderer, $NO_CLASS_INIT, ::javax::swing::tree::DefaultTreeCellRenderer)
public:
	WindowsTreeUI$WindowsTreeCellRenderer();
	using ::javax::swing::tree::DefaultTreeCellRenderer::contains;
	using ::javax::swing::tree::DefaultTreeCellRenderer::enable;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getBounds;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getSize;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getLocation;
	using ::javax::swing::tree::DefaultTreeCellRenderer::add;
	using ::javax::swing::tree::DefaultTreeCellRenderer::getMousePosition;
	void init$(::com::sun::java::swing::plaf::windows::WindowsTreeUI* this$0);
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	using ::javax::swing::tree::DefaultTreeCellRenderer::repaint;
	using ::javax::swing::tree::DefaultTreeCellRenderer::setUI;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocus;
	using ::javax::swing::tree::DefaultTreeCellRenderer::requestFocusInWindow;
	using ::javax::swing::tree::DefaultTreeCellRenderer::remove;
	using ::javax::swing::tree::DefaultTreeCellRenderer::list;
	::com::sun::java::swing::plaf::windows::WindowsTreeUI* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTreeUI$WindowsTreeCellRenderer_h_