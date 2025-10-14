#ifndef _com_sun_java_swing_plaf_windows_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$State;
						class WindowsMenuItemUIAccessor;
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
namespace javax {
	namespace swing {
		class JMenuItem;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource, public ::java::io::Serializable {
	$class(WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon, 0, ::javax::swing::Icon, ::javax::swing::plaf::UIResource, ::java::io::Serializable)
public:
	WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenuItem* menuItem);
	void init$($String* type);
	static ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor* getAccessor(::javax::swing::JMenuItem* menuItem);
	::javax::swing::Icon* getIcon();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	::javax::swing::Icon* getLaFIcon();
	static bool isEnabled(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static $String* typeToString($Class* type);
	static bool $assertionsDisabled;
	::javax::swing::JMenuItem* menuItem = nullptr;
	$Class* type = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsIconFactory$VistaMenuItemCheckIconFactory$VistaMenuItemCheckIcon_h_