#ifndef _com_sun_java_swing_plaf_windows_WindowsIconFactory$CheckBoxIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsIconFactory$CheckBoxIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>

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

class $import WindowsIconFactory$CheckBoxIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(WindowsIconFactory$CheckBoxIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	WindowsIconFactory$CheckBoxIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static const int32_t csize = 13;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsIconFactory$CheckBoxIcon_h_