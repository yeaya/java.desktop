#ifndef _sun_awt_X11_XQueryTree_h_
#define _sun_awt_X11_XQueryTree_h_
//$ class sun.awt.X11.XQueryTree
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class XErrorHandler;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XQueryTree : public ::java::lang::Object {
	$class(XQueryTree, 0, ::java::lang::Object)
public:
	XQueryTree();
	void init$(int64_t w);
	virtual void dispose();
	virtual int32_t execute();
	virtual int32_t execute(::sun::awt::X11::XErrorHandler* errorHandler);
	virtual int64_t get_children();
	virtual int32_t get_nchildren();
	virtual int64_t get_parent();
	virtual int64_t get_root();
	virtual int64_t get_w();
	virtual bool isDisposed();
	virtual bool isExecuted();
	virtual void set_children(int64_t data);
	virtual void set_nchildren(int32_t data);
	virtual void set_parent(int64_t data);
	virtual void set_root(int64_t data);
	virtual void set_w(int64_t data);
	static ::jdk::internal::misc::Unsafe* unsafe;
	bool __executed = false;
	int64_t _w = 0;
	int64_t root_ptr = 0;
	int64_t parent_ptr = 0;
	int64_t children_ptr = 0;
	int64_t nchildren_ptr = 0;
	::sun::awt::X11::UnsafeXDisposerRecord* disposer = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XQueryTree_h_