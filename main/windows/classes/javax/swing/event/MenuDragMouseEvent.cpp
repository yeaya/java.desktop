#include <javax/swing/event/MenuDragMouseEvent.h>

#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

#undef NOBUTTON

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _MenuDragMouseEvent_FieldInfo_[] = {
	{"path", "[Ljavax/swing/MenuElement;", nullptr, $PRIVATE, $field(MenuDragMouseEvent, path)},
	{"manager", "Ljavax/swing/MenuSelectionManager;", nullptr, $PRIVATE, $field(MenuDragMouseEvent, manager)},
	{}
};

$MethodInfo _MenuDragMouseEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJIIIIZ[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(static_cast<void(MenuDragMouseEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,bool,$MenuElementArray*,$MenuSelectionManager*)>(&MenuDragMouseEvent::init$))},
	{"<init>", "(Ljava/awt/Component;IJIIIIIIZ[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(static_cast<void(MenuDragMouseEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,$MenuElementArray*,$MenuSelectionManager*)>(&MenuDragMouseEvent::init$))},
	{"getMenuSelectionManager", "()Ljavax/swing/MenuSelectionManager;", nullptr, $PUBLIC},
	{"getPath", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MenuDragMouseEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.MenuDragMouseEvent",
	"java.awt.event.MouseEvent",
	nullptr,
	_MenuDragMouseEvent_FieldInfo_,
	_MenuDragMouseEvent_MethodInfo_
};

$Object* allocate$MenuDragMouseEvent($Class* clazz) {
	return $of($alloc(MenuDragMouseEvent));
}

void MenuDragMouseEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t clickCount, bool popupTrigger, $MenuElementArray* p, $MenuSelectionManager* m) {
	$MouseEvent::init$(source, id, when, modifiers, x, y, clickCount, popupTrigger);
	$set(this, path, p);
	$set(this, manager, m);
}

void MenuDragMouseEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t x, int32_t y, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, $MenuElementArray* p, $MenuSelectionManager* m) {
	$MouseEvent::init$(source, id, when, modifiers, x, y, xAbs, yAbs, clickCount, popupTrigger, $MouseEvent::NOBUTTON);
	$set(this, path, p);
	$set(this, manager, m);
}

$MenuElementArray* MenuDragMouseEvent::getPath() {
	return this->path;
}

$MenuSelectionManager* MenuDragMouseEvent::getMenuSelectionManager() {
	return this->manager;
}

MenuDragMouseEvent::MenuDragMouseEvent() {
}

$Class* MenuDragMouseEvent::load$($String* name, bool initialize) {
	$loadClass(MenuDragMouseEvent, name, initialize, &_MenuDragMouseEvent_ClassInfo_, allocate$MenuDragMouseEvent);
	return class$;
}

$Class* MenuDragMouseEvent::class$ = nullptr;

		} // event
	} // swing
} // javax