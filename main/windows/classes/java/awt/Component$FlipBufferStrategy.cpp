#include <java/awt/Component$FlipBufferStrategy.h>

#include <java/applet/Applet.h>
#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component$ProxyCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/VSyncedBSManager.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <jcpp.h>

#undef IMAGE_INCOMPATIBLE
#undef IMAGE_RESTORED
#undef VSYNC_DEFAULT
#undef VSYNC_ON

using $Applet = ::java::applet::Applet;
using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Component$ProxyCapabilities = ::java::awt::Component$ProxyCapabilities;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Window = ::java::awt::Window;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VSyncedBSManager = ::sun::awt::image::VSyncedBSManager;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;
using $ExtendedBufferCapabilities$VSyncType = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType;

namespace java {
	namespace awt {

$FieldInfo _Component$FlipBufferStrategy_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$FlipBufferStrategy, this$0)},
	{"numBuffers", "I", nullptr, $PROTECTED, $field(Component$FlipBufferStrategy, numBuffers)},
	{"caps", "Ljava/awt/BufferCapabilities;", nullptr, $PROTECTED, $field(Component$FlipBufferStrategy, caps)},
	{"drawBuffer", "Ljava/awt/Image;", nullptr, $PROTECTED, $field(Component$FlipBufferStrategy, drawBuffer)},
	{"drawVBuffer", "Ljava/awt/image/VolatileImage;", nullptr, $PROTECTED, $field(Component$FlipBufferStrategy, drawVBuffer)},
	{"validatedContents", "Z", nullptr, $PROTECTED, $field(Component$FlipBufferStrategy, validatedContents)},
	{"width", "I", nullptr, $PRIVATE, $field(Component$FlipBufferStrategy, width)},
	{"height", "I", nullptr, $PRIVATE, $field(Component$FlipBufferStrategy, height)},
	{}
};

$MethodInfo _Component$FlipBufferStrategy_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PROTECTED, $method(static_cast<void(Component$FlipBufferStrategy::*)($Component*,int32_t,$BufferCapabilities*)>(&Component$FlipBufferStrategy::init$)), "java.awt.AWTException"},
	{"contentsLost", "()Z", nullptr, $PUBLIC},
	{"contentsRestored", "()Z", nullptr, $PUBLIC},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PROTECTED, nullptr, "java.awt.AWTException"},
	{"destroyBuffers", "()V", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"flip", "(Ljava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PROTECTED},
	{"flipSubRegion", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, 0},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getDrawGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PRIVATE, $method(static_cast<void(Component$FlipBufferStrategy::*)()>(&Component$FlipBufferStrategy::invalidate))},
	{"revalidate", "()V", nullptr, $PROTECTED},
	{"show", "()V", nullptr, $PUBLIC},
	{"showSubRegion", "(IIII)V", nullptr, 0},
	{"updateInternalBuffers", "()V", nullptr, $PRIVATE, $method(static_cast<void(Component$FlipBufferStrategy::*)()>(&Component$FlipBufferStrategy::updateInternalBuffers))},
	{}
};

$InnerClassInfo _Component$FlipBufferStrategy_InnerClassesInfo_[] = {
	{"java.awt.Component$FlipBufferStrategy", "java.awt.Component", "FlipBufferStrategy", $PROTECTED},
	{}
};

$ClassInfo _Component$FlipBufferStrategy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Component$FlipBufferStrategy",
	"java.awt.image.BufferStrategy",
	nullptr,
	_Component$FlipBufferStrategy_FieldInfo_,
	_Component$FlipBufferStrategy_MethodInfo_,
	nullptr,
	nullptr,
	_Component$FlipBufferStrategy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$FlipBufferStrategy($Class* clazz) {
	return $of($alloc(Component$FlipBufferStrategy));
}

void Component$FlipBufferStrategy::init$($Component* this$0, int32_t numBuffers, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$BufferStrategy::init$();
	if (!($instanceOf($Window, this$0)) && !($instanceOf($Canvas, this$0)) && !($instanceOf($Applet, this$0))) {
		$throwNew($ClassCastException, "Component must be a Canvas or Window or Applet"_s);
	}
	this->numBuffers = numBuffers;
	$set(this, caps, caps);
	createBuffers(numBuffers, caps);
}

void Component$FlipBufferStrategy::createBuffers(int32_t numBuffers, $BufferCapabilities* caps$renamed) {
	$var($BufferCapabilities, caps, caps$renamed);
	if (numBuffers < 2) {
		$throwNew($IllegalArgumentException, "Number of buffers cannot be less than two"_s);
	} else if (this->this$0->peer == nullptr) {
		$throwNew($IllegalStateException, "Component must have a valid peer"_s);
	} else if (caps == nullptr || !$nc(caps)->isPageFlipping()) {
		$throwNew($IllegalArgumentException, "Page flipping capabilities must be specified"_s);
	}
	this->width = this->this$0->getWidth();
	this->height = this->this$0->getHeight();
	if (this->drawBuffer != nullptr) {
		invalidate();
	}
	if ($instanceOf($ExtendedBufferCapabilities, caps)) {
		$var($ExtendedBufferCapabilities, ebc, $cast($ExtendedBufferCapabilities, caps));
		$init($ExtendedBufferCapabilities$VSyncType);
		if ($nc(ebc)->getVSync() == $ExtendedBufferCapabilities$VSyncType::VSYNC_ON) {
			if (!$VSyncedBSManager::vsyncAllowed(this)) {
				$assign(caps, ebc->derive($ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT));
			}
		}
	}
	$nc(this->this$0->peer)->createBuffers(numBuffers, caps);
	updateInternalBuffers();
}

void Component$FlipBufferStrategy::updateInternalBuffers() {
	$set(this, drawBuffer, getBackBuffer());
	if ($instanceOf($VolatileImage, this->drawBuffer)) {
		$set(this, drawVBuffer, $cast($VolatileImage, this->drawBuffer));
	} else {
		$set(this, drawVBuffer, nullptr);
	}
}

$Image* Component$FlipBufferStrategy::getBackBuffer() {
	if (this->this$0->peer != nullptr) {
		return $nc(this->this$0->peer)->getBackBuffer();
	} else {
		$throwNew($IllegalStateException, "Component must have a valid peer"_s);
	}
}

void Component$FlipBufferStrategy::flip($BufferCapabilities$FlipContents* flipAction) {
	if (this->this$0->peer != nullptr) {
		$var($Image, backBuffer, getBackBuffer());
		if (backBuffer != nullptr) {
			int32_t var$0 = backBuffer->getWidth(nullptr);
			$nc(this->this$0->peer)->flip(0, 0, var$0, backBuffer->getHeight(nullptr), flipAction);
		}
	} else {
		$throwNew($IllegalStateException, "Component must have a valid peer"_s);
	}
}

void Component$FlipBufferStrategy::flipSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	if (this->this$0->peer != nullptr) {
		$nc(this->this$0->peer)->flip(x1, y1, x2, y2, flipAction);
	} else {
		$throwNew($IllegalStateException, "Component must have a valid peer"_s);
	}
}

void Component$FlipBufferStrategy::invalidate() {
	$set(this, drawBuffer, nullptr);
	$set(this, drawVBuffer, nullptr);
	destroyBuffers();
}

void Component$FlipBufferStrategy::destroyBuffers() {
	$VSyncedBSManager::releaseVsync(this);
	if (this->this$0->peer != nullptr) {
		$nc(this->this$0->peer)->destroyBuffers();
	} else {
		$throwNew($IllegalStateException, "Component must have a valid peer"_s);
	}
}

$BufferCapabilities* Component$FlipBufferStrategy::getCapabilities() {
	if ($instanceOf($Component$ProxyCapabilities, this->caps)) {
		return $nc(($cast($Component$ProxyCapabilities, this->caps)))->orig;
	} else {
		return this->caps;
	}
}

$Graphics* Component$FlipBufferStrategy::getDrawGraphics() {
	revalidate();
	return $nc(this->drawBuffer)->getGraphics();
}

void Component$FlipBufferStrategy::revalidate() {
	this->validatedContents = false;
	bool var$0 = this->this$0->getWidth() != this->width;
	if (var$0 || this->this$0->getHeight() != this->height || this->drawBuffer == nullptr) {
		try {
			createBuffers(this->numBuffers, this->caps);
		} catch ($AWTException&) {
			$catch();
		}
		this->validatedContents = true;
	}
	updateInternalBuffers();
	if (this->drawVBuffer != nullptr) {
		$var($GraphicsConfiguration, gc, this->this$0->getGraphicsConfiguration_NoClientCode());
		int32_t returnCode = $nc(this->drawVBuffer)->validate(gc);
		if (returnCode == $VolatileImage::IMAGE_INCOMPATIBLE) {
			try {
				createBuffers(this->numBuffers, this->caps);
			} catch ($AWTException&) {
				$catch();
			}
			if (this->drawVBuffer != nullptr) {
				$nc(this->drawVBuffer)->validate(gc);
			}
			this->validatedContents = true;
		} else if (returnCode == $VolatileImage::IMAGE_RESTORED) {
			this->validatedContents = true;
		}
	}
}

bool Component$FlipBufferStrategy::contentsLost() {
	if (this->drawVBuffer == nullptr) {
		return false;
	}
	return $nc(this->drawVBuffer)->contentsLost();
}

bool Component$FlipBufferStrategy::contentsRestored() {
	return this->validatedContents;
}

void Component$FlipBufferStrategy::show() {
	flip($($nc(this->caps)->getFlipContents()));
}

void Component$FlipBufferStrategy::showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	flipSubRegion(x1, y1, x2, y2, $($nc(this->caps)->getFlipContents()));
}

void Component$FlipBufferStrategy::dispose() {
	if ($equals(this->this$0->bufferStrategy, this)) {
		$set(this->this$0, bufferStrategy, nullptr);
		if (this->this$0->peer != nullptr) {
			invalidate();
		}
	}
}

Component$FlipBufferStrategy::Component$FlipBufferStrategy() {
}

$Class* Component$FlipBufferStrategy::load$($String* name, bool initialize) {
	$loadClass(Component$FlipBufferStrategy, name, initialize, &_Component$FlipBufferStrategy_ClassInfo_, allocate$Component$FlipBufferStrategy);
	return class$;
}

$Class* Component$FlipBufferStrategy::class$ = nullptr;

	} // awt
} // java