#ifndef _sun_print_ServiceDialog$PrintServicePanel_h_
#define _sun_print_ServiceDialog$PrintServicePanel_h_
//$ class sun.print.ServiceDialog$PrintServicePanel
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ActionListener,java.awt.event.ItemListener,javax.swing.event.PopupMenuListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/PopupMenuListener.h>

namespace java {
	namespace awt {
		class GridBagConstraints;
		class GridBagLayout;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
		}
	}
}
namespace java {
	namespace io {
		class FilePermission;
	}
}
namespace javax {
	namespace print {
		class ServiceUIFactory;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JCheckBox;
		class JComboBox;
		class JLabel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class PopupMenuEvent;
		}
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$PrintServicePanel : public ::javax::swing::JPanel, public ::java::awt::event::ActionListener, public ::java::awt::event::ItemListener, public ::javax::swing::event::PopupMenuListener {
	$class(ServiceDialog$PrintServicePanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ActionListener, ::java::awt::event::ItemListener, ::javax::swing::event::PopupMenuListener)
public:
	ServiceDialog$PrintServicePanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::print::ServiceDialog* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::JLabel* addLabel($String* text, ::java::awt::GridBagLayout* gridbag, ::java::awt::GridBagConstraints* c);
	bool allowedToPrintToFile();
	virtual bool isPrintToFileSelected();
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	using ::javax::swing::JPanel::list;
	virtual void popupMenuCanceled(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeInvisible(::javax::swing::event::PopupMenuEvent* e) override;
	virtual void popupMenuWillBecomeVisible(::javax::swing::event::PopupMenuEvent* e) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	void throwPrintToFile();
	virtual $String* toString() override;
	virtual void updateInfo();
	::sun::print::ServiceDialog* this$0 = nullptr;
	$String* strTitle = nullptr;
	::java::io::FilePermission* printToFilePermission = nullptr;
	::javax::swing::JButton* btnProperties = nullptr;
	::javax::swing::JCheckBox* cbPrintToFile = nullptr;
	::javax::swing::JComboBox* cbName = nullptr;
	::javax::swing::JLabel* lblType = nullptr;
	::javax::swing::JLabel* lblStatus = nullptr;
	::javax::swing::JLabel* lblInfo = nullptr;
	::javax::print::ServiceUIFactory* uiFactory = nullptr;
	bool changedService = false;
	bool filePermission = false;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$PrintServicePanel_h_