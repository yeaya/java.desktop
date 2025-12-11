#include <com/apple/laf/AquaImageFactory$SlicedImageControl.h>

#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef C
#undef E
#undef N
#undef NE
#undef NW
#undef S
#undef SE
#undef SW
#undef TYPE_INT_ARGB_PRE
#undef W

using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaImageFactory$SlicedImageControl_FieldInfo_[] = {
	{"NW", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, NW)},
	{"N", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, N)},
	{"NE", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, NE)},
	{"W", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, W)},
	{"C", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, C)},
	{"E", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, E)},
	{"SW", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, SW)},
	{"S", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, S)},
	{"SE", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, SE)},
	{"metrics", "Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, metrics)},
	{"totalWidth", "I", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, totalWidth)},
	{"totalHeight", "I", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, totalHeight)},
	{"centerColWidth", "I", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, centerColWidth)},
	{"centerRowHeight", "I", nullptr, $FINAL, $field(AquaImageFactory$SlicedImageControl, centerRowHeight)},
	{}
};

$MethodInfo _AquaImageFactory$SlicedImageControl_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$SlicedImageControl::*)($Image*,int32_t,int32_t,int32_t,int32_t)>(&AquaImageFactory$SlicedImageControl::init$))},
	{"<init>", "(Ljava/awt/Image;IIIIZ)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$SlicedImageControl::*)($Image*,int32_t,int32_t,int32_t,int32_t,bool)>(&AquaImageFactory$SlicedImageControl::init$))},
	{"<init>", "(Ljava/awt/Image;IIIIZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$SlicedImageControl::*)($Image*,int32_t,int32_t,int32_t,int32_t,bool,bool,bool)>(&AquaImageFactory$SlicedImageControl::init$))},
	{"<init>", "(Ljava/awt/Image;Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$SlicedImageControl::*)($Image*,$AquaImageFactory$NineSliceMetrics*)>(&AquaImageFactory$SlicedImageControl::init$))},
	{"createSlice", "(Ljava/awt/Image;IIII)Ljava/awt/image/BufferedImage;", nullptr, $STATIC, $method(static_cast<$BufferedImage*(*)($Image*,int32_t,int32_t,int32_t,int32_t)>(&AquaImageFactory$SlicedImageControl::createSlice))},
	{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCompressed", "(Ljava/awt/Graphics;II)V", nullptr, 0},
	{"paintStretchedMiddles", "(Ljava/awt/Graphics;II)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaImageFactory$SlicedImageControl_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$SlicedImageControl", "com.apple.laf.AquaImageFactory", "SlicedImageControl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaImageFactory$SlicedImageControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaImageFactory$SlicedImageControl",
	"java.lang.Object",
	nullptr,
	_AquaImageFactory$SlicedImageControl_FieldInfo_,
	_AquaImageFactory$SlicedImageControl_MethodInfo_,
	nullptr,
	nullptr,
	_AquaImageFactory$SlicedImageControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$SlicedImageControl($Class* clazz) {
	return $of($alloc(AquaImageFactory$SlicedImageControl));
}

void AquaImageFactory$SlicedImageControl::init$($Image* img, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut) {
	AquaImageFactory$SlicedImageControl::init$(img, westCut, eastCut, northCut, southCut, true);
}

void AquaImageFactory$SlicedImageControl::init$($Image* img, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle) {
	AquaImageFactory$SlicedImageControl::init$(img, westCut, eastCut, northCut, southCut, useMiddle, true, true);
}

void AquaImageFactory$SlicedImageControl::init$($Image* img, int32_t westCut, int32_t eastCut, int32_t northCut, int32_t southCut, bool useMiddle, bool stretchHorizontally, bool stretchVertically) {
	int32_t var$0 = $nc(img)->getWidth(nullptr);
	AquaImageFactory$SlicedImageControl::init$(img, $$new($AquaImageFactory$NineSliceMetrics, var$0, img->getHeight(nullptr), westCut, eastCut, northCut, southCut, useMiddle, stretchHorizontally, stretchVertically));
}

void AquaImageFactory$SlicedImageControl::init$($Image* img, $AquaImageFactory$NineSliceMetrics* metrics) {
	$set(this, metrics, metrics);
	bool var$0 = $nc(img)->getWidth(nullptr) != $nc(metrics)->minW;
	if (var$0 || $nc(img)->getHeight(nullptr) != $nc(metrics)->minH) {
		$throwNew($IllegalArgumentException, "SlicedImageControl: template image and NineSliceMetrics don\'t agree on minimum dimensions"_s);
	}
	this->totalWidth = $nc(metrics)->minW;
	this->totalHeight = metrics->minH;
	this->centerColWidth = this->totalWidth - metrics->wCut - metrics->eCut;
	this->centerRowHeight = this->totalHeight - metrics->nCut - metrics->sCut;
	$set(this, NW, createSlice(img, 0, 0, metrics->wCut, metrics->nCut));
	$set(this, N, createSlice(img, metrics->wCut, 0, this->centerColWidth, metrics->nCut));
	$set(this, NE, createSlice(img, this->totalWidth - metrics->eCut, 0, metrics->eCut, metrics->nCut));
	$set(this, W, createSlice(img, 0, metrics->nCut, metrics->wCut, this->centerRowHeight));
	$set(this, C, metrics->showMiddle ? createSlice(img, metrics->wCut, metrics->nCut, this->centerColWidth, this->centerRowHeight) : ($BufferedImage*)nullptr);
	$set(this, E, createSlice(img, this->totalWidth - metrics->eCut, metrics->nCut, metrics->eCut, this->centerRowHeight));
	$set(this, SW, createSlice(img, 0, this->totalHeight - metrics->sCut, metrics->wCut, metrics->sCut));
	$set(this, S, createSlice(img, metrics->wCut, this->totalHeight - metrics->sCut, this->centerColWidth, metrics->sCut));
	$set(this, SE, createSlice(img, this->totalWidth - metrics->eCut, this->totalHeight - metrics->sCut, metrics->eCut, metrics->sCut));
}

$BufferedImage* AquaImageFactory$SlicedImageControl::createSlice($Image* img, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w == 0 || h == 0) {
		return nullptr;
	}
	$var($BufferedImage, slice, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics2D, g2d, slice->createGraphics());
	$nc(g2d)->drawImage(img, 0, 0, w, h, x, y, x + w, y + h, nullptr);
	g2d->dispose();
	return slice;
}

void AquaImageFactory$SlicedImageControl::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->translate(x, y);
	if (w < this->totalWidth || h < this->totalHeight) {
		paintCompressed(g, w, h);
	} else {
		paintStretchedMiddles(g, w, h);
	}
	g->translate(-x, -y);
}

void AquaImageFactory$SlicedImageControl::paintStretchedMiddles($Graphics* g, int32_t w, int32_t h) {
	int32_t baseX = $nc(this->metrics)->stretchH ? 0 : ((w / 2) - (this->totalWidth / 2));
	int32_t baseY = $nc(this->metrics)->stretchV ? 0 : ((h / 2) - (this->totalHeight / 2));
	int32_t adjustedWidth = $nc(this->metrics)->stretchH ? w : this->totalWidth;
	int32_t adjustedHeight = $nc(this->metrics)->stretchV ? h : this->totalHeight;
	if (this->NW != nullptr) {
		$nc(g)->drawImage(this->NW, baseX, baseY, nullptr);
	}
	if (this->N != nullptr) {
		$nc(g)->drawImage(this->N, baseX + $nc(this->metrics)->wCut, baseY, adjustedWidth - $nc(this->metrics)->eCut - $nc(this->metrics)->wCut, $nc(this->metrics)->nCut, nullptr);
	}
	if (this->NE != nullptr) {
		$nc(g)->drawImage(this->NE, baseX + adjustedWidth - $nc(this->metrics)->eCut, baseY, nullptr);
	}
	if (this->W != nullptr) {
		$nc(g)->drawImage(this->W, baseX, baseY + $nc(this->metrics)->nCut, $nc(this->metrics)->wCut, adjustedHeight - $nc(this->metrics)->nCut - $nc(this->metrics)->sCut, nullptr);
	}
	if (this->C != nullptr) {
		$nc(g)->drawImage(this->C, baseX + $nc(this->metrics)->wCut, baseY + $nc(this->metrics)->nCut, adjustedWidth - $nc(this->metrics)->eCut - $nc(this->metrics)->wCut, adjustedHeight - $nc(this->metrics)->nCut - $nc(this->metrics)->sCut, nullptr);
	}
	if (this->E != nullptr) {
		$nc(g)->drawImage(this->E, baseX + adjustedWidth - $nc(this->metrics)->eCut, baseY + $nc(this->metrics)->nCut, $nc(this->metrics)->eCut, adjustedHeight - $nc(this->metrics)->nCut - $nc(this->metrics)->sCut, nullptr);
	}
	if (this->SW != nullptr) {
		$nc(g)->drawImage(this->SW, baseX, baseY + adjustedHeight - $nc(this->metrics)->sCut, nullptr);
	}
	if (this->S != nullptr) {
		$nc(g)->drawImage(this->S, baseX + $nc(this->metrics)->wCut, baseY + adjustedHeight - $nc(this->metrics)->sCut, adjustedWidth - $nc(this->metrics)->eCut - $nc(this->metrics)->wCut, $nc(this->metrics)->sCut, nullptr);
	}
	if (this->SE != nullptr) {
		$nc(g)->drawImage(this->SE, baseX + adjustedWidth - $nc(this->metrics)->eCut, baseY + adjustedHeight - $nc(this->metrics)->sCut, nullptr);
	}
}

void AquaImageFactory$SlicedImageControl::paintCompressed($Graphics* g, int32_t w, int32_t h) {
	double heightRatio = h > this->totalHeight ? 1.0 : (double)h / (double)this->totalHeight;
	double widthRatio = w > this->totalWidth ? 1.0 : (double)w / (double)this->totalWidth;
	int32_t northHeight = $cast(int32_t, ($nc(this->metrics)->nCut * heightRatio));
	int32_t southHeight = $cast(int32_t, ($nc(this->metrics)->sCut * heightRatio));
	int32_t centerHeight = h - northHeight - southHeight;
	int32_t westWidth = $cast(int32_t, ($nc(this->metrics)->wCut * widthRatio));
	int32_t eastWidth = $cast(int32_t, ($nc(this->metrics)->eCut * widthRatio));
	int32_t centerWidth = w - westWidth - eastWidth;
	if (this->NW != nullptr) {
		$nc(g)->drawImage(this->NW, 0, 0, westWidth, northHeight, nullptr);
	}
	if (this->N != nullptr) {
		$nc(g)->drawImage(this->N, westWidth, 0, centerWidth, northHeight, nullptr);
	}
	if (this->NE != nullptr) {
		$nc(g)->drawImage(this->NE, w - eastWidth, 0, eastWidth, northHeight, nullptr);
	}
	if (this->W != nullptr) {
		$nc(g)->drawImage(this->W, 0, northHeight, westWidth, centerHeight, nullptr);
	}
	if (this->C != nullptr) {
		$nc(g)->drawImage(this->C, westWidth, northHeight, centerWidth, centerHeight, nullptr);
	}
	if (this->E != nullptr) {
		$nc(g)->drawImage(this->E, w - eastWidth, northHeight, eastWidth, centerHeight, nullptr);
	}
	if (this->SW != nullptr) {
		$nc(g)->drawImage(this->SW, 0, h - southHeight, westWidth, southHeight, nullptr);
	}
	if (this->S != nullptr) {
		$nc(g)->drawImage(this->S, westWidth, h - southHeight, centerWidth, southHeight, nullptr);
	}
	if (this->SE != nullptr) {
		$nc(g)->drawImage(this->SE, w - eastWidth, h - southHeight, eastWidth, southHeight, nullptr);
	}
}

AquaImageFactory$SlicedImageControl::AquaImageFactory$SlicedImageControl() {
}

$Class* AquaImageFactory$SlicedImageControl::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$SlicedImageControl, name, initialize, &_AquaImageFactory$SlicedImageControl_ClassInfo_, allocate$AquaImageFactory$SlicedImageControl);
	return class$;
}

$Class* AquaImageFactory$SlicedImageControl::class$ = nullptr;

		} // laf
	} // apple
} // com