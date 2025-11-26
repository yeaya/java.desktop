#ifndef _sun_awt_X11_XExtData_h_
#define _sun_awt_X11_XExtData_h_
//$ class sun.awt.X11.XExtData
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

class XExtData : public ::sun::awt::X11::XWrapperBase {
	$class(XExtData, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XExtData();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_free_private(int32_t index);
	virtual int64_t get_free_private();
	virtual ::sun::awt::X11::XExtData* get_next(int32_t index);
	virtual int64_t get_next();
	virtual int32_t get_number();
	virtual int64_t get_private_data(int32_t index);
	virtual int64_t get_private_data();
	virtual void set_free_private(int64_t v);
	virtual void set_next(int64_t v);
	virtual void set_number(int32_t v);
	virtual void set_private_data(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XExtData_h_