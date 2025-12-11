#include <sun/awt/X11/XkbMapNotifyEvent.h>

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
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XkbMapNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbMapNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbMapNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbMapNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbMapNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XkbMapNotifyEvent::*)(int64_t)>(&XkbMapNotifyEvent::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XkbMapNotifyEvent::*)()>(&XkbMapNotifyEvent::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XkbMapNotifyEvent::getSize))},
	{"get_changed", "()I", nullptr, $PUBLIC},
	{"get_device", "()I", nullptr, $PUBLIC},
	{"get_display", "()J", nullptr, $PUBLIC},
	{"get_first_key_act", "()I", nullptr, $PUBLIC},
	{"get_first_key_behavior", "()I", nullptr, $PUBLIC},
	{"get_first_key_explicit", "()I", nullptr, $PUBLIC},
	{"get_first_key_sym", "()I", nullptr, $PUBLIC},
	{"get_first_modmap_key", "()I", nullptr, $PUBLIC},
	{"get_first_type", "()I", nullptr, $PUBLIC},
	{"get_first_vmodmap_key", "()I", nullptr, $PUBLIC},
	{"get_flags", "()I", nullptr, $PUBLIC},
	{"get_max_key_code", "()I", nullptr, $PUBLIC},
	{"get_min_key_code", "()I", nullptr, $PUBLIC},
	{"get_num_key_acts", "()I", nullptr, $PUBLIC},
	{"get_num_key_behaviors", "()I", nullptr, $PUBLIC},
	{"get_num_key_explicit", "()I", nullptr, $PUBLIC},
	{"get_num_key_syms", "()I", nullptr, $PUBLIC},
	{"get_num_modmap_keys", "()I", nullptr, $PUBLIC},
	{"get_num_types", "()I", nullptr, $PUBLIC},
	{"get_num_vmodmap_keys", "()I", nullptr, $PUBLIC},
	{"get_send_event", "()Z", nullptr, $PUBLIC},
	{"get_serial", "()J", nullptr, $PUBLIC},
	{"get_time", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"get_vmods", "()I", nullptr, $PUBLIC},
	{"get_xkb_type", "()I", nullptr, $PUBLIC},
	{"set_changed", "(I)V", nullptr, $PUBLIC},
	{"set_device", "(I)V", nullptr, $PUBLIC},
	{"set_display", "(J)V", nullptr, $PUBLIC},
	{"set_first_key_act", "(I)V", nullptr, $PUBLIC},
	{"set_first_key_behavior", "(I)V", nullptr, $PUBLIC},
	{"set_first_key_explicit", "(I)V", nullptr, $PUBLIC},
	{"set_first_key_sym", "(I)V", nullptr, $PUBLIC},
	{"set_first_modmap_key", "(I)V", nullptr, $PUBLIC},
	{"set_first_type", "(I)V", nullptr, $PUBLIC},
	{"set_first_vmodmap_key", "(I)V", nullptr, $PUBLIC},
	{"set_flags", "(I)V", nullptr, $PUBLIC},
	{"set_max_key_code", "(I)V", nullptr, $PUBLIC},
	{"set_min_key_code", "(I)V", nullptr, $PUBLIC},
	{"set_num_key_acts", "(I)V", nullptr, $PUBLIC},
	{"set_num_key_behaviors", "(I)V", nullptr, $PUBLIC},
	{"set_num_key_explicit", "(I)V", nullptr, $PUBLIC},
	{"set_num_key_syms", "(I)V", nullptr, $PUBLIC},
	{"set_num_modmap_keys", "(I)V", nullptr, $PUBLIC},
	{"set_num_types", "(I)V", nullptr, $PUBLIC},
	{"set_num_vmodmap_keys", "(I)V", nullptr, $PUBLIC},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC},
	{"set_serial", "(J)V", nullptr, $PUBLIC},
	{"set_time", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"set_vmods", "(I)V", nullptr, $PUBLIC},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XkbMapNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbMapNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbMapNotifyEvent_FieldInfo_,
	_XkbMapNotifyEvent_MethodInfo_
};

$Object* allocate$XkbMapNotifyEvent($Class* clazz) {
	return $of($alloc(XkbMapNotifyEvent));
}

int32_t XkbMapNotifyEvent::getSize() {
	$init(XkbMapNotifyEvent);
	return 104;
}

int32_t XkbMapNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbMapNotifyEvent::getPData() {
	return this->pData;
}

void XkbMapNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbMapNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbMapNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbMapNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbMapNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbMapNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbMapNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbMapNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbMapNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbMapNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbMapNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbMapNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbMapNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbMapNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbMapNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbMapNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbMapNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbMapNotifyEvent::get_changed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbMapNotifyEvent::set_changed(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbMapNotifyEvent::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbMapNotifyEvent::set_flags(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbMapNotifyEvent::get_first_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbMapNotifyEvent::set_first_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbMapNotifyEvent::get_num_types() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbMapNotifyEvent::set_num_types(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbMapNotifyEvent::get_min_key_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbMapNotifyEvent::set_min_key_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XkbMapNotifyEvent::get_max_key_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 65));
}

void XkbMapNotifyEvent::set_max_key_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 65, v);
}

int32_t XkbMapNotifyEvent::get_first_key_sym() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 66));
}

void XkbMapNotifyEvent::set_first_key_sym(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 66, v);
}

int32_t XkbMapNotifyEvent::get_first_key_act() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 67));
}

void XkbMapNotifyEvent::set_first_key_act(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 67, v);
}

int32_t XkbMapNotifyEvent::get_first_key_behavior() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XkbMapNotifyEvent::set_first_key_behavior(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XkbMapNotifyEvent::get_first_key_explicit() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 69));
}

void XkbMapNotifyEvent::set_first_key_explicit(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 69, v);
}

int32_t XkbMapNotifyEvent::get_first_modmap_key() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 70));
}

void XkbMapNotifyEvent::set_first_modmap_key(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 70, v);
}

int32_t XkbMapNotifyEvent::get_first_vmodmap_key() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 71));
}

void XkbMapNotifyEvent::set_first_vmodmap_key(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 71, v);
}

int32_t XkbMapNotifyEvent::get_num_key_syms() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XkbMapNotifyEvent::set_num_key_syms(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

int32_t XkbMapNotifyEvent::get_num_key_acts() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 76));
}

void XkbMapNotifyEvent::set_num_key_acts(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 76, v);
}

int32_t XkbMapNotifyEvent::get_num_key_behaviors() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XkbMapNotifyEvent::set_num_key_behaviors(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int32_t XkbMapNotifyEvent::get_num_key_explicit() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 84));
}

void XkbMapNotifyEvent::set_num_key_explicit(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 84, v);
}

int32_t XkbMapNotifyEvent::get_num_modmap_keys() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 88));
}

void XkbMapNotifyEvent::set_num_modmap_keys(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 88, v);
}

int32_t XkbMapNotifyEvent::get_num_vmodmap_keys() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 92));
}

void XkbMapNotifyEvent::set_num_vmodmap_keys(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 92, v);
}

int32_t XkbMapNotifyEvent::get_vmods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 96));
}

void XkbMapNotifyEvent::set_vmods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 96, v);
}

$String* XkbMapNotifyEvent::getName() {
	return "XkbMapNotifyEvent"_s;
}

$String* XkbMapNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 1040));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("changed = "_s)->append(get_changed())->append(", "_s);
	ret->append("flags = "_s)->append(get_flags())->append(", "_s);
	ret->append("first_type = "_s)->append(get_first_type())->append(", "_s);
	ret->append("num_types = "_s)->append(get_num_types())->append(", "_s);
	ret->append("min_key_code = "_s)->append(get_min_key_code())->append(", "_s);
	ret->append("max_key_code = "_s)->append(get_max_key_code())->append(", "_s);
	ret->append("first_key_sym = "_s)->append(get_first_key_sym())->append(", "_s);
	ret->append("first_key_act = "_s)->append(get_first_key_act())->append(", "_s);
	ret->append("first_key_behavior = "_s)->append(get_first_key_behavior())->append(", "_s);
	ret->append("first_key_explicit = "_s)->append(get_first_key_explicit())->append(", "_s);
	ret->append("first_modmap_key = "_s)->append(get_first_modmap_key())->append(", "_s);
	ret->append("first_vmodmap_key = "_s)->append(get_first_vmodmap_key())->append(", "_s);
	ret->append("num_key_syms = "_s)->append(get_num_key_syms())->append(", "_s);
	ret->append("num_key_acts = "_s)->append(get_num_key_acts())->append(", "_s);
	ret->append("num_key_behaviors = "_s)->append(get_num_key_behaviors())->append(", "_s);
	ret->append("num_key_explicit = "_s)->append(get_num_key_explicit())->append(", "_s);
	ret->append("num_modmap_keys = "_s)->append(get_num_modmap_keys())->append(", "_s);
	ret->append("num_vmodmap_keys = "_s)->append(get_num_vmodmap_keys())->append(", "_s);
	ret->append("vmods = "_s)->append(get_vmods())->append(", "_s);
	return ret->toString();
}

$Object* XkbMapNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbMapNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbMapNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbMapNotifyEvent::XkbMapNotifyEvent() {
}

$Class* XkbMapNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbMapNotifyEvent, name, initialize, &_XkbMapNotifyEvent_ClassInfo_, allocate$XkbMapNotifyEvent);
	return class$;
}

$Class* XkbMapNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun