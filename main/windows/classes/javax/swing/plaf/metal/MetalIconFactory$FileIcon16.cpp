#include <javax/swing/plaf/metal/MetalIconFactory$FileIcon16.h>

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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$FileIcon16_FieldInfo_[] = {
	{"imageCacher", "Ljavax/swing/plaf/metal/MetalIconFactory$ImageCacher;", nullptr, 0, $field(MetalIconFactory$FileIcon16, imageCacher)},
	{}
};

$MethodInfo _MetalIconFactory$FileIcon16_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$FileIcon16::*)()>(&MetalIconFactory$FileIcon16::init$))},
	{"getAdditionalHeight", "()I", nullptr, $PUBLIC},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getShift", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"paintMe", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$FileIcon16::*)($Component*,$Graphics*)>(&MetalIconFactory$FileIcon16::paintMe))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$FileIcon16_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$FileIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FileIcon16", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$FileIcon16_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$FileIcon16",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_MetalIconFactory$FileIcon16_FieldInfo_,
	_MetalIconFactory$FileIcon16_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$FileIcon16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$FileIcon16($Class* clazz) {
	return $of($alloc(MetalIconFactory$FileIcon16));
}

int32_t MetalIconFactory$FileIcon16::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$FileIcon16::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$FileIcon16::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$FileIcon16::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$FileIcon16::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$FileIcon16::init$() {
}

void MetalIconFactory$FileIcon16::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($GraphicsConfiguration, gc, $nc(c)->getGraphicsConfiguration());
	if (this->imageCacher == nullptr) {
		$set(this, imageCacher, $new($MetalIconFactory$ImageCacher));
	}
	$var($Image, image, $nc(this->imageCacher)->getImage(gc));
	if (image == nullptr) {
		if (gc != nullptr) {
			int32_t var$0 = getIconWidth();
			$assign(image, gc->createCompatibleImage(var$0, getIconHeight(), $Transparency::BITMASK));
		} else {
			int32_t var$1 = getIconWidth();
			$assign(image, $new($BufferedImage, var$1, getIconHeight(), $BufferedImage::TYPE_INT_ARGB));
		}
		$var($Graphics, imageG, $nc(image)->getGraphics());
		paintMe(c, imageG);
		$nc(imageG)->dispose();
		$nc(this->imageCacher)->cacheImage(image, gc);
	}
	$nc(g)->drawImage(image, x, y + getShift(), nullptr);
}

void MetalIconFactory$FileIcon16::paintMe($Component* c, $Graphics* g) {
	$init($MetalIconFactory);
	int32_t right = $nc($MetalIconFactory::fileIcon16Size)->width - 1;
	int32_t bottom = $nc($MetalIconFactory::fileIcon16Size)->height - 1;
	$nc(g)->setColor($($MetalLookAndFeel::getWindowBackground()));
	g->fillRect(4, 2, 9, 12);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(2, 0, 2, bottom);
	g->drawLine(2, 0, right - 4, 0);
	g->drawLine(2, bottom, right - 1, bottom);
	g->drawLine(right - 1, 6, right - 1, bottom);
	g->drawLine(right - 6, 2, right - 2, 6);
	g->drawLine(right - 5, 1, right - 4, 1);
	g->drawLine(right - 3, 2, right - 3, 3);
	g->drawLine(right - 2, 4, right - 2, 5);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->drawLine(3, 1, 3, bottom - 1);
	g->drawLine(3, 1, right - 6, 1);
	g->drawLine(right - 2, 7, right - 2, bottom - 1);
	g->drawLine(right - 5, 2, right - 3, 4);
	g->drawLine(3, bottom - 1, right - 2, bottom - 1);
}

int32_t MetalIconFactory$FileIcon16::getShift() {
	return 0;
}

int32_t MetalIconFactory$FileIcon16::getAdditionalHeight() {
	return 0;
}

int32_t MetalIconFactory$FileIcon16::getIconWidth() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::fileIcon16Size)->width;
}

int32_t MetalIconFactory$FileIcon16::getIconHeight() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::fileIcon16Size)->height + getAdditionalHeight();
}

MetalIconFactory$FileIcon16::MetalIconFactory$FileIcon16() {
}

$Class* MetalIconFactory$FileIcon16::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$FileIcon16, name, initialize, &_MetalIconFactory$FileIcon16_ClassInfo_, allocate$MetalIconFactory$FileIcon16);
	return class$;
}

$Class* MetalIconFactory$FileIcon16::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax