#ifndef _sun_awt_X11_XWindowAttributes_h_
#define _sun_awt_X11_XWindowAttributes_h_
//$ class sun.awt.X11.XWindowAttributes
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
			class Screen;
			class Visual;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XWindowAttributes : public ::sun::awt::X11::XWrapperBase {
	$class(XWindowAttributes, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XWindowAttributes();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_all_event_masks();
	virtual int64_t get_backing_pixel();
	virtual int64_t get_backing_planes();
	virtual int32_t get_backing_store();
	virtual int32_t get_bit_gravity();
	virtual int32_t get_border_width();
	virtual int32_t get_class();
	virtual int64_t get_colormap();
	virtual int32_t get_depth();
	virtual int64_t get_do_not_propagate_mask();
	virtual int32_t get_height();
	virtual bool get_map_installed();
	virtual int32_t get_map_state();
	virtual bool get_override_redirect();
	virtual int64_t get_root();
	virtual bool get_save_under();
	virtual ::sun::awt::X11::Screen* get_screen(int32_t index);
	virtual int64_t get_screen();
	virtual ::sun::awt::X11::Visual* get_visual(int32_t index);
	virtual int64_t get_visual();
	virtual int32_t get_width();
	virtual int32_t get_win_gravity();
	virtual int32_t get_x();
	virtual int32_t get_y();
	virtual int64_t get_your_event_mask();
	virtual void set_all_event_masks(int64_t v);
	virtual void set_backing_pixel(int64_t v);
	virtual void set_backing_planes(int64_t v);
	virtual void set_backing_store(int32_t v);
	virtual void set_bit_gravity(int32_t v);
	virtual void set_border_width(int32_t v);
	virtual void set_class(int32_t v);
	virtual void set_colormap(int64_t v);
	virtual void set_depth(int32_t v);
	virtual void set_do_not_propagate_mask(int64_t v);
	virtual void set_height(int32_t v);
	virtual void set_map_installed(bool v);
	virtual void set_map_state(int32_t v);
	virtual void set_override_redirect(bool v);
	virtual void set_root(int64_t v);
	virtual void set_save_under(bool v);
	virtual void set_screen(int64_t v);
	virtual void set_visual(int64_t v);
	virtual void set_width(int32_t v);
	virtual void set_win_gravity(int32_t v);
	virtual void set_x(int32_t v);
	virtual void set_y(int32_t v);
	virtual void set_your_event_mask(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XWindowAttributes_h_