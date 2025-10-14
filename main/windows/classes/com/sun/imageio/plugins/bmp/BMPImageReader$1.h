#ifndef _com_sun_imageio_plugins_bmp_BMPImageReader$1_h_
#define _com_sun_imageio_plugins_bmp_BMPImageReader$1_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageReader$1
//$ extends com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter

#include <com/sun/imageio/plugins/bmp/BMPImageReader$EmbeddedProgressAdapter.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {
					class BMPImageReader;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageReader;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageReader$1 : public ::com::sun::imageio::plugins::bmp::BMPImageReader$EmbeddedProgressAdapter {
	$class(BMPImageReader$1, $NO_CLASS_INIT, ::com::sun::imageio::plugins::bmp::BMPImageReader$EmbeddedProgressAdapter)
public:
	BMPImageReader$1();
	void init$(::com::sun::imageio::plugins::bmp::BMPImageReader* this$0);
	virtual void imageProgress(::javax::imageio::ImageReader* source, float percentageDone) override;
	::com::sun::imageio::plugins::bmp::BMPImageReader* this$0 = nullptr;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageReader$1_h_