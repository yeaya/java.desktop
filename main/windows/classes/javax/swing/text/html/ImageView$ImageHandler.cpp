#include <javax/swing/text/html/ImageView$ImageHandler.h>

#include <java/awt/Dimension.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

#undef ABORT
#undef ALLBITS
#undef ERROR
#undef FRAMEBITS
#undef HEIGHT
#undef SOMEBITS
#undef WIDTH

using $Dimension = ::java::awt::Dimension;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _ImageView$ImageHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/ImageView;", nullptr, $FINAL | $SYNTHETIC, $field(ImageView$ImageHandler, this$0)},
	{}
};

$MethodInfo _ImageView$ImageHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/ImageView;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageView$ImageHandler::*)($ImageView*)>(&ImageView$ImageHandler::init$))},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageView$ImageHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.html.ImageView$ImageHandler", "javax.swing.text.html.ImageView", "ImageHandler", $PRIVATE},
	{}
};

$ClassInfo _ImageView$ImageHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.ImageView$ImageHandler",
	"java.lang.Object",
	"java.awt.image.ImageObserver",
	_ImageView$ImageHandler_FieldInfo_,
	_ImageView$ImageHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ImageView$ImageHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.ImageView"
};

$Object* allocate$ImageView$ImageHandler($Class* clazz) {
	return $of($alloc(ImageView$ImageHandler));
}

void ImageView$ImageHandler::init$($ImageView* this$0) {
	$set(this, this$0, this$0);
}

bool ImageView$ImageHandler::imageUpdate($Image* img, int32_t flags, int32_t x, int32_t y, int32_t newWidth, int32_t newHeight) {
	$useLocalCurrentObjectStackCache();
	if (img != this->this$0->image && img != this->this$0->disabledImage || this->this$0->image == nullptr || this->this$0->getParent() == nullptr) {
		return false;
	}
	if (((int32_t)(flags & (uint32_t)($ImageObserver::ABORT | $ImageObserver::ERROR))) != 0) {
		this->this$0->repaint(0);
		$synchronized(this->this$0) {
			if (this->this$0->image == img) {
				$set(this->this$0, image, nullptr);
				if (((int32_t)(this->this$0->state & (uint32_t)4)) != 4) {
					this->this$0->width = 38;
				}
				if (((int32_t)(this->this$0->state & (uint32_t)8)) != 8) {
					this->this$0->height = 38;
				}
			} else {
				$set(this->this$0, disabledImage, nullptr);
			}
			if (((int32_t)(this->this$0->state & (uint32_t)1)) == 1) {
				return false;
			}
		}
		this->this$0->updateAltTextView();
		this->this$0->safePreferenceChanged();
		return false;
	}
	if (this->this$0->image == img) {
		int16_t changed = (int16_t)0;
		$init($HTML$Attribute);
		if (((int32_t)(flags & (uint32_t)$ImageObserver::HEIGHT)) != 0 && !$nc($($nc($(this->this$0->getElement()))->getAttributes()))->isDefined($HTML$Attribute::HEIGHT)) {
			changed |= 1;
		}
		if (((int32_t)(flags & (uint32_t)$ImageObserver::WIDTH)) != 0 && !$nc($($nc($(this->this$0->getElement()))->getAttributes()))->isDefined($HTML$Attribute::WIDTH)) {
			changed |= 2;
		}
		if ((((int32_t)(flags & (uint32_t)$ImageObserver::HEIGHT)) != 0) && (((int32_t)(flags & (uint32_t)$ImageObserver::WIDTH)) != 0)) {
			$var($Dimension, d, this->this$0->adjustWidthHeight(newWidth, newHeight));
			newWidth = $nc(d)->width;
			newHeight = d->height;
			changed |= 3;
		}
		$synchronized(this->this$0) {
			if (((int32_t)(changed & (uint32_t)1)) == 1 && ((int32_t)(this->this$0->state & (uint32_t)8)) == 0) {
				this->this$0->height = newHeight;
			}
			if (((int32_t)(changed & (uint32_t)2)) == 2 && ((int32_t)(this->this$0->state & (uint32_t)4)) == 0) {
				this->this$0->width = newWidth;
			}
			if (((int32_t)(this->this$0->state & (uint32_t)1)) == 1) {
				return true;
			}
		}
		if (changed != 0) {
			this->this$0->safePreferenceChanged();
			return true;
		}
	}
	if (((int32_t)(flags & (uint32_t)($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS))) != 0) {
		this->this$0->repaint(0);
	} else {
		if (((int32_t)(flags & (uint32_t)$ImageObserver::SOMEBITS)) != 0 && $ImageView::sIsInc) {
			this->this$0->repaint($ImageView::sIncRate);
		}
	}
	return (((int32_t)(flags & (uint32_t)$ImageObserver::ALLBITS)) == 0);
}

ImageView$ImageHandler::ImageView$ImageHandler() {
}

$Class* ImageView$ImageHandler::load$($String* name, bool initialize) {
	$loadClass(ImageView$ImageHandler, name, initialize, &_ImageView$ImageHandler_ClassInfo_, allocate$ImageView$ImageHandler);
	return class$;
}

$Class* ImageView$ImageHandler::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax