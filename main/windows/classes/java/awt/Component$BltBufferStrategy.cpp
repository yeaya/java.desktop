#include <java/awt/Component$BltBufferStrategy.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/Math.h>
#include <sun/java2d/SunGraphics2D.h>
#include <jcpp.h>

#undef IMAGE_INCOMPATIBLE
#undef IMAGE_RESTORED

using $VolatileImageArray = $Array<::java::awt::image::VolatileImage>;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;

namespace java {
	namespace awt {

$FieldInfo _Component$BltBufferStrategy_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$BltBufferStrategy, this$0)},
	{"caps", "Ljava/awt/BufferCapabilities;", nullptr, $PROTECTED, $field(Component$BltBufferStrategy, caps)},
	{"backBuffers", "[Ljava/awt/image/VolatileImage;", nullptr, $PROTECTED, $field(Component$BltBufferStrategy, backBuffers)},
	{"validatedContents", "Z", nullptr, $PROTECTED, $field(Component$BltBufferStrategy, validatedContents)},
	{"width", "I", nullptr, $PROTECTED, $field(Component$BltBufferStrategy, width)},
	{"height", "I", nullptr, $PROTECTED, $field(Component$BltBufferStrategy, height)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(Component$BltBufferStrategy, insets)},
	{}
};

$MethodInfo _Component$BltBufferStrategy_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PROTECTED, $method(static_cast<void(Component$BltBufferStrategy::*)($Component*,int32_t,$BufferCapabilities*)>(&Component$BltBufferStrategy::init$))},
	{"contentsLost", "()Z", nullptr, $PUBLIC},
	{"contentsRestored", "()Z", nullptr, $PUBLIC},
	{"createBackBuffers", "(I)V", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, 0},
	{"getCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getDrawGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"revalidate", "()V", nullptr, $PROTECTED},
	{"revalidate", "(Z)V", nullptr, 0},
	{"show", "()V", nullptr, $PUBLIC},
	{"showSubRegion", "(IIII)V", nullptr, 0},
	{}
};

$InnerClassInfo _Component$BltBufferStrategy_InnerClassesInfo_[] = {
	{"java.awt.Component$BltBufferStrategy", "java.awt.Component", "BltBufferStrategy", $PROTECTED},
	{}
};

$ClassInfo _Component$BltBufferStrategy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Component$BltBufferStrategy",
	"java.awt.image.BufferStrategy",
	nullptr,
	_Component$BltBufferStrategy_FieldInfo_,
	_Component$BltBufferStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_Component$BltBufferStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$BltBufferStrategy($Class* clazz) {
	return $of($alloc(Component$BltBufferStrategy));
}

void Component$BltBufferStrategy::init$($Component* this$0, int32_t numBuffers, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$BufferStrategy::init$();
	$set(this, caps, caps);
	createBackBuffers(numBuffers - 1);
}

void Component$BltBufferStrategy::dispose() {
	if (this->backBuffers != nullptr) {
		for (int32_t counter = $nc(this->backBuffers)->length - 1; counter >= 0; --counter) {
			if ($nc(this->backBuffers)->get(counter) != nullptr) {
				$nc($nc(this->backBuffers)->get(counter))->flush();
				$nc(this->backBuffers)->set(counter, nullptr);
			}
		}
	}
	if ($equals(this->this$0->bufferStrategy, this)) {
		$set(this->this$0, bufferStrategy, nullptr);
	}
}

void Component$BltBufferStrategy::createBackBuffers(int32_t numBuffers) {
	$useLocalCurrentObjectStackCache();
	if (numBuffers == 0) {
		$set(this, backBuffers, nullptr);
	} else {
		this->width = this->this$0->getWidth();
		this->height = this->this$0->getHeight();
		$set(this, insets, this->this$0->getInsets_NoClientCode());
		int32_t iWidth = this->width - $nc(this->insets)->left - $nc(this->insets)->right;
		int32_t iHeight = this->height - $nc(this->insets)->top - $nc(this->insets)->bottom;
		iWidth = $Math::max(1, iWidth);
		iHeight = $Math::max(1, iHeight);
		if (this->backBuffers == nullptr) {
			$set(this, backBuffers, $new($VolatileImageArray, numBuffers));
		} else {
			for (int32_t i = 0; i < numBuffers; ++i) {
				if ($nc(this->backBuffers)->get(i) != nullptr) {
					$nc($nc(this->backBuffers)->get(i))->flush();
					$nc(this->backBuffers)->set(i, nullptr);
				}
			}
		}
		for (int32_t i = 0; i < numBuffers; ++i) {
			$nc(this->backBuffers)->set(i, $(this->this$0->createVolatileImage(iWidth, iHeight)));
		}
	}
}

$BufferCapabilities* Component$BltBufferStrategy::getCapabilities() {
	return this->caps;
}

$Graphics* Component$BltBufferStrategy::getDrawGraphics() {
	$useLocalCurrentObjectStackCache();
	revalidate();
	$var($Image, backBuffer, getBackBuffer());
	if (backBuffer == nullptr) {
		return this->this$0->getGraphics();
	}
	$var($SunGraphics2D, g, $cast($SunGraphics2D, $nc(backBuffer)->getGraphics()));
	int32_t var$0 = -$nc(this->insets)->left;
	int32_t var$1 = -$nc(this->insets)->top;
	int32_t var$2 = backBuffer->getWidth(nullptr) + $nc(this->insets)->left;
	$nc(g)->constrain(var$0, var$1, var$2, backBuffer->getHeight(nullptr) + $nc(this->insets)->top);
	return g;
}

$Image* Component$BltBufferStrategy::getBackBuffer() {
	if (this->backBuffers != nullptr) {
		return $nc(this->backBuffers)->get($nc(this->backBuffers)->length - 1);
	} else {
		return nullptr;
	}
}

void Component$BltBufferStrategy::show() {
	showSubRegion($nc(this->insets)->left, $nc(this->insets)->top, this->width - $nc(this->insets)->right, this->height - $nc(this->insets)->bottom);
}

void Component$BltBufferStrategy::showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$useLocalCurrentObjectStackCache();
	if (this->backBuffers == nullptr) {
		return;
	}
	x1 -= $nc(this->insets)->left;
	x2 -= $nc(this->insets)->left;
	y1 -= $nc(this->insets)->top;
	y2 -= $nc(this->insets)->top;
	$var($Graphics, g, this->this$0->getGraphics_NoClientCode());
	if (g == nullptr) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(g)->translate($nc(this->insets)->left, $nc(this->insets)->top);
			for (int32_t i = 0; i < $nc(this->backBuffers)->length; ++i) {
				g->drawImage($nc(this->backBuffers)->get(i), x1, y1, x2, y2, x1, y1, x2, y2, nullptr);
				g->dispose();
				$assign(g, nullptr);
				$assign(g, $nc($nc(this->backBuffers)->get(i))->getGraphics());
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (g != nullptr) {
				g->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Component$BltBufferStrategy::revalidate() {
	revalidate(true);
}

void Component$BltBufferStrategy::revalidate(bool checkSize) {
	$useLocalCurrentObjectStackCache();
	this->validatedContents = false;
	if (this->backBuffers == nullptr) {
		return;
	}
	if (checkSize) {
		$var($Insets, insets, this->this$0->getInsets_NoClientCode());
		bool var$1 = this->this$0->getWidth() != this->width;
		bool var$0 = var$1 || this->this$0->getHeight() != this->height;
		if (var$0 || !$nc(insets)->equals(this->insets)) {
			createBackBuffers($nc(this->backBuffers)->length);
			this->validatedContents = true;
		}
	}
	$var($GraphicsConfiguration, gc, this->this$0->getGraphicsConfiguration_NoClientCode());
	int32_t returnCode = $nc($nc(this->backBuffers)->get($nc(this->backBuffers)->length - 1))->validate(gc);
	if (returnCode == $VolatileImage::IMAGE_INCOMPATIBLE) {
		if (checkSize) {
			createBackBuffers($nc(this->backBuffers)->length);
			$nc($nc(this->backBuffers)->get($nc(this->backBuffers)->length - 1))->validate(gc);
		}
		this->validatedContents = true;
	} else if (returnCode == $VolatileImage::IMAGE_RESTORED) {
		this->validatedContents = true;
	}
}

bool Component$BltBufferStrategy::contentsLost() {
	if (this->backBuffers == nullptr) {
		return false;
	} else {
		return $nc($nc(this->backBuffers)->get($nc(this->backBuffers)->length - 1))->contentsLost();
	}
}

bool Component$BltBufferStrategy::contentsRestored() {
	return this->validatedContents;
}

Component$BltBufferStrategy::Component$BltBufferStrategy() {
}

$Class* Component$BltBufferStrategy::load$($String* name, bool initialize) {
	$loadClass(Component$BltBufferStrategy, name, initialize, &_Component$BltBufferStrategy_ClassInfo_, allocate$Component$BltBufferStrategy);
	return class$;
}

$Class* Component$BltBufferStrategy::class$ = nullptr;

	} // awt
} // java