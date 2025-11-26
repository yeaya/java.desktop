#ifndef _sun_awt_X11_XSetWindowAttributes_h_
#define _sun_awt_X11_XSetWindowAttributes_h_
//$ class sun.awt.X11.XSetWindowAttributes
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

class XSetWindowAttributes : public ::sun::awt::X11::XWrapperBase {
	$class(XSetWindowAttributes, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XSetWindowAttributes();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_background_pixel();
	virtual int64_t get_background_pixmap();
	virtual int64_t get_backing_pixel();
	virtual int64_t get_backing_planes();
	virtual int32_t get_backing_store();
	virtual int32_t get_bit_gravity();
	virtual int64_t get_border_pixel();
	virtual int64_t get_border_pixmap();
	virtual int64_t get_colormap();
	virtual int64_t get_cursor();
	virtual int64_t get_do_not_propagate_mask();
	virtual int64_t get_event_mask();
	virtual bool get_override_redirect();
	virtual bool get_save_under();
	virtual int32_t get_win_gravity();
	virtual void set_background_pixel(int64_t v);
	virtual void set_background_pixmap(int64_t v);
	virtual void set_backing_pixel(int64_t v);
	virtual void set_backing_planes(int64_t v);
	virtual void set_backing_store(int32_t v);
	virtual void set_bit_gravity(int32_t v);
	virtual void set_border_pixel(int64_t v);
	virtual void set_border_pixmap(int64_t v);
	virtual void set_colormap(int64_t v);
	virtual void set_cursor(int64_t v);
	virtual void set_do_not_propagate_mask(int64_t v);
	virtual void set_event_mask(int64_t v);
	virtual void set_override_redirect(bool v);
	virtual void set_save_under(bool v);
	virtual void set_win_gravity(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XSetWindowAttributes_h_