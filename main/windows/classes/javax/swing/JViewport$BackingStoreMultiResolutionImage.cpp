#include <javax/swing/JViewport$BackingStoreMultiResolutionImage.h>

#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $ImageArray = $Array<::java::awt::Image>;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $JViewport = ::javax::swing::JViewport;

namespace javax {
	namespace swing {

$FieldInfo _JViewport$BackingStoreMultiResolutionImage_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE | $FINAL, $field(JViewport$BackingStoreMultiResolutionImage, width)},
	{"height", "I", nullptr, $PRIVATE | $FINAL, $field(JViewport$BackingStoreMultiResolutionImage, height)},
	{"scaledWidth", "I", nullptr, $PRIVATE | $FINAL, $field(JViewport$BackingStoreMultiResolutionImage, scaledWidth)},
	{"scaledHeight", "I", nullptr, $PRIVATE | $FINAL, $field(JViewport$BackingStoreMultiResolutionImage, scaledHeight)},
	{"rvImage", "Ljava/awt/Image;", nullptr, $PRIVATE | $FINAL, $field(JViewport$BackingStoreMultiResolutionImage, rvImage)},
	{}
};

$MethodInfo _JViewport$BackingStoreMultiResolutionImage_MethodInfo_[] = {
	{"<init>", "(IIIILjava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(JViewport$BackingStoreMultiResolutionImage::*)(int32_t,int32_t,int32_t,int32_t,$Image*)>(&JViewport$BackingStoreMultiResolutionImage::init$))},
	{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JViewport$BackingStoreMultiResolutionImage_InnerClassesInfo_[] = {
	{"javax.swing.JViewport$BackingStoreMultiResolutionImage", "javax.swing.JViewport", "BackingStoreMultiResolutionImage", $STATIC},
	{}
};

$ClassInfo _JViewport$BackingStoreMultiResolutionImage_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JViewport$BackingStoreMultiResolutionImage",
	"java.awt.image.AbstractMultiResolutionImage",
	nullptr,
	_JViewport$BackingStoreMultiResolutionImage_FieldInfo_,
	_JViewport$BackingStoreMultiResolutionImage_MethodInfo_,
	nullptr,
	nullptr,
	_JViewport$BackingStoreMultiResolutionImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JViewport"
};

$Object* allocate$JViewport$BackingStoreMultiResolutionImage($Class* clazz) {
	return $of($alloc(JViewport$BackingStoreMultiResolutionImage));
}

void JViewport$BackingStoreMultiResolutionImage::init$(int32_t width, int32_t height, int32_t scaledWidth, int32_t scaledHeight, $Image* rvImage) {
	$AbstractMultiResolutionImage::init$();
	this->width = width;
	this->height = height;
	this->scaledWidth = scaledWidth;
	this->scaledHeight = scaledHeight;
	$set(this, rvImage, rvImage);
}

int32_t JViewport$BackingStoreMultiResolutionImage::getWidth($ImageObserver* observer) {
	return this->width;
}

int32_t JViewport$BackingStoreMultiResolutionImage::getHeight($ImageObserver* observer) {
	return this->height;
}

$Image* JViewport$BackingStoreMultiResolutionImage::getBaseImage() {
	return this->rvImage;
}

$Graphics* JViewport$BackingStoreMultiResolutionImage::getGraphics() {
	$var($Graphics, graphics, $nc(this->rvImage)->getGraphics());
	if ($instanceOf($Graphics2D, graphics)) {
		double sx = (double)this->scaledWidth / this->width;
		double sy = (double)this->scaledHeight / this->height;
		$nc(($cast($Graphics2D, graphics)))->scale(sx, sy);
	}
	return graphics;
}

$Image* JViewport$BackingStoreMultiResolutionImage::getResolutionVariant(double w, double h) {
	return this->rvImage;
}

$List* JViewport$BackingStoreMultiResolutionImage::getResolutionVariants() {
	return $Collections::unmodifiableList($($Arrays::asList($$new($ImageArray, {this->rvImage}))));
}

JViewport$BackingStoreMultiResolutionImage::JViewport$BackingStoreMultiResolutionImage() {
}

$Class* JViewport$BackingStoreMultiResolutionImage::load$($String* name, bool initialize) {
	$loadClass(JViewport$BackingStoreMultiResolutionImage, name, initialize, &_JViewport$BackingStoreMultiResolutionImage_ClassInfo_, allocate$JViewport$BackingStoreMultiResolutionImage);
	return class$;
}

$Class* JViewport$BackingStoreMultiResolutionImage::class$ = nullptr;

	} // swing
} // javax