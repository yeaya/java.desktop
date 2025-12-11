#ifndef _sun_lwawt_macosx_CAccessible_h_
#define _sun_lwawt_macosx_CAccessible_h_
//$ class sun.lwawt.macosx.CAccessible
//$ extends sun.lwawt.macosx.CFRetainedResource
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessible : public ::sun::lwawt::macosx::CFRetainedResource, public ::javax::accessibility::Accessible {
	$class(CAccessible, $NO_CLASS_INIT, ::sun::lwawt::macosx::CFRetainedResource, ::javax::accessibility::Accessible)
public:
	CAccessible();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::accessibility::Accessible* accessible);
	virtual void addNotificationListeners(::java::awt::Component* c);
	virtual void dispose() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	static ::javax::accessibility::AccessibleContext* getActiveDescendant(::javax::accessibility::Accessible* a);
	static ::sun::lwawt::macosx::CAccessible* getCAccessible(::javax::accessibility::Accessible* a);
	static ::javax::accessibility::Accessible* getSwingAccessible(::javax::accessibility::Accessible* a);
	static void menuClosed(int64_t ptr);
	static void menuItemSelected(int64_t ptr);
	static void menuOpened(int64_t ptr);
	static void selectedTextChanged(int64_t ptr);
	static void selectionChanged(int64_t ptr);
	static void titleChanged(int64_t ptr);
	virtual $String* toString() override;
	static void unregisterFromCocoaAXSystem(int64_t ptr);
	static void valueChanged(int64_t ptr);
	::javax::accessibility::Accessible* accessible = nullptr;
	::javax::accessibility::AccessibleContext* activeDescendant = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessible_h_