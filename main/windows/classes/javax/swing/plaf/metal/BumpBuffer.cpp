#include <javax/swing/plaf/metal/BumpBuffer.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <jcpp.h>

#undef ALPHA
#undef BITMASK
#undef IMAGE_SIZE
#undef OPAQUE
#undef TYPE_BYTE
#undef TYPE_BYTE_INDEXED

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _BumpBuffer_FieldInfo_[] = {
	{"IMAGE_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(BumpBuffer, IMAGE_SIZE)},
	{"image", "Ljava/awt/Image;", nullptr, $TRANSIENT, $field(BumpBuffer, image)},
	{"topColor", "Ljava/awt/Color;", nullptr, 0, $field(BumpBuffer, topColor)},
	{"shadowColor", "Ljava/awt/Color;", nullptr, 0, $field(BumpBuffer, shadowColor)},
	{"backColor", "Ljava/awt/Color;", nullptr, 0, $field(BumpBuffer, backColor)},
	{"gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $field(BumpBuffer, gc)},
	{}
};

$MethodInfo _BumpBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BumpBuffer::*)($GraphicsConfiguration*,$Color*,$Color*,$Color*)>(&BumpBuffer::init$))},
	{"createImage", "()V", nullptr, $PRIVATE, $method(static_cast<void(BumpBuffer::*)()>(&BumpBuffer::createImage))},
	{"fillBumpBuffer", "()V", nullptr, $PRIVATE, $method(static_cast<void(BumpBuffer::*)()>(&BumpBuffer::fillBumpBuffer))},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"hasSameConfiguration", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BumpBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.BumpBuffer",
	"java.lang.Object",
	nullptr,
	_BumpBuffer_FieldInfo_,
	_BumpBuffer_MethodInfo_
};

$Object* allocate$BumpBuffer($Class* clazz) {
	return $of($alloc(BumpBuffer));
}

void BumpBuffer::init$($GraphicsConfiguration* gc, $Color* aTopColor, $Color* aShadowColor, $Color* aBackColor) {
	$set(this, gc, gc);
	$set(this, topColor, aTopColor);
	$set(this, shadowColor, aShadowColor);
	$set(this, backColor, aBackColor);
	createImage();
	fillBumpBuffer();
}

bool BumpBuffer::hasSameConfiguration($GraphicsConfiguration* gc, $Color* aTopColor, $Color* aShadowColor, $Color* aBackColor) {
	if (this->gc != nullptr) {
		if (!$nc($of(this->gc))->equals(gc)) {
			return false;
		}
	} else if (gc != nullptr) {
		return false;
	}
	bool var$1 = $nc(this->topColor)->equals(aTopColor);
	bool var$0 = var$1 && $nc(this->shadowColor)->equals(aShadowColor);
	return var$0 && $nc(this->backColor)->equals(aBackColor);
}

$Image* BumpBuffer::getImage() {
	return this->image;
}

void BumpBuffer::fillBumpBuffer() {
	$var($Graphics, g, $nc(this->image)->getGraphics());
	$nc(g)->setColor(this->backColor);
	g->fillRect(0, 0, BumpBuffer::IMAGE_SIZE, BumpBuffer::IMAGE_SIZE);
	g->setColor(this->topColor);
	for (int32_t x = 0; x < BumpBuffer::IMAGE_SIZE; x += 4) {
		for (int32_t y = 0; y < BumpBuffer::IMAGE_SIZE; y += 4) {
			g->drawLine(x, y, x, y);
			g->drawLine(x + 2, y + 2, x + 2, y + 2);
		}
	}
	g->setColor(this->shadowColor);
	for (int32_t x = 0; x < BumpBuffer::IMAGE_SIZE; x += 4) {
		for (int32_t y = 0; y < BumpBuffer::IMAGE_SIZE; y += 4) {
			g->drawLine(x + 1, y + 1, x + 1, y + 1);
			g->drawLine(x + 3, y + 3, x + 3, y + 3);
		}
	}
	g->dispose();
}

void BumpBuffer::createImage() {
	if (this->gc != nullptr) {
		$init($MetalBumps);
		$set(this, image, $nc(this->gc)->createCompatibleImage(BumpBuffer::IMAGE_SIZE, BumpBuffer::IMAGE_SIZE, (this->backColor != $MetalBumps::ALPHA) ? $Transparency::OPAQUE : $Transparency::BITMASK));
	} else {
		$var($ints, cmap, $new($ints, {
			$nc(this->backColor)->getRGB(),
			$nc(this->topColor)->getRGB(),
			$nc(this->shadowColor)->getRGB()
		}));
		$init($MetalBumps);
		$var($IndexColorModel, icm, $new($IndexColorModel, 8, 3, cmap, 0, false, (this->backColor == $MetalBumps::ALPHA) ? 0 : -1, $DataBuffer::TYPE_BYTE));
		$set(this, image, $new($BufferedImage, BumpBuffer::IMAGE_SIZE, BumpBuffer::IMAGE_SIZE, $BufferedImage::TYPE_BYTE_INDEXED, icm));
	}
}

BumpBuffer::BumpBuffer() {
}

$Class* BumpBuffer::load$($String* name, bool initialize) {
	$loadClass(BumpBuffer, name, initialize, &_BumpBuffer_ClassInfo_, allocate$BumpBuffer);
	return class$;
}

$Class* BumpBuffer::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax