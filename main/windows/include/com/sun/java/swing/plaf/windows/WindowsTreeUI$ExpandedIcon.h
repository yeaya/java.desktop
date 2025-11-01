#ifndef _com_sun_java_swing_plaf_windows_WindowsTreeUI$ExpandedIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsTreeUI$ExpandedIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTreeUI$ExpandedIcon
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
						class XPStyle$Skin;
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

class $import WindowsTreeUI$ExpandedIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(WindowsTreeUI$ExpandedIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	WindowsTreeUI$ExpandedIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::Icon* createExpandedIcon();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual ::com::sun::java::swing::plaf::windows::XPStyle$Skin* getSkin(::java::awt::Component* c);
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTreeUI$ExpandedIcon_h_