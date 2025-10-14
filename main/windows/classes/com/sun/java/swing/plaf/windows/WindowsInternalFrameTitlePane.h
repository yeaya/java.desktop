#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Font;
		class Graphics;
		class LayoutManager;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JInternalFrame;
		class JLabel;
		class JPopupMenu;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsInternalFrameTitlePane : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane {
	$class(WindowsInternalFrameTitlePane, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane)
public:
	WindowsInternalFrameTitlePane();
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::addSystemMenuItems;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::contains;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::enable;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getBounds;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getSize;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getLocation;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::add;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getMousePosition;
	void init$(::javax::swing::JInternalFrame* f);
	static ::javax::swing::JInternalFrame* access$000(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$100(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1000(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1100(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1200(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$200(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$300(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$400(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$500(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$600(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$700(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$800(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$900(::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane* x0);
	virtual void addSubComponents() override;
	virtual void addSystemMenuItems(::javax::swing::JPopupMenu* menu);
	virtual void assembleSystemMenu() override;
	virtual void createButtons() override;
	virtual ::java::awt::LayoutManager* createLayout() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	static int32_t getButtonMnemonic($String* button);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void installDefaults() override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	virtual void paintTitleBackground(::java::awt::Graphics* g) override;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocus;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::repaint;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::remove;
	virtual void setButtonIcons() override;
	virtual void showSystemMenu() override;
	void showSystemPopupMenu(::java::awt::Component* invoker);
	virtual void uninstallListeners() override;
	::java::awt::Color* selectedTitleGradientColor = nullptr;
	::java::awt::Color* notSelectedTitleGradientColor = nullptr;
	::javax::swing::JPopupMenu* systemPopupMenu = nullptr;
	::javax::swing::JLabel* systemLabel = nullptr;
	::java::awt::Font* titleFont = nullptr;
	int32_t titlePaneHeight = 0;
	int32_t buttonWidth = 0;
	int32_t buttonHeight = 0;
	bool hotTrackingOn = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane_h_