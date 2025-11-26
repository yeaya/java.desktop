#ifndef _sun_awt_X11_XPixmapFormatValues_h_
#define _sun_awt_X11_XPixmapFormatValues_h_
//$ class sun.awt.X11.XPixmapFormatValues
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

class XPixmapFormatValues : public ::sun::awt::X11::XWrapperBase {
	$class(XPixmapFormatValues, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XPixmapFormatValues();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_bits_per_pixel();
	virtual int32_t get_depth();
	virtual int32_t get_scanline_pad();
	virtual void set_bits_per_pixel(int32_t v);
	virtual void set_depth(int32_t v);
	virtual void set_scanline_pad(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XPixmapFormatValues_h_