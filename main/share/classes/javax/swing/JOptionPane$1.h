#ifndef _javax_swing_JOptionPane$1_h_
#define _javax_swing_JOptionPane$1_h_
//$ class javax.swing.JOptionPane$1
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
		class JOptionPane;
	}
}

namespace javax {
	namespace swing {

class JOptionPane$1 : public ::java::beans::PropertyChangeListener {
	$class(JOptionPane$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	JOptionPane$1();
	void init$(::javax::swing::JOptionPane* this$0, ::javax::swing::JDialog* val$dialog);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	::javax::swing::JOptionPane* this$0 = nullptr;
	::javax::swing::JDialog* val$dialog = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JOptionPane$1_h_