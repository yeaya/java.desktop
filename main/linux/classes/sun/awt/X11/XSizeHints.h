#ifndef _sun_awt_X11_XSizeHints_h_
#define _sun_awt_X11_XSizeHints_h_
//$ class sun.awt.X11.XSizeHints
//$ extends sun.awt.X11.XWrapperBase

#include <sun/awt/X11/XWrapperBase.h>

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

class XSizeHints : public ::sun::awt::X11::XWrapperBase {
	$class(XSizeHints, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XSizeHints();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_base_height();
	virtual int32_t get_base_width();
	virtual int64_t get_flags();
	virtual int32_t get_height();
	virtual int32_t get_height_inc();
	virtual int32_t get_max_aspect_x();
	virtual int32_t get_max_aspect_y();
	virtual int32_t get_max_height();
	virtual int32_t get_max_width();
	virtual int32_t get_min_aspect_x();
	virtual int32_t get_min_aspect_y();
	virtual int32_t get_min_height();
	virtual int32_t get_min_width();
	virtual int32_t get_width();
	virtual int32_t get_width_inc();
	virtual int32_t get_win_gravity();
	virtual int32_t get_x();
	virtual int32_t get_y();
	virtual void set_base_height(int32_t v);
	virtual void set_base_width(int32_t v);
	virtual void set_flags(int64_t v);
	virtual void set_height(int32_t v);
	virtual void set_height_inc(int32_t v);
	virtual void set_max_aspect_x(int32_t v);
	virtual void set_max_aspect_y(int32_t v);
	virtual void set_max_height(int32_t v);
	virtual void set_max_width(int32_t v);
	virtual void set_min_aspect_x(int32_t v);
	virtual void set_min_aspect_y(int32_t v);
	virtual void set_min_height(int32_t v);
	virtual void set_min_width(int32_t v);
	virtual void set_width(int32_t v);
	virtual void set_width_inc(int32_t v);
	virtual void set_win_gravity(int32_t v);
	virtual void set_x(int32_t v);
	virtual void set_y(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XSizeHints_h_