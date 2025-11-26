#ifndef _javax_swing_plaf_metal_MetalInternalFrameTitlePane_h_
#define _javax_swing_plaf_metal_MetalInternalFrameTitlePane_h_
//$ class javax.swing.plaf.metal.MetalInternalFrameTitlePane
//$ extends javax.swing.plaf.basic.BasicInternalFrameTitlePane

#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>

namespace java {
	namespace awt {
		class Color;
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
		class Icon;
		class JButton;
		class JInternalFrame;
		class JMenu;
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
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalInternalFrameTitlePane : public ::javax::swing::plaf::basic::BasicInternalFrameTitlePane {
	$class(MetalInternalFrameTitlePane, 0, ::javax::swing::plaf::basic::BasicInternalFrameTitlePane)
public:
	MetalInternalFrameTitlePane();
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::contains;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::enable;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getBounds;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getSize;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getLocation;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::add;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::getMousePosition;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::list;
	void init$(::javax::swing::JInternalFrame* f);
	static ::javax::swing::JButton* access$000(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$100(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1000(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1100(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1200(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1300(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1400(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1500(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1600(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1700(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$1800(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$1900(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$200(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$2000(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$2100(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$2200(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$2300(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$2400(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$2500(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$2600(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$2700(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JButton* access$2800(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$300(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$400(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$500(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$600(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$700(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$800(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	static ::javax::swing::JInternalFrame* access$900(::javax::swing::plaf::metal::MetalInternalFrameTitlePane* x0);
	virtual void addNotify() override;
	virtual void addSubComponents() override;
	virtual void addSystemMenuItems(::javax::swing::JMenu* systemMenu) override;
	virtual void assembleSystemMenu() override;
	virtual void createButtons() override;
	virtual ::java::awt::LayoutManager* createLayout() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener() override;
	virtual void installDefaults() override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	virtual void paintPalette(::java::awt::Graphics* g);
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocus;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::repaint;
	using ::javax::swing::plaf::basic::BasicInternalFrameTitlePane::remove;
	virtual void setPalette(bool b);
	virtual void showSystemMenu() override;
	virtual void uninstallDefaults() override;
	void updateOptionPaneState();
	bool isPalette = false;
	::javax::swing::Icon* paletteCloseIcon = nullptr;
	int32_t paletteTitleHeight = 0;
	static ::javax::swing::border::Border* handyEmptyBorder;
	$String* selectedBackgroundKey = nullptr;
	$String* selectedForegroundKey = nullptr;
	$String* selectedShadowKey = nullptr;
	bool wasClosable = false;
	int32_t buttonsWidth = 0;
	::javax::swing::plaf::metal::MetalBumps* activeBumps = nullptr;
	::javax::swing::plaf::metal::MetalBumps* inactiveBumps = nullptr;
	::javax::swing::plaf::metal::MetalBumps* paletteBumps = nullptr;
	::java::awt::Color* activeBumpsHighlight = nullptr;
	::java::awt::Color* activeBumpsShadow = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalInternalFrameTitlePane_h_