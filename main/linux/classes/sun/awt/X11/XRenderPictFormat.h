#ifndef _sun_awt_X11_XRenderPictFormat_h_
#define _sun_awt_X11_XRenderPictFormat_h_
//$ class sun.awt.X11.XRenderPictFormat
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
			class XRenderDirectFormat;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XRenderPictFormat : public ::sun::awt::X11::XWrapperBase {
	$class(XRenderPictFormat, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XRenderPictFormat();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_colormap();
	virtual int32_t get_depth();
	virtual ::sun::awt::X11::XRenderDirectFormat* get_direct();
	virtual int64_t get_id();
	virtual int32_t get_type();
	virtual void set_colormap(int64_t v);
	virtual void set_depth(int32_t v);
	virtual void set_id(int64_t v);
	virtual void set_type(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRenderPictFormat_h_