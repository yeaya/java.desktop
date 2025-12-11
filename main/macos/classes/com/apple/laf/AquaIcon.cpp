#include <com/apple/laf/AquaIcon.h>

#include <com/apple/laf/AquaIcon$1.h>
#include <com/apple/laf/AquaIcon$JRSUIControlSpec.h>
#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AquaIcon$1 = ::com::apple::laf::AquaIcon$1;
using $AquaIcon$JRSUIControlSpec = ::com::apple::laf::AquaIcon$JRSUIControlSpec;
using $AquaIcon$ScalingJRSUIIcon = ::com::apple::laf::AquaIcon$ScalingJRSUIIcon;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon::*)()>(&AquaIcon::init$))},
	{"getIconFor", "(Lcom/apple/laf/AquaIcon$JRSUIControlSpec;II)Ljavax/swing/plaf/UIResource;", nullptr, $STATIC, $method(static_cast<$UIResource*(*)($AquaIcon$JRSUIControlSpec*,int32_t,int32_t)>(&AquaIcon::getIconFor))},
	{"getImageForIcon", "(Ljavax/swing/Icon;)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Image*(*)($Icon*)>(&AquaIcon::getImageForIcon))},
	{}
};

$InnerClassInfo _AquaIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$SystemIcon", "com.apple.laf.AquaIcon", "SystemIcon", $STATIC},
	{"com.apple.laf.AquaIcon$SystemIconUIResourceSingleton", "com.apple.laf.AquaIcon", "SystemIconUIResourceSingleton", $STATIC},
	{"com.apple.laf.AquaIcon$SystemIconSingleton", "com.apple.laf.AquaIcon", "SystemIconSingleton", $STATIC},
	{"com.apple.laf.AquaIcon$FileIcon", "com.apple.laf.AquaIcon", "FileIcon", $STATIC},
	{"com.apple.laf.AquaIcon$ScalingJRSUIIcon", "com.apple.laf.AquaIcon", "ScalingJRSUIIcon", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$JRSUIIcon", "com.apple.laf.AquaIcon", "JRSUIIcon", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$JRSUIControlSpec", "com.apple.laf.AquaIcon", "JRSUIControlSpec", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaIcon$InvertableIcon", "com.apple.laf.AquaIcon", "InvertableIcon", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaIcon",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AquaIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon$SystemIcon,com.apple.laf.AquaIcon$SystemIconUIResourceSingleton,com.apple.laf.AquaIcon$SystemIconSingleton,com.apple.laf.AquaIcon$FileIcon,com.apple.laf.AquaIcon$ScalingJRSUIIcon,com.apple.laf.AquaIcon$CachingScalingIcon,com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon,com.apple.laf.AquaIcon$JRSUIIcon,com.apple.laf.AquaIcon$JRSUIControlSpec,com.apple.laf.AquaIcon$InvertableIcon,com.apple.laf.AquaIcon$1"
};

$Object* allocate$AquaIcon($Class* clazz) {
	return $of($alloc(AquaIcon));
}

void AquaIcon::init$() {
}

$UIResource* AquaIcon::getIconFor($AquaIcon$JRSUIControlSpec* spec, int32_t width, int32_t height) {
	return $new($AquaIcon$1, width, height, spec);
}

$Image* AquaIcon::getImageForIcon($Icon* i) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ImageIcon, i)) {
		return $nc(($cast($ImageIcon, i)))->getImage();
	}
	int32_t w = $nc(i)->getIconWidth();
	int32_t h = i->getIconHeight();
	if (w <= 0 || h <= 0) {
		return nullptr;
	}
	$var($BufferedImage, image, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics, g, image->getGraphics());
	i->paintIcon(nullptr, g, 0, 0);
	$nc(g)->dispose();
	return image;
}

AquaIcon::AquaIcon() {
}

$Class* AquaIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon, name, initialize, &_AquaIcon_ClassInfo_, allocate$AquaIcon);
	return class$;
}

$Class* AquaIcon::class$ = nullptr;

		} // laf
	} // apple
} // com