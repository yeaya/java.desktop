#ifndef _sun_awt_X11_WindowPropertyGetter_h_
#define _sun_awt_X11_WindowPropertyGetter_h_
//$ class sun.awt.X11.WindowPropertyGetter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
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
	namespace awt {
		namespace X11 {
			class UnsafeXDisposerRecord;
			class XAtom;
			class XErrorHandler;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class WindowPropertyGetter : public ::java::lang::Object {
	$class(WindowPropertyGetter, 0, ::java::lang::Object)
public:
	WindowPropertyGetter();
	void init$(int64_t window, ::sun::awt::X11::XAtom* property, int64_t offset, int64_t length, bool auto_delete, int64_t type);
	void init$(int64_t window, ::sun::awt::X11::XAtom* property, int64_t offset, int64_t length, bool auto_delete, ::sun::awt::X11::XAtom* type);
	virtual void cacheProperty();
	virtual void dispose();
	virtual int32_t execute();
	virtual int32_t execute(::sun::awt::X11::XErrorHandler* errorHandler);
	virtual int32_t getActualFormat();
	virtual int64_t getActualType();
	virtual int64_t getBytesAfter();
	virtual int64_t getData();
	virtual int32_t getDataLength();
	virtual int32_t getNumberOfItems();
	static bool isCacheableProperty(::sun::awt::X11::XAtom* property);
	virtual bool isCached();
	static bool isCachingSupported();
	virtual bool isDisposed();
	virtual bool isExecuted();
	virtual void readFromCache();
	static ::jdk::internal::misc::Unsafe* unsafe;
	int64_t actual_type = 0;
	int64_t actual_format = 0;
	int64_t nitems_ptr = 0;
	int64_t bytes_after = 0;
	int64_t data = 0;
	int64_t window = 0;
	::sun::awt::X11::XAtom* property = nullptr;
	int64_t offset = 0;
	int64_t length = 0;
	bool auto_delete = false;
	int64_t type = 0;
	bool executed = false;
	::sun::awt::X11::UnsafeXDisposerRecord* disposer = nullptr;
	static ::java::util::Set* cacheableProperties;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_WindowPropertyGetter_h_