#ifndef _java_awt_MenuComponent_h_
#define _java_awt_MenuComponent_h_
//$ class java.awt.MenuComponent
//$ extends java.io.Serializable

#include <java/awt/Component.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Event;
		class Font;
		class MenuContainer;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class MenuComponentPeer;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
		class AccessibleStateSet;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
		class ComponentFactory;
	}
}

namespace java {
	namespace awt {

class $export MenuComponent : public ::java::io::Serializable {
	$class(MenuComponent, 0, ::java::io::Serializable)
public:
	MenuComponent();
	void init$();
	virtual $String* constructComponentName();
	void dispatchEvent(::java::awt::AWTEvent* e);
	virtual void dispatchEventImpl(::java::awt::AWTEvent* e);
	virtual bool eventEnabled(::java::awt::AWTEvent* e);
	::java::security::AccessControlContext* getAccessControlContext();
	virtual int32_t getAccessibleChildIndex(::java::awt::MenuComponent* child);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext();
	virtual int32_t getAccessibleIndexInParent();
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet();
	::sun::awt::ComponentFactory* getComponentFactory();
	virtual ::java::awt::Font* getFont();
	::java::awt::Font* getFont_NoClientCode();
	virtual $String* getName();
	virtual ::java::awt::MenuContainer* getParent();
	::java::awt::MenuContainer* getParent_NoClientCode();
	$Object* getTreeLock();
	static void initIDs();
	virtual $String* paramString();
	virtual bool postEvent(::java::awt::Event* evt);
	virtual void processEvent(::java::awt::AWTEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeNotify();
	virtual void setFont(::java::awt::Font* f);
	virtual void setName($String* name);
	virtual $String* toString() override;
	$volatile(::java::awt::peer::MenuComponentPeer*) peer = nullptr;
	$volatile(::java::awt::MenuContainer*) parent = nullptr;
	$volatile(::sun::awt::AppContext*) appContext = nullptr;
	$volatile(::java::awt::Font*) font = nullptr;
	$volatile($String*) name = nullptr;
	$volatile(bool) nameExplicitlySet = false;
	$volatile(bool) newEventsOnly = false;
	$volatile(::java::security::AccessControlContext*) acc = nullptr;
	static $String* actionListenerK;
	static $String* itemListenerK;
	static const int64_t serialVersionUID = (int64_t)0xC109AF5834A45C95;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // awt
} // java

#endif // _java_awt_MenuComponent_h_