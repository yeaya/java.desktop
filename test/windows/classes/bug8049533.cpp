#include <bug8049533.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Panel.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef PRECISE_WHEEL_ROTATION

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Panel = ::java::awt::Panel;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8049533_FieldInfo_[] = {
	{"PRECISE_WHEEL_ROTATION", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8049533, PRECISE_WHEEL_ROTATION)},
	{}
};

$MethodInfo _bug8049533_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8049533::*)()>(&bug8049533::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8049533::main))},
	{}
};

$ClassInfo _bug8049533_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8049533",
	"java.lang.Object",
	nullptr,
	_bug8049533_FieldInfo_,
	_bug8049533_MethodInfo_
};

$Object* allocate$bug8049533($Class* clazz) {
	return $of($alloc(bug8049533));
}

double bug8049533::PRECISE_WHEEL_ROTATION = 0.0;

void bug8049533::init$() {
}

void bug8049533::main($StringArray* args) {
	$init(bug8049533);
	$var($Frame, frame, $new($Frame));
	$var($Panel, panel, $new($Panel));
	frame->add(static_cast<$Component*>(panel));
	$var($MouseWheelEvent, event, $new($MouseWheelEvent, panel, 0, 0, 0, 0, 0, 0, 0, 0, false, 0, 0, 2, bug8049533::PRECISE_WHEEL_ROTATION));
	$var($MouseWheelEvent, convertedEvent, $cast($MouseWheelEvent, $SwingUtilities::convertMouseEvent($(event->getComponent()), event, nullptr)));
	if ($nc(convertedEvent)->getPreciseWheelRotation() != bug8049533::PRECISE_WHEEL_ROTATION) {
		$throwNew($RuntimeException, "PreciseWheelRotation field is not copied!"_s);
	}
}

bug8049533::bug8049533() {
}

void clinit$bug8049533($Class* class$) {
	bug8049533::PRECISE_WHEEL_ROTATION = 3.14;
}

$Class* bug8049533::load$($String* name, bool initialize) {
	$loadClass(bug8049533, name, initialize, &_bug8049533_ClassInfo_, clinit$bug8049533, allocate$bug8049533);
	return class$;
}

$Class* bug8049533::class$ = nullptr;