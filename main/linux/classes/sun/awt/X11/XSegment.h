#ifndef _sun_awt_X11_XSegment_h_
#define _sun_awt_X11_XSegment_h_
//$ class sun.awt.X11.XSegment
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

class XSegment : public ::sun::awt::X11::XWrapperBase {
	$class(XSegment, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XSegment();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int16_t get_x1();
	virtual int16_t get_x2();
	virtual int16_t get_y1();
	virtual int16_t get_y2();
	virtual void set_x1(int16_t v);
	virtual void set_x2(int16_t v);
	virtual void set_y1(int16_t v);
	virtual void set_y2(int16_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XSegment_h_