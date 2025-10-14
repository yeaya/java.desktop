#ifndef _sun_print_ImagePrinter_h_
#define _sun_print_ImagePrinter_h_
//$ class sun.print.ImagePrinter
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace sun {
	namespace print {

class ImagePrinter : public ::java::awt::print::Printable {
	$class(ImagePrinter, $NO_CLASS_INIT, ::java::awt::print::Printable)
public:
	ImagePrinter();
	void init$(::java::io::InputStream* stream);
	void init$(::java::net::URL* url);
	virtual int32_t print(::java::awt::Graphics* g, ::java::awt::print::PageFormat* pf, int32_t index) override;
	::java::awt::image::BufferedImage* image = nullptr;
};

	} // print
} // sun

#endif // _sun_print_ImagePrinter_h_