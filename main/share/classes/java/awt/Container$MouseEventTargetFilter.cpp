#include <java/awt/Container$MouseEventTargetFilter.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$EventTargetFilter.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <jcpp.h>

#undef FILTER
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_WHEEL_EVENT_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Container$EventTargetFilter = ::java::awt::Container$EventTargetFilter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Container$MouseEventTargetFilter_FieldInfo_[] = {
	{"FILTER", "Ljava/awt/Container$EventTargetFilter;", nullptr, $STATIC | $FINAL, $staticField(Container$MouseEventTargetFilter, FILTER)},
	{}
};

$MethodInfo _Container$MouseEventTargetFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Container$MouseEventTargetFilter::*)()>(&Container$MouseEventTargetFilter::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Container$MouseEventTargetFilter_InnerClassesInfo_[] = {
	{"java.awt.Container$MouseEventTargetFilter", "java.awt.Container", "MouseEventTargetFilter", $STATIC},
	{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Container$MouseEventTargetFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Container$MouseEventTargetFilter",
	"java.lang.Object",
	"java.awt.Container$EventTargetFilter",
	_Container$MouseEventTargetFilter_FieldInfo_,
	_Container$MouseEventTargetFilter_MethodInfo_,
	nullptr,
	nullptr,
	_Container$MouseEventTargetFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$MouseEventTargetFilter($Class* clazz) {
	return $of($alloc(Container$MouseEventTargetFilter));
}

$Container$EventTargetFilter* Container$MouseEventTargetFilter::FILTER = nullptr;

void Container$MouseEventTargetFilter::init$() {
}

bool Container$MouseEventTargetFilter::accept($Component* comp) {
	return ((int64_t)($nc(comp)->eventMask & (uint64_t)$AWTEvent::MOUSE_MOTION_EVENT_MASK)) != 0 || ((int64_t)($nc(comp)->eventMask & (uint64_t)$AWTEvent::MOUSE_EVENT_MASK)) != 0 || ((int64_t)($nc(comp)->eventMask & (uint64_t)$AWTEvent::MOUSE_WHEEL_EVENT_MASK)) != 0 || $nc(comp)->mouseListener != nullptr || $nc(comp)->mouseMotionListener != nullptr || $nc(comp)->mouseWheelListener != nullptr;
}

void clinit$Container$MouseEventTargetFilter($Class* class$) {
	$assignStatic(Container$MouseEventTargetFilter::FILTER, $new(Container$MouseEventTargetFilter));
}

Container$MouseEventTargetFilter::Container$MouseEventTargetFilter() {
}

$Class* Container$MouseEventTargetFilter::load$($String* name, bool initialize) {
	$loadClass(Container$MouseEventTargetFilter, name, initialize, &_Container$MouseEventTargetFilter_ClassInfo_, clinit$Container$MouseEventTargetFilter, allocate$Container$MouseEventTargetFilter);
	return class$;
}

$Class* Container$MouseEventTargetFilter::class$ = nullptr;

	} // awt
} // java