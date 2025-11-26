#include <sun/awt/X11/WindowPropertyGetter.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/UnsafeXDisposerRecord.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XPropertyCache$PropertyCacheEntry.h>
#include <sun/awt/X11/XPropertyCache.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $XAtomArray = $Array<::sun::awt::X11::XAtom>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $UnsafeXDisposerRecord = ::sun::awt::X11::UnsafeXDisposerRecord;
using $XAtom = ::sun::awt::X11::XAtom;
using $XConstants = ::sun::awt::X11::XConstants;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XPropertyCache = ::sun::awt::X11::XPropertyCache;
using $XPropertyCache$PropertyCacheEntry = ::sun::awt::X11::XPropertyCache$PropertyCacheEntry;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _WindowPropertyGetter_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(WindowPropertyGetter, unsafe)},
	{"actual_type", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, actual_type)},
	{"actual_format", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, actual_format)},
	{"nitems_ptr", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, nitems_ptr)},
	{"bytes_after", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, bytes_after)},
	{"data", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, data)},
	{"window", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, window)},
	{"property", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, property)},
	{"offset", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, offset)},
	{"length", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, length)},
	{"auto_delete", "Z", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, auto_delete)},
	{"type", "J", nullptr, $PRIVATE | $FINAL, $field(WindowPropertyGetter, type)},
	{"executed", "Z", nullptr, $PRIVATE, $field(WindowPropertyGetter, executed)},
	{"disposer", "Lsun/awt/X11/UnsafeXDisposerRecord;", nullptr, 0, $field(WindowPropertyGetter, disposer)},
	{"cacheableProperties", "Ljava/util/Set;", "Ljava/util/Set<Lsun/awt/X11/XAtom;>;", $STATIC, $staticField(WindowPropertyGetter, cacheableProperties)},
	{}
};

$MethodInfo _WindowPropertyGetter_MethodInfo_[] = {
	{"<init>", "(JLsun/awt/X11/XAtom;JJZJ)V", nullptr, $PUBLIC, $method(static_cast<void(WindowPropertyGetter::*)(int64_t,$XAtom*,int64_t,int64_t,bool,int64_t)>(&WindowPropertyGetter::init$))},
	{"<init>", "(JLsun/awt/X11/XAtom;JJZLsun/awt/X11/XAtom;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowPropertyGetter::*)(int64_t,$XAtom*,int64_t,int64_t,bool,$XAtom*)>(&WindowPropertyGetter::init$))},
	{"cacheProperty", "()V", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"execute", "()I", nullptr, $PUBLIC},
	{"execute", "(Lsun/awt/X11/XErrorHandler;)I", nullptr, $PUBLIC},
	{"getActualFormat", "()I", nullptr, $PUBLIC},
	{"getActualType", "()J", nullptr, $PUBLIC},
	{"getBytesAfter", "()J", nullptr, $PUBLIC},
	{"getData", "()J", nullptr, $PUBLIC},
	{"getDataLength", "()I", nullptr, 0},
	{"getNumberOfItems", "()I", nullptr, $PUBLIC},
	{"isCacheableProperty", "(Lsun/awt/X11/XAtom;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XAtom*)>(&WindowPropertyGetter::isCacheableProperty))},
	{"isCached", "()Z", nullptr, 0},
	{"isCachingSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&WindowPropertyGetter::isCachingSupported))},
	{"isDisposed", "()Z", nullptr, $PUBLIC},
	{"isExecuted", "()Z", nullptr, $PUBLIC},
	{"readFromCache", "()V", nullptr, 0},
	{}
};

$ClassInfo _WindowPropertyGetter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.WindowPropertyGetter",
	"java.lang.Object",
	nullptr,
	_WindowPropertyGetter_FieldInfo_,
	_WindowPropertyGetter_MethodInfo_
};

$Object* allocate$WindowPropertyGetter($Class* clazz) {
	return $of($alloc(WindowPropertyGetter));
}

$Unsafe* WindowPropertyGetter::unsafe = nullptr;
$Set* WindowPropertyGetter::cacheableProperties = nullptr;

void WindowPropertyGetter::init$(int64_t window, $XAtom* property, int64_t offset, int64_t length, bool auto_delete, int64_t type) {
	$useLocalCurrentObjectStackCache();
	this->actual_type = $nc(WindowPropertyGetter::unsafe)->allocateMemory(8);
	this->actual_format = $nc(WindowPropertyGetter::unsafe)->allocateMemory(4);
	this->nitems_ptr = $nc(WindowPropertyGetter::unsafe)->allocateMemory(8);
	this->bytes_after = $nc(WindowPropertyGetter::unsafe)->allocateMemory(8);
	this->data = $nc(WindowPropertyGetter::unsafe)->allocateMemory(8);
	this->executed = false;
	if ($nc(property)->getAtom() == 0) {
		$throwNew($IllegalArgumentException, $$str({"Property ATOM should be initialized first:"_s, property}));
	}
	if (window == 0) {
		$throwNew($IllegalArgumentException, "Window must not be zero"_s);
	}
	this->window = window;
	$set(this, property, property);
	this->offset = offset;
	this->length = length;
	this->auto_delete = auto_delete;
	this->type = type;
	$Native::putLong(this->data, (int64_t)0);
	$Disposer::addRecord(this, ($set(this, disposer, $new($UnsafeXDisposerRecord, "WindowPropertyGetter"_s, $$new($longs, {
		this->actual_type,
		this->actual_format,
		this->nitems_ptr,
		this->bytes_after
	}), $$new($longs, {this->data})))));
}

void WindowPropertyGetter::init$(int64_t window, $XAtom* property, int64_t offset, int64_t length, bool auto_delete, $XAtom* type) {
	WindowPropertyGetter::init$(window, property, offset, length, auto_delete, $nc(type)->getAtom());
}

int32_t WindowPropertyGetter::execute() {
	return execute(nullptr);
}

int32_t WindowPropertyGetter::execute($XErrorHandler* errorHandler$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XErrorHandler, errorHandler, errorHandler$renamed);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (isDisposed()) {
				$throwNew($IllegalStateException, "Disposed"_s);
			}
			if (this->executed) {
				$throwNew($IllegalStateException, "Already executed"_s);
			}
			this->executed = true;
			bool var$3 = isCachingSupported();
			if (var$3 && isCached()) {
				readFromCache();
				var$2 = $XConstants::Success;
				return$1 = true;
				goto $finally;
			}
			if ($instanceOf($XErrorHandler$IgnoreBadWindowHandler, errorHandler)) {
				$assign(errorHandler, nullptr);
			}
			if (errorHandler != nullptr) {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER(errorHandler);
			}
			$Native::putLong(this->data, (int64_t)0);
			int64_t var$4 = $XToolkit::getDisplay();
			int64_t var$5 = this->window;
			int32_t status = $XlibWrapper::XGetWindowProperty(var$4, var$5, $nc(this->property)->getAtom(), this->offset, this->length, (this->auto_delete ? 1 : 0), this->type, this->actual_type, this->actual_format, this->nitems_ptr, this->bytes_after, this->data);
			bool var$7 = isCachingSupported() && status == $XConstants::Success;
			bool var$6 = var$7 && getData() != 0;
			if (var$6 && isCacheableProperty(this->property)) {
				cacheProperty();
			}
			if (errorHandler != nullptr) {
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			}
			var$2 = status;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool WindowPropertyGetter::isExecuted() {
	return this->executed;
}

bool WindowPropertyGetter::isDisposed() {
	return $nc(this->disposer)->disposed;
}

int32_t WindowPropertyGetter::getActualFormat() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $nc(WindowPropertyGetter::unsafe)->getInt(this->actual_format);
}

int64_t WindowPropertyGetter::getActualType() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $XAtom::getAtom(this->actual_type);
}

int32_t WindowPropertyGetter::getNumberOfItems() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return (int32_t)$Native::getLong(this->nitems_ptr);
}

int64_t WindowPropertyGetter::getData() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	return $Native::getLong(this->data);
}

int64_t WindowPropertyGetter::getBytesAfter() {
	if (isDisposed()) {
		$throwNew($IllegalStateException, "Disposed"_s);
	}
	if (!this->executed) {
		$throwNew($IllegalStateException, "Not executed"_s);
	}
	return $Native::getLong(this->bytes_after);
}

void WindowPropertyGetter::dispose() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (isDisposed()) {
				return$1 = true;
				goto $finally;
			}
			$nc(this->disposer)->dispose();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool WindowPropertyGetter::isCachingSupported() {
	$init(WindowPropertyGetter);
	return $XPropertyCache::isCachingSupported();
}

bool WindowPropertyGetter::isCacheableProperty($XAtom* property) {
	$init(WindowPropertyGetter);
	return $nc(WindowPropertyGetter::cacheableProperties)->contains(property);
}

bool WindowPropertyGetter::isCached() {
	return $XPropertyCache::isCached(this->window, this->property);
}

int32_t WindowPropertyGetter::getDataLength() {
	int32_t var$0 = getActualFormat() / 8;
	return var$0 * getNumberOfItems();
}

void WindowPropertyGetter::readFromCache() {
	$nc(this->property)->putAtom(this->actual_type);
	$var($XPropertyCache$PropertyCacheEntry, entry, $XPropertyCache::getCacheEntry(this->window, this->property));
	$Native::putInt(this->actual_format, $nc(entry)->getFormat());
	$Native::putLong(this->nitems_ptr, (int64_t)$nc(entry)->getNumberOfItems());
	$Native::putLong(this->bytes_after, $nc(entry)->getBytesAfter());
	$Native::putLong(this->data, $nc(WindowPropertyGetter::unsafe)->allocateMemory(getDataLength()));
	int64_t var$0 = getData();
	int64_t var$1 = $nc(entry)->getData();
	$XlibWrapper::memcpy(var$0, var$1, getDataLength());
}

void WindowPropertyGetter::cacheProperty() {
	int32_t var$0 = getActualFormat();
	int32_t var$1 = getNumberOfItems();
	int64_t var$2 = getBytesAfter();
	int64_t var$3 = getData();
	$XPropertyCache::storeCache($$new($XPropertyCache$PropertyCacheEntry, var$0, var$1, var$2, var$3, getDataLength()), this->window, this->property);
}

void clinit$WindowPropertyGetter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($XlibWrapper);
	$assignStatic(WindowPropertyGetter::unsafe, $XlibWrapper::unsafe);
	$assignStatic(WindowPropertyGetter::cacheableProperties, $new($HashSet, $(static_cast<$Collection*>($Arrays::asList($$new($XAtomArray, {
		$($XAtom::get("_NET_WM_STATE"_s)),
		$($XAtom::get("WM_STATE"_s)),
		$($XAtom::get("_MOTIF_WM_HINTS"_s))
	}))))));
}

WindowPropertyGetter::WindowPropertyGetter() {
}

$Class* WindowPropertyGetter::load$($String* name, bool initialize) {
	$loadClass(WindowPropertyGetter, name, initialize, &_WindowPropertyGetter_ClassInfo_, clinit$WindowPropertyGetter, allocate$WindowPropertyGetter);
	return class$;
}

$Class* WindowPropertyGetter::class$ = nullptr;

		} // X11
	} // awt
} // sun