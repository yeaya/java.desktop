#include <sun/awt/X11/ScreenFormat.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XExtData.h>
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
using $XExtData = ::sun::awt::X11::XExtData;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _ScreenFormat_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(ScreenFormat, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(ScreenFormat, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(ScreenFormat, pData)},
	{}
};

$MethodInfo _ScreenFormat_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(ScreenFormat::*)(int64_t)>(&ScreenFormat::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScreenFormat::*)()>(&ScreenFormat::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&ScreenFormat::getSize))},
	{"get_bits_per_pixel", "()I", nullptr, $PUBLIC},
	{"get_depth", "()I", nullptr, $PUBLIC},
	{"get_ext_data", "(I)Lsun/awt/X11/XExtData;", nullptr, $PUBLIC},
	{"get_ext_data", "()J", nullptr, $PUBLIC},
	{"get_scanline_pad", "()I", nullptr, $PUBLIC},
	{"set_bits_per_pixel", "(I)V", nullptr, $PUBLIC},
	{"set_depth", "(I)V", nullptr, $PUBLIC},
	{"set_ext_data", "(J)V", nullptr, $PUBLIC},
	{"set_scanline_pad", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _ScreenFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.ScreenFormat",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_ScreenFormat_FieldInfo_,
	_ScreenFormat_MethodInfo_
};

$Object* allocate$ScreenFormat($Class* clazz) {
	return $of($alloc(ScreenFormat));
}

int32_t ScreenFormat::getSize() {
	$init(ScreenFormat);
	return 24;
}

int32_t ScreenFormat::getDataSize() {
	return getSize();
}

int64_t ScreenFormat::getPData() {
	return this->pData;
}

void ScreenFormat::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void ScreenFormat::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void ScreenFormat::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XExtData* ScreenFormat::get_ext_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($XExtData, $Native::getLong(this->pData + 0) + index * 32)) : (($XExtData*)nullptr);
}

int64_t ScreenFormat::get_ext_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void ScreenFormat::set_ext_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t ScreenFormat::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void ScreenFormat::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t ScreenFormat::get_bits_per_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void ScreenFormat::set_bits_per_pixel(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t ScreenFormat::get_scanline_pad() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void ScreenFormat::set_scanline_pad(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

$String* ScreenFormat::getName() {
	return "ScreenFormat"_s;
}

$String* ScreenFormat::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("ext_data = "_s)->append(get_ext_data())->append(", "_s);
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("bits_per_pixel = "_s)->append(get_bits_per_pixel())->append(", "_s);
	ret->append("scanline_pad = "_s)->append(get_scanline_pad())->append(", "_s);
	return ret->toString();
}

$Object* ScreenFormat::clone() {
	return $of($XWrapperBase::clone());
}

void ScreenFormat::zero() {
	$XWrapperBase::zero();
}

$String* ScreenFormat::toString() {
	return $XWrapperBase::toString();
}

ScreenFormat::ScreenFormat() {
}

$Class* ScreenFormat::load$($String* name, bool initialize) {
	$loadClass(ScreenFormat, name, initialize, &_ScreenFormat_ClassInfo_, allocate$ScreenFormat);
	return class$;
}

$Class* ScreenFormat::class$ = nullptr;

		} // X11
	} // awt
} // sun