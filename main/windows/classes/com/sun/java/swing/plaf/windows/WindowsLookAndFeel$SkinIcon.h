#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$SkinIcon_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$SkinIcon_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
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

class $export WindowsLookAndFeel$SkinIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource {
	$class(WindowsLookAndFeel$SkinIcon, 0, ::javax::swing::Icon, ::javax::swing::plaf::UIResource)
public:
	WindowsLookAndFeel$SkinIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::com::sun::java::swing::plaf::windows::TMSchema$Part* part = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$State* state = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$SkinIcon_h_