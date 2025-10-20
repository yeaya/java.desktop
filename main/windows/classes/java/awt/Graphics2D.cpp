#include <java/awt/Graphics2D.h>

#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Paint.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/renderable/RenderableImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $RenderableImage = ::java::awt::image::renderable::RenderableImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {

$MethodInfo _Graphics2D_MethodInfo_[] = {
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Graphics2D::*)()>(&Graphics2D::init$))},
	{"addRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $ABSTRACT},
	{"clip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"draw", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"draw3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"drawGlyphVector", "(Ljava/awt/font/GlyphVector;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/Image;Ljava/awt/geom/AffineTransform;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImageOp;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawRenderableImage", "(Ljava/awt/image/renderable/RenderableImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawRenderedImage", "(Ljava/awt/image/RenderedImage;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fill", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fill3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getComposite", "()Ljava/awt/Composite;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeviceConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontRenderContext", "()Ljava/awt/font/FontRenderContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPaint", "()Ljava/awt/Paint;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRenderingHint", "(Ljava/awt/RenderingHints$Key;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStroke", "()Ljava/awt/Stroke;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $ABSTRACT},
	{"hit", "(Ljava/awt/Rectangle;Ljava/awt/Shape;Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"rotate", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rotate", "(DDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"scale", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setComposite", "(Ljava/awt/Composite;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPaint", "(Ljava/awt/Paint;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRenderingHint", "(Ljava/awt/RenderingHints$Key;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRenderingHints", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $ABSTRACT},
	{"setStroke", "(Ljava/awt/Stroke;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"shear", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"translate", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"translate", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Graphics2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Graphics2D",
	"java.awt.Graphics",
	nullptr,
	nullptr,
	_Graphics2D_MethodInfo_
};

$Object* allocate$Graphics2D($Class* clazz) {
	return $of($alloc(Graphics2D));
}

void Graphics2D::init$() {
	$Graphics::init$();
}

void Graphics2D::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Paint, p, getPaint());
	$var($Color, c, getColor());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	setColor(raised ? brighter : darker);
	fillRect(x, y, 1, height + 1);
	fillRect(x + 1, y, width - 1, 1);
	setColor(raised ? darker : brighter);
	fillRect(x + 1, y + height, width, 1);
	fillRect(x + width, y, 1, height);
	setPaint(p);
}

void Graphics2D::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Paint, p, getPaint());
	$var($Color, c, getColor());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	if (!raised) {
		setColor(darker);
	} else if (!$equals(p, c)) {
		setColor(c);
	}
	fillRect(x + 1, y + 1, width - 2, height - 2);
	setColor(raised ? brighter : darker);
	fillRect(x, y, 1, height);
	fillRect(x + 1, y, width - 2, 1);
	setColor(raised ? darker : brighter);
	fillRect(x + 1, y + height - 1, width - 1, 1);
	fillRect(x + width - 1, y, 1, height - 1);
	setPaint(p);
}

Graphics2D::Graphics2D() {
}

$Class* Graphics2D::load$($String* name, bool initialize) {
	$loadClass(Graphics2D, name, initialize, &_Graphics2D_ClassInfo_, allocate$Graphics2D);
	return class$;
}

$Class* Graphics2D::class$ = nullptr;

	} // awt
} // java