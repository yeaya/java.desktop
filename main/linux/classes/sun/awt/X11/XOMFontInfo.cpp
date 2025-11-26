#include <sun/awt/X11/XOMFontInfo.h>

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

$FieldInfo _XOMFontInfo_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XOMFontInfo, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XOMFontInfo, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XOMFontInfo, pData)},
	{}
};

$MethodInfo _XOMFontInfo_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XOMFontInfo::*)(int64_t)>(&XOMFontInfo::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XOMFontInfo::*)()>(&XOMFontInfo::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XOMFontInfo::getSize))},
	{"get_font_name_list", "(I)J", nullptr, $PUBLIC},
	{"get_font_name_list", "()J", nullptr, $PUBLIC},
	{"get_font_struct_list", "(I)J", nullptr, $PUBLIC},
	{"get_font_struct_list", "()J", nullptr, $PUBLIC},
	{"get_num_font", "()I", nullptr, $PUBLIC},
	{"set_font_name_list", "(J)V", nullptr, $PUBLIC},
	{"set_font_struct_list", "(J)V", nullptr, $PUBLIC},
	{"set_num_font", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XOMFontInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XOMFontInfo",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XOMFontInfo_FieldInfo_,
	_XOMFontInfo_MethodInfo_
};

$Object* allocate$XOMFontInfo($Class* clazz) {
	return $of($alloc(XOMFontInfo));
}

int32_t XOMFontInfo::getSize() {
	$init(XOMFontInfo);
	return 24;
}

int32_t XOMFontInfo::getDataSize() {
	return getSize();
}

int64_t XOMFontInfo::getPData() {
	return this->pData;
}

void XOMFontInfo::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XOMFontInfo::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XOMFontInfo::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XOMFontInfo::get_num_font() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XOMFontInfo::set_num_font(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XOMFontInfo::get_font_struct_list(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XOMFontInfo::get_font_struct_list() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XOMFontInfo::set_font_struct_list(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XOMFontInfo::get_font_name_list(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 16);
	return var$0 + index * $Native::getLongSize();
}

int64_t XOMFontInfo::get_font_name_list() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void XOMFontInfo::set_font_name_list(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

$String* XOMFontInfo::getName() {
	return "XOMFontInfo"_s;
}

$String* XOMFontInfo::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("num_font = "_s)->append(get_num_font())->append(", "_s);
	ret->append("font_struct_list = "_s)->append(get_font_struct_list())->append(", "_s);
	ret->append("font_name_list = "_s)->append(get_font_name_list())->append(", "_s);
	return ret->toString();
}

$Object* XOMFontInfo::clone() {
	return $of($XWrapperBase::clone());
}

void XOMFontInfo::zero() {
	$XWrapperBase::zero();
}

$String* XOMFontInfo::toString() {
	return $XWrapperBase::toString();
}

XOMFontInfo::XOMFontInfo() {
}

$Class* XOMFontInfo::load$($String* name, bool initialize) {
	$loadClass(XOMFontInfo, name, initialize, &_XOMFontInfo_ClassInfo_, allocate$XOMFontInfo);
	return class$;
}

$Class* XOMFontInfo::class$ = nullptr;

		} // X11
	} // awt
} // sun