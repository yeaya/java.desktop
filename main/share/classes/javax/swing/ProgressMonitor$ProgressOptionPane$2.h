#ifndef _javax_swing_ProgressMonitor$ProgressOptionPane$2_h_
#define _javax_swing_ProgressMonitor$ProgressOptionPane$2_h_
//$ class javax.swing.ProgressMonitor$ProgressOptionPane$2
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class ProgressMonitor$ProgressOptionPane;
	}
}

namespace javax {
	namespace swing {

class ProgressMonitor$ProgressOptionPane$2 : public ::java::beans::PropertyChangeListener {
	$class(ProgressMonitor$ProgressOptionPane$2, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	ProgressMonitor$ProgressOptionPane$2();
	void init$(::javax::swing::ProgressMonitor$ProgressOptionPane* this$1, ::javax::swing::JDialog* val$dialog);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	::javax::swing::ProgressMonitor$ProgressOptionPane* this$1 = nullptr;
	::javax::swing::JDialog* val$dialog = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ProgressMonitor$ProgressOptionPane$2_h_