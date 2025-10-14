#ifndef _java_awt_MenuBar_h_
#define _java_awt_MenuBar_h_
//$ class java.awt.MenuBar
//$ extends java.awt.MenuComponent
//$ implements java.awt.MenuContainer,javax.accessibility.Accessible

#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class Menu;
		class MenuItem;
		class MenuShortcut;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $import MenuBar : public ::java::awt::MenuComponent, public ::java::awt::MenuContainer, public ::javax::accessibility::Accessible {
	$class(MenuBar, 0, ::java::awt::MenuComponent, ::java::awt::MenuContainer, ::javax::accessibility::Accessible)
public:
	MenuBar();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::awt::Font* getFont() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Menu* add(::java::awt::Menu* m);
	virtual void addNotify();
	virtual $String* constructComponentName() override;
	virtual int32_t countMenus();
	virtual void deleteShortcut(::java::awt::MenuShortcut* s);
	virtual int32_t getAccessibleChildIndex(::java::awt::MenuComponent* child) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Menu* getHelpMenu();
	virtual ::java::awt::Menu* getMenu(int32_t i);
	virtual int32_t getMenuCount();
	int32_t getMenuCountImpl();
	::java::awt::Menu* getMenuImpl(int32_t i);
	virtual ::java::awt::MenuItem* getShortcutMenuItem(::java::awt::MenuShortcut* s);
	virtual bool handleShortcut(::java::awt::event::KeyEvent* e);
	static void initIDs();
	virtual bool postEvent(::java::awt::Event* evt) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove(int32_t index);
	virtual void remove(::java::awt::MenuComponent* m) override;
	virtual void removeNotify() override;
	virtual void setHelpMenu(::java::awt::Menu* m);
	virtual ::java::util::Enumeration* shortcuts();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::Vector* menus = nullptr;
	$volatile(::java::awt::Menu*) helpMenu = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xBB93F4E11AA17D24;
	int32_t menuBarSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_MenuBar_h_