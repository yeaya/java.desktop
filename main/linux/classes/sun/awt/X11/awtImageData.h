#ifndef _sun_awt_X11_awtImageData_h_
#define _sun_awt_X11_awtImageData_h_
//$ class sun.awt.X11.awtImageData
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
			class XPixmapFormatValues;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class awtImageData : public ::sun::awt::X11::XWrapperBase {
	$class(awtImageData, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	awtImageData();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_Depth();
	virtual int64_t get_clrdata(int32_t index);
	virtual int64_t get_clrdata();
	virtual int64_t get_convert(int32_t index);
	virtual int64_t get_convert();
	virtual ::sun::awt::X11::XPixmapFormatValues* get_wsImageFormat();
	virtual void set_Depth(int32_t v);
	virtual void set_clrdata(int64_t v);
	virtual void set_convert(int32_t index, int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_awtImageData_h_