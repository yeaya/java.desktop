#ifndef _sun_awt_X11_XFontSetExtents_h_
#define _sun_awt_X11_XFontSetExtents_h_
//$ class sun.awt.X11.XFontSetExtents
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
			class XRectangle;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFontSetExtents : public ::sun::awt::X11::XWrapperBase {
	$class(XFontSetExtents, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XFontSetExtents();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual ::sun::awt::X11::XRectangle* get_max_ink_extent();
	virtual ::sun::awt::X11::XRectangle* get_max_logical_extent();
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFontSetExtents_h_