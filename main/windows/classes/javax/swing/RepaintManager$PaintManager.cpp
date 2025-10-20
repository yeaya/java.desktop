#include <javax/swing/RepaintManager$PaintManager.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RepaintManager.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef IMAGE_INCOMPATIBLE
#undef OPAQUE
#undef VOLATILE_LOOP_MAX

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $Region = ::sun::java2d::pipe::Region;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$PaintManager_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RepaintManager$PaintManager, $assertionsDisabled)},
	{"repaintManager", "Ljavax/swing/RepaintManager;", nullptr, $PROTECTED, $field(RepaintManager$PaintManager, repaintManager)},
	{"isRepaintingRoot", "Z", nullptr, 0, $field(RepaintManager$PaintManager, isRepaintingRoot$)},
	{}
};

$MethodInfo _RepaintManager$PaintManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintManager$PaintManager::*)()>(&RepaintManager$PaintManager::init$))},
	{"beginPaint", "()V", nullptr, $PUBLIC},
	{"copyArea", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PROTECTED},
	{"doubleBufferingChanged", "(Ljavax/swing/JRootPane;)V", nullptr, $PUBLIC},
	{"endPaint", "()V", nullptr, $PUBLIC},
	{"getTransform", "(Ljava/awt/Graphics;)Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$AffineTransform*(*)($Graphics*)>(&RepaintManager$PaintManager::getTransform))},
	{"getValidImage", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(static_cast<$Image*(RepaintManager$PaintManager::*)($Image*)>(&RepaintManager$PaintManager::getValidImage))},
	{"isPixelsCopying", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RepaintManager$PaintManager::*)($JComponent*,$Graphics*)>(&RepaintManager$PaintManager::isPixelsCopying))},
	{"isRepaintingRoot", "()Z", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljava/awt/Graphics;IIII)Z", nullptr, $PUBLIC},
	{"paintDoubleBuffered", "(Ljavax/swing/JComponent;Ljava/awt/Image;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"paintDoubleBufferedFPScales", "(Ljavax/swing/JComponent;Ljava/awt/Image;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager$PaintManager::*)($JComponent*,$Image*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&RepaintManager$PaintManager::paintDoubleBufferedFPScales))},
	{"paintDoubleBufferedImpl", "(Ljavax/swing/JComponent;Ljava/awt/Image;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintManager$PaintManager::*)($JComponent*,$Image*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&RepaintManager$PaintManager::paintDoubleBufferedImpl))},
	{"repaintRoot", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"show", "(Ljava/awt/Container;IIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RepaintManager$PaintManager_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$PaintManager", "javax.swing.RepaintManager", "PaintManager", $STATIC},
	{}
};

$ClassInfo _RepaintManager$PaintManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$PaintManager",
	"java.lang.Object",
	nullptr,
	_RepaintManager$PaintManager_FieldInfo_,
	_RepaintManager$PaintManager_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManager$PaintManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$PaintManager($Class* clazz) {
	return $of($alloc(RepaintManager$PaintManager));
}

bool RepaintManager$PaintManager::$assertionsDisabled = false;

void RepaintManager$PaintManager::init$() {
}

bool RepaintManager$PaintManager::paint($JComponent* paintingComponent, $JComponent* bufferComponent, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	bool paintCompleted = false;
	$var($Image, offscreen, nullptr);
	int32_t sw = w + 1;
	int32_t sh = h + 1;
	bool var$0 = $nc(this->repaintManager)->useVolatileDoubleBuffer();
	if (var$0 && ($assign(offscreen, getValidImage($($nc(this->repaintManager)->getVolatileOffscreenBuffer(bufferComponent, sw, sh))))) != nullptr) {
		$var($VolatileImage, vImage, $cast($VolatileImage, offscreen));
		$var($GraphicsConfiguration, gc, $nc(bufferComponent)->getGraphicsConfiguration());
		for (int32_t i = 0; !paintCompleted && i < $RepaintManager::VOLATILE_LOOP_MAX; ++i) {
			if ($nc(vImage)->validate(gc) == $VolatileImage::IMAGE_INCOMPATIBLE) {
				$nc(this->repaintManager)->resetVolatileDoubleBuffer(gc);
				$assign(offscreen, $nc(this->repaintManager)->getVolatileOffscreenBuffer(bufferComponent, sw, sh));
				$assign(vImage, $cast($VolatileImage, offscreen));
			}
			paintDoubleBuffered(paintingComponent, vImage, g, x, y, w, h);
			paintCompleted = !$nc(vImage)->contentsLost();
		}
	}
	if (!paintCompleted && ($assign(offscreen, getValidImage($($nc(this->repaintManager)->getOffscreenBuffer(bufferComponent, w, h))))) != nullptr) {
		paintDoubleBuffered(paintingComponent, offscreen, g, x, y, w, h);
		paintCompleted = true;
	}
	return paintCompleted;
}

void RepaintManager$PaintManager::copyArea($JComponent* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t deltaX, int32_t deltaY, bool clip) {
	$nc(g)->copyArea(x, y, w, h, deltaX, deltaY);
}

void RepaintManager$PaintManager::beginPaint() {
}

void RepaintManager$PaintManager::endPaint() {
}

bool RepaintManager$PaintManager::show($Container* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	return false;
}

void RepaintManager$PaintManager::doubleBufferingChanged($JRootPane* rootPane) {
}

void RepaintManager$PaintManager::paintDoubleBuffered($JComponent* c, $Image* image, $Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH) {
	if ($instanceOf($VolatileImage, image) && isPixelsCopying(c, g)) {
		paintDoubleBufferedFPScales(c, image, g, clipX, clipY, clipW, clipH);
	} else {
		paintDoubleBufferedImpl(c, image, g, clipX, clipY, clipW, clipH);
	}
}

void RepaintManager$PaintManager::paintDoubleBufferedImpl($JComponent* c, $Image* image, $Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, osg, $nc(image)->getGraphics());
	int32_t bw = $Math::min(clipW, image->getWidth(nullptr));
	int32_t bh = $Math::min(clipH, image->getHeight(nullptr));
	int32_t x = 0;
	int32_t y = 0;
	int32_t maxx = 0;
	int32_t maxy = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (x = clipX, maxx = clipX + clipW; x < maxx; x += bw) {
				for (y = clipY, maxy = clipY + clipH; y < maxy; y += bh) {
					$nc(osg)->translate(-x, -y);
					osg->setClip(x, y, bw, bh);
					$init($RepaintManager);
					if ($RepaintManager::volatileBufferType != $Transparency::OPAQUE && $instanceOf($Graphics2D, osg)) {
						$var($Graphics2D, g2d, $cast($Graphics2D, osg));
						$var($Color, oldBg, g2d->getBackground());
						g2d->setBackground($($nc(c)->getBackground()));
						g2d->clearRect(x, y, bw, bh);
						g2d->setBackground(oldBg);
					}
					$nc(c)->paintToOffscreen(osg, x, y, bw, bh, maxx, maxy);
					$nc(g)->setClip(x, y, bw, bh);
					if ($RepaintManager::volatileBufferType != $Transparency::OPAQUE && $instanceOf($Graphics2D, g)) {
						$var($Graphics2D, g2d, $cast($Graphics2D, g));
						$var($Composite, oldComposite, g2d->getComposite());
						$init($AlphaComposite);
						g2d->setComposite($AlphaComposite::Src);
						g2d->drawImage(image, x, y, c);
						g2d->setComposite(oldComposite);
					} else {
						g->drawImage(image, x, y, c);
					}
					osg->translate(x, y);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(osg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void RepaintManager$PaintManager::paintDoubleBufferedFPScales($JComponent* c, $Image* image, $Graphics* g, int32_t clipX, int32_t clipY, int32_t clipW, int32_t clipH) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, osg, $nc(image)->getGraphics());
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	$var($Graphics2D, osg2d, $cast($Graphics2D, osg));
	$var($AffineTransform, identity, $new($AffineTransform));
	int32_t bw = $Math::min(clipW, image->getWidth(nullptr));
	int32_t bh = $Math::min(clipH, image->getHeight(nullptr));
	int32_t x = 0;
	int32_t y = 0;
	int32_t maxx = 0;
	int32_t maxy = 0;
	$var($AffineTransform, tx, $nc(g2d)->getTransform());
	double scaleX = $nc(tx)->getScaleX();
	double scaleY = tx->getScaleY();
	double trX = tx->getTranslateX();
	double trY = tx->getTranslateY();
	$init($RepaintManager);
	bool translucent = $RepaintManager::volatileBufferType != $Transparency::OPAQUE;
	$var($Composite, oldComposite, g2d->getComposite());
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (x = clipX, maxx = clipX + clipW; x < maxx; x += bw) {
				for (y = clipY, maxy = clipY + clipH; y < maxy; y += bh) {
					int32_t pixelx1 = $Region::clipRound(x * scaleX + trX);
					int32_t pixely1 = $Region::clipRound(y * scaleY + trY);
					int32_t pixelx2 = $Region::clipRound((x + bw) * scaleX + trX);
					int32_t pixely2 = $Region::clipRound((y + bh) * scaleY + trY);
					int32_t pixelw = pixelx2 - pixelx1;
					int32_t pixelh = pixely2 - pixely1;
					$nc(osg2d)->setTransform(identity);
					if (translucent) {
						$var($Color, oldBg, g2d->getBackground());
						g2d->setBackground($($nc(c)->getBackground()));
						g2d->clearRect(pixelx1, pixely1, pixelw, pixelh);
						g2d->setBackground(oldBg);
					}
					osg2d->setClip(0, 0, pixelw, pixelh);
					osg2d->translate(trX - pixelx1, trY - pixely1);
					osg2d->scale(scaleX, scaleY);
					$nc(c)->paintToOffscreen(osg, x, y, bw, bh, maxx, maxy);
					g2d->setTransform(identity);
					g2d->setClip(pixelx1, pixely1, pixelw, pixelh);
					$var($AffineTransform, stx, $new($AffineTransform));
					stx->translate((double)pixelx1, (double)pixely1);
					stx->scale(scaleX, scaleY);
					g2d->setTransform(stx);
					if (translucent) {
						$init($AlphaComposite);
						g2d->setComposite($AlphaComposite::Src);
					}
					g2d->drawImage(image, 0, 0, c);
					if (translucent) {
						g2d->setComposite(oldComposite);
					}
					g2d->setTransform(tx);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(osg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Image* RepaintManager$PaintManager::getValidImage($Image* image) {
	bool var$0 = image != nullptr && image->getWidth(nullptr) > 0;
	if (var$0 && image->getHeight(nullptr) > 0) {
		return image;
	}
	return nullptr;
}

void RepaintManager$PaintManager::repaintRoot($JComponent* root) {
	if (!RepaintManager$PaintManager::$assertionsDisabled && !($nc(this->repaintManager)->repaintRoot == nullptr)) {
		$throwNew($AssertionError);
	}
	if ($nc(this->repaintManager)->painting) {
		$set($nc(this->repaintManager), repaintRoot, root);
	} else {
		$nc(root)->repaint();
	}
}

bool RepaintManager$PaintManager::isRepaintingRoot() {
	return this->isRepaintingRoot$;
}

void RepaintManager$PaintManager::dispose() {
}

bool RepaintManager$PaintManager::isPixelsCopying($JComponent* c, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, tx, getTransform(g));
	$var($GraphicsConfiguration, gc, $nc(c)->getGraphicsConfiguration());
	if (tx == nullptr || gc == nullptr || !$SwingUtilities2::isFloatingPointScale(tx)) {
		return false;
	}
	$var($AffineTransform, gcTx, $nc(gc)->getDefaultTransform());
	double var$1 = $nc(gcTx)->getScaleX();
	bool var$0 = var$1 == $nc(tx)->getScaleX();
	if (var$0) {
		double var$2 = gcTx->getScaleY();
		var$0 = var$2 == tx->getScaleY();
	}
	return var$0;
}

$AffineTransform* RepaintManager$PaintManager::getTransform($Graphics* g) {
	$init(RepaintManager$PaintManager);
	if ($instanceOf($SunGraphics2D, g)) {
		return $nc(($cast($SunGraphics2D, g)))->transform$;
	} else if ($instanceOf($Graphics2D, g)) {
		return $nc(($cast($Graphics2D, g)))->getTransform();
	}
	return nullptr;
}

void clinit$RepaintManager$PaintManager($Class* class$) {
	$load($RepaintManager);
	RepaintManager$PaintManager::$assertionsDisabled = !$RepaintManager::class$->desiredAssertionStatus();
}

RepaintManager$PaintManager::RepaintManager$PaintManager() {
}

$Class* RepaintManager$PaintManager::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$PaintManager, name, initialize, &_RepaintManager$PaintManager_ClassInfo_, clinit$RepaintManager$PaintManager, allocate$RepaintManager$PaintManager);
	return class$;
}

$Class* RepaintManager$PaintManager::class$ = nullptr;

	} // swing
} // javax