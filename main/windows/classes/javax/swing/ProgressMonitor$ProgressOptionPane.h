#ifndef _javax_swing_ProgressMonitor$ProgressOptionPane_h_
#define _javax_swing_ProgressMonitor$ProgressOptionPane_h_
//$ class javax.swing.ProgressMonitor$ProgressOptionPane
//$ extends javax.swing.JOptionPane

#include <javax/swing/JOptionPane.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class ProgressMonitor;
	}
}

namespace javax {
	namespace swing {

class ProgressMonitor$ProgressOptionPane : public ::javax::swing::JOptionPane {
	$class(ProgressMonitor$ProgressOptionPane, $NO_CLASS_INIT, ::javax::swing::JOptionPane)
public:
	ProgressMonitor$ProgressOptionPane();
	using ::javax::swing::JOptionPane::createDialog;
	using ::javax::swing::JOptionPane::contains;
	using ::javax::swing::JOptionPane::enable;
	using ::javax::swing::JOptionPane::getBounds;
	using ::javax::swing::JOptionPane::getSize;
	using ::javax::swing::JOptionPane::getLocation;
	using ::javax::swing::JOptionPane::firePropertyChange;
	using ::javax::swing::JOptionPane::add;
	using ::javax::swing::JOptionPane::getMousePosition;
	void init$(::javax::swing::ProgressMonitor* this$0, Object$* messageList);
	virtual ::javax::swing::JDialog* createDialog(::java::awt::Component* parentComponent, $String* title) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	::javax::accessibility::AccessibleContext* getAccessibleJOptionPane();
	virtual int32_t getMaxCharactersPerLineCount() override;
	using ::javax::swing::JOptionPane::setUI;
	using ::javax::swing::JOptionPane::requestFocus;
	using ::javax::swing::JOptionPane::requestFocusInWindow;
	using ::javax::swing::JOptionPane::repaint;
	using ::javax::swing::JOptionPane::remove;
	using ::javax::swing::JOptionPane::list;
	::javax::swing::ProgressMonitor* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ProgressMonitor$ProgressOptionPane_h_