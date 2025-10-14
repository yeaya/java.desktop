#ifndef _javax_swing_JOptionPane$5_h_
#define _javax_swing_JOptionPane$5_h_
//$ class javax.swing.JOptionPane$5
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
		class JOptionPane;
	}
}

namespace javax {
	namespace swing {

class JOptionPane$5 : public ::java::beans::PropertyChangeListener {
	$class(JOptionPane$5, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	JOptionPane$5();
	void init$(::javax::swing::JOptionPane* this$0, ::javax::swing::JInternalFrame* val$iFrame);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	::javax::swing::JOptionPane* this$0 = nullptr;
	::javax::swing::JInternalFrame* val$iFrame = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JOptionPane$5_h_