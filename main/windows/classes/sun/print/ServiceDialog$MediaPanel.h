#ifndef _sun_print_ServiceDialog$MediaPanel_h_
#define _sun_print_ServiceDialog$MediaPanel_h_
//$ class sun.print.ServiceDialog$MediaPanel
//$ extends javax.swing.JPanel
//$ implements java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>
#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JLabel;
	}
}
namespace sun {
	namespace print {
		class ServiceDialog;
		class ServiceDialog$MarginsPanel;
	}
}

namespace sun {
	namespace print {

class ServiceDialog$MediaPanel : public ::javax::swing::JPanel, public ::java::awt::event::ItemListener {
	$class(ServiceDialog$MediaPanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::java::awt::event::ItemListener)
public:
	ServiceDialog$MediaPanel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	virtual void addMediaListener(::sun::print::ServiceDialog$MarginsPanel* pnl);
	$String* getMediaName($String* key);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual $String* toString() override;
	virtual void updateInfo();
	::sun::print::ServiceDialog* this$0 = nullptr;
	$String* strTitle = nullptr;
	::javax::swing::JLabel* lblSize = nullptr;
	::javax::swing::JLabel* lblSource = nullptr;
	::javax::swing::JComboBox* cbSize = nullptr;
	::javax::swing::JComboBox* cbSource = nullptr;
	::java::util::Vector* sizes = nullptr;
	::java::util::Vector* sources = nullptr;
	::sun::print::ServiceDialog$MarginsPanel* pnlMargins = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ServiceDialog$MediaPanel_h_