#ifndef _sun_print_ServiceDialog$GeneralPanel_h_
#define _sun_print_ServiceDialog$GeneralPanel_h_
//$ class sun.print.ServiceDialog$GeneralPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace sun {
	namespace print {
		class ServiceDialog;
		class ServiceDialog$CopiesPanel;
		class ServiceDialog$PrintRangePanel;
		class ServiceDialog$PrintServicePanel;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$GeneralPanel : public ::javax::swing::JPanel {
	$class(ServiceDialog$GeneralPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	ServiceDialog$GeneralPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::sun::print::ServiceDialog* this$0);
	virtual bool isPrintToFileRequested();
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual void updateInfo();
	::sun::print::ServiceDialog* this$0 = nullptr;
	::sun::print::ServiceDialog$PrintServicePanel* pnlPrintService = nullptr;
	::sun::print::ServiceDialog$PrintRangePanel* pnlPrintRange = nullptr;
	::sun::print::ServiceDialog$CopiesPanel* pnlCopies = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$GeneralPanel_h_