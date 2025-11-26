#ifndef _sun_awt_X11_XCharStruct_h_
#define _sun_awt_X11_XCharStruct_h_
//$ class sun.awt.X11.XCharStruct
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

class XCharStruct : public ::sun::awt::X11::XWrapperBase {
	$class(XCharStruct, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XCharStruct();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int16_t get_ascent();
	virtual int16_t get_attributes();
	virtual int16_t get_descent();
	virtual int16_t get_lbearing();
	virtual int16_t get_rbearing();
	virtual int16_t get_width();
	virtual void set_ascent(int16_t v);
	virtual void set_attributes(int16_t v);
	virtual void set_descent(int16_t v);
	virtual void set_lbearing(int16_t v);
	virtual void set_rbearing(int16_t v);
	virtual void set_width(int16_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCharStruct_h_