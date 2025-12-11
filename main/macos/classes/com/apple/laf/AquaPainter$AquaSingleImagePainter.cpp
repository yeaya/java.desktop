#include <com/apple/laf/AquaPainter$AquaSingleImagePainter.h>

#include <apple/laf/JRSUIConstants$Animating.h>
#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaPainter$AquaPixelsKey.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/BiFunction.h>
#include <sun/awt/image/ImageCache$PixelsKey.h>
#include <sun/awt/image/ImageCache.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef FOCUS_SIZE
#undef TYPE_INT_ARGB_PRE
#undef YES

using $JRSUIConstants = ::apple::laf::JRSUIConstants;
using $JRSUIConstants$Animating = ::apple::laf::JRSUIConstants$Animating;
using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaPainter$AquaPixelsKey = ::com::apple::laf::AquaPainter$AquaPixelsKey;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BiFunction = ::java::util::function::BiFunction;
using $ImageCache = ::sun::awt::image::ImageCache;
using $ImageCache$PixelsKey = ::sun::awt::image::ImageCache$PixelsKey;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace com {
	namespace apple {
		namespace laf {

class AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0 : public $BiFunction {
	$class(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(int32_t imgX, int32_t imgY, $Rectangle* bounds, $JRSUIControl* control, $JRSUIState* controlState) {
		this->imgX = imgX;
		this->imgY = imgY;
		$set(this, bounds, bounds);
		$set(this, control, control);
		$set(this, controlState, controlState);
	}
	virtual $Object* apply(Object$* rvWidth, Object$* rvHeight) override {
		 return $of(AquaPainter$AquaSingleImagePainter::lambda$paintFromSingleCachedImage$0(imgX, imgY, bounds, control, controlState, $cast($Integer, rvWidth), $cast($Integer, rvHeight)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0>());
	}
	int32_t imgX = 0;
	int32_t imgY = 0;
	$Rectangle* bounds = nullptr;
	$JRSUIControl* control = nullptr;
	$JRSUIState* controlState = nullptr;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::fieldInfos[6] = {
	{"imgX", "I", nullptr, $PUBLIC, $field(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, imgX)},
	{"imgY", "I", nullptr, $PUBLIC, $field(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, imgY)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, bounds)},
	{"control", "Lapple/laf/JRSUIControl;", nullptr, $PUBLIC, $field(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, control)},
	{"controlState", "Lapple/laf/JRSUIState;", nullptr, $PUBLIC, $field(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, controlState)},
	{}
};
$MethodInfo AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::methodInfos[3] = {
	{"<init>", "(IILjava/awt/Rectangle;Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::*)(int32_t,int32_t,$Rectangle*,$JRSUIControl*,$JRSUIState*)>(&AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::load$($String* name, bool initialize) {
	$loadClass(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::class$ = nullptr;

$MethodInfo _AquaPainter$AquaSingleImagePainter_MethodInfo_[] = {
	{"<init>", "(Lapple/laf/JRSUIState;)V", "(TT;)V", 0, $method(static_cast<void(AquaPainter$AquaSingleImagePainter::*)($JRSUIState*)>(&AquaPainter$AquaSingleImagePainter::init$))},
	{"createImage", "(IIIILjava/awt/Rectangle;Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)(int32_t,int32_t,int32_t,int32_t,$Rectangle*,$JRSUIControl*,$JRSUIState*)>(&AquaPainter$AquaSingleImagePainter::createImage))},
	{"lambda$paintFromSingleCachedImage$0", "(IILjava/awt/Rectangle;Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Image*(*)(int32_t,int32_t,$Rectangle*,$JRSUIControl*,$JRSUIState*,$Integer*,$Integer*)>(&AquaPainter$AquaSingleImagePainter::lambda$paintFromSingleCachedImage$0))},
	{"paint", "(Ljava/awt/Graphics2D;Lapple/laf/JRSUIState;)V", "(Ljava/awt/Graphics2D;TT;)V", 0},
	{"paintFromSingleCachedImage", "(Ljava/awt/Graphics2D;Lapple/laf/JRSUIControl;Lapple/laf/JRSUIState;Ljava/awt/Rectangle;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics2D*,$JRSUIControl*,$JRSUIState*,$Rectangle*)>(&AquaPainter$AquaSingleImagePainter::paintFromSingleCachedImage))},
	{}
};

$InnerClassInfo _AquaPainter$AquaSingleImagePainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaPainter$AquaSingleImagePainter", "com.apple.laf.AquaPainter", "AquaSingleImagePainter", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _AquaPainter$AquaSingleImagePainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaPainter$AquaSingleImagePainter",
	"com.apple.laf.AquaPainter",
	nullptr,
	nullptr,
	_AquaPainter$AquaSingleImagePainter_MethodInfo_,
	"<T:Lapple/laf/JRSUIState;>Lcom/apple/laf/AquaPainter<TT;>;",
	nullptr,
	_AquaPainter$AquaSingleImagePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaPainter"
};

$Object* allocate$AquaPainter$AquaSingleImagePainter($Class* clazz) {
	return $of($alloc(AquaPainter$AquaSingleImagePainter));
}

void AquaPainter$AquaSingleImagePainter::init$($JRSUIState* state) {
	$AquaPainter::init$($$new($JRSUIControl, false), state);
}

void AquaPainter$AquaSingleImagePainter::paint($Graphics2D* g, $JRSUIState* stateToPaint) {
	paintFromSingleCachedImage(g, this->control, stateToPaint, this->boundsRect);
}

void AquaPainter$AquaSingleImagePainter::paintFromSingleCachedImage($Graphics2D* g, $JRSUIControl* control, $JRSUIState* controlState, $Rectangle* bounds) {
	$init(AquaPainter$AquaSingleImagePainter);
	$useLocalCurrentObjectStackCache();
	if ($nc(bounds)->width <= 0 || $nc(bounds)->height <= 0) {
		return;
	}
	int32_t focus = 0;
	$init($JRSUIConstants$Focused);
	if ($nc(controlState)->is($JRSUIConstants$Focused::YES)) {
		focus = $JRSUIConstants::FOCUS_SIZE;
	}
	int32_t imgX = $nc(bounds)->x - focus;
	int32_t imgY = bounds->y - focus;
	int32_t imgW = bounds->width + (focus << 1);
	int32_t imgH = bounds->height + (focus << 1);
	$var($GraphicsConfiguration, config, $nc(g)->getDeviceConfiguration());
	$var($ImageCache, cache, $ImageCache::getInstance());
	$var($AquaPainter$AquaPixelsKey, key, $new($AquaPainter$AquaPixelsKey, config, imgW, imgH, bounds, controlState));
	$var($Image, img, $nc(cache)->getImage(key));
	if (img == nullptr) {
		$assign(img, $new($MultiResolutionCachedImage, imgW, imgH, static_cast<$BiFunction*>($$new(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0, imgX, imgY, bounds, control, controlState))));
		$init($JRSUIConstants$Animating);
		if (!$nc(controlState)->is($JRSUIConstants$Animating::YES)) {
			cache->setImage(key, img);
		}
	}
	g->drawImage(img, imgX, imgY, imgW, imgH, nullptr);
}

$Image* AquaPainter$AquaSingleImagePainter::createImage(int32_t imgX, int32_t imgY, int32_t imgW, int32_t imgH, $Rectangle* bounds, $JRSUIControl* control, $JRSUIState* controlState) {
	$init(AquaPainter$AquaSingleImagePainter);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, img, $new($BufferedImage, imgW, imgH, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($WritableRaster, raster, img->getRaster());
	$var($DataBufferInt, buffer, $cast($DataBufferInt, $nc(raster)->getDataBuffer()));
	$nc(control)->set(controlState);
	control->paint($($SunWritableRaster::stealData(buffer, 0)), imgW, imgH, (double)($nc(bounds)->x - imgX), (double)(bounds->y - imgY), (double)bounds->width, (double)bounds->height);
	$SunWritableRaster::markDirty(static_cast<$DataBuffer*>(buffer));
	return img;
}

$Image* AquaPainter$AquaSingleImagePainter::lambda$paintFromSingleCachedImage$0(int32_t imgX, int32_t imgY, $Rectangle* bounds, $JRSUIControl* control, $JRSUIState* controlState, $Integer* rvWidth, $Integer* rvHeight) {
	$init(AquaPainter$AquaSingleImagePainter);
	int32_t var$0 = imgX;
	int32_t var$1 = imgY;
	int32_t var$2 = $nc(rvWidth)->intValue();
	return createImage(var$0, var$1, var$2, $nc(rvHeight)->intValue(), bounds, control, controlState);
}

AquaPainter$AquaSingleImagePainter::AquaPainter$AquaSingleImagePainter() {
}

$Class* AquaPainter$AquaSingleImagePainter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::classInfo$.name)) {
			return AquaPainter$AquaSingleImagePainter$$Lambda$lambda$paintFromSingleCachedImage$0::load$(name, initialize);
		}
	}
	$loadClass(AquaPainter$AquaSingleImagePainter, name, initialize, &_AquaPainter$AquaSingleImagePainter_ClassInfo_, allocate$AquaPainter$AquaSingleImagePainter);
	return class$;
}

$Class* AquaPainter$AquaSingleImagePainter::class$ = nullptr;

		} // laf
	} // apple
} // com