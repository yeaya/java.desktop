#include <javax/swing/event/MenuKeyEvent.h>

#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _MenuKeyEvent_FieldInfo_[] = {
	{"path", "[Ljavax/swing/MenuElement;", nullptr, $PRIVATE, $field(MenuKeyEvent, path)},
	{"manager", "Ljavax/swing/MenuSelectionManager;", nullptr, $PRIVATE, $field(MenuKeyEvent, manager)},
	{}
};

$MethodInfo _MenuKeyEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IJIIC[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(static_cast<void(MenuKeyEvent::*)($Component*,int32_t,int64_t,int32_t,int32_t,char16_t,$MenuElementArray*,$MenuSelectionManager*)>(&MenuKeyEvent::init$))},
	{"getMenuSelectionManager", "()Ljavax/swing/MenuSelectionManager;", nullptr, $PUBLIC},
	{"getPath", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MenuKeyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.MenuKeyEvent",
	"java.awt.event.KeyEvent",
	nullptr,
	_MenuKeyEvent_FieldInfo_,
	_MenuKeyEvent_MethodInfo_
};

$Object* allocate$MenuKeyEvent($Class* clazz) {
	return $of($alloc(MenuKeyEvent));
}

void MenuKeyEvent::init$($Component* source, int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, $MenuElementArray* p, $MenuSelectionManager* m) {
	$KeyEvent::init$(source, id, when, modifiers, keyCode, keyChar);
	$set(this, path, p);
	$set(this, manager, m);
}

$MenuElementArray* MenuKeyEvent::getPath() {
	return this->path;
}

$MenuSelectionManager* MenuKeyEvent::getMenuSelectionManager() {
	return this->manager;
}

MenuKeyEvent::MenuKeyEvent() {
}

$Class* MenuKeyEvent::load$($String* name, bool initialize) {
	$loadClass(MenuKeyEvent, name, initialize, &_MenuKeyEvent_ClassInfo_, allocate$MenuKeyEvent);
	return class$;
}

$Class* MenuKeyEvent::class$ = nullptr;

		} // event
	} // swing
} // javax