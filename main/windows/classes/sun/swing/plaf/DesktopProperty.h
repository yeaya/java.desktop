#ifndef _sun_swing_plaf_DesktopProperty_h_
#define _sun_swing_plaf_DesktopProperty_h_
//$ class sun.swing.plaf.DesktopProperty
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

#pragma push_macro("DESKTOP_PROPERTY_UPDATE_PENDING_KEY")
#undef DESKTOP_PROPERTY_UPDATE_PENDING_KEY

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace javax {
	namespace swing {
		class LookAndFeel;
		class UIDefaults;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			class DesktopProperty$WeakPCL;
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {

class $export DesktopProperty : public ::javax::swing::UIDefaults$ActiveValue {
	$class(DesktopProperty, 0, ::javax::swing::UIDefaults$ActiveValue)
public:
	DesktopProperty();
	void init$($String* key, Object$* fallback);
	virtual $Object* configureValue(Object$* value);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	static void flushUnreferencedProperties();
	virtual $Object* getDefaultValue();
	virtual $String* getKey();
	virtual $Object* getValueFromDesktop();
	virtual void invalidate(::javax::swing::LookAndFeel* laf);
	virtual void invalidate();
	static bool isUpdatePending();
	static void setUpdatePending(bool update);
	virtual void updateAllUIs();
	virtual void updateUI();
	static void updateWindowUI(::java::awt::Window* window);
	static ::java::lang::StringBuilder* DESKTOP_PROPERTY_UPDATE_PENDING_KEY;
	static ::java::lang::ref::ReferenceQueue* queue;
	::sun::swing::plaf::DesktopProperty$WeakPCL* pcl = nullptr;
	$String* key = nullptr;
	$Object* value = nullptr;
	$Object* fallback = nullptr;
};

		} // plaf
	} // swing
} // sun

#pragma pop_macro("DESKTOP_PROPERTY_UPDATE_PENDING_KEY")

#endif // _sun_swing_plaf_DesktopProperty_h_