#ifndef _sun_awt_X11_XTranslateCoordinates_h_
#define _sun_awt_X11_XTranslateCoordinates_h_
//$ class sun.awt.X11.XTranslateCoordinates
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

class XTranslateCoordinates : public ::java::lang::Object {
	$class(XTranslateCoordinates, 0, ::java::lang::Object)
public:
	XTranslateCoordinates();
	void init$(int64_t scr_w, int64_t dest_w, int32_t src_x, int32_t src_y);
	virtual void dispose();
	virtual int32_t execute();
	virtual int32_t execute(::sun::awt::X11::XErrorHandler* errorHandler);
	virtual int64_t get_child();
	virtual int64_t get_dest_w();
	virtual int32_t get_dest_x();
	virtual int32_t get_dest_y();
	virtual int64_t get_scr_w();
	virtual int32_t get_src_x();
	virtual int32_t get_src_y();
	virtual bool isDisposed();
	virtual bool isExecuted();
	virtual void set_child(int64_t data);
	virtual void set_dest_w(int64_t data);
	virtual void set_dest_x(int32_t data);
	virtual void set_dest_y(int32_t data);
	virtual void set_scr_w(int64_t data);
	virtual void set_src_x(int32_t data);
	virtual void set_src_y(int32_t data);
	static ::jdk::internal::misc::Unsafe* unsafe;
	bool __executed = false;
	int64_t _scr_w = 0;
	int64_t _dest_w = 0;
	int32_t _src_x = 0;
	int32_t _src_y = 0;
	int64_t dest_x_ptr = 0;
	int64_t dest_y_ptr = 0;
	int64_t child_ptr = 0;
	::sun::awt::X11::UnsafeXDisposerRecord* disposer = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTranslateCoordinates_h_