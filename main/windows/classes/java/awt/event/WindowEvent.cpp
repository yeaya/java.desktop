#include <java/awt/event/WindowEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef WINDOW_ACTIVATED
#undef WINDOW_CLOSED
#undef WINDOW_CLOSING
#undef WINDOW_DEACTIVATED
#undef WINDOW_DEICONIFIED
#undef WINDOW_FIRST
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_ICONIFIED
#undef WINDOW_LAST
#undef WINDOW_LOST_FOCUS
#undef WINDOW_OPENED
#undef WINDOW_STATE_CHANGED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _WindowEvent_FieldInfo_[] = {
	{"WINDOW_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_FIRST)},
	{"WINDOW_OPENED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_OPENED)},
	{"WINDOW_CLOSING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_CLOSING)},
	{"WINDOW_CLOSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_CLOSED)},
	{"WINDOW_ICONIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_ICONIFIED)},
	{"WINDOW_DEICONIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_DEICONIFIED)},
	{"WINDOW_ACTIVATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_ACTIVATED)},
	{"WINDOW_DEACTIVATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_DEACTIVATED)},
	{"WINDOW_GAINED_FOCUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_GAINED_FOCUS)},
	{"WINDOW_LOST_FOCUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_LOST_FOCUS)},
	{"WINDOW_STATE_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_STATE_CHANGED)},
	{"WINDOW_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowEvent, WINDOW_LAST)},
	{"opposite", "Ljava/awt/Window;", nullptr, $TRANSIENT, $field(WindowEvent, opposite)},
	{"oldState", "I", nullptr, 0, $field(WindowEvent, oldState)},
	{"newState", "I", nullptr, 0, $field(WindowEvent, newState)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WindowEvent, serialVersionUID)},
	{}
};

$MethodInfo _WindowEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;ILjava/awt/Window;II)V", nullptr, $PUBLIC, $method(static_cast<void(WindowEvent::*)($Window*,int32_t,$Window*,int32_t,int32_t)>(&WindowEvent::init$))},
	{"<init>", "(Ljava/awt/Window;ILjava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowEvent::*)($Window*,int32_t,$Window*)>(&WindowEvent::init$))},
	{"<init>", "(Ljava/awt/Window;III)V", nullptr, $PUBLIC, $method(static_cast<void(WindowEvent::*)($Window*,int32_t,int32_t,int32_t)>(&WindowEvent::init$))},
	{"<init>", "(Ljava/awt/Window;I)V", nullptr, $PUBLIC, $method(static_cast<void(WindowEvent::*)($Window*,int32_t)>(&WindowEvent::init$))},
	{"getNewState", "()I", nullptr, $PUBLIC},
	{"getOldState", "()I", nullptr, $PUBLIC},
	{"getOppositeWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"getWindow", "()Ljava/awt/Window;", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.WindowEvent",
	"java.awt.event.ComponentEvent",
	nullptr,
	_WindowEvent_FieldInfo_,
	_WindowEvent_MethodInfo_
};

$Object* allocate$WindowEvent($Class* clazz) {
	return $of($alloc(WindowEvent));
}

void WindowEvent::init$($Window* source, int32_t id, $Window* opposite, int32_t oldState, int32_t newState) {
	$ComponentEvent::init$(source, id);
	$set(this, opposite, opposite);
	this->oldState = oldState;
	this->newState = newState;
}

void WindowEvent::init$($Window* source, int32_t id, $Window* opposite) {
	WindowEvent::init$(source, id, opposite, 0, 0);
}

void WindowEvent::init$($Window* source, int32_t id, int32_t oldState, int32_t newState) {
	WindowEvent::init$(source, id, nullptr, oldState, newState);
}

void WindowEvent::init$($Window* source, int32_t id) {
	WindowEvent::init$(source, id, nullptr, 0, 0);
}

$Window* WindowEvent::getWindow() {
	return ($instanceOf($Window, this->source)) ? $cast($Window, this->source) : ($Window*)nullptr;
}

$Window* WindowEvent::getOppositeWindow() {
	if (this->opposite == nullptr) {
		return nullptr;
	}
	return ($SunToolkit::targetToAppContext(this->opposite) == $AppContext::getAppContext()) ? this->opposite : ($Window*)nullptr;
}

int32_t WindowEvent::getOldState() {
	return this->oldState;
}

int32_t WindowEvent::getNewState() {
	return this->newState;
}

$String* WindowEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case WindowEvent::WINDOW_OPENED:
		{
			$assign(typeStr, "WINDOW_OPENED"_s);
			break;
		}
	case WindowEvent::WINDOW_CLOSING:
		{
			$assign(typeStr, "WINDOW_CLOSING"_s);
			break;
		}
	case WindowEvent::WINDOW_CLOSED:
		{
			$assign(typeStr, "WINDOW_CLOSED"_s);
			break;
		}
	case WindowEvent::WINDOW_ICONIFIED:
		{
			$assign(typeStr, "WINDOW_ICONIFIED"_s);
			break;
		}
	case WindowEvent::WINDOW_DEICONIFIED:
		{
			$assign(typeStr, "WINDOW_DEICONIFIED"_s);
			break;
		}
	case WindowEvent::WINDOW_ACTIVATED:
		{
			$assign(typeStr, "WINDOW_ACTIVATED"_s);
			break;
		}
	case WindowEvent::WINDOW_DEACTIVATED:
		{
			$assign(typeStr, "WINDOW_DEACTIVATED"_s);
			break;
		}
	case WindowEvent::WINDOW_GAINED_FOCUS:
		{
			$assign(typeStr, "WINDOW_GAINED_FOCUS"_s);
			break;
		}
	case WindowEvent::WINDOW_LOST_FOCUS:
		{
			$assign(typeStr, "WINDOW_LOST_FOCUS"_s);
			break;
		}
	case WindowEvent::WINDOW_STATE_CHANGED:
		{
			$assign(typeStr, "WINDOW_STATE_CHANGED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	$plusAssign(typeStr, $$str({",opposite="_s, $(getOppositeWindow()), ",oldState="_s, $$str(this->oldState), ",newState="_s, $$str(this->newState)}));
	return typeStr;
}

WindowEvent::WindowEvent() {
}

$Class* WindowEvent::load$($String* name, bool initialize) {
	$loadClass(WindowEvent, name, initialize, &_WindowEvent_ClassInfo_, allocate$WindowEvent);
	return class$;
}

$Class* WindowEvent::class$ = nullptr;

		} // event
	} // awt
} // java