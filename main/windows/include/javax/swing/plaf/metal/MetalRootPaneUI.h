#ifndef _javax_swing_plaf_metal_MetalRootPaneUI_h_
#define _javax_swing_plaf_metal_MetalRootPaneUI_h_
//$ class javax.swing.plaf.metal.MetalRootPaneUI
//$ extends javax.swing.plaf.basic.BasicRootPaneUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>

#pragma push_macro("BORDER_DRAG_THICKNESS")
#undef BORDER_DRAG_THICKNESS
#pragma push_macro("CORNER_DRAG_WIDTH")
#undef CORNER_DRAG_WIDTH

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class LayoutManager;
		class Window;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JRootPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MouseInputListener;
		}
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

class $import MetalRootPaneUI : public ::javax::swing::plaf::basic::BasicRootPaneUI {
	$class(MetalRootPaneUI, 0, ::javax::swing::plaf::basic::BasicRootPaneUI)
public:
	MetalRootPaneUI();
	void init$();
	::java::awt::LayoutManager* createLayoutManager();
	::javax::swing::JComponent* createTitlePane(::javax::swing::JRootPane* root);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::javax::swing::event::MouseInputListener* createWindowMouseInputListener(::javax::swing::JRootPane* root);
	::javax::swing::JRootPane* getRootPane();
	::javax::swing::JComponent* getTitlePane();
	virtual void installBorder(::javax::swing::JRootPane* root);
	void installClientDecorations(::javax::swing::JRootPane* root);
	void installLayout(::javax::swing::JRootPane* root);
	virtual void installUI(::javax::swing::JComponent* c) override;
	void installWindowListeners(::javax::swing::JRootPane* root, ::java::awt::Component* parent);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	void setTitlePane(::javax::swing::JRootPane* root, ::javax::swing::JComponent* titlePane);
	void uninstallBorder(::javax::swing::JRootPane* root);
	void uninstallClientDecorations(::javax::swing::JRootPane* root);
	void uninstallLayout(::javax::swing::JRootPane* root);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void uninstallWindowListeners(::javax::swing::JRootPane* root);
	static $StringArray* borderKeys;
	static const int32_t CORNER_DRAG_WIDTH = 16;
	static const int32_t BORDER_DRAG_THICKNESS = 5;
	::java::awt::Window* window = nullptr;
	::javax::swing::JComponent* titlePane = nullptr;
	::javax::swing::event::MouseInputListener* mouseInputListener = nullptr;
	::java::awt::LayoutManager* layoutManager = nullptr;
	::java::awt::LayoutManager* savedOldLayout = nullptr;
	::javax::swing::JRootPane* root = nullptr;
	::java::awt::Cursor* lastCursor = nullptr;
	static $ints* cursorMapping;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BORDER_DRAG_THICKNESS")
#pragma pop_macro("CORNER_DRAG_WIDTH")

#endif // _javax_swing_plaf_metal_MetalRootPaneUI_h_