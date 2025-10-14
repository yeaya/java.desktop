#ifndef _com_sun_java_swing_plaf_windows_WindowsIconFactory$FrameButtonIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsIconFactory$FrameButtonIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsIconFactory$FrameButtonIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsIconFactory$FrameButtonIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(WindowsIconFactory$FrameButtonIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	WindowsIconFactory$FrameButtonIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x0, int32_t y0) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::windows::TMSchema$Part* part = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsIconFactory$FrameButtonIcon_h_