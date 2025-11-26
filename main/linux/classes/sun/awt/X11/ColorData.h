#ifndef _sun_awt_X11_ColorData_h_
#define _sun_awt_X11_ColorData_h_
//$ class sun.awt.X11.ColorData
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
			class ColorEntry;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class ColorData : public ::sun::awt::X11::XWrapperBase {
	$class(ColorData, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	ColorData();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual ::sun::awt::X11::ColorEntry* get_awt_Colors(int32_t index);
	virtual int64_t get_awt_Colors();
	virtual int32_t get_awt_icmLUT(int32_t index);
	virtual int64_t get_awt_icmLUT();
	virtual int8_t get_awt_icmLUT2Colors(int32_t index);
	virtual int64_t get_awt_icmLUT2Colors();
	virtual int32_t get_awt_numICMcolors();
	virtual int8_t get_img_clr_tbl(int32_t index);
	virtual int64_t get_img_clr_tbl();
	virtual int8_t get_img_grays(int32_t index);
	virtual int64_t get_img_grays();
	virtual int8_t get_img_oda_blue(int32_t index);
	virtual int64_t get_img_oda_blue();
	virtual int8_t get_img_oda_green(int32_t index);
	virtual int64_t get_img_oda_green();
	virtual int8_t get_img_oda_red(int32_t index);
	virtual int64_t get_img_oda_red();
	virtual int32_t get_pGrayInverseLutData(int32_t index);
	virtual int64_t get_pGrayInverseLutData();
	virtual int32_t get_representsPrimaries();
	virtual int32_t get_screendata();
	virtual void set_awt_Colors(int64_t v);
	virtual void set_awt_icmLUT(int64_t v);
	virtual void set_awt_icmLUT2Colors(int64_t v);
	virtual void set_awt_numICMcolors(int32_t v);
	virtual void set_img_clr_tbl(int64_t v);
	virtual void set_img_grays(int64_t v);
	virtual void set_img_oda_blue(int64_t v);
	virtual void set_img_oda_green(int64_t v);
	virtual void set_img_oda_red(int64_t v);
	virtual void set_pGrayInverseLutData(int64_t v);
	virtual void set_representsPrimaries(int32_t v);
	virtual void set_screendata(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_ColorData_h_