#include <javax/swing/plaf/metal/MetalUtils$GradientPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Paint.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/util/List.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

#undef IMAGE_SIZE
#undef INSTANCE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Paint = ::java::awt::Paint;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $List = ::java::util::List;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalUtils$GradientPainter_FieldInfo_[] = {
	{"INSTANCE", "Ljavax/swing/plaf/metal/MetalUtils$GradientPainter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MetalUtils$GradientPainter, INSTANCE)},
	{"IMAGE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalUtils$GradientPainter, IMAGE_SIZE)},
	{"w", "I", nullptr, $PRIVATE, $field(MetalUtils$GradientPainter, w)},
	{"h", "I", nullptr, $PRIVATE, $field(MetalUtils$GradientPainter, h)},
	{}
};

$MethodInfo _MetalUtils$GradientPainter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(MetalUtils$GradientPainter::*)(int32_t)>(&MetalUtils$GradientPainter::init$))},
	{"drawHorizontalGradient", "(Ljava/awt/Graphics2D;FFLjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;II)V", nullptr, $PRIVATE, $method(static_cast<void(MetalUtils$GradientPainter::*)($Graphics2D*,float,float,$Color*,$Color*,$Color*,int32_t,int32_t)>(&MetalUtils$GradientPainter::drawHorizontalGradient))},
	{"drawVerticalGradient", "(Ljava/awt/Graphics2D;FFLjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;II)V", nullptr, $PRIVATE, $method(static_cast<void(MetalUtils$GradientPainter::*)($Graphics2D*,float,float,$Color*,$Color*,$Color*,int32_t,int32_t)>(&MetalUtils$GradientPainter::drawVerticalGradient))},
	{"getGradient", "(FFLjava/awt/Color;FFLjava/awt/Color;)Ljava/awt/GradientPaint;", nullptr, $PRIVATE, $method(static_cast<$GradientPaint*(MetalUtils$GradientPainter::*)(float,float,$Color*,float,float,$Color*)>(&MetalUtils$GradientPainter::getGradient))},
	{"paint", "(Ljava/awt/Component;Ljava/awt/Graphics2D;Ljava/util/List;IIIIZ)V", "(Ljava/awt/Component;Ljava/awt/Graphics2D;Ljava/util/List<*>;IIIIZ)V", $PUBLIC},
	{"paintImage", "(Ljava/awt/Component;Ljava/awt/Graphics;IIIILjava/awt/Image;[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"paintToImage", "(Ljava/awt/Component;Ljava/awt/Image;Ljava/awt/Graphics;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalUtils$GradientPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalUtils$GradientPainter", "javax.swing.plaf.metal.MetalUtils", "GradientPainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalUtils$GradientPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalUtils$GradientPainter",
	"sun.swing.CachedPainter",
	nullptr,
	_MetalUtils$GradientPainter_FieldInfo_,
	_MetalUtils$GradientPainter_MethodInfo_,
	nullptr,
	nullptr,
	_MetalUtils$GradientPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalUtils"
};

$Object* allocate$MetalUtils$GradientPainter($Class* clazz) {
	return $of($alloc(MetalUtils$GradientPainter));
}

MetalUtils$GradientPainter* MetalUtils$GradientPainter::INSTANCE = nullptr;

void MetalUtils$GradientPainter::init$(int32_t count) {
	$CachedPainter::init$(count);
}

void MetalUtils$GradientPainter::paint($Component* c, $Graphics2D* g, $List* gradient, int32_t x, int32_t y, int32_t w, int32_t h, bool isVertical) {
	$useLocalCurrentObjectStackCache();
	int32_t imageWidth = 0;
	int32_t imageHeight = 0;
	if (isVertical) {
		imageWidth = MetalUtils$GradientPainter::IMAGE_SIZE;
		imageHeight = h;
	} else {
		imageWidth = w;
		imageHeight = MetalUtils$GradientPainter::IMAGE_SIZE;
	}
	$synchronized($nc(c)->getTreeLock()) {
		this->w = w;
		this->h = h;
		paint(c, g, x, y, imageWidth, imageHeight, $$new($ObjectArray, {
			$of(gradient),
			$($of($Boolean::valueOf(isVertical)))
		}));
	}
}

void MetalUtils$GradientPainter::paintToImage($Component* c, $Image* image, $Graphics* g, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g2, $cast($Graphics2D, g));
	$var($List, gradient, $cast($List, $nc(args)->get(0)));
	bool isVertical = $nc(($cast($Boolean, args->get(1))))->booleanValue();
	if (isVertical) {
		$var($Graphics2D, var$0, g2);
		float var$1 = $nc(($cast($Number, $($nc(gradient)->get(0)))))->floatValue();
		float var$2 = $nc(($cast($Number, $(gradient->get(1)))))->floatValue();
		$var($Color, var$3, $cast($Color, gradient->get(2)));
		$var($Color, var$4, $cast($Color, gradient->get(3)));
		drawVerticalGradient(var$0, var$1, var$2, var$3, var$4, $cast($Color, $(gradient->get(4))), w, h);
	} else {
		$var($Graphics2D, var$5, g2);
		float var$6 = $nc(($cast($Number, $($nc(gradient)->get(0)))))->floatValue();
		float var$7 = $nc(($cast($Number, $(gradient->get(1)))))->floatValue();
		$var($Color, var$8, $cast($Color, gradient->get(2)));
		$var($Color, var$9, $cast($Color, gradient->get(3)));
		drawHorizontalGradient(var$5, var$6, var$7, var$8, var$9, $cast($Color, $(gradient->get(4))), w, h);
	}
}

void MetalUtils$GradientPainter::paintImage($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t imageW, int32_t imageH, $Image* image, $ObjectArray* args) {
	bool isVertical = $nc(($cast($Boolean, $nc(args)->get(1))))->booleanValue();
	$nc(g)->translate(x, y);
	if (isVertical) {
		for (int32_t counter = 0; counter < this->w; counter += MetalUtils$GradientPainter::IMAGE_SIZE) {
			int32_t tileSize = $Math::min(MetalUtils$GradientPainter::IMAGE_SIZE, this->w - counter);
			g->drawImage(image, counter, 0, counter + tileSize, this->h, 0, 0, tileSize, this->h, nullptr);
		}
	} else {
		for (int32_t counter = 0; counter < this->h; counter += MetalUtils$GradientPainter::IMAGE_SIZE) {
			int32_t tileSize = $Math::min(MetalUtils$GradientPainter::IMAGE_SIZE, this->h - counter);
			g->drawImage(image, 0, counter, this->w, counter + tileSize, 0, 0, this->w, tileSize, nullptr);
		}
	}
	g->translate(-x, -y);
}

void MetalUtils$GradientPainter::drawVerticalGradient($Graphics2D* g, float ratio1, float ratio2, $Color* c1, $Color* c2, $Color* c3, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t mid = $cast(int32_t, (ratio1 * h));
	int32_t mid2 = $cast(int32_t, (ratio2 * h));
	if (mid > 0) {
		$nc(g)->setPaint($(getGradient((float)0, (float)0, c1, (float)0, (float)mid, c2)));
		g->fillRect(0, 0, w, mid);
	}
	if (mid2 > 0) {
		$nc(g)->setColor(c2);
		g->fillRect(0, mid, w, mid2);
	}
	if (mid > 0) {
		$nc(g)->setPaint($(getGradient((float)0, (float)mid + mid2, c2, (float)0, (float)mid * 2 + mid2, c1)));
		g->fillRect(0, mid + mid2, w, mid);
	}
	if (h - mid * 2 - mid2 > 0) {
		$nc(g)->setPaint($(getGradient((float)0, (float)mid * 2 + mid2, c1, (float)0, (float)h, c3)));
		g->fillRect(0, mid * 2 + mid2, w, h - mid * 2 - mid2);
	}
}

void MetalUtils$GradientPainter::drawHorizontalGradient($Graphics2D* g, float ratio1, float ratio2, $Color* c1, $Color* c2, $Color* c3, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t mid = $cast(int32_t, (ratio1 * w));
	int32_t mid2 = $cast(int32_t, (ratio2 * w));
	if (mid > 0) {
		$nc(g)->setPaint($(getGradient((float)0, (float)0, c1, (float)mid, (float)0, c2)));
		g->fillRect(0, 0, mid, h);
	}
	if (mid2 > 0) {
		$nc(g)->setColor(c2);
		g->fillRect(mid, 0, mid2, h);
	}
	if (mid > 0) {
		$nc(g)->setPaint($(getGradient((float)mid + mid2, (float)0, c2, (float)mid * 2 + mid2, (float)0, c1)));
		g->fillRect(mid + mid2, 0, mid, h);
	}
	if (w - mid * 2 - mid2 > 0) {
		$nc(g)->setPaint($(getGradient((float)mid * 2 + mid2, (float)0, c1, (float)w, (float)0, c3)));
		g->fillRect(mid * 2 + mid2, 0, w - mid * 2 - mid2, h);
	}
}

$GradientPaint* MetalUtils$GradientPainter::getGradient(float x1, float y1, $Color* c1, float x2, float y2, $Color* c2) {
	return $new($GradientPaint, x1, y1, c1, x2, y2, c2, true);
}

void clinit$MetalUtils$GradientPainter($Class* class$) {
	$assignStatic(MetalUtils$GradientPainter::INSTANCE, $new(MetalUtils$GradientPainter, 8));
}

MetalUtils$GradientPainter::MetalUtils$GradientPainter() {
}

$Class* MetalUtils$GradientPainter::load$($String* name, bool initialize) {
	$loadClass(MetalUtils$GradientPainter, name, initialize, &_MetalUtils$GradientPainter_ClassInfo_, clinit$MetalUtils$GradientPainter, allocate$MetalUtils$GradientPainter);
	return class$;
}

$Class* MetalUtils$GradientPainter::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax