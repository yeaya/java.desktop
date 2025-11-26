#include <sun/awt/image/XbmImageDecoder.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/ImageFormatException.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <jcpp.h>

#undef COMPLETESCANLINES
#undef H
#undef SINGLEFRAME
#undef SINGLEPASS
#undef STATICIMAGEDONE
#undef TOPDOWNLEFTRIGHT
#undef W

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $ImageFormatException = ::sun::awt::image::ImageFormatException;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _XbmImageDecoder_FieldInfo_[] = {
	{"XbmColormap", "[B", nullptr, $PRIVATE | $STATIC, $staticField(XbmImageDecoder, XbmColormap)},
	{"XbmHints", "I", nullptr, $PRIVATE | $STATIC, $staticField(XbmImageDecoder, XbmHints)},
	{}
};

$MethodInfo _XbmImageDecoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(XbmImageDecoder::*)($InputStreamImageSource*,$InputStream*)>(&XbmImageDecoder::init$))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&XbmImageDecoder::error)), "sun.awt.image.ImageFormatException"},
	{"produceImage", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,sun.awt.image.ImageFormatException"},
	{}
};

$ClassInfo _XbmImageDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.XbmImageDecoder",
	"sun.awt.image.ImageDecoder",
	nullptr,
	_XbmImageDecoder_FieldInfo_,
	_XbmImageDecoder_MethodInfo_
};

$Object* allocate$XbmImageDecoder($Class* clazz) {
	return $of($alloc(XbmImageDecoder));
}

$bytes* XbmImageDecoder::XbmColormap = nullptr;
int32_t XbmImageDecoder::XbmHints = 0;

void XbmImageDecoder::init$($InputStreamImageSource* src, $InputStream* is) {
	$ImageDecoder::init$(src, is);
	if (!($instanceOf($BufferedInputStream, this->input))) {
		$set(this, input, $new($BufferedInputStream, this->input, 80));
	}
}

void XbmImageDecoder::error($String* s1) {
	$init(XbmImageDecoder);
	$throwNew($ImageFormatException, s1);
}

void XbmImageDecoder::produceImage() {
	$useLocalCurrentObjectStackCache();
	$var($chars, nm, $new($chars, 80));
	int32_t c = 0;
	int32_t i = 0;
	int32_t state = 0;
	int32_t H = 0;
	int32_t W = 0;
	int32_t x = 0;
	int32_t y = 0;
	bool start = true;
	$var($bytes, raster, nullptr);
	$var($IndexColorModel, model, nullptr);
	while (!this->aborted && (c = $nc(this->input)->read()) != -1) {
		if (u'a' <= c && c <= u'z' || u'A' <= c && c <= u'Z' || u'0' <= c && c <= u'9' || c == u'#' || c == u'_') {
			if (i < 78) {
				nm->set(i++, (char16_t)c);
			}
		} else if (i > 0) {
			int32_t nc = i;
			i = 0;
			if (start) {
				if (nc != 7 || nm->get(0) != u'#' || nm->get(1) != u'd' || nm->get(2) != u'e' || nm->get(3) != u'f' || nm->get(4) != u'i' || nm->get(5) != u'n' || nm->get(6) != u'e') {
					error("Not an XBM file"_s);
				}
				start = false;
			}
			if (nm->get(nc - 1) == u'h') {
				state = 1;
			} else if (nm->get(nc - 1) == u't' && nc > 1 && nm->get(nc - 2) == u'h') {
				state = 2;
			} else if (nc > 2 && state < 0 && nm->get(0) == u'0' && nm->get(1) == u'x') {
				int32_t n = 0;
				for (int32_t p = 2; p < nc; ++p) {
					c = nm->get(p);
					if (u'0' <= c && c <= u'9') {
						c = c - u'0';
					} else if (u'A' <= c && c <= u'Z') {
						c = c - u'A' + 10;
					} else if (u'a' <= c && c <= u'z') {
						c = c - u'a' + 10;
					} else {
						c = 0;
					}
					n = n * 16 + c;
				}
				for (int32_t mask = 1; mask <= 128; mask <<= 1) {
					if (x < W) {
						if (((int32_t)(n & (uint32_t)mask)) != 0) {
							$nc(raster)->set(x, (int8_t)1);
						} else {
							$nc(raster)->set(x, (int8_t)0);
						}
					}
					++x;
				}
				if (x >= W) {
					if (setPixels(0, y, W, 1, static_cast<$ColorModel*>(model), raster, 0, W) <= 0) {
						return;
					}
					x = 0;
					if (y++ >= H) {
						break;
					}
				}
			} else {
				int32_t n = 0;
				for (int32_t p = 0; p < nc; ++p) {
					bool var$0 = u'0' <= (c = nm->get(p));
					if (var$0 && c <= u'9') {
						n = n * 10 + c - u'0';
					} else {
						n = -1;
						break;
					}
				}
				if (n > 0 && state > 0) {
					if (state == 1) {
						W = n;
					} else {
						H = n;
					}
					if (W == 0 || H == 0) {
						state = 0;
					} else {
						$assign(model, $new($IndexColorModel, 8, 2, XbmImageDecoder::XbmColormap, 0, false, 0));
						setDimensions(W, H);
						setColorModel(model);
						setHints(XbmImageDecoder::XbmHints);
						headerComplete();
						$assign(raster, $new($bytes, W));
						state = -1;
					}
				}
			}
		}
	}
	$nc(this->input)->close();
	imageComplete($ImageConsumer::STATICIMAGEDONE, true);
}

void clinit$XbmImageDecoder($Class* class$) {
	$assignStatic(XbmImageDecoder::XbmColormap, $new($bytes, {
		(int8_t)255,
		(int8_t)255,
		(int8_t)255,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
	XbmImageDecoder::XbmHints = ((($ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES) | $ImageConsumer::SINGLEPASS) | $ImageConsumer::SINGLEFRAME);
}

XbmImageDecoder::XbmImageDecoder() {
}

$Class* XbmImageDecoder::load$($String* name, bool initialize) {
	$loadClass(XbmImageDecoder, name, initialize, &_XbmImageDecoder_ClassInfo_, clinit$XbmImageDecoder, allocate$XbmImageDecoder);
	return class$;
}

$Class* XbmImageDecoder::class$ = nullptr;

		} // image
	} // awt
} // sun