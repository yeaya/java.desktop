#include <bug7170657.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <jcpp.h>

#undef CTRL_MASK
#undef FAILED
#undef META_DOWN_MASK
#undef NOBUTTON

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;

$FieldInfo _bug7170657_FieldInfo_[] = {
	{"FAILED", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug7170657, FAILED)},
	{}
};

$MethodInfo _bug7170657_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7170657::*)()>(&bug7170657::init$))},
	{"fail", "(Ljava/awt/event/MouseEvent;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MouseEvent*,$MouseEvent*)>(&bug7170657::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7170657::main))},
	{"test", "(Ljava/awt/Frame;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Frame*,$MouseEvent*)>(&bug7170657::test))},
	{}
};

$ClassInfo _bug7170657_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"bug7170657",
	"java.lang.Object",
	nullptr,
	_bug7170657_FieldInfo_,
	_bug7170657_MethodInfo_
};

$Object* allocate$bug7170657($Class* clazz) {
	return $of($alloc(bug7170657));
}

bool bug7170657::FAILED = false;

void bug7170657::init$() {
}

void bug7170657::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t mask = $InputEvent::META_DOWN_MASK | $InputEvent::CTRL_MASK;
	$var($Frame, f, $new($Frame));
	$var($MouseEvent, mwe, $new($MouseWheelEvent, f, 1, 1, mask, 1, 1, 1, 1, 1, true, 1, 1, 1));
	$var($MouseEvent, mdme, $new($MenuDragMouseEvent, f, 1, 1, mask, 1, 1, 1, 1, 1, true, nullptr, nullptr));
	$var($MouseEvent, me, $new($MouseEvent, f, 1, 1, mask, 1, 1, 1, 1, 1, true, $MouseEvent::NOBUTTON));
	test(f, mwe);
	test(f, mdme);
	test(f, me);
	$init(bug7170657);
	if (bug7170657::FAILED) {
		$throwNew($RuntimeException, "Wrong mouse event"_s);
	}
}

void bug7170657::test($Frame* frame, $MouseEvent* me) {
	$var($MouseEvent, newme, $SwingUtilities::convertMouseEvent(frame, me, frame));
	int32_t var$1 = $nc(me)->getModifiersEx();
	bool var$0 = var$1 != $nc(newme)->getModifiersEx();
	if (!var$0) {
		int32_t var$2 = $nc(me)->getModifiers();
		var$0 = var$2 != $nc(newme)->getModifiers();
	}
	if (var$0) {
		fail(me, newme);
	}
}

void bug7170657::fail($MouseEvent* exp, $MouseEvent* act) {
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::err)->println($$str({"Expected: "_s, exp}));
	$nc($System::err)->println($$str({"Actual: "_s, act}));
	$init(bug7170657);
	bug7170657::FAILED = true;
}

bug7170657::bug7170657() {
}

$Class* bug7170657::load$($String* name, bool initialize) {
	$loadClass(bug7170657, name, initialize, &_bug7170657_ClassInfo_, allocate$bug7170657);
	return class$;
}

$Class* bug7170657::class$ = nullptr;