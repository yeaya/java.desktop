#ifndef _sun_awt_X11_XImage_h_
#define _sun_awt_X11_XImage_h_
//$ class sun.awt.X11.XImage
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

class XImage : public ::sun::awt::X11::XWrapperBase {
	$class(XImage, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XImage();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_bitmap_bit_order();
	virtual int32_t get_bitmap_pad();
	virtual int32_t get_bitmap_unit();
	virtual int32_t get_bits_per_pixel();
	virtual int64_t get_blue_mask();
	virtual int32_t get_byte_order();
	virtual int32_t get_bytes_per_line();
	virtual int8_t get_data(int32_t index);
	virtual int64_t get_data();
	virtual int32_t get_depth();
	virtual int64_t get_f_add_pixel(int32_t index);
	virtual int64_t get_f_add_pixel();
	virtual int64_t get_f_create_image(int32_t index);
	virtual int64_t get_f_create_image();
	virtual int64_t get_f_destroy_image(int32_t index);
	virtual int64_t get_f_destroy_image();
	virtual int64_t get_f_get_pixel(int32_t index);
	virtual int64_t get_f_get_pixel();
	virtual int64_t get_f_put_pixel(int32_t index);
	virtual int64_t get_f_put_pixel();
	virtual int64_t get_f_sub_image(int32_t index);
	virtual int64_t get_f_sub_image();
	virtual int32_t get_format();
	virtual int64_t get_green_mask();
	virtual int32_t get_height();
	virtual int64_t get_obdata(int32_t index);
	virtual int64_t get_obdata();
	virtual int64_t get_red_mask();
	virtual int32_t get_width();
	virtual int32_t get_xoffset();
	virtual void set_bitmap_bit_order(int32_t v);
	virtual void set_bitmap_pad(int32_t v);
	virtual void set_bitmap_unit(int32_t v);
	virtual void set_bits_per_pixel(int32_t v);
	virtual void set_blue_mask(int64_t v);
	virtual void set_byte_order(int32_t v);
	virtual void set_bytes_per_line(int32_t v);
	virtual void set_data(int64_t v);
	virtual void set_depth(int32_t v);
	virtual void set_f_add_pixel(int64_t v);
	virtual void set_f_create_image(int64_t v);
	virtual void set_f_destroy_image(int64_t v);
	virtual void set_f_get_pixel(int64_t v);
	virtual void set_f_put_pixel(int64_t v);
	virtual void set_f_sub_image(int64_t v);
	virtual void set_format(int32_t v);
	virtual void set_green_mask(int64_t v);
	virtual void set_height(int32_t v);
	virtual void set_obdata(int64_t v);
	virtual void set_red_mask(int64_t v);
	virtual void set_width(int32_t v);
	virtual void set_xoffset(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XImage_h_