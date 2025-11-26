#ifndef _sun_print_ServiceDialog$PageSetupPanel_h_
#define _sun_print_ServiceDialog$PageSetupPanel_h_
//$ class sun.print.ServiceDialog$PageSetupPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace sun {
	namespace print {
		class ServiceDialog;
		class ServiceDialog$MarginsPanel;
		class ServiceDialog$MediaPanel;
		class ServiceDialog$OrientationPanel;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$PageSetupPanel : public ::javax::swing::JPanel {
	$class(ServiceDialog$PageSetupPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	ServiceDialog$PageSetupPanel();
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
	::sun::print::ServiceDialog$MediaPanel* pnlMedia = nullptr;
	::sun::print::ServiceDialog$OrientationPanel* pnlOrientation = nullptr;
	::sun::print::ServiceDialog$MarginsPanel* pnlMargins = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$PageSetupPanel_h_