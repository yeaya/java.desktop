#include <sun/awt/X11/XTextItem.h>

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

$FieldInfo _XTextItem_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XTextItem, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XTextItem, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XTextItem, pData)},
	{}
};

$MethodInfo _XTextItem_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XTextItem::*)(int64_t)>(&XTextItem::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTextItem::*)()>(&XTextItem::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XTextItem::getSize))},
	{"get_chars", "(I)J", nullptr, $PUBLIC},
	{"get_chars", "()J", nullptr, $PUBLIC},
	{"get_delta", "()I", nullptr, $PUBLIC},
	{"get_font", "()J", nullptr, $PUBLIC},
	{"get_nchars", "()I", nullptr, $PUBLIC},
	{"set_chars", "(J)V", nullptr, $PUBLIC},
	{"set_delta", "(I)V", nullptr, $PUBLIC},
	{"set_font", "(J)V", nullptr, $PUBLIC},
	{"set_nchars", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XTextItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XTextItem",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XTextItem_FieldInfo_,
	_XTextItem_MethodInfo_
};

$Object* allocate$XTextItem($Class* clazz) {
	return $of($alloc(XTextItem));
}

int32_t XTextItem::getSize() {
	$init(XTextItem);
	return 24;
}

int32_t XTextItem::getDataSize() {
	return getSize();
}

int64_t XTextItem::getPData() {
	return this->pData;
}

void XTextItem::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XTextItem::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XTextItem::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XTextItem::get_chars(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 0);
	return var$0 + index * $Native::getLongSize();
}

int64_t XTextItem::get_chars() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XTextItem::set_chars(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XTextItem::get_nchars() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XTextItem::set_nchars(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XTextItem::get_delta() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XTextItem::set_delta(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int64_t XTextItem::get_font() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XTextItem::set_font(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

$String* XTextItem::getName() {
	return "XTextItem"_s;
}

$String* XTextItem::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("chars = "_s)->append(get_chars())->append(", "_s);
	ret->append("nchars = "_s)->append(get_nchars())->append(", "_s);
	ret->append("delta = "_s)->append(get_delta())->append(", "_s);
	ret->append("font = "_s)->append(get_font())->append(", "_s);
	return ret->toString();
}

$Object* XTextItem::clone() {
	return $of($XWrapperBase::clone());
}

void XTextItem::zero() {
	$XWrapperBase::zero();
}

$String* XTextItem::toString() {
	return $XWrapperBase::toString();
}

XTextItem::XTextItem() {
}

$Class* XTextItem::load$($String* name, bool initialize) {
	$loadClass(XTextItem, name, initialize, &_XTextItem_ClassInfo_, allocate$XTextItem);
	return class$;
}

$Class* XTextItem::class$ = nullptr;

		} // X11
	} // awt
} // sun