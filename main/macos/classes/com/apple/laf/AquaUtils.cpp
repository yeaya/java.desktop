#include <com/apple/laf/AquaUtils.h>

#include <com/apple/laf/AquaUtils$1.h>
#include <com/apple/laf/AquaUtils$2.h>
#include <com/apple/laf/AquaUtils$3.h>
#include <com/apple/laf/AquaUtils$4.h>
#include <com/apple/laf/AquaUtils$IconImageFilter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$Selectable.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Composite.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <javax/swing/GrayFilter.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <sun/swing/SwingAccessor$JComponentAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ANIMATIONS_PROPERTY
#undef MENU_BLINK_DELAY
#undef OPAQUE_SET_FLAG
#undef WINDOW_BRUSH_METAL_LOOK
#undef WINDOW_STYLE

using $ComponentArray = $Array<::java::awt::Component>;
using $AquaUtils$1 = ::com::apple::laf::AquaUtils$1;
using $AquaUtils$2 = ::com::apple::laf::AquaUtils$2;
using $AquaUtils$3 = ::com::apple::laf::AquaUtils$3;
using $AquaUtils$4 = ::com::apple::laf::AquaUtils$4;
using $AquaUtils$IconImageFilter = ::com::apple::laf::AquaUtils$IconImageFilter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$Selectable = ::com::apple::laf::AquaUtils$Selectable;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $MultiResolutionImage = ::java::awt::image::MultiResolutionImage;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Function = ::java::util::function::Function;
using $GrayFilter = ::javax::swing::GrayFilter;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JComponentAccessor = ::sun::swing::SwingAccessor$JComponentAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$$Lambda$lambda$map$0 : public $Function {
	$class(AquaUtils$$Lambda$lambda$map$0, $NO_CLASS_INIT, $Function)
public:
	void init$($ImageFilter* filter) {
		$set(this, filter, filter);
	}
	virtual $Object* apply(Object$* img) override {
		 return $of(AquaUtils::lambda$map$0(filter, $cast($Image, img)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AquaUtils$$Lambda$lambda$map$0>());
	}
	$ImageFilter* filter = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AquaUtils$$Lambda$lambda$map$0::fieldInfos[2] = {
	{"filter", "Ljava/awt/image/ImageFilter;", nullptr, $PUBLIC, $field(AquaUtils$$Lambda$lambda$map$0, filter)},
	{}
};
$MethodInfo AquaUtils$$Lambda$lambda$map$0::methodInfos[3] = {
	{"<init>", "(Ljava/awt/image/ImageFilter;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaUtils$$Lambda$lambda$map$0::*)($ImageFilter*)>(&AquaUtils$$Lambda$lambda$map$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AquaUtils$$Lambda$lambda$map$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.apple.laf.AquaUtils$$Lambda$lambda$map$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* AquaUtils$$Lambda$lambda$map$0::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$$Lambda$lambda$map$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AquaUtils$$Lambda$lambda$map$0::class$ = nullptr;

$FieldInfo _AquaUtils_FieldInfo_[] = {
	{"ANIMATIONS_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaUtils, ANIMATIONS_PROPERTY)},
	{"enableAnimations", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaUtils, enableAnimations)},
	{"MENU_BLINK_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaUtils, MENU_BLINK_DELAY)},
	{"getJComponentGetFlagMethod", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/reflect/Method;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaUtils, getJComponentGetFlagMethod)},
	{"OPAQUE_SET_FLAG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaUtils, OPAQUE_SET_FLAG)},
	{}
};

$MethodInfo _AquaUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaUtils::*)()>(&AquaUtils::init$))},
	{"animationsEnabled", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&AquaUtils::animationsEnabled))},
	{"blinkMenu", "(Lcom/apple/laf/AquaUtils$Selectable;)V", nullptr, $STATIC, $method(static_cast<void(*)($AquaUtils$Selectable*)>(&AquaUtils::blinkMenu))},
	{"enforceComponentOrientation", "(Ljava/awt/Component;Ljava/awt/ComponentOrientation;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*,$ComponentOrientation*)>(&AquaUtils::enforceComponentOrientation))},
	{"fillRect", "(Ljava/awt/Graphics;Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$Component*)>(&AquaUtils::fillRect))},
	{"fillRect", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Color;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$Component*,$Color*,int32_t,int32_t,int32_t,int32_t)>(&AquaUtils::fillRect))},
	{"generateDisabledImage", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($Image*)>(&AquaUtils::generateDisabledImage))},
	{"generateFilteredImage", "(Ljava/awt/Image;Ljava/awt/image/ImageFilter;)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($Image*,$ImageFilter*)>(&AquaUtils::generateFilteredImage))},
	{"generateLightenedImage", "(Ljava/awt/Image;I)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($Image*,int32_t)>(&AquaUtils::generateLightenedImage))},
	{"generateSelectedDarkImage", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $STATIC, $method(static_cast<$Image*(*)($Image*)>(&AquaUtils::generateSelectedDarkImage))},
	{"hasOpaqueBeenExplicitlySet", "(Ljavax/swing/JComponent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JComponent*)>(&AquaUtils::hasOpaqueBeenExplicitlySet))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&AquaUtils::isLeftToRight))},
	{"isWindowTextured", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*)>(&AquaUtils::isWindowTextured))},
	{"lambda$map$0", "(Ljava/awt/image/ImageFilter;Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Image*(*)($ImageFilter*,$Image*)>(&AquaUtils::lambda$map$0))},
	{"map", "(Ljava/awt/Image;Ljava/awt/image/ImageFilter;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)($Image*,$ImageFilter*)>(&AquaUtils::map))},
	{"paintDropShadowText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Font;Ljava/awt/FontMetrics;IIIILjava/awt/Color;Ljava/awt/Color;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$JComponent*,$Font*,$FontMetrics*,int32_t,int32_t,int32_t,int32_t,$Color*,$Color*,$String*)>(&AquaUtils::paintDropShadowText))},
	{"resetAlpha", "(Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Color*(*)($Color*)>(&AquaUtils::resetAlpha))},
	{}
};

$InnerClassInfo _AquaUtils_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$SlicedShadowBorder", "com.apple.laf.AquaUtils", "SlicedShadowBorder", $STATIC},
	{"com.apple.laf.AquaUtils$ShadowBorder", "com.apple.laf.AquaUtils", "ShadowBorder", $STATIC},
	{"com.apple.laf.AquaUtils$Painter", "com.apple.laf.AquaUtils", "Painter", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaUtils$JComponentPainter", "com.apple.laf.AquaUtils", "JComponentPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaUtils$Selectable", "com.apple.laf.AquaUtils", "Selectable", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaUtils$LazyKeyedSingleton", "com.apple.laf.AquaUtils", "LazyKeyedSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor", "com.apple.laf.AquaUtils", "RecyclableSingletonFromDefaultConstructor", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$RecyclableObject", "com.apple.laf.AquaUtils", "RecyclableObject", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$IconImageFilter", "com.apple.laf.AquaUtils", "IconImageFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaUtils$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaUtils_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaUtils",
	"java.lang.Object",
	nullptr,
	_AquaUtils_FieldInfo_,
	_AquaUtils_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils$SlicedShadowBorder,com.apple.laf.AquaUtils$ShadowBorder,com.apple.laf.AquaUtils$Painter,com.apple.laf.AquaUtils$JComponentPainter,com.apple.laf.AquaUtils$Selectable,com.apple.laf.AquaUtils$LazyKeyedSingleton,com.apple.laf.AquaUtils$RecyclableSingletonFromDefaultConstructor,com.apple.laf.AquaUtils$RecyclableSingleton,com.apple.laf.AquaUtils$RecyclableObject,com.apple.laf.AquaUtils$IconImageFilter,com.apple.laf.AquaUtils$4,com.apple.laf.AquaUtils$4$1,com.apple.laf.AquaUtils$3,com.apple.laf.AquaUtils$2,com.apple.laf.AquaUtils$1"
};

$Object* allocate$AquaUtils($Class* clazz) {
	return $of($alloc(AquaUtils));
}

$String* AquaUtils::ANIMATIONS_PROPERTY = nullptr;
$AquaUtils$RecyclableSingleton* AquaUtils::enableAnimations = nullptr;
$AquaUtils$RecyclableSingleton* AquaUtils::getJComponentGetFlagMethod = nullptr;

void AquaUtils::init$() {
}

bool AquaUtils::isLeftToRight($Component* c) {
	$init(AquaUtils);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

void AquaUtils::enforceComponentOrientation($Component* c, $ComponentOrientation* orientation) {
	$init(AquaUtils);
	$useLocalCurrentObjectStackCache();
	$nc(c)->setComponentOrientation(orientation);
	if ($instanceOf($Container, c)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, c)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					enforceComponentOrientation(child, orientation);
				}
			}
		}
	}
}

$Image* AquaUtils::generateSelectedDarkImage($Image* image) {
	$init(AquaUtils);
	$var($ImageFilter, filter, $new($AquaUtils$1));
	return map(image, filter);
}

$Image* AquaUtils::generateDisabledImage($Image* image) {
	$init(AquaUtils);
	$var($ImageFilter, filter, $new($AquaUtils$2));
	return map(image, filter);
}

$Image* AquaUtils::generateLightenedImage($Image* image, int32_t percent) {
	$init(AquaUtils);
	$var($GrayFilter, filter, $new($GrayFilter, true, percent));
	return map(image, filter);
}

$Image* AquaUtils::generateFilteredImage($Image* image, $ImageFilter* filter) {
	$init(AquaUtils);
	$useLocalCurrentObjectStackCache();
	$var($ImageProducer, prod, $new($FilteredImageSource, $($nc(image)->getSource()), filter));
	return $nc($($Toolkit::getDefaultToolkit()))->createImage(prod);
}

$Image* AquaUtils::map($Image* image, $ImageFilter* filter) {
	$init(AquaUtils);
	if ($instanceOf($MultiResolutionImage, image)) {
		return $MultiResolutionCachedImage::map($cast($MultiResolutionImage, image), static_cast<$Function*>($$new(AquaUtils$$Lambda$lambda$map$0, filter)));
	}
	return generateFilteredImage(image, filter);
}

bool AquaUtils::animationsEnabled() {
	$init(AquaUtils);
	return $nc(($cast($Boolean, $($nc(AquaUtils::enableAnimations)->get()))))->booleanValue();
}

void AquaUtils::blinkMenu($AquaUtils$Selectable* selectable) {
	$init(AquaUtils);
	if (!animationsEnabled()) {
		return;
	}
	try {
		$nc(selectable)->paintSelected(false);
		$Thread::sleep(AquaUtils::MENU_BLINK_DELAY);
		selectable->paintSelected(true);
		$Thread::sleep(AquaUtils::MENU_BLINK_DELAY);
	} catch ($InterruptedException& ignored) {
	}
}

void AquaUtils::paintDropShadowText($Graphics* g, $JComponent* c, $Font* font, $FontMetrics* metrics, int32_t x, int32_t y, int32_t offsetX, int32_t offsetY, $Color* textColor, $Color* shadowColor, $String* text) {
	$init(AquaUtils);
	$nc(g)->setFont(font);
	g->setColor(shadowColor);
	$SwingUtilities2::drawString(c, g, text, x + offsetX, y + offsetY + $nc(metrics)->getAscent());
	g->setColor(textColor);
	$SwingUtilities2::drawString(c, g, text, x, y + $nc(metrics)->getAscent());
}

bool AquaUtils::hasOpaqueBeenExplicitlySet($JComponent* c) {
	$init(AquaUtils);
	return $nc($($SwingAccessor::getJComponentAccessor()))->getFlag(c, AquaUtils::OPAQUE_SET_FLAG);
}

bool AquaUtils::isWindowTextured($Component* c) {
	$init(AquaUtils);
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JComponent, c))) {
		return false;
	}
	$var($JRootPane, pane, $nc(($cast($JComponent, c)))->getRootPane());
	if (pane == nullptr) {
		return false;
	}
	$init($CPlatformWindow);
	$var($Object, prop, $nc(pane)->getClientProperty($CPlatformWindow::WINDOW_BRUSH_METAL_LOOK));
	if (prop != nullptr) {
		return $Boolean::parseBoolean($($of(prop)->toString()));
	}
	$assign(prop, pane->getClientProperty($CPlatformWindow::WINDOW_STYLE));
	return prop != nullptr && "textured"_s->equals(prop);
}

$Color* AquaUtils::resetAlpha($Color* color) {
	$init(AquaUtils);
	int32_t var$0 = $nc(color)->getRed();
	int32_t var$1 = color->getGreen();
	return $new($Color, var$0, var$1, color->getBlue(), 0);
}

void AquaUtils::fillRect($Graphics* g, $Component* c) {
	$init(AquaUtils);
	$useLocalCurrentObjectStackCache();
	$var($Graphics, var$0, g);
	$var($Component, var$1, c);
	$var($Color, var$2, $nc(c)->getBackground());
	int32_t var$3 = c->getWidth();
	fillRect(var$0, var$1, var$2, 0, 0, var$3, c->getHeight());
}

void AquaUtils::fillRect($Graphics* g, $Component* c, $Color* color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(AquaUtils);
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Graphics2D, cg, $cast($Graphics2D, $nc(g)->create()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool var$1 = $instanceOf($UIResource, color) && isWindowTextured(c);
			$init($SystemColor);
			if (var$1 && $nc(color)->equals($SystemColor::window)) {
				$init($AlphaComposite);
				$nc(cg)->setComposite($AlphaComposite::Src);
				cg->setColor($(resetAlpha(color)));
			} else {
				$nc(cg)->setColor(color);
			}
			$nc(cg)->fillRect(x, y, w, h);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$nc(cg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Image* AquaUtils::lambda$map$0($ImageFilter* filter, $Image* img) {
	$init(AquaUtils);
	return generateFilteredImage(img, filter);
}

void clinit$AquaUtils($Class* class$) {
	$assignStatic(AquaUtils::ANIMATIONS_PROPERTY, "swing.enableAnimations"_s);
	$assignStatic(AquaUtils::enableAnimations, $new($AquaUtils$3));
	$assignStatic(AquaUtils::getJComponentGetFlagMethod, $new($AquaUtils$4));
}

AquaUtils::AquaUtils() {
}

$Class* AquaUtils::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AquaUtils$$Lambda$lambda$map$0::classInfo$.name)) {
			return AquaUtils$$Lambda$lambda$map$0::load$(name, initialize);
		}
	}
	$loadClass(AquaUtils, name, initialize, &_AquaUtils_ClassInfo_, clinit$AquaUtils, allocate$AquaUtils);
	return class$;
}

$Class* AquaUtils::class$ = nullptr;

		} // laf
	} // apple
} // com