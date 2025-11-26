#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$WeakPCL_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$WeakPCL_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL
//$ extends java.lang.ref.WeakReference
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/ref/WeakReference.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKLookAndFeel;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Toolkit;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel$WeakPCL : public ::java::lang::ref::WeakReference, public ::java::beans::PropertyChangeListener {
	$class(GTKLookAndFeel$WeakPCL, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::java::beans::PropertyChangeListener)
public:
	GTKLookAndFeel$WeakPCL();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* target, ::java::awt::Toolkit* kit, $String* key);
	virtual void dispose();
	virtual $String* getKey();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	virtual $String* toString() override;
	::java::awt::Toolkit* kit = nullptr;
	$String* key = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$WeakPCL_h_