#include <sun/awt/X11/XOMCharSetList.h>

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

$FieldInfo _XOMCharSetList_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XOMCharSetList, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XOMCharSetList, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XOMCharSetList, pData)},
	{}
};

$MethodInfo _XOMCharSetList_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XOMCharSetList::*)(int64_t)>(&XOMCharSetList::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XOMCharSetList::*)()>(&XOMCharSetList::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XOMCharSetList::getSize))},
	{"get_charset_count", "()I", nullptr, $PUBLIC},
	{"get_charset_list", "(I)J", nullptr, $PUBLIC},
	{"get_charset_list", "()J", nullptr, $PUBLIC},
	{"set_charset_count", "(I)V", nullptr, $PUBLIC},
	{"set_charset_list", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XOMCharSetList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XOMCharSetList",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XOMCharSetList_FieldInfo_,
	_XOMCharSetList_MethodInfo_
};

$Object* allocate$XOMCharSetList($Class* clazz) {
	return $of($alloc(XOMCharSetList));
}

int32_t XOMCharSetList::getSize() {
	$init(XOMCharSetList);
	return 16;
}

int32_t XOMCharSetList::getDataSize() {
	return getSize();
}

int64_t XOMCharSetList::getPData() {
	return this->pData;
}

void XOMCharSetList::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XOMCharSetList::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XOMCharSetList::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XOMCharSetList::get_charset_count() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XOMCharSetList::set_charset_count(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XOMCharSetList::get_charset_list(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XOMCharSetList::get_charset_list() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XOMCharSetList::set_charset_list(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XOMCharSetList::getName() {
	return "XOMCharSetList"_s;
}

$String* XOMCharSetList::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("charset_count = "_s)->append(get_charset_count())->append(", "_s);
	ret->append("charset_list = "_s)->append(get_charset_list())->append(", "_s);
	return ret->toString();
}

$Object* XOMCharSetList::clone() {
	return $of($XWrapperBase::clone());
}

void XOMCharSetList::zero() {
	$XWrapperBase::zero();
}

$String* XOMCharSetList::toString() {
	return $XWrapperBase::toString();
}

XOMCharSetList::XOMCharSetList() {
}

$Class* XOMCharSetList::load$($String* name, bool initialize) {
	$loadClass(XOMCharSetList, name, initialize, &_XOMCharSetList_ClassInfo_, allocate$XOMCharSetList);
	return class$;
}

$Class* XOMCharSetList::class$ = nullptr;

		} // X11
	} // awt
} // sun