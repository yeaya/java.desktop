#include <sun/awt/X11/XFontSetExtents.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XRectangle.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $XEvent = ::sun::awt::X11::XEvent;
using $XRectangle = ::sun::awt::X11::XRectangle;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFontSetExtents_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XFontSetExtents, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XFontSetExtents, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XFontSetExtents, pData)},
	{}
};

$MethodInfo _XFontSetExtents_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XFontSetExtents::*)(int64_t)>(&XFontSetExtents::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XFontSetExtents::*)()>(&XFontSetExtents::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&XFontSetExtents::getSize))},
	{"get_max_ink_extent", "()Lsun/awt/X11/XRectangle;", nullptr, $PUBLIC},
	{"get_max_logical_extent", "()Lsun/awt/X11/XRectangle;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _XFontSetExtents_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XFontSetExtents",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XFontSetExtents_FieldInfo_,
	_XFontSetExtents_MethodInfo_
};

$Object* allocate$XFontSetExtents($Class* clazz) {
	return $of($alloc(XFontSetExtents));
}

int32_t XFontSetExtents::getSize() {
	$init(XFontSetExtents);
	return 16;
}

int32_t XFontSetExtents::getDataSize() {
	return getSize();
}

int64_t XFontSetExtents::getPData() {
	return this->pData;
}

void XFontSetExtents::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XFontSetExtents::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XFontSetExtents::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XRectangle* XFontSetExtents::get_max_ink_extent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XRectangle, this->pData + 0);
}

$XRectangle* XFontSetExtents::get_max_logical_extent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XRectangle, this->pData + 8);
}

$String* XFontSetExtents::getName() {
	return "XFontSetExtents"_s;
}

$String* XFontSetExtents::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("max_ink_extent = "_s)->append($($of(get_max_ink_extent())))->append(", "_s);
	ret->append("max_logical_extent = "_s)->append($($of(get_max_logical_extent())))->append(", "_s);
	return ret->toString();
}

$Object* XFontSetExtents::clone() {
	return $of($XWrapperBase::clone());
}

void XFontSetExtents::zero() {
	$XWrapperBase::zero();
}

$String* XFontSetExtents::toString() {
	return $XWrapperBase::toString();
}

XFontSetExtents::XFontSetExtents() {
}

$Class* XFontSetExtents::load$($String* name, bool initialize) {
	$loadClass(XFontSetExtents, name, initialize, &_XFontSetExtents_ClassInfo_, allocate$XFontSetExtents);
	return class$;
}

$Class* XFontSetExtents::class$ = nullptr;

		} // X11
	} // awt
} // sun