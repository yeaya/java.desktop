#include <sun/awt/X11/XFontStruct.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XCharStruct.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XExtData.h>
#include <sun/awt/X11/XFontProp.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XCharStruct = ::sun::awt::X11::XCharStruct;
using $XEvent = ::sun::awt::X11::XEvent;
using $XExtData = ::sun::awt::X11::XExtData;
using $XFontProp = ::sun::awt::X11::XFontProp;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFontStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XFontStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XFontStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XFontStruct, pData)},
	{}
};

$MethodInfo _XFontStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XFontStruct::*)(int64_t)>(&XFontStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XFontStruct::*)()>(&XFontStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XFontStruct::getSize))},
	{"get_all_chars_exist", "()Z", nullptr, $PUBLIC},
	{"get_ascent", "()I", nullptr, $PUBLIC},
	{"get_descent", "()I", nullptr, $PUBLIC},
	{"get_direction", "()I", nullptr, $PUBLIC},
	{"get_ext_data", "(I)Lsun/awt/X11/XExtData;", nullptr, $PUBLIC},
	{"get_ext_data", "()J", nullptr, $PUBLIC},
	{"get_fid", "()J", nullptr, $PUBLIC},
	{"get_max_bounds", "()Lsun/awt/X11/XCharStruct;", nullptr, $PUBLIC},
	{"get_max_byte1", "()I", nullptr, $PUBLIC},
	{"get_max_char_or_byte2", "()I", nullptr, $PUBLIC},
	{"get_min_bounds", "()Lsun/awt/X11/XCharStruct;", nullptr, $PUBLIC},
	{"get_min_byte1", "()I", nullptr, $PUBLIC},
	{"get_min_char_or_byte2", "()I", nullptr, $PUBLIC},
	{"get_n_properties", "()I", nullptr, $PUBLIC},
	{"get_per_char", "(I)Lsun/awt/X11/XCharStruct;", nullptr, $PUBLIC},
	{"get_per_char", "()J", nullptr, $PUBLIC},
	{"get_properties", "(I)Lsun/awt/X11/XFontProp;", nullptr, $PUBLIC},
	{"get_properties", "()J", nullptr, $PUBLIC},
	{"set_all_chars_exist", "(Z)V", nullptr, $PUBLIC},
	{"set_ascent", "(I)V", nullptr, $PUBLIC},
	{"set_descent", "(I)V", nullptr, $PUBLIC},
	{"set_direction", "(I)V", nullptr, $PUBLIC},
	{"set_ext_data", "(J)V", nullptr, $PUBLIC},
	{"set_fid", "(J)V", nullptr, $PUBLIC},
	{"set_max_byte1", "(I)V", nullptr, $PUBLIC},
	{"set_max_char_or_byte2", "(I)V", nullptr, $PUBLIC},
	{"set_min_byte1", "(I)V", nullptr, $PUBLIC},
	{"set_min_char_or_byte2", "(I)V", nullptr, $PUBLIC},
	{"set_n_properties", "(I)V", nullptr, $PUBLIC},
	{"set_per_char", "(J)V", nullptr, $PUBLIC},
	{"set_properties", "(J)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XFontStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XFontStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XFontStruct_FieldInfo_,
	_XFontStruct_MethodInfo_
};

$Object* allocate$XFontStruct($Class* clazz) {
	return $of($alloc(XFontStruct));
}

int32_t XFontStruct::getSize() {
	$init(XFontStruct);
	return 96;
}

int32_t XFontStruct::getDataSize() {
	return getSize();
}

int64_t XFontStruct::getPData() {
	return this->pData;
}

void XFontStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XFontStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XFontStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XExtData* XFontStruct::get_ext_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($XExtData, $Native::getLong(this->pData + 0) + index * 32)) : (($XExtData*)nullptr);
}

int64_t XFontStruct::get_ext_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void XFontStruct::set_ext_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XFontStruct::get_fid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XFontStruct::set_fid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int32_t XFontStruct::get_direction() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XFontStruct::set_direction(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XFontStruct::get_min_char_or_byte2() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XFontStruct::set_min_char_or_byte2(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

int32_t XFontStruct::get_max_char_or_byte2() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void XFontStruct::set_max_char_or_byte2(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int32_t XFontStruct::get_min_byte1() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 28));
}

void XFontStruct::set_min_byte1(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 28, v);
}

int32_t XFontStruct::get_max_byte1() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XFontStruct::set_max_byte1(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

bool XFontStruct::get_all_chars_exist() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 36));
}

void XFontStruct::set_all_chars_exist(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 36, v);
}

int32_t XFontStruct::get_n_properties() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XFontStruct::set_n_properties(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

$XFontProp* XFontStruct::get_properties(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48) != 0) ? ($new($XFontProp, $Native::getLong(this->pData + 48) + index * 16)) : (($XFontProp*)nullptr);
}

int64_t XFontStruct::get_properties() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 48);
}

void XFontStruct::set_properties(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

$XCharStruct* XFontStruct::get_min_bounds() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XCharStruct, this->pData + 56);
}

$XCharStruct* XFontStruct::get_max_bounds() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XCharStruct, this->pData + 68);
}

$XCharStruct* XFontStruct::get_per_char(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80) != 0) ? ($new($XCharStruct, $Native::getLong(this->pData + 80) + index * 12)) : (($XCharStruct*)nullptr);
}

int64_t XFontStruct::get_per_char() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 80);
}

void XFontStruct::set_per_char(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

int32_t XFontStruct::get_ascent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 88));
}

void XFontStruct::set_ascent(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 88, v);
}

int32_t XFontStruct::get_descent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 92));
}

void XFontStruct::set_descent(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 92, v);
}

$String* XFontStruct::getName() {
	return "XFontStruct"_s;
}

$String* XFontStruct::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 600));
	ret->append("ext_data = "_s)->append(get_ext_data())->append(", "_s);
	ret->append("fid = "_s)->append(get_fid())->append(", "_s);
	ret->append("direction = "_s)->append(get_direction())->append(", "_s);
	ret->append("min_char_or_byte2 = "_s)->append(get_min_char_or_byte2())->append(", "_s);
	ret->append("max_char_or_byte2 = "_s)->append(get_max_char_or_byte2())->append(", "_s);
	ret->append("min_byte1 = "_s)->append(get_min_byte1())->append(", "_s);
	ret->append("max_byte1 = "_s)->append(get_max_byte1())->append(", "_s);
	ret->append("all_chars_exist = "_s)->append(get_all_chars_exist())->append(", "_s);
	ret->append("n_properties = "_s)->append(get_n_properties())->append(", "_s);
	ret->append("properties = "_s)->append(get_properties())->append(", "_s);
	ret->append("min_bounds = "_s)->append($($of(get_min_bounds())))->append(", "_s);
	ret->append("max_bounds = "_s)->append($($of(get_max_bounds())))->append(", "_s);
	ret->append("per_char = "_s)->append(get_per_char())->append(", "_s);
	ret->append("ascent = "_s)->append(get_ascent())->append(", "_s);
	ret->append("descent = "_s)->append(get_descent())->append(", "_s);
	return ret->toString();
}

$Object* XFontStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XFontStruct::zero() {
	$XWrapperBase::zero();
}

$String* XFontStruct::toString() {
	return $XWrapperBase::toString();
}

XFontStruct::XFontStruct() {
}

$Class* XFontStruct::load$($String* name, bool initialize) {
	$loadClass(XFontStruct, name, initialize, &_XFontStruct_ClassInfo_, allocate$XFontStruct);
	return class$;
}

$Class* XFontStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun