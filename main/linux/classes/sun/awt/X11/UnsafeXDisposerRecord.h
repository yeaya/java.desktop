#ifndef _sun_awt_X11_UnsafeXDisposerRecord_h_
#define _sun_awt_X11_UnsafeXDisposerRecord_h_
//$ class sun.awt.X11.UnsafeXDisposerRecord
//$ extends sun.java2d.DisposerRecord

#include <java/lang/Array.h>
#include <sun/java2d/DisposerRecord.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class UnsafeXDisposerRecord : public ::sun::java2d::DisposerRecord {
	$class(UnsafeXDisposerRecord, 0, ::sun::java2d::DisposerRecord)
public:
	UnsafeXDisposerRecord();
	void init$($String* name, $longs* unsafe_ptrs, $longs* x_ptrs);
	void init$($String* name, $longs* unsafe_ptrs);
	virtual void dispose() override;
	static ::sun::util::logging::PlatformLogger* log;
	static ::jdk::internal::misc::Unsafe* unsafe;
	$longs* unsafe_ptrs = nullptr;
	$longs* x_ptrs = nullptr;
	$String* name = nullptr;
	$volatile(bool) disposed = false;
	$Throwable* place = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_UnsafeXDisposerRecord_h_