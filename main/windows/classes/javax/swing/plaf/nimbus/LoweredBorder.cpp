#include <javax/swing/plaf/nimbus/LoweredBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <javax/swing/plaf/nimbus/ImageScalingHelper$PaintType.h>
#include <javax/swing/plaf/nimbus/ImageScalingHelper.h>
#include <javax/swing/plaf/nimbus/InnerShadowEffect.h>
#include <jcpp.h>

#undef BLACK
#undef IMG_SIZE
#undef INSETS
#undef KEY_ANTIALIASING
#undef MAX_VALUE
#undef NINE_SQUARE_SCALE
#undef PAINT9_STRETCH
#undef PAINT_ALL
#undef PAINT_CONTEXT
#undef RADIUS
#undef TYPE_INT_ARGB
#undef VALUE_ANTIALIAS_ON

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;
using $ImageScalingHelper = ::javax::swing::plaf::nimbus::ImageScalingHelper;
using $ImageScalingHelper$PaintType = ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType;
using $InnerShadowEffect = ::javax::swing::plaf::nimbus::InnerShadowEffect;
using $ShadowEffect = ::javax::swing::plaf::nimbus::ShadowEffect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _LoweredBorder_FieldInfo_[] = {
	{"IMG_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LoweredBorder, IMG_SIZE)},
	{"RADIUS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LoweredBorder, RADIUS)},
	{"INSETS", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoweredBorder, INSETS)},
	{"PAINT_CONTEXT", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LoweredBorder, PAINT_CONTEXT)},
	{}
};

$MethodInfo _LoweredBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LoweredBorder::*)()>(&LoweredBorder::init$))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getExtendedCacheKeys", "(Ljavax/swing/JComponent;)[Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getLighter", "(Ljava/awt/Color;F)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(LoweredBorder::*)($Color*,float)>(&LoweredBorder::getLighter))},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LoweredBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.LoweredBorder",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	"javax.swing.border.Border",
	_LoweredBorder_FieldInfo_,
	_LoweredBorder_MethodInfo_
};

$Object* allocate$LoweredBorder($Class* clazz) {
	return $of($alloc(LoweredBorder));
}

int32_t LoweredBorder::hashCode() {
	 return this->$AbstractRegionPainter::hashCode();
}

bool LoweredBorder::equals(Object$* arg0) {
	 return this->$AbstractRegionPainter::equals(arg0);
}

$Object* LoweredBorder::clone() {
	 return this->$AbstractRegionPainter::clone();
}

$String* LoweredBorder::toString() {
	 return this->$AbstractRegionPainter::toString();
}

void LoweredBorder::finalize() {
	this->$AbstractRegionPainter::finalize();
}

$Insets* LoweredBorder::INSETS = nullptr;
$AbstractRegionPainter$PaintContext* LoweredBorder::PAINT_CONTEXT = nullptr;

void LoweredBorder::init$() {
	$AbstractRegionPainter::init$();
}

$ObjectArray* LoweredBorder::getExtendedCacheKeys($JComponent* c) {
	return (c != nullptr) ? $new($ObjectArray, {$($of($nc(c)->getBackground()))}) : ($ObjectArray*)nullptr;
}

void LoweredBorder::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$useLocalCurrentObjectStackCache();
	$init($Color);
	$var($Color, color, (c == nullptr) ? $Color::BLACK : $nc(c)->getBackground());
	$var($BufferedImage, img1, $new($BufferedImage, LoweredBorder::IMG_SIZE, LoweredBorder::IMG_SIZE, $BufferedImage::TYPE_INT_ARGB));
	$var($BufferedImage, img2, $new($BufferedImage, LoweredBorder::IMG_SIZE, LoweredBorder::IMG_SIZE, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics2D, g2, $cast($Graphics2D, img1->getGraphics()));
	$init($RenderingHints);
	$nc(g2)->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	g2->setColor(color);
	g2->fillRoundRect(2, 0, 26, 26, LoweredBorder::RADIUS, LoweredBorder::RADIUS);
	g2->dispose();
	$var($InnerShadowEffect, effect, $new($InnerShadowEffect));
	effect->setDistance(1);
	effect->setSize(3);
	effect->setColor($(getLighter(color, 2.1f)));
	effect->setAngle(90);
	effect->applyEffect(img1, img2, LoweredBorder::IMG_SIZE, LoweredBorder::IMG_SIZE);
	$assign(g2, $cast($Graphics2D, img2->getGraphics()));
	g2->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
	g2->setClip(0, 28, LoweredBorder::IMG_SIZE, 1);
	g2->setColor($(getLighter(color, 0.9f)));
	g2->drawRoundRect(2, 1, 25, 25, LoweredBorder::RADIUS, LoweredBorder::RADIUS);
	g2->dispose();
	if (width != LoweredBorder::IMG_SIZE || height != LoweredBorder::IMG_SIZE) {
		$init($ImageScalingHelper$PaintType);
		$ImageScalingHelper::paint(g, 0, 0, width, height, img2, LoweredBorder::INSETS, LoweredBorder::INSETS, $ImageScalingHelper$PaintType::PAINT9_STRETCH, $ImageScalingHelper::PAINT_ALL);
	} else {
		$nc(g)->drawImage(img2, 0, 0, c);
	}
	$assign(img1, nullptr);
	$assign(img2, nullptr);
}

$AbstractRegionPainter$PaintContext* LoweredBorder::getPaintContext() {
	return LoweredBorder::PAINT_CONTEXT;
}

$Insets* LoweredBorder::getBorderInsets($Component* c) {
	return $cast($Insets, $nc(LoweredBorder::INSETS)->clone());
}

bool LoweredBorder::isBorderOpaque() {
	return false;
}

void LoweredBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, comp, ($instanceOf($JComponent, c)) ? $cast($JComponent, c) : ($JComponent*)nullptr);
	if ($instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2, $cast($Graphics2D, g));
		$nc(g2)->translate(x, y);
		paint(g2, comp, width, height);
		g2->translate(-x, -y);
	} else {
		$var($BufferedImage, img, $new($BufferedImage, LoweredBorder::IMG_SIZE, LoweredBorder::IMG_SIZE, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics2D, g2, $cast($Graphics2D, img->getGraphics()));
		paint(g2, comp, width, height);
		$nc(g2)->dispose();
		$init($ImageScalingHelper$PaintType);
		$ImageScalingHelper::paint(g, x, y, width, height, img, LoweredBorder::INSETS, LoweredBorder::INSETS, $ImageScalingHelper$PaintType::PAINT9_STRETCH, $ImageScalingHelper::PAINT_ALL);
	}
}

$Color* LoweredBorder::getLighter($Color* c, float factor) {
	int32_t var$0 = $Math::min($cast(int32_t, ($nc(c)->getRed() / factor)), 255);
	int32_t var$1 = $Math::min($cast(int32_t, ($nc(c)->getGreen() / factor)), 255);
	return $new($Color, var$0, var$1, $Math::min($cast(int32_t, ($nc(c)->getBlue() / factor)), 255));
}

void clinit$LoweredBorder($Class* class$) {
	$assignStatic(LoweredBorder::INSETS, $new($Insets, 10, 10, 10, 10));
	$init($AbstractRegionPainter$PaintContext$CacheMode);
	$assignStatic(LoweredBorder::PAINT_CONTEXT, $new($AbstractRegionPainter$PaintContext, LoweredBorder::INSETS, $$new($Dimension, LoweredBorder::IMG_SIZE, LoweredBorder::IMG_SIZE), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, (double)$Integer::MAX_VALUE, (double)$Integer::MAX_VALUE));
}

LoweredBorder::LoweredBorder() {
}

$Class* LoweredBorder::load$($String* name, bool initialize) {
	$loadClass(LoweredBorder, name, initialize, &_LoweredBorder_ClassInfo_, clinit$LoweredBorder, allocate$LoweredBorder);
	return class$;
}

$Class* LoweredBorder::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax