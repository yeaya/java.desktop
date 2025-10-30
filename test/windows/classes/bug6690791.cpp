#include <bug6690791.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

#undef ALT_MASK
#undef BUTTON1
#undef MOUSE_CLICKED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

$MethodInfo _bug6690791_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6690791::*)()>(&bug6690791::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6690791::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6690791_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6690791",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6690791_MethodInfo_
};

$Object* allocate$bug6690791($Class* clazz) {
	return $of($alloc(bug6690791));
}

void bug6690791::init$() {
}

void bug6690791::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, static_cast<$Component*>($new($JLabel)));
	$var($MouseEvent, me, $new($MouseEvent, var$0, $MouseEvent::MOUSE_CLICKED, $System::currentTimeMillis(), $MouseEvent::ALT_MASK, 10, 10, 100, 100, 1, false, $MouseEvent::BUTTON1));
	me->setSource($$new($Object));
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(me);
}

bug6690791::bug6690791() {
}

$Class* bug6690791::load$($String* name, bool initialize) {
	$loadClass(bug6690791, name, initialize, &_bug6690791_ClassInfo_, allocate$bug6690791);
	return class$;
}

$Class* bug6690791::class$ = nullptr;