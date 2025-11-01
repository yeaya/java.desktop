#ifndef _sun_swing_plaf_DesktopProperty$WeakPCL_h_
#define _sun_swing_plaf_DesktopProperty$WeakPCL_h_
//$ class sun.swing.plaf.DesktopProperty$WeakPCL
//$ extends java.lang.ref.WeakReference
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class LookAndFeel;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			class DesktopProperty;
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {

class DesktopProperty$WeakPCL : public ::java::lang::ref::WeakReference, public ::java::beans::PropertyChangeListener {
	$class(DesktopProperty$WeakPCL, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::java::beans::PropertyChangeListener)
public:
	DesktopProperty$WeakPCL();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::plaf::DesktopProperty* target, $String* key, ::javax::swing::LookAndFeel* laf);
	virtual void dispose();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	virtual $String* toString() override;
	$String* key = nullptr;
	::javax::swing::LookAndFeel* laf = nullptr;
};

		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_DesktopProperty$WeakPCL_h_