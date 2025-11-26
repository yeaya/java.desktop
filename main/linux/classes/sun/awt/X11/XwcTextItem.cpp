#include <sun/awt/X11/XwcTextItem.h>

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

$FieldInfo _XwcTextItem_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XwcTextItem, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XwcTextItem, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XwcTextItem, pData)},
	{}
};

$MethodInfo _XwcTextItem_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XwcTextItem::*)(int64_t)>(&XwcTextItem::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XwcTextItem::*)()>(&XwcTextItem::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XwcTextItem::getSize))},
	{"get_chars", "(I)J", nullptr, $PUBLIC},
	{"get_chars", "()J", nullptr, $PUBLIC},
	{"get_delta", "()I", nullptr, $PUBLIC},
	{"get_font_set", "(I)J", nullptr, $PUBLIC},
	{"get_font_set", "()J", nullptr, $PUBLIC},
	{"get_nchars", "()I", nullptr, $PUBLIC},
	{"set_chars", "(J)V", nullptr, $PUBLIC},
	{"set_delta", "(I)V", nullptr, $PUBLIC},
	{"set_font_set", "(J)V", nullptr, $PUBLIC},
	{"set_nchars", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XwcTextItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XwcTextItem",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XwcTextItem_FieldInfo_,
	_XwcTextItem_MethodInfo_
};

$Object* allocate$XwcTextItem($Class* clazz) {
	return $of($alloc(XwcTextItem));
}

int32_t XwcTextItem::getSize() {
	$init(XwcTextItem);
	return 24;
}

int32_t XwcTextItem::getDataSize() {
	return getSize();
}

int64_t XwcTextItem::getPData() {
	return this->pData;
}

void XwcTextItem::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XwcTextItem::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XwcTextItem::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XwcTextItem::get_chars(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 0);
	return var$0 + index * $Native::getLongSize();
}

int64_t XwcTextItem::get_chars() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XwcTextItem::set_chars(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XwcTextItem::get_nchars() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XwcTextItem::set_nchars(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XwcTextItem::get_delta() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XwcTextItem::set_delta(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int64_t XwcTextItem::get_font_set(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 16);
	return var$0 + index * $Native::getLongSize();
}

int64_t XwcTextItem::get_font_set() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XwcTextItem::set_font_set(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

$String* XwcTextItem::getName() {
	return "XwcTextItem"_s;
}

$String* XwcTextItem::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("chars = "_s)->append(get_chars())->append(", "_s);
	ret->append("nchars = "_s)->append(get_nchars())->append(", "_s);
	ret->append("delta = "_s)->append(get_delta())->append(", "_s);
	ret->append("font_set = "_s)->append(get_font_set())->append(", "_s);
	return ret->toString();
}

$Object* XwcTextItem::clone() {
	return $of($XWrapperBase::clone());
}

void XwcTextItem::zero() {
	$XWrapperBase::zero();
}

$String* XwcTextItem::toString() {
	return $XWrapperBase::toString();
}

XwcTextItem::XwcTextItem() {
}

$Class* XwcTextItem::load$($String* name, bool initialize) {
	$loadClass(XwcTextItem, name, initialize, &_XwcTextItem_ClassInfo_, allocate$XwcTextItem);
	return class$;
}

$Class* XwcTextItem::class$ = nullptr;

		} // X11
	} // awt
} // sun