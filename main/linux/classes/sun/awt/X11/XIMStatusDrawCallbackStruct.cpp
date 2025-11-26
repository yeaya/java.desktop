#include <sun/awt/X11/XIMStatusDrawCallbackStruct.h>

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

$FieldInfo _XIMStatusDrawCallbackStruct_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XIMStatusDrawCallbackStruct, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XIMStatusDrawCallbackStruct, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XIMStatusDrawCallbackStruct, pData)},
	{}
};

$MethodInfo _XIMStatusDrawCallbackStruct_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XIMStatusDrawCallbackStruct::*)(int64_t)>(&XIMStatusDrawCallbackStruct::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIMStatusDrawCallbackStruct::*)()>(&XIMStatusDrawCallbackStruct::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XIMStatusDrawCallbackStruct::getSize))},
	{"get_data", "()J", nullptr, $PUBLIC},
	{"get_type", "()I", nullptr, $PUBLIC},
	{"set_data", "(J)V", nullptr, $PUBLIC},
	{"set_type", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XIMStatusDrawCallbackStruct_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIMStatusDrawCallbackStruct",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XIMStatusDrawCallbackStruct_FieldInfo_,
	_XIMStatusDrawCallbackStruct_MethodInfo_
};

$Object* allocate$XIMStatusDrawCallbackStruct($Class* clazz) {
	return $of($alloc(XIMStatusDrawCallbackStruct));
}

int32_t XIMStatusDrawCallbackStruct::getSize() {
	$init(XIMStatusDrawCallbackStruct);
	return 16;
}

int32_t XIMStatusDrawCallbackStruct::getDataSize() {
	return getSize();
}

int64_t XIMStatusDrawCallbackStruct::getPData() {
	return this->pData;
}

void XIMStatusDrawCallbackStruct::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XIMStatusDrawCallbackStruct::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XIMStatusDrawCallbackStruct::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XIMStatusDrawCallbackStruct::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XIMStatusDrawCallbackStruct::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XIMStatusDrawCallbackStruct::get_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XIMStatusDrawCallbackStruct::set_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XIMStatusDrawCallbackStruct::getName() {
	return "XIMStatusDrawCallbackStruct"_s;
}

$String* XIMStatusDrawCallbackStruct::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("data = "_s)->append(get_data())->append(", "_s);
	return ret->toString();
}

$Object* XIMStatusDrawCallbackStruct::clone() {
	return $of($XWrapperBase::clone());
}

void XIMStatusDrawCallbackStruct::zero() {
	$XWrapperBase::zero();
}

$String* XIMStatusDrawCallbackStruct::toString() {
	return $XWrapperBase::toString();
}

XIMStatusDrawCallbackStruct::XIMStatusDrawCallbackStruct() {
}

$Class* XIMStatusDrawCallbackStruct::load$($String* name, bool initialize) {
	$loadClass(XIMStatusDrawCallbackStruct, name, initialize, &_XIMStatusDrawCallbackStruct_ClassInfo_, allocate$XIMStatusDrawCallbackStruct);
	return class$;
}

$Class* XIMStatusDrawCallbackStruct::class$ = nullptr;

		} // X11
	} // awt
} // sun