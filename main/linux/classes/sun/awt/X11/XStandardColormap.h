#ifndef _sun_awt_X11_XStandardColormap_h_
#define _sun_awt_X11_XStandardColormap_h_
//$ class sun.awt.X11.XStandardColormap
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

class XStandardColormap : public ::sun::awt::X11::XWrapperBase {
	$class(XStandardColormap, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XStandardColormap();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_base_pixel();
	virtual int64_t get_blue_max();
	virtual int64_t get_blue_mult();
	virtual int64_t get_colormap();
	virtual int64_t get_green_max();
	virtual int64_t get_green_mult();
	virtual int64_t get_killid();
	virtual int64_t get_red_max();
	virtual int64_t get_red_mult();
	virtual int64_t get_visualid();
	virtual void set_base_pixel(int64_t v);
	virtual void set_blue_max(int64_t v);
	virtual void set_blue_mult(int64_t v);
	virtual void set_colormap(int64_t v);
	virtual void set_green_max(int64_t v);
	virtual void set_green_mult(int64_t v);
	virtual void set_killid(int64_t v);
	virtual void set_red_max(int64_t v);
	virtual void set_red_mult(int64_t v);
	virtual void set_visualid(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XStandardColormap_h_