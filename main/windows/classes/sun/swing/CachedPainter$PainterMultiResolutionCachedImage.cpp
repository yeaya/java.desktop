#include <sun/swing/CachedPainter$PainterMultiResolutionCachedImage.h>

#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

using $ImageArray = $Array<::java::awt::Image>;
using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace sun {
	namespace swing {

$FieldInfo _CachedPainter$PainterMultiResolutionCachedImage_FieldInfo_[] = {
	{"this$0", "Lsun/swing/CachedPainter;", nullptr, $FINAL | $SYNTHETIC, $field(CachedPainter$PainterMultiResolutionCachedImage, this$0)},
	{"baseWidth", "I", nullptr, $PRIVATE | $FINAL, $field(CachedPainter$PainterMultiResolutionCachedImage, baseWidth)},
	{"baseHeight", "I", nullptr, $PRIVATE | $FINAL, $field(CachedPainter$PainterMultiResolutionCachedImage, baseHeight)},
	{"c", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(CachedPainter$PainterMultiResolutionCachedImage, c)},
	{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(CachedPainter$PainterMultiResolutionCachedImage, args)},
	{}
};

$MethodInfo _CachedPainter$PainterMultiResolutionCachedImage_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/CachedPainter;II)V", nullptr, $PUBLIC, $method(static_cast<void(CachedPainter$PainterMultiResolutionCachedImage::*)($CachedPainter*,int32_t,int32_t)>(&CachedPainter$PainterMultiResolutionCachedImage::init$))},
	{"getBaseImage", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getHeight", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC},
	{"getWidth", "(Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"setParams", "(Ljava/awt/Component;[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CachedPainter$PainterMultiResolutionCachedImage_InnerClassesInfo_[] = {
	{"sun.swing.CachedPainter$PainterMultiResolutionCachedImage", "sun.swing.CachedPainter", "PainterMultiResolutionCachedImage", 0},
	{}
};

$ClassInfo _CachedPainter$PainterMultiResolutionCachedImage_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.CachedPainter$PainterMultiResolutionCachedImage",
	"java.awt.image.AbstractMultiResolutionImage",
	nullptr,
	_CachedPainter$PainterMultiResolutionCachedImage_FieldInfo_,
	_CachedPainter$PainterMultiResolutionCachedImage_MethodInfo_,
	nullptr,
	nullptr,
	_CachedPainter$PainterMultiResolutionCachedImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.CachedPainter"
};

$Object* allocate$CachedPainter$PainterMultiResolutionCachedImage($Class* clazz) {
	return $of($alloc(CachedPainter$PainterMultiResolutionCachedImage));
}

void CachedPainter$PainterMultiResolutionCachedImage::init$($CachedPainter* this$0, int32_t baseWidth, int32_t baseHeight) {
	$set(this, this$0, this$0);
	$AbstractMultiResolutionImage::init$();
	this->baseWidth = baseWidth;
	this->baseHeight = baseHeight;
}

void CachedPainter$PainterMultiResolutionCachedImage::setParams($Component* c, $ObjectArray* args) {
	$set(this, c, c);
	$set(this, args, args);
}

int32_t CachedPainter$PainterMultiResolutionCachedImage::getWidth($ImageObserver* observer) {
	return this->baseWidth;
}

int32_t CachedPainter$PainterMultiResolutionCachedImage::getHeight($ImageObserver* observer) {
	return this->baseHeight;
}

$Image* CachedPainter$PainterMultiResolutionCachedImage::getResolutionVariant(double destWidth, double destHeight) {
	int32_t w = $cast(int32_t, $Math::ceil(destWidth));
	int32_t h = $cast(int32_t, $Math::ceil(destHeight));
	return this->this$0->getImage(CachedPainter$PainterMultiResolutionCachedImage::class$, this->c, this->baseWidth, this->baseHeight, w, h, this->args);
}

$Image* CachedPainter$PainterMultiResolutionCachedImage::getBaseImage() {
	return getResolutionVariant((double)this->baseWidth, (double)this->baseHeight);
}

$List* CachedPainter$PainterMultiResolutionCachedImage::getResolutionVariants() {
	$useLocalCurrentObjectStackCache();
	return $Arrays::asList($$new($ImageArray, {$(getResolutionVariant((double)this->baseWidth, (double)this->baseHeight))}));
}

CachedPainter$PainterMultiResolutionCachedImage::CachedPainter$PainterMultiResolutionCachedImage() {
}

$Class* CachedPainter$PainterMultiResolutionCachedImage::load$($String* name, bool initialize) {
	$loadClass(CachedPainter$PainterMultiResolutionCachedImage, name, initialize, &_CachedPainter$PainterMultiResolutionCachedImage_ClassInfo_, allocate$CachedPainter$PainterMultiResolutionCachedImage);
	return class$;
}

$Class* CachedPainter$PainterMultiResolutionCachedImage::class$ = nullptr;

	} // swing
} // sun