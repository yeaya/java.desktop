#include <javax/swing/plaf/metal/MetalIconFactory$TreeControlIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory$ImageCacher.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

#undef BITMASK
#undef TYPE_INT_ARGB

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalIconFactory$ImageCacher = ::javax::swing::plaf::metal::MetalIconFactory$ImageCacher;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$TreeControlIcon_FieldInfo_[] = {
	{"isLight", "Z", nullptr, $PROTECTED, $field(MetalIconFactory$TreeControlIcon, isLight)},
	{"imageCacher", "Ljavax/swing/plaf/metal/MetalIconFactory$ImageCacher;", nullptr, 0, $field(MetalIconFactory$TreeControlIcon, imageCacher)},
	{"cachedOrientation", "Z", nullptr, $TRANSIENT, $field(MetalIconFactory$TreeControlIcon, cachedOrientation)},
	{}
};

$MethodInfo _MetalIconFactory$TreeControlIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$TreeControlIcon::*)(bool)>(&MetalIconFactory$TreeControlIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintMe", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$TreeControlIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$TreeControlIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeControlIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$TreeControlIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$TreeControlIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_MetalIconFactory$TreeControlIcon_FieldInfo_,
	_MetalIconFactory$TreeControlIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$TreeControlIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$TreeControlIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$TreeControlIcon));
}

int32_t MetalIconFactory$TreeControlIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$TreeControlIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$TreeControlIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$TreeControlIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$TreeControlIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$TreeControlIcon::init$(bool isCollapsed) {
	this->cachedOrientation = true;
	this->isLight = isCollapsed;
}

void MetalIconFactory$TreeControlIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, $nc(c)->getGraphicsConfiguration());
	if (this->imageCacher == nullptr) {
		$set(this, imageCacher, $new($MetalIconFactory$ImageCacher));
	}
	$var($Image, image, $nc(this->imageCacher)->getImage(gc));
	if (image == nullptr || this->cachedOrientation != $MetalUtils::isLeftToRight(c)) {
		this->cachedOrientation = $MetalUtils::isLeftToRight(c);
		if (gc != nullptr) {
			int32_t var$0 = getIconWidth();
			$assign(image, gc->createCompatibleImage(var$0, getIconHeight(), $Transparency::BITMASK));
		} else {
			int32_t var$1 = getIconWidth();
			$assign(image, $new($BufferedImage, var$1, getIconHeight(), $BufferedImage::TYPE_INT_ARGB));
		}
		$var($Graphics, imageG, $nc(image)->getGraphics());
		paintMe(c, imageG, x, y);
		$nc(imageG)->dispose();
		$nc(this->imageCacher)->cacheImage(image, gc);
	}
	if ($MetalUtils::isLeftToRight(c)) {
		if (this->isLight) {
			$nc(g)->drawImage(image, x + 5, y + 3, x + 18, y + 13, 4, 3, 17, 13, nullptr);
		} else {
			$nc(g)->drawImage(image, x + 5, y + 3, x + 18, y + 17, 4, 3, 17, 17, nullptr);
		}
	} else if (this->isLight) {
		$nc(g)->drawImage(image, x + 3, y + 3, x + 16, y + 13, 4, 3, 17, 13, nullptr);
	} else {
		$nc(g)->drawImage(image, x + 3, y + 3, x + 16, y + 17, 4, 3, 17, 17, nullptr);
	}
}

void MetalIconFactory$TreeControlIcon::paintMe($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	int32_t xoff = ($MetalUtils::isLeftToRight(c)) ? 0 : 4;
	g->drawLine(xoff + 4, 6, xoff + 4, 9);
	g->drawLine(xoff + 5, 5, xoff + 5, 5);
	g->drawLine(xoff + 6, 4, xoff + 9, 4);
	g->drawLine(xoff + 10, 5, xoff + 10, 5);
	g->drawLine(xoff + 11, 6, xoff + 11, 9);
	g->drawLine(xoff + 10, 10, xoff + 10, 10);
	g->drawLine(xoff + 6, 11, xoff + 9, 11);
	g->drawLine(xoff + 5, 10, xoff + 5, 10);
	g->drawLine(xoff + 7, 7, xoff + 8, 7);
	g->drawLine(xoff + 7, 8, xoff + 8, 8);
	if (this->isLight) {
		if ($MetalUtils::isLeftToRight(c)) {
			g->drawLine(12, 7, 15, 7);
			g->drawLine(12, 8, 15, 8);
		} else {
			g->drawLine(4, 7, 7, 7);
			g->drawLine(4, 8, 7, 8);
		}
	} else {
		g->drawLine(xoff + 7, 12, xoff + 7, 15);
		g->drawLine(xoff + 8, 12, xoff + 8, 15);
	}
	g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	g->drawLine(xoff + 5, 6, xoff + 5, 9);
	g->drawLine(xoff + 6, 5, xoff + 9, 5);
	g->setColor($($MetalLookAndFeel::getPrimaryControlShadow()));
	g->drawLine(xoff + 6, 6, xoff + 6, 6);
	g->drawLine(xoff + 9, 6, xoff + 9, 6);
	g->drawLine(xoff + 6, 9, xoff + 6, 9);
	g->drawLine(xoff + 10, 6, xoff + 10, 9);
	g->drawLine(xoff + 6, 10, xoff + 9, 10);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->drawLine(xoff + 6, 7, xoff + 6, 8);
	g->drawLine(xoff + 7, 6, xoff + 8, 6);
	g->drawLine(xoff + 9, 7, xoff + 9, 7);
	g->drawLine(xoff + 7, 9, xoff + 7, 9);
	g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
	g->drawLine(xoff + 8, 9, xoff + 9, 9);
	g->drawLine(xoff + 9, 8, xoff + 9, 8);
}

int32_t MetalIconFactory$TreeControlIcon::getIconWidth() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::treeControlSize)->width;
}

int32_t MetalIconFactory$TreeControlIcon::getIconHeight() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::treeControlSize)->height;
}

MetalIconFactory$TreeControlIcon::MetalIconFactory$TreeControlIcon() {
}

$Class* MetalIconFactory$TreeControlIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$TreeControlIcon, name, initialize, &_MetalIconFactory$TreeControlIcon_ClassInfo_, allocate$MetalIconFactory$TreeControlIcon);
	return class$;
}

$Class* MetalIconFactory$TreeControlIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax