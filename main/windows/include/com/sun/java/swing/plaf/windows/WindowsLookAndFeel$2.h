#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$2_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$2_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsLookAndFeel;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel$2 : public ::javax::swing::UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$2, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	WindowsLookAndFeel$2();
	void init$(::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0, ::java::awt::Color* val$highlight, ::java::awt::Color* val$shadow);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::windows::WindowsLookAndFeel* this$0 = nullptr;
	::java::awt::Color* val$shadow = nullptr;
	::java::awt::Color* val$highlight = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel$2_h_