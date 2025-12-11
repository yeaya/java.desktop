#include <sun/lwawt/macosx/CImage$Creator.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Label.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CTrayIcon$IconObserver.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $intArray2 = $Array<int32_t, 2>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Label = ::java::awt::Label;
using $MediaTracker = ::java::awt::MediaTracker;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CTrayIcon$IconObserver = ::sun::lwawt::macosx::CTrayIcon$IconObserver;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CImage$Creator_FieldInfo_[] = {
	{"observer", "Lsun/lwawt/macosx/CTrayIcon$IconObserver;", nullptr, 0, $field(CImage$Creator, observer)},
	{}
};

$MethodInfo _CImage$Creator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CImage$Creator::*)()>(&CImage$Creator::init$))},
	{"createFromImage", "(Ljava/awt/Image;)Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC},
	{"createFromImage", "(Ljava/awt/Image;Lsun/lwawt/macosx/CTrayIcon$IconObserver;)Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC},
	{"createFromImage", "(Ljava/awt/Image;ZLsun/lwawt/macosx/CTrayIcon$IconObserver;)Lsun/lwawt/macosx/CImage;", nullptr, $PRIVATE, $method(static_cast<$CImage*(CImage$Creator::*)($Image*,bool,$CTrayIcon$IconObserver*)>(&CImage$Creator::createFromImage))},
	{"createFromImageImmediately", "(Ljava/awt/Image;)Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC},
	{"createFromImages", "(Ljava/util/List;)Lsun/lwawt/macosx/CImage;", "(Ljava/util/List<Ljava/awt/Image;>;)Lsun/lwawt/macosx/CImage;", $PUBLIC},
	{"createFromImages", "(Ljava/util/List;Z)Lsun/lwawt/macosx/CImage;", "(Ljava/util/List<Ljava/awt/Image;>;Z)Lsun/lwawt/macosx/CImage;", $PRIVATE, $method(static_cast<$CImage*(CImage$Creator::*)($List*,bool)>(&CImage$Creator::createFromImages))},
	{"createImage", "(JDD)Ljava/awt/Image;", nullptr, 0},
	{"createImageFromFile", "(Ljava/lang/String;DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImageFromName", "(Ljava/lang/String;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImageFromName", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImageFromPlatformImageBytes", "([B)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImageOfFile", "(Ljava/lang/String;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImageUsingNativeSize", "(J)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImageWithSize", "(JDD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createSystemImageFromSelector", "(Ljava/lang/String;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getPlatformImageBytes", "(Ljava/awt/Image;)[B", nullptr, $PUBLIC},
	{"getSelectorAsInt", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&CImage$Creator::getSelectorAsInt))},
	{"imageToArray", "(Ljava/awt/Image;ZLsun/lwawt/macosx/CTrayIcon$IconObserver;)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($Image*,bool,$CTrayIcon$IconObserver*)>(&CImage$Creator::imageToArray))},
	{}
};

$InnerClassInfo _CImage$Creator_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CImage$Creator", "sun.lwawt.macosx.CImage", "Creator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CImage$Creator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CImage$Creator",
	"java.lang.Object",
	nullptr,
	_CImage$Creator_FieldInfo_,
	_CImage$Creator_MethodInfo_,
	nullptr,
	nullptr,
	_CImage$Creator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CImage"
};

$Object* allocate$CImage$Creator($Class* clazz) {
	return $of($alloc(CImage$Creator));
}

void CImage$Creator::init$() {
}

$Image* CImage$Creator::createImageUsingNativeSize(int64_t image) {
	if (image == 0) {
		return nullptr;
	}
	$var($Dimension2D, size, $CImage::nativeGetNSImageSize(image));
	int64_t var$0 = image;
	double var$1 = $nc(size)->getWidth();
	return createImage(var$0, var$1, size->getHeight());
}

$Image* CImage$Creator::createImage(int64_t image, double width, double height) {
	if (image == 0) {
		$throwNew($Error, "Unable to instantiate CImage with null native image reference."_s);
	}
	return createImageWithSize(image, width, height);
}

$Image* CImage$Creator::createImageWithSize(int64_t image, double width, double height) {
	$var($CImage, img, $new($CImage, image));
	img->resize(width, height);
	return img->toImage();
}

$Image* CImage$Creator::createImageOfFile($String* file, int32_t width, int32_t height) {
	return createImage($CImage::nativeCreateNSImageOfFileFromLaunchServices(file), (double)width, (double)height);
}

$Image* CImage$Creator::createImageFromFile($String* file, double width, double height) {
	int64_t image = $CImage::nativeCreateNSImageFromFileContents(file);
	$CImage::nativeSetNSImageSize(image, width, height);
	return createImage(image, width, height);
}

$Image* CImage$Creator::createSystemImageFromSelector($String* iconSelector, int32_t width, int32_t height) {
	return createImage($CImage::nativeCreateNSImageFromIconSelector(getSelectorAsInt(iconSelector)), (double)width, (double)height);
}

$Image* CImage$Creator::createImageFromName($String* name, int32_t width, int32_t height) {
	return createImage($CImage::nativeCreateNSImageFromImageName(name), (double)width, (double)height);
}

$Image* CImage$Creator::createImageFromName($String* name) {
	return createImageUsingNativeSize($CImage::nativeCreateNSImageFromImageName(name));
}

$ints* CImage$Creator::imageToArray($Image* image, bool prepareImage, $CTrayIcon$IconObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if (image == nullptr) {
		return nullptr;
	}
	if (prepareImage && !($instanceOf($BufferedImage, image))) {
		$var($MediaTracker, mt, $new($MediaTracker, $$new($Label)));
		int32_t id = 0;
		mt->addImage(image, id);
		try {
			mt->waitForID(id);
		} catch ($InterruptedException& e) {
			return nullptr;
		}
		if (mt->isErrorID(id)) {
			return nullptr;
		}
	}
	int32_t w = $nc(image)->getWidth(nullptr);
	int32_t h = image->getHeight(nullptr);
	if (w < 0 || h < 0) {
		return nullptr;
	}
	$var($BufferedImage, bimg, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics2D, g2, bimg->createGraphics());
	$init($AlphaComposite);
	$nc(g2)->setComposite($AlphaComposite::Src);
	g2->drawImage(image, 0, 0, observer);
	g2->dispose();
	return $nc(($cast($DataBufferInt, $($nc($(bimg->getRaster()))->getDataBuffer()))))->getData();
}

$bytes* CImage$Creator::getPlatformImageBytes($Image* image) {
	$useLocalCurrentObjectStackCache();
	$var($ints, buffer, imageToArray(image, false, nullptr));
	if (buffer == nullptr) {
		return nullptr;
	}
	$var($ints, var$0, buffer);
	int32_t var$1 = $nc(image)->getWidth(nullptr);
	return $CImage::nativeGetPlatformImageBytes(var$0, var$1, image->getHeight(nullptr));
}

$Image* CImage$Creator::createImageFromPlatformImageBytes($bytes* buffer) {
	return createImageUsingNativeSize($CImage::nativeCreateNSImageFromBytes(buffer));
}

$CImage* CImage$Creator::createFromImage($Image* image) {
	return createFromImage(image, true, nullptr);
}

$CImage* CImage$Creator::createFromImage($Image* image, $CTrayIcon$IconObserver* observer) {
	return createFromImage(image, true, observer);
}

$CImage* CImage$Creator::createFromImageImmediately($Image* image) {
	return createFromImage(image, false, nullptr);
}

$CImage* CImage$Creator::createFromImage($Image* image, bool prepareImage, $CTrayIcon$IconObserver* observer) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($MultiResolutionImage, image)) {
		$var($List, resolutionVariants, $nc(($cast($MultiResolutionImage, image)))->getResolutionVariants());
		return createFromImages(resolutionVariants, prepareImage);
	}
	$var($ints, buffer, imageToArray(image, prepareImage, observer));
	if (buffer == nullptr) {
		return nullptr;
	}
	$var($ints, var$0, buffer);
	int32_t var$1 = $nc(image)->getWidth(nullptr);
	return $new($CImage, $CImage::nativeCreateNSImageFromArray(var$0, var$1, image->getHeight(nullptr)));
}

$CImage* CImage$Creator::createFromImages($List* images) {
	return createFromImages(images, true);
}

$CImage* CImage$Creator::createFromImages($List* images, bool prepareImage) {
	$useLocalCurrentObjectStackCache();
	if (images == nullptr || $nc(images)->isEmpty()) {
		return nullptr;
	}
	int32_t num = $nc(images)->size();
	$var($intArray2, buffers, $new($intArray2, num));
	$var($ints, w, $new($ints, num));
	$var($ints, h, $new($ints, num));
	num = 0;
	{
		$var($Iterator, i$, images->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Image, img, $cast($Image, i$->next()));
			{
				buffers->set(num, $(imageToArray(img, prepareImage, nullptr)));
				if (buffers->get(num) == nullptr) {
					continue;
				}
				w->set(num, $nc(img)->getWidth(nullptr));
				h->set(num, img->getHeight(nullptr));
				++num;
			}
		}
	}
	if (num == 0) {
		return nullptr;
	}
	$var($intArray2, var$0, $fcast($intArray2, $Arrays::copyOf(static_cast<$ObjectArray*>(static_cast<$Object*>(static_cast<$intArray2*>(buffers))), num)));
	$var($ints, var$1, $Arrays::copyOf(w, num));
	return $new($CImage, $CImage::nativeCreateNSImageFromArrays(var$0, var$1, $($Arrays::copyOf(h, num))));
}

int32_t CImage$Creator::getSelectorAsInt($String* fromString) {
	$var($bytes, b, $nc(fromString)->getBytes());
	int32_t len = $Math::min(b->length, 4);
	int32_t result = 0;
	for (int32_t i = 0; i < len; ++i) {
		if (i > 0) {
			result <<= 8;
		}
		result |= ((int32_t)(b->get(i) & (uint32_t)255));
	}
	return result;
}

CImage$Creator::CImage$Creator() {
}

$Class* CImage$Creator::load$($String* name, bool initialize) {
	$loadClass(CImage$Creator, name, initialize, &_CImage$Creator_ClassInfo_, allocate$CImage$Creator);
	return class$;
}

$Class* CImage$Creator::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun