#ifndef _javax_swing_plaf_metal_MetalTitlePane_h_
#define _javax_swing_plaf_metal_MetalTitlePane_h_
//$ class javax.swing.plaf.metal.MetalTitlePane
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

#pragma push_macro("IMAGE_HEIGHT")
#undef IMAGE_HEIGHT
#pragma push_macro("IMAGE_WIDTH")
#undef IMAGE_WIDTH

namespace java {
	namespace awt {
		class Color;
		class Frame;
		class Graphics;
		class Image;
		class LayoutManager;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowListener;
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
		class Action;
		class Icon;
		class JButton;
		class JMenu;
		class JMenuBar;
		class JRootPane;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalBumps;
				class MetalRootPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalTitlePane : public ::javax::swing::JComponent {
	$class(MetalTitlePane, 0, ::javax::swing::JComponent)
public:
	MetalTitlePane();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	void init$(::javax::swing::JRootPane* root, ::javax::swing::plaf::metal::MetalRootPaneUI* ui);
	void addMenuItems(::javax::swing::JMenu* menu);
	virtual void addNotify() override;
	void close();
	void createActions();
	void createButtons();
	::java::awt::LayoutManager* createLayout();
	::javax::swing::JMenu* createMenu();
	virtual ::javax::swing::JMenuBar* createMenuBar();
	::javax::swing::JButton* createTitleButton();
	::java::awt::event::WindowListener* createWindowListener();
	::java::beans::PropertyChangeListener* createWindowPropertyChangeListener();
	void determineColors();
	::java::awt::Frame* getFrame();
	virtual ::javax::swing::JRootPane* getRootPane() override;
	$String* getTitle();
	::java::awt::Window* getWindow();
	int32_t getWindowDecorationStyle();
	void iconify();
	void installDefaults();
	void installListeners();
	void installSubcomponents();
	void maximize();
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::remove;
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	void restore();
	void setActive(bool isActive);
	void setState(int32_t state);
	void setState(int32_t state, bool updateRegardless);
	void uninstall();
	void uninstallDefaults();
	void uninstallListeners();
	void updateSystemIcon();
	void updateToggleButton(::javax::swing::Action* action, ::javax::swing::Icon* icon);
	static bool $assertionsDisabled;
	static ::javax::swing::border::Border* handyEmptyBorder;
	static const int32_t IMAGE_HEIGHT = 16;
	static const int32_t IMAGE_WIDTH = 16;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::JMenuBar* menuBar = nullptr;
	::javax::swing::Action* closeAction = nullptr;
	::javax::swing::Action* iconifyAction = nullptr;
	::javax::swing::Action* restoreAction = nullptr;
	::javax::swing::Action* maximizeAction = nullptr;
	::javax::swing::JButton* toggleButton = nullptr;
	::javax::swing::JButton* iconifyButton = nullptr;
	::javax::swing::JButton* closeButton = nullptr;
	::javax::swing::Icon* maximizeIcon = nullptr;
	::javax::swing::Icon* minimizeIcon = nullptr;
	::java::awt::Image* systemIcon = nullptr;
	::java::awt::event::WindowListener* windowListener = nullptr;
	::java::awt::Window* window = nullptr;
	::javax::swing::JRootPane* rootPane = nullptr;
	int32_t buttonsWidth = 0;
	int32_t state = 0;
	::javax::swing::plaf::metal::MetalRootPaneUI* rootPaneUI = nullptr;
	::java::awt::Color* inactiveBackground = nullptr;
	::java::awt::Color* inactiveForeground = nullptr;
	::java::awt::Color* inactiveShadow = nullptr;
	::java::awt::Color* activeBumpsHighlight = nullptr;
	::java::awt::Color* activeBumpsShadow = nullptr;
	::java::awt::Color* activeBackground = nullptr;
	::java::awt::Color* activeForeground = nullptr;
	::java::awt::Color* activeShadow = nullptr;
	::javax::swing::plaf::metal::MetalBumps* activeBumps = nullptr;
	::javax::swing::plaf::metal::MetalBumps* inactiveBumps = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("IMAGE_HEIGHT")
#pragma pop_macro("IMAGE_WIDTH")

#endif // _javax_swing_plaf_metal_MetalTitlePane_h_