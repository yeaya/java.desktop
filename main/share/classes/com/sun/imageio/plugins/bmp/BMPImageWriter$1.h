#ifndef _com_sun_imageio_plugins_bmp_BMPImageWriter$1_h_
#define _com_sun_imageio_plugins_bmp_BMPImageWriter$1_h_
//$ class com.sun.imageio.plugins.bmp.BMPImageWriter$1
//$ extends com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter

#include <com/sun/imageio/plugins/bmp/BMPImageWriter$IIOWriteProgressAdapter.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {
					class BMPImageWriter;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageWriter;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPImageWriter$1 : public ::com::sun::imageio::plugins::bmp::BMPImageWriter$IIOWriteProgressAdapter {
	$class(BMPImageWriter$1, $NO_CLASS_INIT, ::com::sun::imageio::plugins::bmp::BMPImageWriter$IIOWriteProgressAdapter)
public:
	BMPImageWriter$1();
	void init$(::com::sun::imageio::plugins::bmp::BMPImageWriter* this$0);
	virtual void imageProgress(::javax::imageio::ImageWriter* source, float percentageDone) override;
	::com::sun::imageio::plugins::bmp::BMPImageWriter* this$0 = nullptr;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPImageWriter$1_h_