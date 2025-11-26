#ifndef _sun_awt_X11_XOMOrientation_h_
#define _sun_awt_X11_XOMOrientation_h_
//$ class sun.awt.X11.XOMOrientation
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

class XOMOrientation : public ::sun::awt::X11::XWrapperBase {
	$class(XOMOrientation, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XOMOrientation();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_num_orientation();
	virtual int32_t get_orientation(int32_t index);
	virtual int64_t get_orientation();
	virtual void set_num_orientation(int32_t v);
	virtual void set_orientation(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XOMOrientation_h_