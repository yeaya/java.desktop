#include <sun/print/PeekGraphics$ImageWaiter.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/InterruptedException.h>
#include <sun/print/PeekGraphics.h>
#include <jcpp.h>

#undef ABORT
#undef ERROR
#undef HEIGHT

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $PeekGraphics = ::sun::print::PeekGraphics;

namespace sun {
	namespace print {

$FieldInfo _PeekGraphics$ImageWaiter_FieldInfo_[] = {
	{"this$0", "Lsun/print/PeekGraphics;", nullptr, $FINAL | $SYNTHETIC, $field(PeekGraphics$ImageWaiter, this$0)},
	{"mWidth", "I", nullptr, $PRIVATE, $field(PeekGraphics$ImageWaiter, mWidth)},
	{"mHeight", "I", nullptr, $PRIVATE, $field(PeekGraphics$ImageWaiter, mHeight)},
	{"badImage", "Z", nullptr, $PRIVATE, $field(PeekGraphics$ImageWaiter, badImage)},
	{}
};

$MethodInfo _PeekGraphics$ImageWaiter_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PeekGraphics;Ljava/awt/Image;)V", nullptr, 0, $method(static_cast<void(PeekGraphics$ImageWaiter::*)($PeekGraphics*,$Image*)>(&PeekGraphics$ImageWaiter::init$))},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"waitForDimensions", "(Ljava/awt/Image;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(PeekGraphics$ImageWaiter::*)($Image*)>(&PeekGraphics$ImageWaiter::waitForDimensions))},
	{}
};

$InnerClassInfo _PeekGraphics$ImageWaiter_InnerClassesInfo_[] = {
	{"sun.print.PeekGraphics$ImageWaiter", "sun.print.PeekGraphics", "ImageWaiter", $PROTECTED},
	{}
};

$ClassInfo _PeekGraphics$ImageWaiter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PeekGraphics$ImageWaiter",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_PeekGraphics$ImageWaiter_FieldInfo_,
	_PeekGraphics$ImageWaiter_MethodInfo_,
	nullptr,
	nullptr,
	_PeekGraphics$ImageWaiter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PeekGraphics"
};

$Object* allocate$PeekGraphics$ImageWaiter($Class* clazz) {
	return $of($alloc(PeekGraphics$ImageWaiter));
}

void PeekGraphics$ImageWaiter::init$($PeekGraphics* this$0, $Image* img) {
	$set(this, this$0, this$0);
	this->badImage = false;
	waitForDimensions(img);
}

int32_t PeekGraphics$ImageWaiter::getWidth() {
	return this->mWidth;
}

int32_t PeekGraphics$ImageWaiter::getHeight() {
	return this->mHeight;
}

void PeekGraphics$ImageWaiter::waitForDimensions($Image* img) {
	$synchronized(this) {
		this->mHeight = $nc(img)->getHeight(this);
		this->mWidth = img->getWidth(this);
		while (!this->badImage && (this->mWidth < 0 || this->mHeight < 0)) {
			try {
				$Thread::sleep(50);
			} catch ($InterruptedException& e) {
			}
			this->mHeight = img->getHeight(this);
			this->mWidth = img->getWidth(this);
		}
		if (this->badImage) {
			this->mHeight = 0;
			this->mWidth = 0;
		}
	}
}

bool PeekGraphics$ImageWaiter::imageUpdate($Image* image, int32_t flags, int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		bool dontCallMeAgain = ((int32_t)(flags & (uint32_t)(($ImageObserver::HEIGHT | $ImageObserver::ABORT) | $ImageObserver::ERROR))) != 0;
		this->badImage = ((int32_t)(flags & (uint32_t)($ImageObserver::ABORT | $ImageObserver::ERROR))) != 0;
		return dontCallMeAgain;
	}
}

PeekGraphics$ImageWaiter::PeekGraphics$ImageWaiter() {
}

$Class* PeekGraphics$ImageWaiter::load$($String* name, bool initialize) {
	$loadClass(PeekGraphics$ImageWaiter, name, initialize, &_PeekGraphics$ImageWaiter_ClassInfo_, allocate$PeekGraphics$ImageWaiter);
	return class$;
}

$Class* PeekGraphics$ImageWaiter::class$ = nullptr;

	} // print
} // sun