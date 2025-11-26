#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$WeakPCL$1_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$WeakPCL$1_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKLookAndFeel;
						class GTKLookAndFeel$WeakPCL;
					}
				}
			}
		}
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

class GTKLookAndFeel$WeakPCL$1 : public ::java::lang::Runnable {
	$class(GTKLookAndFeel$WeakPCL$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GTKLookAndFeel$WeakPCL$1();
	void init$(::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$WeakPCL* this$0, ::java::beans::PropertyChangeEvent* val$pce, ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* val$lnf);
	virtual void run() override;
	::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$WeakPCL* this$0 = nullptr;
	::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* val$lnf = nullptr;
	::java::beans::PropertyChangeEvent* val$pce = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$WeakPCL$1_h_