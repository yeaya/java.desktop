#ifndef _sun_print_ServiceDialog_h_
#define _sun_print_ServiceDialog_h_
//$ class sun.print.ServiceDialog
//$ extends javax.swing.JDialog
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JDialog.h>

#pragma push_macro("APPROVE")
#undef APPROVE
#pragma push_macro("CANCEL")
#undef CANCEL
#pragma push_macro("WAITING")
#undef WAITING

namespace java {
	namespace awt {
		class Component;
		class Container;
		class GraphicsConfiguration;
		class GridBagConstraints;
		class GridBagLayout;
		class Insets;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}
namespace javax {
	namespace print {
		class DocFlavor;
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class HashPrintRequestAttributeSet;
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class ButtonGroup;
		class JButton;
		class JCheckBox;
		class JRadioButton;
		class JTabbedPane;
	}
}
namespace sun {
	namespace print {
		class ServiceDialog$AppearancePanel;
		class ServiceDialog$GeneralPanel;
		class ServiceDialog$PageSetupPanel;
		class ServiceDialog$ValidatingFileChooser;
	}
}

namespace sun {
	namespace print {

class ServiceDialog : public ::javax::swing::JDialog, public ::java::awt::event::ActionListener {
	$class(ServiceDialog, 0, ::javax::swing::JDialog, ::java::awt::event::ActionListener)
public:
	ServiceDialog();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JDialog::dispose;
	using ::javax::swing::JDialog::isFocusCycleRoot;
	using ::javax::swing::JDialog::add;
	using ::javax::swing::JDialog::getMousePosition;
	using ::javax::swing::JDialog::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::GraphicsConfiguration* gc, int32_t x, int32_t y, $Array<::javax::print::PrintService>* services, int32_t defaultServiceIndex, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::PrintRequestAttributeSet* attributes, ::java::awt::Window* window);
	void init$(::java::awt::GraphicsConfiguration* gc, int32_t x, int32_t y, ::javax::print::PrintService* ps, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::PrintRequestAttributeSet* attributes, ::java::awt::Window* window);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	static void addToBG(::javax::swing::AbstractButton* button, ::java::awt::Container* cont, ::javax::swing::ButtonGroup* bg);
	static void addToGB(::java::awt::Component* comp, ::java::awt::Container* cont, ::java::awt::GridBagLayout* gridbag, ::java::awt::GridBagConstraints* constraints);
	static ::javax::swing::JButton* createButton($String* key, ::java::awt::event::ActionListener* al);
	static ::javax::swing::JCheckBox* createCheckBox($String* key, ::java::awt::event::ActionListener* al);
	static ::javax::swing::JButton* createExitButton($String* key, ::java::awt::event::ActionListener* al);
	static ::javax::swing::JRadioButton* createRadioButton($String* key, ::java::awt::event::ActionListener* al);
	virtual void dispose(int32_t status);
	virtual ::javax::print::attribute::PrintRequestAttributeSet* getAttributes();
	static ::java::net::URL* getImageResource($String* key);
	static char16_t getMnemonic($String* key);
	static $String* getMsg($String* key);
	virtual ::javax::print::PrintService* getPrintService();
	virtual int32_t getStatus();
	static int32_t getVKMnemonic($String* key);
	void handleEscKey(::javax::swing::JButton* btnCancel);
	virtual void initPageDialog(int32_t x, int32_t y, ::javax::print::PrintService* ps, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::PrintRequestAttributeSet* attributes);
	virtual void initPrintDialog(int32_t x, int32_t y, $Array<::javax::print::PrintService>* services, int32_t defaultServiceIndex, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::PrintRequestAttributeSet* attributes);
	static void initResource();
	using ::javax::swing::JDialog::remove;
	static $String* removeMnemonics($String* s);
	using ::javax::swing::JDialog::repaint;
	using ::javax::swing::JDialog::show;
	bool showFileChooser();
	static void showNoPrintService(::java::awt::GraphicsConfiguration* gc);
	virtual $String* toString() override;
	void updatePanels();
	static const int32_t WAITING = 0;
	static const int32_t APPROVE = 1;
	static const int32_t CANCEL = 2;
	static $String* strBundle;
	static ::java::awt::Insets* panelInsets;
	static ::java::awt::Insets* compInsets;
	static ::java::util::ResourceBundle* messageRB;
	::javax::swing::JTabbedPane* tpTabs = nullptr;
	::javax::swing::JButton* btnCancel = nullptr;
	::javax::swing::JButton* btnApprove = nullptr;
	$Array<::javax::print::PrintService>* services = nullptr;
	int32_t defaultServiceIndex = 0;
	::javax::print::attribute::PrintRequestAttributeSet* asOriginal = nullptr;
	::javax::print::attribute::HashPrintRequestAttributeSet* asCurrent = nullptr;
	::javax::print::PrintService* psCurrent = nullptr;
	::javax::print::DocFlavor* docFlavor = nullptr;
	int32_t status = 0;
	::sun::print::ServiceDialog$ValidatingFileChooser* jfc = nullptr;
	::sun::print::ServiceDialog$GeneralPanel* pnlGeneral = nullptr;
	::sun::print::ServiceDialog$PageSetupPanel* pnlPageSetup = nullptr;
	::sun::print::ServiceDialog$AppearancePanel* pnlAppearance = nullptr;
	bool isAWT = false;
	static $Class* _keyEventClazz;
};

	} // print
} // sun

#pragma pop_macro("APPROVE")
#pragma pop_macro("CANCEL")
#pragma pop_macro("WAITING")

#endif // _sun_print_ServiceDialog_h_