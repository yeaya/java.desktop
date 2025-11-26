#include <sun/awt/X11/ColorData.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/ColorEntry.h>
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
using $ColorEntry = ::sun::awt::X11::ColorEntry;
using $Native = ::sun::awt::X11::Native;
using $XEvent = ::sun::awt::X11::XEvent;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _ColorData_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(ColorData, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(ColorData, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(ColorData, pData)},
	{}
};

$MethodInfo _ColorData_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(ColorData::*)(int64_t)>(&ColorData::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ColorData::*)()>(&ColorData::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&ColorData::getSize))},
	{"get_awt_Colors", "(I)Lsun/awt/X11/ColorEntry;", nullptr, $PUBLIC},
	{"get_awt_Colors", "()J", nullptr, $PUBLIC},
	{"get_awt_icmLUT", "(I)I", nullptr, $PUBLIC},
	{"get_awt_icmLUT", "()J", nullptr, $PUBLIC},
	{"get_awt_icmLUT2Colors", "(I)B", nullptr, $PUBLIC},
	{"get_awt_icmLUT2Colors", "()J", nullptr, $PUBLIC},
	{"get_awt_numICMcolors", "()I", nullptr, $PUBLIC},
	{"get_img_clr_tbl", "(I)B", nullptr, $PUBLIC},
	{"get_img_clr_tbl", "()J", nullptr, $PUBLIC},
	{"get_img_grays", "(I)B", nullptr, $PUBLIC},
	{"get_img_grays", "()J", nullptr, $PUBLIC},
	{"get_img_oda_blue", "(I)B", nullptr, $PUBLIC},
	{"get_img_oda_blue", "()J", nullptr, $PUBLIC},
	{"get_img_oda_green", "(I)B", nullptr, $PUBLIC},
	{"get_img_oda_green", "()J", nullptr, $PUBLIC},
	{"get_img_oda_red", "(I)B", nullptr, $PUBLIC},
	{"get_img_oda_red", "()J", nullptr, $PUBLIC},
	{"get_pGrayInverseLutData", "(I)I", nullptr, $PUBLIC},
	{"get_pGrayInverseLutData", "()J", nullptr, $PUBLIC},
	{"get_representsPrimaries", "()I", nullptr, $PUBLIC},
	{"get_screendata", "()I", nullptr, $PUBLIC},
	{"set_awt_Colors", "(J)V", nullptr, $PUBLIC},
	{"set_awt_icmLUT", "(J)V", nullptr, $PUBLIC},
	{"set_awt_icmLUT2Colors", "(J)V", nullptr, $PUBLIC},
	{"set_awt_numICMcolors", "(I)V", nullptr, $PUBLIC},
	{"set_img_clr_tbl", "(J)V", nullptr, $PUBLIC},
	{"set_img_grays", "(J)V", nullptr, $PUBLIC},
	{"set_img_oda_blue", "(J)V", nullptr, $PUBLIC},
	{"set_img_oda_green", "(J)V", nullptr, $PUBLIC},
	{"set_img_oda_red", "(J)V", nullptr, $PUBLIC},
	{"set_pGrayInverseLutData", "(J)V", nullptr, $PUBLIC},
	{"set_representsPrimaries", "(I)V", nullptr, $PUBLIC},
	{"set_screendata", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _ColorData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.ColorData",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_ColorData_FieldInfo_,
	_ColorData_MethodInfo_
};

$Object* allocate$ColorData($Class* clazz) {
	return $of($alloc(ColorData));
}

int32_t ColorData::getSize() {
	$init(ColorData);
	return 88;
}

int32_t ColorData::getDataSize() {
	return getSize();
}

int64_t ColorData::getPData() {
	return this->pData;
}

void ColorData::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void ColorData::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void ColorData::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$ColorEntry* ColorData::get_awt_Colors(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($ColorEntry, $Native::getLong(this->pData + 0) + index * 4)) : (($ColorEntry*)nullptr);
}

int64_t ColorData::get_awt_Colors() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void ColorData::set_awt_Colors(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t ColorData::get_awt_numICMcolors() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void ColorData::set_awt_numICMcolors(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t ColorData::get_awt_icmLUT(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getInt($Native::getLong(this->pData + 16) + index * 4);
}

int64_t ColorData::get_awt_icmLUT() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 16);
}

void ColorData::set_awt_icmLUT(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int8_t ColorData::get_awt_icmLUT2Colors(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 24) + index * 1);
}

int64_t ColorData::get_awt_icmLUT2Colors() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 24);
}

void ColorData::set_awt_icmLUT2Colors(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int8_t ColorData::get_img_grays(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 32) + index * 1);
}

int64_t ColorData::get_img_grays() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 32);
}

void ColorData::set_img_grays(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int8_t ColorData::get_img_clr_tbl(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 40) + index * 1);
}

int64_t ColorData::get_img_clr_tbl() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 40);
}

void ColorData::set_img_clr_tbl(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int8_t ColorData::get_img_oda_red(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 48) + index * 1);
}

int64_t ColorData::get_img_oda_red() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 48);
}

void ColorData::set_img_oda_red(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int8_t ColorData::get_img_oda_green(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 56) + index * 1);
}

int64_t ColorData::get_img_oda_green() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 56);
}

void ColorData::set_img_oda_green(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int8_t ColorData::get_img_oda_blue(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte($Native::getLong(this->pData + 64) + index * 1);
}

int64_t ColorData::get_img_oda_blue() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 64);
}

void ColorData::set_img_oda_blue(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int32_t ColorData::get_pGrayInverseLutData(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getInt($Native::getLong(this->pData + 72) + index * 4);
}

int64_t ColorData::get_pGrayInverseLutData() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 72);
}

void ColorData::set_pGrayInverseLutData(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int32_t ColorData::get_screendata() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void ColorData::set_screendata(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int32_t ColorData::get_representsPrimaries() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 84));
}

void ColorData::set_representsPrimaries(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 84, v);
}

$String* ColorData::getName() {
	return "ColorData"_s;
}

$String* ColorData::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 480));
	ret->append("awt_Colors = "_s)->append(get_awt_Colors())->append(", "_s);
	ret->append("awt_numICMcolors = "_s)->append(get_awt_numICMcolors())->append(", "_s);
	ret->append("awt_icmLUT = "_s)->append(get_awt_icmLUT())->append(", "_s);
	ret->append("awt_icmLUT2Colors = "_s)->append(get_awt_icmLUT2Colors())->append(", "_s);
	ret->append("img_grays = "_s)->append(get_img_grays())->append(", "_s);
	ret->append("img_clr_tbl = "_s)->append(get_img_clr_tbl())->append(", "_s);
	ret->append("img_oda_red = "_s)->append(get_img_oda_red())->append(", "_s);
	ret->append("img_oda_green = "_s)->append(get_img_oda_green())->append(", "_s);
	ret->append("img_oda_blue = "_s)->append(get_img_oda_blue())->append(", "_s);
	ret->append("pGrayInverseLutData = "_s)->append(get_pGrayInverseLutData())->append(", "_s);
	ret->append("screendata = "_s)->append(get_screendata())->append(", "_s);
	ret->append("representsPrimaries = "_s)->append(get_representsPrimaries())->append(", "_s);
	return ret->toString();
}

$Object* ColorData::clone() {
	return $of($XWrapperBase::clone());
}

void ColorData::zero() {
	$XWrapperBase::zero();
}

$String* ColorData::toString() {
	return $XWrapperBase::toString();
}

ColorData::ColorData() {
}

$Class* ColorData::load$($String* name, bool initialize) {
	$loadClass(ColorData, name, initialize, &_ColorData_ClassInfo_, allocate$ColorData);
	return class$;
}

$Class* ColorData::class$ = nullptr;

		} // X11
	} // awt
} // sun