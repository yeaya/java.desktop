#include <sun/awt/image/JPEGImageDecoder.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/ImageFormatException.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/JPEGImageDecoder$1.h>
#include <jcpp.h>

#undef SINGLEPASS
#undef STATICIMAGEDONE

using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $ImageFormatException = ::sun::awt::image::ImageFormatException;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $JPEGImageDecoder$1 = ::sun::awt::image::JPEGImageDecoder$1;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _JPEGImageDecoder_FieldInfo_[] = {
	{"RGBcolormodel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGImageDecoder, RGBcolormodel)},
	{"ARGBcolormodel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGImageDecoder, ARGBcolormodel)},
	{"Graycolormodel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGImageDecoder, Graycolormodel)},
	{"InputStreamClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(JPEGImageDecoder, InputStreamClass)},
	{"colormodel", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(JPEGImageDecoder, colormodel)},
	{"props", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", 0, $field(JPEGImageDecoder, props)},
	{"hintflags", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGImageDecoder, hintflags)},
	{}
};

$MethodInfo _JPEGImageDecoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageDecoder::*)($InputStreamImageSource*,$InputStream*)>(&JPEGImageDecoder::init$))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&JPEGImageDecoder::error)), "sun.awt.image.ImageFormatException"},
	{"initIDs", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*)>(&JPEGImageDecoder::initIDs))},
	{"produceImage", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,sun.awt.image.ImageFormatException"},
	{"readImage", "(Ljava/io/InputStream;[B)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(JPEGImageDecoder::*)($InputStream*,$bytes*)>(&JPEGImageDecoder::readImage)), "sun.awt.image.ImageFormatException,java.io.IOException"},
	{"sendHeaderInfo", "(IIZZZ)Z", nullptr, $PUBLIC},
	{"sendPixels", "([II)Z", nullptr, $PUBLIC},
	{"sendPixels", "([BI)Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 2
#define _METHOD_INDEX_readImage 4

$InnerClassInfo _JPEGImageDecoder_InnerClassesInfo_[] = {
	{"sun.awt.image.JPEGImageDecoder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPEGImageDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.JPEGImageDecoder",
	"sun.awt.image.ImageDecoder",
	nullptr,
	_JPEGImageDecoder_FieldInfo_,
	_JPEGImageDecoder_MethodInfo_,
	nullptr,
	nullptr,
	_JPEGImageDecoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.JPEGImageDecoder$1"
};

$Object* allocate$JPEGImageDecoder($Class* clazz) {
	return $of($alloc(JPEGImageDecoder));
}

$ColorModel* JPEGImageDecoder::RGBcolormodel = nullptr;
$ColorModel* JPEGImageDecoder::ARGBcolormodel = nullptr;
$ColorModel* JPEGImageDecoder::Graycolormodel = nullptr;
$Class* JPEGImageDecoder::InputStreamClass = nullptr;

void JPEGImageDecoder::initIDs($Class* InputStreamClass) {
	$init(JPEGImageDecoder);
	$prepareNativeStatic(JPEGImageDecoder, initIDs, void, $Class* InputStreamClass);
	$invokeNativeStatic(JPEGImageDecoder, initIDs, InputStreamClass);
	$finishNativeStatic();
}

void JPEGImageDecoder::readImage($InputStream* is, $bytes* buf) {
	$prepareNative(JPEGImageDecoder, readImage, void, $InputStream* is, $bytes* buf);
	$invokeNative(JPEGImageDecoder, readImage, is, buf);
	$finishNative();
}

void JPEGImageDecoder::init$($InputStreamImageSource* src, $InputStream* is) {
	$ImageDecoder::init$(src, is);
	$set(this, props, $new($Hashtable));
}

void JPEGImageDecoder::error($String* s1) {
	$init(JPEGImageDecoder);
	$throwNew($ImageFormatException, s1);
}

bool JPEGImageDecoder::sendHeaderInfo(int32_t width, int32_t height, bool gray, bool hasalpha, bool multipass) {
	setDimensions(width, height);
	setProperties(this->props);
	if (gray) {
		$set(this, colormodel, JPEGImageDecoder::Graycolormodel);
	} else if (hasalpha) {
		$set(this, colormodel, JPEGImageDecoder::ARGBcolormodel);
	} else {
		$set(this, colormodel, JPEGImageDecoder::RGBcolormodel);
	}
	setColorModel(this->colormodel);
	int32_t flags = JPEGImageDecoder::hintflags;
	if (!multipass) {
		flags |= $ImageConsumer::SINGLEPASS;
	}
	setHints(JPEGImageDecoder::hintflags);
	headerComplete();
	return true;
}

bool JPEGImageDecoder::sendPixels($ints* pixels, int32_t y) {
	int32_t count = setPixels(0, y, $nc(pixels)->length, 1, this->colormodel, pixels, 0, pixels->length);
	if (count <= 0) {
		this->aborted = true;
	}
	return !this->aborted;
}

bool JPEGImageDecoder::sendPixels($bytes* pixels, int32_t y) {
	int32_t count = setPixels(0, y, $nc(pixels)->length, 1, this->colormodel, pixels, 0, pixels->length);
	if (count <= 0) {
		this->aborted = true;
	}
	return !this->aborted;
}

void JPEGImageDecoder::produceImage() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				readImage(this->input, $$new($bytes, 1024));
				if (!this->aborted) {
					imageComplete($ImageConsumer::STATICIMAGEDONE, true);
				}
			} catch ($IOException& e) {
				if (!this->aborted) {
					$throw(e);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$JPEGImageDecoder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($InputStream);
	$assignStatic(JPEGImageDecoder::InputStreamClass, $InputStream::class$);
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JPEGImageDecoder$1)));
		JPEGImageDecoder::initIDs(JPEGImageDecoder::InputStreamClass);
		$assignStatic(JPEGImageDecoder::RGBcolormodel, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
		$assignStatic(JPEGImageDecoder::ARGBcolormodel, $ColorModel::getRGBdefault());
		$var($bytes, g, $new($bytes, 256));
		for (int32_t i = 0; i < 256; ++i) {
			g->set(i, (int8_t)i);
		}
		$assignStatic(JPEGImageDecoder::Graycolormodel, $new($IndexColorModel, 8, 256, g, g, g));
	}
}

JPEGImageDecoder::JPEGImageDecoder() {
}

$Class* JPEGImageDecoder::load$($String* name, bool initialize) {
	$loadClass(JPEGImageDecoder, name, initialize, &_JPEGImageDecoder_ClassInfo_, clinit$JPEGImageDecoder, allocate$JPEGImageDecoder);
	return class$;
}

$Class* JPEGImageDecoder::class$ = nullptr;

		} // image
	} // awt
} // sun