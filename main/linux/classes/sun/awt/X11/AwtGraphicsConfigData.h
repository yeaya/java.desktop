#ifndef _sun_awt_X11_AwtGraphicsConfigData_h_
#define _sun_awt_X11_AwtGraphicsConfigData_h_
//$ class sun.awt.X11.AwtGraphicsConfigData
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
			class ColorData;
			class XRenderPictFormat;
			class XVisualInfo;
			class awtImageData;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class AwtGraphicsConfigData : public ::sun::awt::X11::XWrapperBase {
	$class(AwtGraphicsConfigData, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	AwtGraphicsConfigData();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_AwtColorMatch(int32_t index);
	virtual int64_t get_AwtColorMatch();
	virtual ::sun::awt::X11::awtImageData* get_awtImage(int32_t index);
	virtual int64_t get_awtImage();
	virtual int64_t get_awt_cmap();
	virtual int32_t get_awt_depth();
	virtual int32_t get_awt_num_colors();
	virtual ::sun::awt::X11::XVisualInfo* get_awt_visInfo();
	virtual ::sun::awt::X11::ColorData* get_color_data(int32_t index);
	virtual int64_t get_color_data();
	virtual int64_t get_glxInfo(int32_t index);
	virtual int64_t get_glxInfo();
	virtual int32_t get_isTranslucencySupported();
	virtual int64_t get_monoImage(int32_t index);
	virtual int64_t get_monoImage();
	virtual int64_t get_monoPixmap();
	virtual int64_t get_monoPixmapGC();
	virtual int32_t get_monoPixmapHeight();
	virtual int32_t get_monoPixmapWidth();
	virtual int32_t get_pixelStride();
	virtual ::sun::awt::X11::XRenderPictFormat* get_renderPictFormat();
	virtual void set_AwtColorMatch(int64_t v);
	virtual void set_awtImage(int64_t v);
	virtual void set_awt_cmap(int64_t v);
	virtual void set_awt_depth(int32_t v);
	virtual void set_awt_num_colors(int32_t v);
	virtual void set_color_data(int64_t v);
	virtual void set_glxInfo(int64_t v);
	virtual void set_isTranslucencySupported(int32_t v);
	virtual void set_monoImage(int64_t v);
	virtual void set_monoPixmap(int64_t v);
	virtual void set_monoPixmapGC(int64_t v);
	virtual void set_monoPixmapHeight(int32_t v);
	virtual void set_monoPixmapWidth(int32_t v);
	virtual void set_pixelStride(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_AwtGraphicsConfigData_h_