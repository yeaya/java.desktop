#include <sun/awt/X11/XCharStruct.h>

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

$FieldInfo _XCharStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XCharStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XCharStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XCharStruct, pData)},
	{}
};

$MethodInfo _XCharStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XCharStruct::*)(int64_t)>(&XCharStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XCharStruct::*)()>(&XCharStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XCharStruct::getSize))},
	{"get_ascent", "()S", nullptr, $PUBLIC},
	{"get_attributes", "()S", nullptr, $PUBLIC},
	{"get_descent", "()S", nullptr, $PUBLIC},
	{"get_lbearing", "()S", nullptr, $PUBLIC},
	{"get_rbearing", "()S", nullptr, $PUBLIC},
	{"get_width", "()S", nullptr, $PUBLIC},
	{"set_ascent", "(S)V", nullptr, $PUBLIC},
	{"set_attributes", "(S)V", nullptr, $PUBLIC},
	{"set_descent", "(S)V", nullptr, $PUBLIC},
	{"set_lbearing", "(S)V", nullptr, $PUBLIC},
	{"set_rbearing", "(S)V", nullptr, $PUBLIC},
	{"set_width", "(S)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XCharStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XCharStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XCharStruct_FieldInfo_,
	_XCharStruct_MethodInfo_
};

$Object* allocate$XCharStruct($Class* clazz) {
	return $of($alloc(XCharStruct));
}

int32_t XCharStruct::getSize() {
	$init(XCharStruct);
	return 12;
}

int32_t XCharStruct::getDataSize() {
	return getSize();
}

int64_t XCharStruct::getPData() {
	return this->pData;
}

void XCharStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XCharStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XCharStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XCharStruct::get_lbearing() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XCharStruct::set_lbearing(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int16_t XCharStruct::get_rbearing() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 2));
}

void XCharStruct::set_rbearing(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 2, v);
}

int16_t XCharStruct::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 4));
}

void XCharStruct::set_width(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 4, v);
}

int16_t XCharStruct::get_ascent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 6));
}

void XCharStruct::set_ascent(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 6, v);
}

int16_t XCharStruct::get_descent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 8));
}

void XCharStruct::set_descent(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 8, v);
}

int16_t XCharStruct::get_attributes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 10));
}

void XCharStruct::set_attributes(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 10, v);
}

$String* XCharStruct::getName() {
	return "XCharStruct"_s;
}

$String* XCharStruct::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	ret->append("lbearing = "_s)->append((int32_t)get_lbearing())->append(", "_s);
	ret->append("rbearing = "_s)->append((int32_t)get_rbearing())->append(", "_s);
	ret->append("width = "_s)->append((int32_t)get_width())->append(", "_s);
	ret->append("ascent = "_s)->append((int32_t)get_ascent())->append(", "_s);
	ret->append("descent = "_s)->append((int32_t)get_descent())->append(", "_s);
	ret->append("attributes = "_s)->append((int32_t)get_attributes())->append(", "_s);
	return ret->toString();
}

$Object* XCharStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XCharStruct::zero() {
	$XWrapperBase::zero();
}

$String* XCharStruct::toString() {
	return $XWrapperBase::toString();
}

XCharStruct::XCharStruct() {
}

$Class* XCharStruct::load$($String* name, bool initialize) {
	$loadClass(XCharStruct, name, initialize, &_XCharStruct_ClassInfo_, allocate$XCharStruct);
	return class$;
}

$Class* XCharStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun