#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/RadialGradientPaint.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/print/PrinterGraphics.h>
#include <java/lang/Number.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/ImageCache.h>
#include <javax/swing/plaf/nimbus/ImageScalingHelper$PaintType.h>
#include <javax/swing/plaf/nimbus/ImageScalingHelper.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

#undef FIXED_SIZES
#undef IMAGE_INCOMPATIBLE
#undef IMAGE_RESTORED
#undef KEY_ANTIALIASING
#undef KEY_INTERPOLATION
#undef NO_CACHING
#undef PAINT9_STRETCH
#undef PAINT_ALL
#undef TRANSLUCENT
#undef VALUE_ANTIALIAS_ON
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR

using $ColorArray = $Array<::java::awt::Color>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Transparency = ::java::awt::Transparency;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $PrinterGraphics = ::java::awt::print::PrinterGraphics;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JTable = ::javax::swing::JTable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Painter = ::javax::swing::Painter;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;
using $ImageCache = ::javax::swing::plaf::nimbus::ImageCache;
using $ImageScalingHelper = ::javax::swing::plaf::nimbus::ImageScalingHelper;
using $ImageScalingHelper$PaintType = ::javax::swing::plaf::nimbus::ImageScalingHelper$PaintType;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _AbstractRegionPainter_FieldInfo_[] = {
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(AbstractRegionPainter, ctx)},
	{"f", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, f)},
	{"leftWidth", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, leftWidth)},
	{"topHeight", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, topHeight)},
	{"centerWidth", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, centerWidth)},
	{"centerHeight", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, centerHeight)},
	{"rightWidth", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, rightWidth)},
	{"bottomHeight", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, bottomHeight)},
	{"leftScale", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, leftScale)},
	{"topScale", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, topScale)},
	{"centerHScale", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, centerHScale)},
	{"centerVScale", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, centerVScale)},
	{"rightScale", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, rightScale)},
	{"bottomScale", "F", nullptr, $PRIVATE, $field(AbstractRegionPainter, bottomScale)},
	{}
};

$MethodInfo _AbstractRegionPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractRegionPainter::*)()>(&AbstractRegionPainter::init$))},
	{"clamp", "(F)F", nullptr, $PRIVATE, $method(static_cast<float(AbstractRegionPainter::*)(float)>(&AbstractRegionPainter::clamp))},
	{"clamp", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractRegionPainter::*)(int32_t)>(&AbstractRegionPainter::clamp))},
	{"configureGraphics", "(Ljava/awt/Graphics2D;)V", nullptr, $PROTECTED},
	{"decodeAnchorX", "(FF)F", nullptr, $PROTECTED | $FINAL, $method(static_cast<float(AbstractRegionPainter::*)(float,float)>(&AbstractRegionPainter::decodeAnchorX))},
	{"decodeAnchorY", "(FF)F", nullptr, $PROTECTED | $FINAL, $method(static_cast<float(AbstractRegionPainter::*)(float,float)>(&AbstractRegionPainter::decodeAnchorY))},
	{"decodeColor", "(Ljava/lang/String;FFFI)Ljava/awt/Color;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Color*(AbstractRegionPainter::*)($String*,float,float,float,int32_t)>(&AbstractRegionPainter::decodeColor))},
	{"decodeColor", "(Ljava/awt/Color;Ljava/awt/Color;F)Ljava/awt/Color;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Color*(AbstractRegionPainter::*)($Color*,$Color*,float)>(&AbstractRegionPainter::decodeColor))},
	{"decodeGradient", "(FFFF[F[Ljava/awt/Color;)Ljava/awt/LinearGradientPaint;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$LinearGradientPaint*(AbstractRegionPainter::*)(float,float,float,float,$floats*,$ColorArray*)>(&AbstractRegionPainter::decodeGradient))},
	{"decodeRadialGradient", "(FFF[F[Ljava/awt/Color;)Ljava/awt/RadialGradientPaint;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$RadialGradientPaint*(AbstractRegionPainter::*)(float,float,float,$floats*,$ColorArray*)>(&AbstractRegionPainter::decodeRadialGradient))},
	{"decodeX", "(F)F", nullptr, $PROTECTED | $FINAL, $method(static_cast<float(AbstractRegionPainter::*)(float)>(&AbstractRegionPainter::decodeX))},
	{"decodeY", "(F)F", nullptr, $PROTECTED | $FINAL, $method(static_cast<float(AbstractRegionPainter::*)(float)>(&AbstractRegionPainter::decodeY))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"getComponentColor", "(Ljavax/swing/JComponent;Ljava/lang/String;Ljava/awt/Color;FFI)Ljava/awt/Color;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Color*(AbstractRegionPainter::*)($JComponent*,$String*,$Color*,float,float,int32_t)>(&AbstractRegionPainter::getComponentColor))},
	{"getExtendedCacheKeys", "(Ljavax/swing/JComponent;)[Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getImage", "(Ljava/awt/GraphicsConfiguration;Ljavax/swing/JComponent;II[Ljava/lang/Object;)Ljava/awt/image/VolatileImage;", nullptr, $PRIVATE, $method(static_cast<$VolatileImage*(AbstractRegionPainter::*)($GraphicsConfiguration*,$JComponent*,int32_t,int32_t,$ObjectArray*)>(&AbstractRegionPainter::getImage))},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(AbstractRegionPainter::*)($Graphics2D*,$JComponent*,int32_t,int32_t)>(&AbstractRegionPainter::paint))},
	{"paint", "(Ljava/awt/Graphics2D;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"paint0", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractRegionPainter::*)($Graphics2D*,$JComponent*,int32_t,int32_t,$ObjectArray*)>(&AbstractRegionPainter::paint0))},
	{"paintWith9SquareCaching", "(Ljava/awt/Graphics2D;Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractRegionPainter::*)($Graphics2D*,$AbstractRegionPainter$PaintContext*,$JComponent*,int32_t,int32_t,$ObjectArray*)>(&AbstractRegionPainter::paintWith9SquareCaching))},
	{"paintWithFixedSizeCaching", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractRegionPainter::*)($Graphics2D*,$JComponent*,int32_t,int32_t,$ObjectArray*)>(&AbstractRegionPainter::paintWithFixedSizeCaching))},
	{"prepare", "(FF)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractRegionPainter::*)(float,float)>(&AbstractRegionPainter::prepare))},
	{}
};

$InnerClassInfo _AbstractRegionPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext", "javax.swing.plaf.nimbus.AbstractRegionPainter", "PaintContext", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _AbstractRegionPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	"java.lang.Object",
	"javax.swing.Painter",
	_AbstractRegionPainter_FieldInfo_,
	_AbstractRegionPainter_MethodInfo_,
	"Ljava/lang/Object;Ljavax/swing/Painter<Ljavax/swing/JComponent;>;",
	nullptr,
	_AbstractRegionPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext,javax.swing.plaf.nimbus.AbstractRegionPainter$PaintContext$CacheMode"
};

$Object* allocate$AbstractRegionPainter($Class* clazz) {
	return $of($alloc(AbstractRegionPainter));
}

void AbstractRegionPainter::init$() {
}

void AbstractRegionPainter::paint($Graphics2D* g, $JComponent* c, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		return;
	}
	$var($ObjectArray, extendedCacheKeys, getExtendedCacheKeys(c));
	$set(this, ctx, getPaintContext());
	$init($AbstractRegionPainter$PaintContext$CacheMode);
	$AbstractRegionPainter$PaintContext$CacheMode* cacheMode = this->ctx == nullptr ? $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING : $nc(this->ctx)->cacheMode;
	if (cacheMode == $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING || !$nc($($ImageCache::getInstance()))->isImageCachable(w, h) || $instanceOf($PrinterGraphics, g)) {
		paint0(g, c, w, h, extendedCacheKeys);
	} else {
		if (cacheMode == $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES) {
			paintWithFixedSizeCaching(g, c, w, h, extendedCacheKeys);
		} else {
			paintWith9SquareCaching(g, this->ctx, c, w, h, extendedCacheKeys);
		}
	}
}

$ObjectArray* AbstractRegionPainter::getExtendedCacheKeys($JComponent* c) {
	return nullptr;
}

void AbstractRegionPainter::configureGraphics($Graphics2D* g) {
	$init($RenderingHints);
	$nc(g)->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
}

float AbstractRegionPainter::decodeX(float x) {
	if (x >= 0 && x <= 1) {
		return x * this->leftWidth;
	} else if (x > 1 && x < 2) {
		return ((x - 1) * this->centerWidth) + this->leftWidth;
	} else if (x >= 2 && x <= 3) {
		return ((x - 2) * this->rightWidth) + this->leftWidth + this->centerWidth;
	} else {
		$throwNew($IllegalArgumentException, "Invalid x"_s);
	}
}

float AbstractRegionPainter::decodeY(float y) {
	if (y >= 0 && y <= 1) {
		return y * this->topHeight;
	} else if (y > 1 && y < 2) {
		return ((y - 1) * this->centerHeight) + this->topHeight;
	} else if (y >= 2 && y <= 3) {
		return ((y - 2) * this->bottomHeight) + this->topHeight + this->centerHeight;
	} else {
		$throwNew($IllegalArgumentException, "Invalid y"_s);
	}
}

float AbstractRegionPainter::decodeAnchorX(float x, float dx) {
	if (x >= 0 && x <= 1) {
		return decodeX(x) + (dx * this->leftScale);
	} else if (x > 1 && x < 2) {
		return decodeX(x) + (dx * this->centerHScale);
	} else if (x >= 2 && x <= 3) {
		return decodeX(x) + (dx * this->rightScale);
	} else {
		$throwNew($IllegalArgumentException, "Invalid x"_s);
	}
}

float AbstractRegionPainter::decodeAnchorY(float y, float dy) {
	if (y >= 0 && y <= 1) {
		return decodeY(y) + (dy * this->topScale);
	} else if (y > 1 && y < 2) {
		return decodeY(y) + (dy * this->centerVScale);
	} else if (y >= 2 && y <= 3) {
		return decodeY(y) + (dy * this->bottomScale);
	} else {
		$throwNew($IllegalArgumentException, "Invalid y"_s);
	}
}

$Color* AbstractRegionPainter::decodeColor($String* key, float hOffset, float sOffset, float bOffset, int32_t aOffset) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($NimbusLookAndFeel, $($UIManager::getLookAndFeel()))) {
		$var($NimbusLookAndFeel, laf, $cast($NimbusLookAndFeel, $UIManager::getLookAndFeel()));
		return $nc(laf)->getDerivedColor(key, hOffset, sOffset, bOffset, aOffset, true);
	} else {
		return $Color::getHSBColor(hOffset, sOffset, bOffset);
	}
}

$Color* AbstractRegionPainter::decodeColor($Color* color1, $Color* color2, float midPoint) {
	return $new($Color, $NimbusLookAndFeel::deriveARGB(color1, color2, midPoint));
}

$LinearGradientPaint* AbstractRegionPainter::decodeGradient(float x1, float y1, float x2, float y2, $floats* midpoints, $ColorArray* colors) {
	if (x1 == x2 && y1 == y2) {
		y2 += 1.0E-5f;
	}
	return $new($LinearGradientPaint, x1, y1, x2, y2, midpoints, colors);
}

$RadialGradientPaint* AbstractRegionPainter::decodeRadialGradient(float x, float y, float r, $floats* midpoints, $ColorArray* colors) {
	if (r == 0.0f) {
		r = 1.0E-5f;
	}
	return $new($RadialGradientPaint, x, y, r, midpoints, colors);
}

$Color* AbstractRegionPainter::getComponentColor($JComponent* c, $String* property, $Color* defaultColor, float saturationOffset, float brightnessOffset, int32_t alphaOffset) {
	$useLocalCurrentObjectStackCache();
	$var($Color, color, nullptr);
	if (c != nullptr) {
		if ("background"_s->equals(property)) {
			$assign(color, c->getBackground());
		} else if ("foreground"_s->equals(property)) {
			$assign(color, c->getForeground());
		} else if ($instanceOf($JList, c) && "selectionForeground"_s->equals(property)) {
			$assign(color, $nc(($cast($JList, c)))->getSelectionForeground());
		} else if ($instanceOf($JList, c) && "selectionBackground"_s->equals(property)) {
			$assign(color, $nc(($cast($JList, c)))->getSelectionBackground());
		} else if ($instanceOf($JTable, c) && "selectionForeground"_s->equals(property)) {
			$assign(color, $nc(($cast($JTable, c)))->getSelectionForeground());
		} else if ($instanceOf($JTable, c) && "selectionBackground"_s->equals(property)) {
			$assign(color, $nc(($cast($JTable, c)))->getSelectionBackground());
		} else {
			$var($String, var$0, $$str({"get"_s, $$str($Character::toUpperCase($nc(property)->charAt(0)))}));
			$var($String, s, $concat(var$0, $($nc(property)->substring(1))));
			try {
				$var($Method, method, $MethodUtil::getMethod($of(c)->getClass(), s, nullptr));
				$assign(color, $cast($Color, $MethodUtil::invoke(method, c, nullptr)));
			} catch ($Exception& e) {
			}
			if (color == nullptr) {
				$var($Object, value, c->getClientProperty(property));
				if ($instanceOf($Color, value)) {
					$assign(color, $cast($Color, value));
				}
			}
		}
	}
	if (color == nullptr || $instanceOf($UIResource, color)) {
		return defaultColor;
	} else if (saturationOffset != 0 || brightnessOffset != 0 || alphaOffset != 0) {
		int32_t var$1 = $nc(color)->getRed();
		int32_t var$2 = color->getGreen();
		$var($floats, tmp, $Color::RGBtoHSB(var$1, var$2, color->getBlue(), nullptr));
		$nc(tmp)->set(1, clamp(tmp->get(1) + saturationOffset));
		tmp->set(2, clamp(tmp->get(2) + brightnessOffset));
		int32_t alpha = clamp($nc(color)->getAlpha() + alphaOffset);
		return $new($Color, ((int32_t)($Color::HSBtoRGB(tmp->get(0), tmp->get(1), tmp->get(2)) & (uint32_t)0x00FFFFFF)) | (alpha << 24));
	} else {
		return color;
	}
}

void AbstractRegionPainter::prepare(float w, float h) {
	if (this->ctx == nullptr || $nc(this->ctx)->canvasSize == nullptr) {
		this->f = 1.0f;
		this->leftWidth = (this->centerWidth = (this->rightWidth = 0.0f));
		this->topHeight = (this->centerHeight = (this->bottomHeight = 0.0f));
		this->leftScale = (this->centerHScale = (this->rightScale = 0.0f));
		this->topScale = (this->centerVScale = (this->bottomScale = 0.0f));
		return;
	}
	$var($Number, scale, $cast($Number, $UIManager::get("scale"_s)));
	this->f = scale == nullptr ? 1.0f : $nc(scale)->floatValue();
	if ($nc(this->ctx)->inverted) {
		this->centerWidth = ($nc(this->ctx)->b - $nc(this->ctx)->a) * this->f;
		float availableSpace = w - this->centerWidth;
		this->leftWidth = availableSpace * $nc(this->ctx)->aPercent;
		this->rightWidth = availableSpace * $nc(this->ctx)->bPercent;
		this->centerHeight = ($nc(this->ctx)->d - $nc(this->ctx)->c) * this->f;
		availableSpace = h - this->centerHeight;
		this->topHeight = availableSpace * $nc(this->ctx)->cPercent;
		this->bottomHeight = availableSpace * $nc(this->ctx)->dPercent;
	} else {
		this->leftWidth = $nc(this->ctx)->a * this->f;
		this->rightWidth = (float)($nc($nc(this->ctx)->canvasSize)->getWidth() - $nc(this->ctx)->b) * this->f;
		this->centerWidth = w - this->leftWidth - this->rightWidth;
		this->topHeight = $nc(this->ctx)->c * this->f;
		this->bottomHeight = (float)($nc($nc(this->ctx)->canvasSize)->getHeight() - $nc(this->ctx)->d) * this->f;
		this->centerHeight = h - this->topHeight - this->bottomHeight;
	}
	this->leftScale = $nc(this->ctx)->a == 0.0f ? 0.0f : this->leftWidth / $nc(this->ctx)->a;
	this->centerHScale = ($nc(this->ctx)->b - $nc(this->ctx)->a) == 0.0f ? 0.0f : this->centerWidth / ($nc(this->ctx)->b - $nc(this->ctx)->a);
	this->rightScale = ($nc($nc(this->ctx)->canvasSize)->width - $nc(this->ctx)->b) == 0.0f ? 0.0f : this->rightWidth / ($nc($nc(this->ctx)->canvasSize)->width - $nc(this->ctx)->b);
	this->topScale = $nc(this->ctx)->c == 0.0f ? 0.0f : this->topHeight / $nc(this->ctx)->c;
	this->centerVScale = ($nc(this->ctx)->d - $nc(this->ctx)->c) == 0.0f ? 0.0f : this->centerHeight / ($nc(this->ctx)->d - $nc(this->ctx)->c);
	this->bottomScale = ($nc($nc(this->ctx)->canvasSize)->height - $nc(this->ctx)->d) == 0.0f ? 0.0f : this->bottomHeight / ($nc($nc(this->ctx)->canvasSize)->height - $nc(this->ctx)->d);
}

void AbstractRegionPainter::paintWith9SquareCaching($Graphics2D* g, $AbstractRegionPainter$PaintContext* ctx, $JComponent* c, int32_t w, int32_t h, $ObjectArray* extendedCacheKeys) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, canvas, $nc(ctx)->canvasSize);
	$var($Insets, insets, ctx->stretchingInsets);
	if (w <= ($nc(canvas)->width * ctx->maxHorizontalScaleFactor) && h <= (canvas->height * ctx->maxVerticalScaleFactor)) {
		$var($VolatileImage, img, getImage($($nc(g)->getDeviceConfiguration()), c, canvas->width, canvas->height, extendedCacheKeys));
		if (img != nullptr) {
			$var($Insets, dstInsets, nullptr);
			if (ctx->inverted) {
				int32_t leftRight = (w - (canvas->width - ($nc(insets)->left + insets->right))) / 2;
				int32_t topBottom = (h - (canvas->height - (insets->top + insets->bottom))) / 2;
				$assign(dstInsets, $new($Insets, topBottom, leftRight, topBottom, leftRight));
			} else {
				$assign(dstInsets, insets);
			}
			$init($RenderingHints);
			$var($Object, oldScaleingHints, $nc(g)->getRenderingHint($RenderingHints::KEY_INTERPOLATION));
			g->setRenderingHint($RenderingHints::KEY_INTERPOLATION, $RenderingHints::VALUE_INTERPOLATION_BILINEAR);
			$init($ImageScalingHelper$PaintType);
			$ImageScalingHelper::paint(g, 0, 0, w, h, img, insets, dstInsets, $ImageScalingHelper$PaintType::PAINT9_STRETCH, $ImageScalingHelper::PAINT_ALL);
			g->setRenderingHint($RenderingHints::KEY_INTERPOLATION, oldScaleingHints != nullptr ? oldScaleingHints : $RenderingHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR);
		} else {
			paint0(g, c, w, h, extendedCacheKeys);
		}
	} else {
		paint0(g, c, w, h, extendedCacheKeys);
	}
}

void AbstractRegionPainter::paintWithFixedSizeCaching($Graphics2D* g, $JComponent* c, int32_t w, int32_t h, $ObjectArray* extendedCacheKeys) {
	$useLocalCurrentObjectStackCache();
	$var($VolatileImage, img, getImage($($nc(g)->getDeviceConfiguration()), c, w, h, extendedCacheKeys));
	if (img != nullptr) {
		$nc(g)->drawImage(img, 0, 0, nullptr);
	} else {
		paint0(g, c, w, h, extendedCacheKeys);
	}
}

$VolatileImage* AbstractRegionPainter::getImage($GraphicsConfiguration* config, $JComponent* c, int32_t w, int32_t h, $ObjectArray* extendedCacheKeys) {
	$useLocalCurrentObjectStackCache();
	$var($ImageCache, imageCache, $ImageCache::getInstance());
	$var($VolatileImage, buffer, $cast($VolatileImage, $nc(imageCache)->getImage(config, w, h, $$new($ObjectArray, {
		$of(this),
		$of(extendedCacheKeys)
	}))));
	int32_t renderCounter = 0;
	do {
		int32_t bufferStatus = $VolatileImage::IMAGE_INCOMPATIBLE;
		if (buffer != nullptr) {
			bufferStatus = buffer->validate(config);
		}
		if (bufferStatus == $VolatileImage::IMAGE_INCOMPATIBLE || bufferStatus == $VolatileImage::IMAGE_RESTORED) {
			bool var$0 = buffer == nullptr || $nc(buffer)->getWidth() != w;
			if (var$0 || $nc(buffer)->getHeight() != h || bufferStatus == $VolatileImage::IMAGE_INCOMPATIBLE) {
				if (buffer != nullptr) {
					buffer->flush();
					$assign(buffer, nullptr);
				}
				$assign(buffer, $nc(config)->createCompatibleVolatileImage(w, h, $Transparency::TRANSLUCENT));
				imageCache->setImage(buffer, config, w, h, $$new($ObjectArray, {
					$of(this),
					$of(extendedCacheKeys)
				}));
			}
			$var($Graphics2D, bg, $nc(buffer)->createGraphics());
			$init($AlphaComposite);
			$nc(bg)->setComposite($AlphaComposite::Clear);
			bg->fillRect(0, 0, w, h);
			bg->setComposite($AlphaComposite::SrcOver);
			configureGraphics(bg);
			paint0(bg, c, w, h, extendedCacheKeys);
			bg->dispose();
		}
	} while ($nc(buffer)->contentsLost() && renderCounter++ < 3);
	if (renderCounter == 3) {
		return nullptr;
	}
	return buffer;
}

void AbstractRegionPainter::paint0($Graphics2D* g$renamed, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$var($Graphics2D, g, g$renamed);
	prepare((float)width, (float)height);
	$assign(g, $cast($Graphics2D, $nc(g)->create()));
	configureGraphics(g);
	doPaint(g, c, width, height, extendedCacheKeys);
	g->dispose();
}

float AbstractRegionPainter::clamp(float value) {
	if (value < 0) {
		value = (float)0;
	} else if (value > 1) {
		value = (float)1;
	}
	return value;
}

int32_t AbstractRegionPainter::clamp(int32_t value) {
	if (value < 0) {
		value = 0;
	} else if (value > 255) {
		value = 255;
	}
	return value;
}

void AbstractRegionPainter::paint($Graphics2D* g, Object$* c, int32_t w, int32_t h) {
	this->paint(g, $cast($JComponent, c), w, h);
}

AbstractRegionPainter::AbstractRegionPainter() {
}

$Class* AbstractRegionPainter::load$($String* name, bool initialize) {
	$loadClass(AbstractRegionPainter, name, initialize, &_AbstractRegionPainter_ClassInfo_, allocate$AbstractRegionPainter);
	return class$;
}

$Class* AbstractRegionPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax