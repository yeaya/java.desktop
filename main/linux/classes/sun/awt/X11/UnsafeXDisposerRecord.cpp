#include <sun/awt/X11/UnsafeXDisposerRecord.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef WARNING

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _UnsafeXDisposerRecord_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnsafeXDisposerRecord, log)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC, $staticField(UnsafeXDisposerRecord, unsafe)},
	{"unsafe_ptrs", "[J", nullptr, $FINAL, $field(UnsafeXDisposerRecord, unsafe_ptrs)},
	{"x_ptrs", "[J", nullptr, $FINAL, $field(UnsafeXDisposerRecord, x_ptrs)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(UnsafeXDisposerRecord, name)},
	{"disposed", "Z", nullptr, $VOLATILE, $field(UnsafeXDisposerRecord, disposed)},
	{"place", "Ljava/lang/Throwable;", nullptr, $FINAL, $field(UnsafeXDisposerRecord, place)},
	{}
};

$MethodInfo _UnsafeXDisposerRecord_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[J[J)V", nullptr, $PUBLIC, $method(static_cast<void(UnsafeXDisposerRecord::*)($String*,$longs*,$longs*)>(&UnsafeXDisposerRecord::init$))},
	{"<init>", "(Ljava/lang/String;[J)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(UnsafeXDisposerRecord::*)($String*,$longs*)>(&UnsafeXDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnsafeXDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.UnsafeXDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_UnsafeXDisposerRecord_FieldInfo_,
	_UnsafeXDisposerRecord_MethodInfo_
};

$Object* allocate$UnsafeXDisposerRecord($Class* clazz) {
	return $of($alloc(UnsafeXDisposerRecord));
}

$PlatformLogger* UnsafeXDisposerRecord::log = nullptr;
$Unsafe* UnsafeXDisposerRecord::unsafe = nullptr;

void UnsafeXDisposerRecord::init$($String* name, $longs* unsafe_ptrs, $longs* x_ptrs) {
	$set(this, unsafe_ptrs, unsafe_ptrs);
	$set(this, x_ptrs, x_ptrs);
	$set(this, name, name);
	$init($XlibWrapper);
	if ($XlibWrapper::isBuildInternal) {
		$set(this, place, $new($Throwable));
	} else {
		$set(this, place, nullptr);
	}
}

void UnsafeXDisposerRecord::init$($String* name, $longs* unsafe_ptrs) {
	$set(this, unsafe_ptrs, unsafe_ptrs);
	$set(this, x_ptrs, nullptr);
	$set(this, name, name);
	$init($XlibWrapper);
	if ($XlibWrapper::isBuildInternal) {
		$set(this, place, $new($Throwable));
	} else {
		$set(this, place, nullptr);
	}
}

void UnsafeXDisposerRecord::dispose() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!this->disposed) {
				$init($XlibWrapper);
				bool var$1 = $XlibWrapper::isBuildInternal && "Java2D Disposer"_s->equals($($($Thread::currentThread())->getName()));
				$init($PlatformLogger$Level);
				if (var$1 && $nc(UnsafeXDisposerRecord::log)->isLoggable($PlatformLogger$Level::WARNING)) {
					if (this->place != nullptr) {
						$nc(UnsafeXDisposerRecord::log)->warning($$str({this->name, " object was not disposed before finalization!"_s}), this->place);
					} else {
						$nc(UnsafeXDisposerRecord::log)->warning($$str({this->name, " object was not disposed before finalization!"_s}));
					}
				}
				if (this->unsafe_ptrs != nullptr) {
					{
						$var($longs, arr$, this->unsafe_ptrs);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							int64_t l = arr$->get(i$);
							{
								if (l != 0) {
									$nc(UnsafeXDisposerRecord::unsafe)->freeMemory(l);
								}
							}
						}
					}
				}
				if (this->x_ptrs != nullptr) {
					{
						$var($longs, arr$, this->x_ptrs);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							int64_t l = arr$->get(i$);
							{
								if (l != 0) {
									if ($Native::getLong(l) != 0) {
										$XlibWrapper::XFree($Native::getLong(l));
									}
									$nc(UnsafeXDisposerRecord::unsafe)->freeMemory(l);
								}
							}
						}
					}
				}
				this->disposed = true;
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$UnsafeXDisposerRecord($Class* class$) {
	$assignStatic(UnsafeXDisposerRecord::log, $PlatformLogger::getLogger("sun.awt.X11.UnsafeXDisposerRecord"_s));
	$init($XlibWrapper);
	$assignStatic(UnsafeXDisposerRecord::unsafe, $XlibWrapper::unsafe);
}

UnsafeXDisposerRecord::UnsafeXDisposerRecord() {
}

$Class* UnsafeXDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(UnsafeXDisposerRecord, name, initialize, &_UnsafeXDisposerRecord_ClassInfo_, clinit$UnsafeXDisposerRecord, allocate$UnsafeXDisposerRecord);
	return class$;
}

$Class* UnsafeXDisposerRecord::class$ = nullptr;

		} // X11
	} // awt
} // sun