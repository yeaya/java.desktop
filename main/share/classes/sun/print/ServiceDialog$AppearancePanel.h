#ifndef _sun_print_ServiceDialog$AppearancePanel_h_
#define _sun_print_ServiceDialog$AppearancePanel_h_
//$ class sun.print.ServiceDialog$AppearancePanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace sun {
	namespace print {
		class ServiceDialog;
		class ServiceDialog$ChromaticityPanel;
		class ServiceDialog$JobAttributesPanel;
		class ServiceDialog$QualityPanel;
		class ServiceDialog$SidesPanel;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$AppearancePanel : public ::javax::swing::JPanel {
	$class(ServiceDialog$AppearancePanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	ServiceDialog$AppearancePanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::sun::print::ServiceDialog* this$0);
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual void updateInfo();
	::sun::print::ServiceDialog* this$0 = nullptr;
	::sun::print::ServiceDialog$ChromaticityPanel* pnlChromaticity = nullptr;
	::sun::print::ServiceDialog$QualityPanel* pnlQuality = nullptr;
	::sun::print::ServiceDialog$JobAttributesPanel* pnlJobAttributes = nullptr;
	::sun::print::ServiceDialog$SidesPanel* pnlSides = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$AppearancePanel_h_