#ifndef _com_sun_java_swing_plaf_gtk_GTKStyleFactory$ComplexKey_h_
#define _com_sun_java_swing_plaf_gtk_GTKStyleFactory$ComplexKey_h_
//$ class com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKEngine$WidgetType;
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKStyleFactory$ComplexKey : public ::java::lang::Object {
	$class(GTKStyleFactory$ComplexKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GTKStyleFactory$ComplexKey();
	void init$(::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* wt, $ObjectArray* args);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType* wt = nullptr;
	$ObjectArray* args = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKStyleFactory$ComplexKey_h_