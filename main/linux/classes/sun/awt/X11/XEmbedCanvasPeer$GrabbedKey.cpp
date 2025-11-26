#include <sun/awt/X11/XEmbedCanvasPeer$GrabbedKey.h>

#include <java/awt/event/KeyEvent.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$GrabbedKey_FieldInfo_[] = {
	{"keysym", "J", nullptr, 0, $field(XEmbedCanvasPeer$GrabbedKey, keysym)},
	{"modifiers", "J", nullptr, 0, $field(XEmbedCanvasPeer$GrabbedKey, modifiers)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$GrabbedKey_MethodInfo_[] = {
	{"<init>", "(JJ)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$GrabbedKey::*)(int64_t,int64_t)>(&XEmbedCanvasPeer$GrabbedKey::init$))},
	{"<init>", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$GrabbedKey::*)($KeyEvent*)>(&XEmbedCanvasPeer$GrabbedKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XEmbedCanvasPeer$GrabbedKey::*)($KeyEvent*)>(&XEmbedCanvasPeer$GrabbedKey::init))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XEmbedCanvasPeer$GrabbedKey_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$GrabbedKey", "sun.awt.X11.XEmbedCanvasPeer", "GrabbedKey", $STATIC},
	{}
};

$ClassInfo _XEmbedCanvasPeer$GrabbedKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$GrabbedKey",
	"java.lang.Object",
	nullptr,
	_XEmbedCanvasPeer$GrabbedKey_FieldInfo_,
	_XEmbedCanvasPeer$GrabbedKey_MethodInfo_,
	nullptr,
	nullptr,
	_XEmbedCanvasPeer$GrabbedKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$GrabbedKey($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$GrabbedKey));
}

void XEmbedCanvasPeer$GrabbedKey::init$(int64_t keysym, int64_t modifiers) {
	this->keysym = keysym;
	this->modifiers = modifiers;
}

void XEmbedCanvasPeer$GrabbedKey::init$($KeyEvent* ev) {
	init(ev);
}

void XEmbedCanvasPeer$GrabbedKey::init($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bdata, $XEmbedCanvasPeer::getBData(e));
	int64_t data = $Native::toData(bdata);
	if (data == 0) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					this->keysym = $XWindow::getKeySymForAWTKeyCode($nc(e)->getKeyCode());
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			$var($XKeyEvent, ke, $new($XKeyEvent, data));
			this->modifiers = (int32_t)(ke->get_state() & (uint32_t)(($XConstants::ShiftMask | $XConstants::ControlMask) | $XConstants::LockMask));
			$init($PlatformLogger$Level);
			if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc($XEmbedCanvasPeer::xembedLog)->finest($$str({"Mapped "_s, e, " to "_s, this}));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$init($XlibWrapper);
			$nc($XlibWrapper::unsafe)->freeMemory(data);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t XEmbedCanvasPeer$GrabbedKey::hashCode() {
	return (int32_t)((int32_t)this->keysym & (uint32_t)-1);
}

bool XEmbedCanvasPeer$GrabbedKey::equals(Object$* o) {
	if (!($instanceOf(XEmbedCanvasPeer$GrabbedKey, o))) {
		return false;
	}
	$var(XEmbedCanvasPeer$GrabbedKey, key, $cast(XEmbedCanvasPeer$GrabbedKey, o));
	return (this->keysym == $nc(key)->keysym && this->modifiers == key->modifiers);
}

$String* XEmbedCanvasPeer$GrabbedKey::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"Key combination[keysym="_s, $$str(this->keysym), ", mods="_s, $$str(this->modifiers), "]"_s});
}

XEmbedCanvasPeer$GrabbedKey::XEmbedCanvasPeer$GrabbedKey() {
}

$Class* XEmbedCanvasPeer$GrabbedKey::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$GrabbedKey, name, initialize, &_XEmbedCanvasPeer$GrabbedKey_ClassInfo_, allocate$XEmbedCanvasPeer$GrabbedKey);
	return class$;
}

$Class* XEmbedCanvasPeer$GrabbedKey::class$ = nullptr;

		} // X11
	} // awt
} // sun