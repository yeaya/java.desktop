#include <sun/awt/X11/XWrapperBase.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XEvent = ::sun::awt::X11::XEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWrapperBase_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $STATIC | $FINAL, $staticField(XWrapperBase, log)},
	{}
};

$MethodInfo _XWrapperBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XWrapperBase::*)()>(&XWrapperBase::init$))},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC},
	{"getDataSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{"getPData", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getWindow", "(J)Ljava/lang/String;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"zero", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XWrapperBase_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XWrapperBase",
	"java.lang.Object",
	nullptr,
	_XWrapperBase_FieldInfo_,
	_XWrapperBase_MethodInfo_
};

$Object* allocate$XWrapperBase($Class* clazz) {
	return $of($alloc(XWrapperBase));
}

$PlatformLogger* XWrapperBase::log = nullptr;

void XWrapperBase::init$() {
}

$String* XWrapperBase::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, ""_s);
	$var($String, var$0, $$str({$(getName()), " = "_s}));
	$plusAssign(ret, $$concat(var$0, $(getFieldsAsString())));
	return ret;
}

$String* XWrapperBase::getFieldsAsString() {
	return ""_s;
}

$String* XWrapperBase::getName() {
	return "XWrapperBase"_s;
}

void XWrapperBase::zero() {
	$nc(XWrapperBase::log)->finest("Cleaning memory"_s);
	if (getPData() != 0) {
		$init($XlibWrapper);
		int64_t var$0 = getPData();
		$nc($XlibWrapper::unsafe)->setMemory(var$0, (int64_t)getDataSize(), (int8_t)0);
	}
}

$String* XWrapperBase::getWindow(int64_t window) {
	$var($XBaseWindow, w, $XToolkit::windowToXWindow(window));
	if (w == nullptr) {
		return $Long::toHexString(window);
	} else {
		return $nc(w)->toString();
	}
}

$Object* XWrapperBase::clone() {
	$init($XlibWrapper);
	int64_t copy = $nc($XlibWrapper::unsafe)->allocateMemory(getDataSize());
	int64_t var$0 = getPData();
	int64_t var$1 = copy;
	$nc($XlibWrapper::unsafe)->copyMemory(var$0, var$1, getDataSize());
	return $of($new($XEvent, copy));
}

void clinit$XWrapperBase($Class* class$) {
	$assignStatic(XWrapperBase::log, $PlatformLogger::getLogger("sun.awt.X11.wrappers"_s));
}

XWrapperBase::XWrapperBase() {
}

$Class* XWrapperBase::load$($String* name, bool initialize) {
	$loadClass(XWrapperBase, name, initialize, &_XWrapperBase_ClassInfo_, clinit$XWrapperBase, allocate$XWrapperBase);
	return class$;
}

$Class* XWrapperBase::class$ = nullptr;

		} // X11
	} // awt
} // sun