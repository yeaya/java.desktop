#ifndef _com_sun_java_swing_plaf_windows_WindowsDesktopManager_h_
#define _com_sun_java_swing_plaf_windows_WindowsDesktopManager_h_
//$ class com.sun.java.swing.plaf.windows.WindowsDesktopManager
//$ extends javax.swing.DefaultDesktopManager
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsDesktopManager : public ::javax::swing::DefaultDesktopManager, public ::javax::swing::plaf::UIResource {
	$class(WindowsDesktopManager, $NO_CLASS_INIT, ::javax::swing::DefaultDesktopManager, ::javax::swing::plaf::UIResource)
public:
	WindowsDesktopManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void activateFrame(::javax::swing::JInternalFrame* f) override;
	virtual $String* toString() override;
	::java::lang::ref::WeakReference* currentFrameRef = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsDesktopManager_h_