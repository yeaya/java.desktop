#ifndef _sun_awt_X11_Screen_h_
#define _sun_awt_X11_Screen_h_
//$ class sun.awt.X11.Screen
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
			class Depth;
			class Visual;
			class XExtData;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class Screen : public ::sun::awt::X11::XWrapperBase {
	$class(Screen, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	Screen();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_backing_store();
	virtual int64_t get_black_pixel();
	virtual int64_t get_cmap();
	virtual int64_t get_default_gc();
	virtual ::sun::awt::X11::Depth* get_depths(int32_t index);
	virtual int64_t get_depths();
	virtual int64_t get_display(int32_t index);
	virtual int64_t get_display();
	virtual ::sun::awt::X11::XExtData* get_ext_data(int32_t index);
	virtual int64_t get_ext_data();
	virtual int32_t get_height();
	virtual int32_t get_max_maps();
	virtual int32_t get_mheight();
	virtual int32_t get_min_maps();
	virtual int32_t get_mwidth();
	virtual int32_t get_ndepths();
	virtual int64_t get_root();
	virtual int32_t get_root_depth();
	virtual int64_t get_root_input_mask();
	virtual ::sun::awt::X11::Visual* get_root_visual(int32_t index);
	virtual int64_t get_root_visual();
	virtual bool get_save_unders();
	virtual int64_t get_white_pixel();
	virtual int32_t get_width();
	virtual void set_backing_store(int32_t v);
	virtual void set_black_pixel(int64_t v);
	virtual void set_cmap(int64_t v);
	virtual void set_default_gc(int64_t v);
	virtual void set_depths(int64_t v);
	virtual void set_display(int64_t v);
	virtual void set_ext_data(int64_t v);
	virtual void set_height(int32_t v);
	virtual void set_max_maps(int32_t v);
	virtual void set_mheight(int32_t v);
	virtual void set_min_maps(int32_t v);
	virtual void set_mwidth(int32_t v);
	virtual void set_ndepths(int32_t v);
	virtual void set_root(int64_t v);
	virtual void set_root_depth(int32_t v);
	virtual void set_root_input_mask(int64_t v);
	virtual void set_root_visual(int64_t v);
	virtual void set_save_unders(bool v);
	virtual void set_white_pixel(int64_t v);
	virtual void set_width(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_Screen_h_