#ifndef _com_sun_java_swing_plaf_windows_WindowsComboBoxUI_h_
#define _com_sun_java_swing_plaf_windows_WindowsComboBoxUI_h_
//$ class com.sun.java.swing.plaf.windows.WindowsComboBoxUI
//$ extends javax.swing.plaf.basic.BasicComboBoxUI

#include <javax/swing/plaf/basic/BasicComboBoxUI.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$State;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
		class Insets;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class ComboBoxEditor;
		class JButton;
		class JComboBox;
		class JComponent;
		class ListCellRenderer;
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
			namespace basic {
				class ComboPopup;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsComboBoxUI : public ::javax::swing::plaf::basic::BasicComboBoxUI {
	$class(WindowsComboBoxUI, 0, ::javax::swing::plaf::basic::BasicComboBoxUI)
public:
	WindowsComboBoxUI();
	void init$();
	static ::javax::swing::JButton* access$000(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$100(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1000(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1100(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1200(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1300(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1400(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1500(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1600(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$1700(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JComboBox* access$200(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$300(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$400(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$500(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::java::awt::Insets* access$600(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$700(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$800(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	static ::javax::swing::JButton* access$900(::com::sun::java::swing::plaf::windows::WindowsComboBoxUI* x0);
	virtual void configureEditor() override;
	virtual ::javax::swing::JButton* createArrowButton() override;
	virtual ::javax::swing::ComboBoxEditor* createEditor() override;
	virtual ::java::awt::LayoutManager* createLayoutManager() override;
	virtual ::javax::swing::plaf::basic::ComboPopup* createPopup() override;
	virtual ::javax::swing::ListCellRenderer* createRenderer() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$State* getXPComboBoxState(::javax::swing::JComponent* c);
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintCurrentValue(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus) override;
	virtual void paintCurrentValueBackground(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds, bool hasFocus) override;
	void paintXPComboBoxBackground(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	virtual void unconfigureEditor() override;
	virtual void uninstallListeners() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::java::awt::event::MouseListener* rolloverListener;
	bool isRollover = false;
	static ::java::beans::PropertyChangeListener* componentOrientationListener;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsComboBoxUI_h_