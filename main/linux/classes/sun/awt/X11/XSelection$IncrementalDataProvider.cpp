#include <sun/awt/X11/XSelection$IncrementalDataProvider.h>

#include <java/lang/AssertionError.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

#undef MAX_PROPERTY_SIZE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSelection = ::sun::awt::X11::XSelection;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSelection$IncrementalDataProvider_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XSelection$IncrementalDataProvider, $assertionsDisabled)},
	{"requestor", "J", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, requestor)},
	{"property", "J", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, property)},
	{"target", "J", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, target)},
	{"format", "I", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, format)},
	{"data", "[B", nullptr, $PRIVATE | $FINAL, $field(XSelection$IncrementalDataProvider, data)},
	{"offset", "I", nullptr, $PRIVATE, $field(XSelection$IncrementalDataProvider, offset)},
	{}
};

$MethodInfo _XSelection$IncrementalDataProvider_MethodInfo_[] = {
	{"<init>", "(JJJI[B)V", nullptr, $PUBLIC, $method(static_cast<void(XSelection$IncrementalDataProvider::*)(int64_t,int64_t,int64_t,int32_t,$bytes*)>(&XSelection$IncrementalDataProvider::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSelection$IncrementalDataProvider_InnerClassesInfo_[] = {
	{"sun.awt.X11.XSelection$IncrementalDataProvider", "sun.awt.X11.XSelection", "IncrementalDataProvider", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XSelection$IncrementalDataProvider_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XSelection$IncrementalDataProvider",
	"java.lang.Object",
	"sun.awt.X11.XEventDispatcher",
	_XSelection$IncrementalDataProvider_FieldInfo_,
	_XSelection$IncrementalDataProvider_MethodInfo_,
	nullptr,
	nullptr,
	_XSelection$IncrementalDataProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XSelection"
};

$Object* allocate$XSelection$IncrementalDataProvider($Class* clazz) {
	return $of($alloc(XSelection$IncrementalDataProvider));
}

bool XSelection$IncrementalDataProvider::$assertionsDisabled = false;

void XSelection$IncrementalDataProvider::init$(int64_t requestor, int64_t property, int64_t target, int32_t format, $bytes* data) {
	$useLocalCurrentObjectStackCache();
	this->offset = 0;
	if (format != 8) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported format: "_s, $$str(format)}));
	}
	this->requestor = requestor;
	this->property = property;
	this->target = target;
	this->format = format;
	$set(this, data, data);
	$var($XWindowAttributes, wattr, $new($XWindowAttributes));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), requestor, wattr->pData);
					int64_t var$2 = $XToolkit::getDisplay();
					int64_t var$3 = requestor;
					$XlibWrapper::XSelectInput(var$2, var$3, wattr->get_your_event_mask() | $XConstants::PropertyChangeMask);
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			wattr->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$XToolkit::addEventDispatcher(requestor, this);
}

void XSelection$IncrementalDataProvider::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	{
		$var($XPropertyEvent, xpe, nullptr)
		switch ($nc(ev)->get_type()) {
		case $XConstants::PropertyNotify:
			{
				$assign(xpe, ev->get_xproperty());
				bool var$1 = $nc(xpe)->get_window() == this->requestor;
				bool var$0 = var$1 && xpe->get_state() == $XConstants::PropertyDelete;
				if (var$0 && xpe->get_atom() == this->property) {
					int32_t count = $nc(this->data)->length - this->offset;
					int64_t nativeDataPtr = 0;
					$init($XSelection);
					if (count > $XSelection::MAX_PROPERTY_SIZE) {
						count = $XSelection::MAX_PROPERTY_SIZE;
					}
					if (count > 0) {
						$init($XlibWrapper);
						nativeDataPtr = $nc($XlibWrapper::unsafe)->allocateMemory(count);
						for (int32_t i = 0; i < count; ++i) {
							$Native::putByte(nativeDataPtr + i, $nc(this->data)->get(this->offset + i));
						}
					} else {
						if (!XSelection$IncrementalDataProvider::$assertionsDisabled && !(count == 0)) {
							$throwNew($AssertionError);
						}
						$XToolkit::removeEventDispatcher(this->requestor, this);
					}
					$XToolkit::awtLock();
					{
						$var($Throwable, var$2, nullptr);
						try {
							$XlibWrapper::XChangeProperty($XToolkit::getDisplay(), this->requestor, this->property, this->target, this->format, $XConstants::PropModeReplace, nativeDataPtr, count);
						} catch ($Throwable& var$3) {
							$assign(var$2, var$3);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
					if (nativeDataPtr != 0) {
						$init($XlibWrapper);
						$nc($XlibWrapper::unsafe)->freeMemory(nativeDataPtr);
						nativeDataPtr = 0;
					}
					this->offset += count;
				}
			}
		}
	}
}

void clinit$XSelection$IncrementalDataProvider($Class* class$) {
	$load($XSelection);
	XSelection$IncrementalDataProvider::$assertionsDisabled = !$XSelection::class$->desiredAssertionStatus();
}

XSelection$IncrementalDataProvider::XSelection$IncrementalDataProvider() {
}

$Class* XSelection$IncrementalDataProvider::load$($String* name, bool initialize) {
	$loadClass(XSelection$IncrementalDataProvider, name, initialize, &_XSelection$IncrementalDataProvider_ClassInfo_, clinit$XSelection$IncrementalDataProvider, allocate$XSelection$IncrementalDataProvider);
	return class$;
}

$Class* XSelection$IncrementalDataProvider::class$ = nullptr;

		} // X11
	} // awt
} // sun