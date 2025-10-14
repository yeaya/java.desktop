#ifndef _java_awt_Menu_h_
#define _java_awt_Menu_h_
//$ class java.awt.Menu
//$ extends java.awt.MenuItem
//$ implements java.awt.MenuContainer

#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>

namespace java {
	namespace awt {
		class MenuComponent;
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

class $export Menu : public ::java::awt::MenuItem, public ::java::awt::MenuContainer {
	$class(Menu, 0, ::java::awt::MenuItem, ::java::awt::MenuContainer)
public:
	Menu();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::MenuItem::deleteShortcut;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::awt::Font* getFont() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* label);
	void init$($String* label, bool tearOff);
	virtual ::java::awt::MenuItem* add(::java::awt::MenuItem* mi);
	virtual void add($String* label);
	virtual void addNotify() override;
	virtual void addSeparator();
	virtual $String* constructComponentName() override;
	virtual int32_t countItems();
	int32_t countItemsImpl();
	virtual void deleteShortcut(::java::awt::MenuShortcut* s) override;
	virtual int32_t getAccessibleChildIndex(::java::awt::MenuComponent* child) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::MenuItem* getItem(int32_t index);
	virtual int32_t getItemCount();
	::java::awt::MenuItem* getItemImpl(int32_t index);
	virtual ::java::awt::MenuItem* getShortcutMenuItem(::java::awt::MenuShortcut* s) override;
	virtual bool handleShortcut(::java::awt::event::KeyEvent* e) override;
	static void initIDs();
	virtual void insert(::java::awt::MenuItem* menuitem, int32_t index);
	virtual void insert($String* label, int32_t index);
	virtual void insertSeparator(int32_t index);
	virtual bool isTearOff();
	virtual $String* paramString() override;
	virtual bool postEvent(::java::awt::Event* evt) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove(int32_t index);
	virtual void remove(::java::awt::MenuComponent* item) override;
	virtual void removeAll();
	virtual void removeNotify() override;
	virtual ::java::util::Enumeration* shortcuts();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::Vector* items = nullptr;
	bool tearOff = false;
	$volatile(bool) isHelpMenu = false;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x85BE11E0ECE27978;
	int32_t menuSerializedDataVersion = 0;
};

	} // awt
} // java

#endif // _java_awt_Menu_h_