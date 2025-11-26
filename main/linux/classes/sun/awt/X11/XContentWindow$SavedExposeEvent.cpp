#include <sun/awt/X11/XContentWindow$SavedExposeEvent.h>

#include <java/awt/Component.h>
#include <sun/awt/X11/XContentWindow.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XContentWindow = ::sun::awt::X11::XContentWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XContentWindow$SavedExposeEvent_FieldInfo_[] = {
	{"target", "Ljava/awt/Component;", nullptr, 0, $field(XContentWindow$SavedExposeEvent, target)},
	{"x", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, x)},
	{"y", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, y)},
	{"w", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, w)},
	{"h", "I", nullptr, 0, $field(XContentWindow$SavedExposeEvent, h)},
	{}
};

$MethodInfo _XContentWindow$SavedExposeEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;IIII)V", nullptr, 0, $method(static_cast<void(XContentWindow$SavedExposeEvent::*)($Component*,int32_t,int32_t,int32_t,int32_t)>(&XContentWindow$SavedExposeEvent::init$))},
	{}
};

$InnerClassInfo _XContentWindow$SavedExposeEvent_InnerClassesInfo_[] = {
	{"sun.awt.X11.XContentWindow$SavedExposeEvent", "sun.awt.X11.XContentWindow", "SavedExposeEvent", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XContentWindow$SavedExposeEvent_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XContentWindow$SavedExposeEvent",
	"java.lang.Object",
	nullptr,
	_XContentWindow$SavedExposeEvent_FieldInfo_,
	_XContentWindow$SavedExposeEvent_MethodInfo_,
	nullptr,
	nullptr,
	_XContentWindow$SavedExposeEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XContentWindow"
};

$Object* allocate$XContentWindow$SavedExposeEvent($Class* clazz) {
	return $of($alloc(XContentWindow$SavedExposeEvent));
}

void XContentWindow$SavedExposeEvent::init$($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	$set(this, target, target);
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}

XContentWindow$SavedExposeEvent::XContentWindow$SavedExposeEvent() {
}

$Class* XContentWindow$SavedExposeEvent::load$($String* name, bool initialize) {
	$loadClass(XContentWindow$SavedExposeEvent, name, initialize, &_XContentWindow$SavedExposeEvent_ClassInfo_, allocate$XContentWindow$SavedExposeEvent);
	return class$;
}

$Class* XContentWindow$SavedExposeEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun