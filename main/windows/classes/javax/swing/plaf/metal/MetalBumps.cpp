#include <javax/swing/plaf/metal/MetalBumps.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/plaf/metal/BumpBuffer.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ALPHA
#undef IMAGE_SIZE
#undef METAL_BUMPS

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $BumpBuffer = ::javax::swing::plaf::metal::BumpBuffer;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBumps_FieldInfo_[] = {
	{"ALPHA", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(MetalBumps, ALPHA)},
	{"xBumps", "I", nullptr, $PROTECTED, $field(MetalBumps, xBumps)},
	{"yBumps", "I", nullptr, $PROTECTED, $field(MetalBumps, yBumps)},
	{"topColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalBumps, topColor)},
	{"shadowColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalBumps, shadowColor)},
	{"backColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalBumps, backColor)},
	{"METAL_BUMPS", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalBumps, METAL_BUMPS)},
	{"buffer", "Ljavax/swing/plaf/metal/BumpBuffer;", nullptr, $PROTECTED, $field(MetalBumps, buffer)},
	{}
};

$MethodInfo _MetalBumps_MethodInfo_[] = {
	{"<init>", "(IILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalBumps::*)(int32_t,int32_t,$Color*,$Color*,$Color*)>(&MetalBumps::init$))},
	{"createBuffer", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)Ljavax/swing/plaf/metal/BumpBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BumpBuffer*(*)($GraphicsConfiguration*,$Color*,$Color*,$Color*)>(&MetalBumps::createBuffer))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"setBumpArea", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setBumpArea", "(II)V", nullptr, $PUBLIC},
	{"setBumpColors", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalBumps_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBumps",
	"java.lang.Object",
	"javax.swing.Icon",
	_MetalBumps_FieldInfo_,
	_MetalBumps_MethodInfo_
};

$Object* allocate$MetalBumps($Class* clazz) {
	return $of($alloc(MetalBumps));
}

$Color* MetalBumps::ALPHA = nullptr;
$Object* MetalBumps::METAL_BUMPS = nullptr;

void MetalBumps::init$(int32_t width, int32_t height, $Color* newTopColor, $Color* newShadowColor, $Color* newBackColor) {
	setBumpArea(width, height);
	setBumpColors(newTopColor, newShadowColor, newBackColor);
}

$BumpBuffer* MetalBumps::createBuffer($GraphicsConfiguration* gc, $Color* topColor, $Color* shadowColor, $Color* backColor) {
	$init(MetalBumps);
	$var($AppContext, context, $AppContext::getAppContext());
	$var($List, buffers, $cast($List, $nc(context)->get(MetalBumps::METAL_BUMPS)));
	if (buffers == nullptr) {
		$assign(buffers, $new($ArrayList));
		context->put(MetalBumps::METAL_BUMPS, buffers);
	}
	{
		$var($Iterator, i$, $nc(buffers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BumpBuffer, buffer, $cast($BumpBuffer, i$->next()));
			{
				if ($nc(buffer)->hasSameConfiguration(gc, topColor, shadowColor, backColor)) {
					return buffer;
				}
			}
		}
	}
	$var($BumpBuffer, buffer, $new($BumpBuffer, gc, topColor, shadowColor, backColor));
	buffers->add(buffer);
	return buffer;
}

void MetalBumps::setBumpArea($Dimension* bumpArea) {
	setBumpArea($nc(bumpArea)->width, bumpArea->height);
}

void MetalBumps::setBumpArea(int32_t width, int32_t height) {
	this->xBumps = width / 2;
	this->yBumps = height / 2;
}

void MetalBumps::setBumpColors($Color* newTopColor, $Color* newShadowColor, $Color* newBackColor) {
	$set(this, topColor, newTopColor);
	$set(this, shadowColor, newShadowColor);
	if (newBackColor == nullptr) {
		$set(this, backColor, MetalBumps::ALPHA);
	} else {
		$set(this, backColor, newBackColor);
	}
}

void MetalBumps::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($GraphicsConfiguration, gc, ($instanceOf($Graphics2D, g)) ? $nc(($cast($Graphics2D, g)))->getDeviceConfiguration() : ($GraphicsConfiguration*)nullptr);
	if ((this->buffer == nullptr) || !$nc(this->buffer)->hasSameConfiguration(gc, this->topColor, this->shadowColor, this->backColor)) {
		$set(this, buffer, createBuffer(gc, this->topColor, this->shadowColor, this->backColor));
	}
	int32_t bufferWidth = $BumpBuffer::IMAGE_SIZE;
	int32_t bufferHeight = $BumpBuffer::IMAGE_SIZE;
	int32_t iconWidth = getIconWidth();
	int32_t iconHeight = getIconHeight();
	int32_t x2 = x + iconWidth;
	int32_t y2 = y + iconHeight;
	int32_t savex = x;
	while (y < y2) {
		int32_t h = $Math::min(y2 - y, bufferHeight);
		for (x = savex; x < x2; x += bufferWidth) {
			int32_t w = $Math::min(x2 - x, bufferWidth);
			$nc(g)->drawImage($($nc(this->buffer)->getImage()), x, y, x + w, y + h, 0, 0, w, h, nullptr);
		}
		y += bufferHeight;
	}
}

int32_t MetalBumps::getIconWidth() {
	return this->xBumps * 2;
}

int32_t MetalBumps::getIconHeight() {
	return this->yBumps * 2;
}

void clinit$MetalBumps($Class* class$) {
	$assignStatic(MetalBumps::ALPHA, $new($Color, 0, 0, 0, 0));
	$assignStatic(MetalBumps::METAL_BUMPS, $new($Object));
}

MetalBumps::MetalBumps() {
}

$Class* MetalBumps::load$($String* name, bool initialize) {
	$loadClass(MetalBumps, name, initialize, &_MetalBumps_ClassInfo_, clinit$MetalBumps, allocate$MetalBumps);
	return class$;
}

$Class* MetalBumps::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax