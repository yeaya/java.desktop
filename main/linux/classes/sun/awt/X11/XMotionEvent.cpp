#include <sun/awt/X11/XMotionEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XMotionEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XMotionEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XMotionEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XMotionEvent, pData)},
	{}
};

$MethodInfo _XMotionEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XMotionEvent::*)(int64_t)>(&XMotionEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMotionEvent::*)()>(&XMotionEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XMotionEvent::getSize))},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_is_hint", "()B", nullptr, $PUBLIC},
	{"get_root", "()J", nullptr, $PUBLIC},
	{"get_same_screen", "()Z", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_state", "()I", nullptr, $PUBLIC},
	{"get_subwindow", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_window", "()J", nullptr, $PUBLIC},
	{"get_x", "()I", nullptr, $PUBLIC},
	{"get_x_root", "()I", nullptr, $PUBLIC},
	{"get_y", "()I", nullptr, $PUBLIC},
	{"get_y_root", "()I", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_is_hint", "(B)V", nullptr, $PUBLIC},
	{"set_root", "(J)V", nullptr, $PUBLIC},
	{"set_same_screen", "(Z)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_state", "(I)V", nullptr, $PUBLIC},
	{"set_subwindow", "(J)V", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_window", "(J)V", nullptr, $PUBLIC},
	{"set_x", "(I)V", nullptr, $PUBLIC},
	{"set_x_root", "(I)V", nullptr, $PUBLIC},
	{"set_y", "(I)V", nullptr, $PUBLIC},
	{"set_y_root", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XMotionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMotionEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XMotionEvent_FieldInfo_,
	_XMotionEvent_MethodInfo_
};

$Object* allocate$XMotionEvent($Class* clazz) {
	return $of($alloc(XMotionEvent));
}

int32_t XMotionEvent::getSize() {
	$init(XMotionEvent);
	return 96;
}

int32_t XMotionEvent::getDataSize() {
	return getSize();
}

int64_t XMotionEvent::getPData() {
	return this->pData;
}

void XMotionEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XMotionEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XMotionEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XMotionEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XMotionEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XMotionEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XMotionEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XMotionEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XMotionEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XMotionEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XMotionEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XMotionEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XMotionEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XMotionEvent::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XMotionEvent::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XMotionEvent::get_subwindow() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XMotionEvent::set_subwindow(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XMotionEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 56));
}

void XMotionEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 56, v);
}

int32_t XMotionEvent::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XMotionEvent::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XMotionEvent::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XMotionEvent::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XMotionEvent::get_x_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XMotionEvent::set_x_root(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

int32_t XMotionEvent::get_y_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 76));
}

void XMotionEvent::set_y_root(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 76, v);
}

int32_t XMotionEvent::get_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XMotionEvent::set_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int8_t XMotionEvent::get_is_hint() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 84));
}

void XMotionEvent::set_is_hint(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 84, v);
}

bool XMotionEvent::get_same_screen() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 88));
}

void XMotionEvent::set_same_screen(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 88, v);
}

$String* XMotionEvent::getName() {
	return "XMotionEvent"_s;
}

$String* XMotionEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 600));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("subwindow = "_s)->append(get_subwindow())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("x_root = "_s)->append(get_x_root())->append(", "_s);
	ret->append("y_root = "_s)->append(get_y_root())->append(", "_s);
	ret->append("state = "_s)->append(get_state())->append(", "_s);
	ret->append("is_hint = "_s)->append((int32_t)get_is_hint())->append(", "_s);
	ret->append("same_screen = "_s)->append(get_same_screen())->append(", "_s);
	return ret->toString();
}

$Object* XMotionEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XMotionEvent::zero() {
	$XWrapperBase::zero();
}

$String* XMotionEvent::toString() {
	return $XWrapperBase::toString();
}

XMotionEvent::XMotionEvent() {
}

$Class* XMotionEvent::load$($String* name, bool initialize) {
	$loadClass(XMotionEvent, name, initialize, &_XMotionEvent_ClassInfo_, allocate$XMotionEvent);
	return class$;
}

$Class* XMotionEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun