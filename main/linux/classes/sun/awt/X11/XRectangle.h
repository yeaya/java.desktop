#ifndef _sun_awt_X11_XRectangle_h_
#define _sun_awt_X11_XRectangle_h_
//$ class sun.awt.X11.XRectangle
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

class XRectangle : public ::sun::awt::X11::XWrapperBase {
	$class(XRectangle, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XRectangle();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int16_t get_height();
	virtual int16_t get_width();
	virtual int16_t get_x();
	virtual int16_t get_y();
	virtual void set_height(int16_t v);
	virtual void set_width(int16_t v);
	virtual void set_x(int16_t v);
	virtual void set_y(int16_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRectangle_h_