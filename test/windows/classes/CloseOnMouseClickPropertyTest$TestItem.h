#ifndef _CloseOnMouseClickPropertyTest$TestItem_h_
#define _CloseOnMouseClickPropertyTest$TestItem_h_
//$ class CloseOnMouseClickPropertyTest$TestItem
//$ extends java.lang.Object

#include <java/lang/Object.h>

class CloseOnMouseClickPropertyTest$TestType;
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class JMenuItem;
	}
}

class $export CloseOnMouseClickPropertyTest$TestItem : public ::java::lang::Object {
	$class(CloseOnMouseClickPropertyTest$TestItem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CloseOnMouseClickPropertyTest$TestItem();
	void init$(::CloseOnMouseClickPropertyTest$TestType* type, ::java::lang::Boolean* compDoNotCloseOnMouseClick, ::java::lang::Boolean* lafDoNotCloseOnMouseClick);
	virtual bool doNotCloseOnMouseClick();
	virtual ::javax::swing::JMenuItem* getMenuItem();
	virtual void setProperties(::javax::swing::JMenuItem* menuItem);
	::CloseOnMouseClickPropertyTest$TestType* type = nullptr;
	::java::lang::Boolean* compDoNotCloseOnMouseClick = nullptr;
	::java::lang::Boolean* lafDoNotCloseOnMouseClick = nullptr;
};

#endif // _CloseOnMouseClickPropertyTest$TestItem_h_