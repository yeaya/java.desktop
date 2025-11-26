#ifndef _javax_swing_JFileChooser$WeakPCL_h_
#define _javax_swing_JFileChooser$WeakPCL_h_
//$ class javax.swing.JFileChooser$WeakPCL
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

namespace javax {
	namespace swing {

class JFileChooser$WeakPCL : public ::java::beans::PropertyChangeListener {
	$class(JFileChooser$WeakPCL, 0, ::java::beans::PropertyChangeListener)
public:
	JFileChooser$WeakPCL();
	void init$(::javax::swing::JFileChooser* jfc);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	static bool $assertionsDisabled;
	::java::lang::ref::WeakReference* jfcRef = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFileChooser$WeakPCL_h_