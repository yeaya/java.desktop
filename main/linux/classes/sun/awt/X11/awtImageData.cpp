#include <sun/awt/X11/awtImageData.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPixmapFormatValues.h>
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
using $XPixmapFormatValues = ::sun::awt::X11::XPixmapFormatValues;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _awtImageData_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(awtImageData, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(awtImageData, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(awtImageData, pData)},
	{}
};

$MethodInfo _awtImageData_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(awtImageData::*)(int64_t)>(&awtImageData::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtImageData::*)()>(&awtImageData::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&awtImageData::getSize))},
	{"get_Depth", "()I", nullptr, $PUBLIC},
	{"get_clrdata", "(I)J", nullptr, $PUBLIC},
	{"get_clrdata", "()J", nullptr, $PUBLIC},
	{"get_convert", "(I)J", nullptr, $PUBLIC},
	{"get_convert", "()J", nullptr, $PUBLIC},
	{"get_wsImageFormat", "()Lsun/awt/X11/XPixmapFormatValues;", nullptr, $PUBLIC},
	{"set_Depth", "(I)V", nullptr, $PUBLIC},
	{"set_clrdata", "(J)V", nullptr, $PUBLIC},
	{"set_convert", "(IJ)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _awtImageData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.awtImageData",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_awtImageData_FieldInfo_,
	_awtImageData_MethodInfo_
};

$Object* allocate$awtImageData($Class* clazz) {
	return $of($alloc(awtImageData));
}

int32_t awtImageData::getSize() {
	$init(awtImageData);
	return 560;
}

int32_t awtImageData::getDataSize() {
	return getSize();
}

int64_t awtImageData::getPData() {
	return this->pData;
}

void awtImageData::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void awtImageData::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void awtImageData::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t awtImageData::get_Depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void awtImageData::set_Depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

$XPixmapFormatValues* awtImageData::get_wsImageFormat() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XPixmapFormatValues, this->pData + 4);
}

int64_t awtImageData::get_clrdata(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 16);
	return var$0 + index * $Native::getLongSize();
}

int64_t awtImageData::get_clrdata() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void awtImageData::set_clrdata(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t awtImageData::get_convert(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 48 + index * $Native::getLongSize());
}

void awtImageData::set_convert(int32_t index, int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48 + index * $Native::getLongSize(), v);
}

int64_t awtImageData::get_convert() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return this->pData + 48;
}

$String* awtImageData::getName() {
	return "awtImageData"_s;
}

$String* awtImageData::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("Depth = "_s)->append(get_Depth())->append(", "_s);
	ret->append("wsImageFormat = "_s)->append($($of(get_wsImageFormat())))->append(", "_s);
	ret->append("clrdata = "_s)->append(get_clrdata())->append(", "_s);
	ret->append("{"_s)->append(get_convert(0))->append(" "_s)->append(get_convert(1))->append(" "_s)->append(get_convert(2))->append(" "_s)->append(get_convert(3))->append(" "_s)->append(get_convert(4))->append(" "_s)->append(get_convert(5))->append(" "_s)->append(get_convert(6))->append(" "_s)->append(get_convert(7))->append(" "_s)->append(get_convert(8))->append(" "_s)->append(get_convert(9))->append(" "_s)->append(get_convert(10))->append(" "_s)->append(get_convert(11))->append(" "_s)->append(get_convert(12))->append(" "_s)->append(get_convert(13))->append(" "_s)->append(get_convert(14))->append(" "_s)->append(get_convert(15))->append(" "_s)->append(get_convert(16))->append(" "_s)->append(get_convert(17))->append(" "_s)->append(get_convert(18))->append(" "_s)->append(get_convert(19))->append(" "_s)->append(get_convert(20))->append(" "_s)->append(get_convert(21))->append(" "_s)->append(get_convert(22))->append(" "_s)->append(get_convert(23))->append(" "_s)->append(get_convert(24))->append(" "_s)->append(get_convert(25))->append(" "_s)->append(get_convert(26))->append(" "_s)->append(get_convert(27))->append(" "_s)->append(get_convert(28))->append(" "_s)->append(get_convert(29))->append(" "_s)->append(get_convert(30))->append(" "_s)->append(get_convert(31))->append(" "_s)->append("}"_s);
	return ret->toString();
}

$Object* awtImageData::clone() {
	return $of($XWrapperBase::clone());
}

void awtImageData::zero() {
	$XWrapperBase::zero();
}

$String* awtImageData::toString() {
	return $XWrapperBase::toString();
}

awtImageData::awtImageData() {
}

$Class* awtImageData::load$($String* name, bool initialize) {
	$loadClass(awtImageData, name, initialize, &_awtImageData_ClassInfo_, allocate$awtImageData);
	return class$;
}

$Class* awtImageData::class$ = nullptr;

		} // X11
	} // awt
} // sun