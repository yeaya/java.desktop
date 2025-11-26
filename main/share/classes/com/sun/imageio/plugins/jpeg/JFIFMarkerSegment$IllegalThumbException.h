#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$IllegalThumbException_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$IllegalThumbException_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JFIFMarkerSegment$IllegalThumbException : public ::java::lang::Exception {
	$class(JFIFMarkerSegment$IllegalThumbException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	JFIFMarkerSegment$IllegalThumbException();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0);
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	JFIFMarkerSegment$IllegalThumbException(const JFIFMarkerSegment$IllegalThumbException& e);
	virtual void throw$() override;
	inline JFIFMarkerSegment$IllegalThumbException* operator ->() {
		return (JFIFMarkerSegment$IllegalThumbException*)throwing$;
	}
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$IllegalThumbException_h_