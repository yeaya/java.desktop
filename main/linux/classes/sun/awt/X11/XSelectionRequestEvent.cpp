#include <sun/awt/X11/XSelectionRequestEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
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
using $XAtom = ::sun::awt::X11::XAtom;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSelectionRequestEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSelectionRequestEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSelectionRequestEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSelectionRequestEvent, pData)},
	{}
};

$MethodInfo _XSelectionRequestEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XSelectionRequestEvent::*)(int64_t)>(&XSelectionRequestEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSelectionRequestEvent::*)()>(&XSelectionRequestEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XSelectionRequestEvent::getSize))},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_owner", "()J", nullptr, $PUBLIC},
	{"get_property", "()J", nullptr, $PUBLIC},
	{"get_requestor", "()J", nullptr, $PUBLIC},
	{"get_selection", "()J", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_target", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_owner", "(J)V", nullptr, $PUBLIC},
	{"set_property", "(J)V", nullptr, $PUBLIC},
	{"set_requestor", "(J)V", nullptr, $PUBLIC},
	{"set_selection", "(J)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_target", "(J)V", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XSelectionRequestEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSelectionRequestEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSelectionRequestEvent_FieldInfo_,
	_XSelectionRequestEvent_MethodInfo_
};

$Object* allocate$XSelectionRequestEvent($Class* clazz) {
	return $of($alloc(XSelectionRequestEvent));
}

int32_t XSelectionRequestEvent::getSize() {
	$init(XSelectionRequestEvent);
	return 80;
}

int32_t XSelectionRequestEvent::getDataSize() {
	return getSize();
}

int64_t XSelectionRequestEvent::getPData() {
	return this->pData;
}

void XSelectionRequestEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSelectionRequestEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSelectionRequestEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XSelectionRequestEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XSelectionRequestEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XSelectionRequestEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XSelectionRequestEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XSelectionRequestEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XSelectionRequestEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XSelectionRequestEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XSelectionRequestEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XSelectionRequestEvent::get_owner() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XSelectionRequestEvent::set_owner(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XSelectionRequestEvent::get_requestor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XSelectionRequestEvent::set_requestor(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XSelectionRequestEvent::get_selection() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XSelectionRequestEvent::set_selection(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XSelectionRequestEvent::get_target() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XSelectionRequestEvent::set_target(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int64_t XSelectionRequestEvent::get_property() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64));
}

void XSelectionRequestEvent::set_property(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int64_t XSelectionRequestEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 72));
}

void XSelectionRequestEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 72, v);
}

$String* XSelectionRequestEvent::getName() {
	return "XSelectionRequestEvent"_s;
}

$String* XSelectionRequestEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 400));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("owner = "_s)->append(get_owner())->append(", "_s);
	ret->append("requestor = "_s)->append(get_requestor())->append(", "_s);
	ret->append("selection = "_s)->append($($of($XAtom::get(get_selection()))))->append(", "_s);
	ret->append("target = "_s)->append($($of($XAtom::get(get_target()))))->append(", "_s);
	ret->append("property = "_s)->append($($of($XAtom::get(get_property()))))->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	return ret->toString();
}

$Object* XSelectionRequestEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XSelectionRequestEvent::zero() {
	$XWrapperBase::zero();
}

$String* XSelectionRequestEvent::toString() {
	return $XWrapperBase::toString();
}

XSelectionRequestEvent::XSelectionRequestEvent() {
}

$Class* XSelectionRequestEvent::load$($String* name, bool initialize) {
	$loadClass(XSelectionRequestEvent, name, initialize, &_XSelectionRequestEvent_ClassInfo_, allocate$XSelectionRequestEvent);
	return class$;
}

$Class* XSelectionRequestEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun