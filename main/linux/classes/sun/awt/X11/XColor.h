#ifndef _sun_awt_X11_XColor_h_
#define _sun_awt_X11_XColor_h_
//$ class sun.awt.X11.XColor
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

class XColor : public ::sun::awt::X11::XWrapperBase {
	$class(XColor, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XColor();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int16_t get_blue();
	virtual int8_t get_flags();
	virtual int16_t get_green();
	virtual int8_t get_pad();
	virtual int64_t get_pixel();
	virtual int16_t get_red();
	virtual void set_blue(int16_t v);
	virtual void set_flags(int8_t v);
	virtual void set_green(int16_t v);
	virtual void set_pad(int8_t v);
	virtual void set_pixel(int64_t v);
	virtual void set_red(int16_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XColor_h_