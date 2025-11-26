#ifndef _sun_awt_X11_XRenderDirectFormat_h_
#define _sun_awt_X11_XRenderDirectFormat_h_
//$ class sun.awt.X11.XRenderDirectFormat
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

class XRenderDirectFormat : public ::sun::awt::X11::XWrapperBase {
	$class(XRenderDirectFormat, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XRenderDirectFormat();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int16_t get_alpha();
	virtual int16_t get_alphaMask();
	virtual int16_t get_blue();
	virtual int16_t get_blueMask();
	virtual int16_t get_green();
	virtual int16_t get_greenMask();
	virtual int16_t get_red();
	virtual int16_t get_redMask();
	virtual void set_alpha(int16_t v);
	virtual void set_alphaMask(int16_t v);
	virtual void set_blue(int16_t v);
	virtual void set_blueMask(int16_t v);
	virtual void set_green(int16_t v);
	virtual void set_greenMask(int16_t v);
	virtual void set_red(int16_t v);
	virtual void set_redMask(int16_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRenderDirectFormat_h_