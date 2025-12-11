#include <sun/awt/SunGraphicsCallback.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/awt/ConstrainableGraphics.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER
#undef HEAVYWEIGHTS
#undef LIGHTWEIGHTS
#undef TWO_PASSES

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstrainableGraphics = ::sun::awt::ConstrainableGraphics;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$FieldInfo _SunGraphicsCallback_FieldInfo_[] = {
	{"HEAVYWEIGHTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphicsCallback, HEAVYWEIGHTS)},
	{"LIGHTWEIGHTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphicsCallback, LIGHTWEIGHTS)},
	{"TWO_PASSES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphicsCallback, TWO_PASSES)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphicsCallback, log)},
	{}
};

$MethodInfo _SunGraphicsCallback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SunGraphicsCallback::*)()>(&SunGraphicsCallback::init$))},
	{"constrainGraphics", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"runComponents", "([Ljava/awt/Component;Ljava/awt/Graphics;I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SunGraphicsCallback::*)($ComponentArray*,$Graphics*,int32_t)>(&SunGraphicsCallback::runComponents))},
	{"runOneComponent", "(Ljava/awt/Component;Ljava/awt/Rectangle;Ljava/awt/Graphics;Ljava/awt/Shape;I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SunGraphicsCallback::*)($Component*,$Rectangle*,$Graphics*,$Shape*,int32_t)>(&SunGraphicsCallback::runOneComponent))},
	{}
};

$InnerClassInfo _SunGraphicsCallback_InnerClassesInfo_[] = {
	{"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PrintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
	{"sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PaintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SunGraphicsCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.SunGraphicsCallback",
	"java.lang.Object",
	nullptr,
	_SunGraphicsCallback_FieldInfo_,
	_SunGraphicsCallback_MethodInfo_,
	nullptr,
	nullptr,
	_SunGraphicsCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback,sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback"
};

$Object* allocate$SunGraphicsCallback($Class* clazz) {
	return $of($alloc(SunGraphicsCallback));
}

$PlatformLogger* SunGraphicsCallback::log = nullptr;

void SunGraphicsCallback::init$() {
}

void SunGraphicsCallback::constrainGraphics($Graphics* g, $Rectangle* bounds) {
	if ($instanceOf($ConstrainableGraphics, g)) {
		$nc(($cast($ConstrainableGraphics, g)))->constrain($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
	} else {
		$nc(g)->translate($nc(bounds)->x, bounds->y);
	}
	$nc(g)->clipRect(0, 0, $nc(bounds)->width, bounds->height);
}

void SunGraphicsCallback::runOneComponent($Component* comp, $Rectangle* bounds$renamed, $Graphics* g, $Shape* clip, int32_t weightFlags) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, bounds, bounds$renamed);
	bool var$0 = comp == nullptr || !$nc(comp)->isDisplayable();
	if (var$0 || !$nc(comp)->isVisible()) {
		return;
	}
	bool lightweight = $nc(comp)->isLightweight();
	if ((lightweight && ((int32_t)(weightFlags & (uint32_t)SunGraphicsCallback::LIGHTWEIGHTS)) == 0) || (!lightweight && ((int32_t)(weightFlags & (uint32_t)SunGraphicsCallback::HEAVYWEIGHTS)) == 0)) {
		return;
	}
	if (bounds == nullptr) {
		$assign(bounds, comp->getBounds());
	}
	if (clip == nullptr || $nc(clip)->intersects(bounds)) {
		$var($Graphics, cg, $nc(g)->create());
		{
			$var($Throwable, var$1, nullptr);
			try {
				constrainGraphics(cg, bounds);
				$nc(cg)->setFont($(comp->getFont()));
				cg->setColor($(comp->getForeground()));
				if ($instanceOf($Graphics2D, cg)) {
					$nc(($cast($Graphics2D, cg)))->setBackground($(comp->getBackground()));
				}
				run(comp, cg);
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				$nc(cg)->dispose();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
}

void SunGraphicsCallback::runComponents($ComponentArray* comps, $Graphics* g, int32_t weightFlags) {
	$useLocalCurrentObjectStackCache();
	int32_t ncomponents = $nc(comps)->length;
	$var($Shape, clip, $nc(g)->getClip());
	$init($PlatformLogger$Level);
	if ($nc(SunGraphicsCallback::log)->isLoggable($PlatformLogger$Level::FINER) && (clip != nullptr)) {
		$var($Rectangle, newrect, clip->getBounds());
		$nc(SunGraphicsCallback::log)->finer($$str({"x = "_s, $$str($nc(newrect)->x), ", y = "_s, $$str(newrect->y), ", width = "_s, $$str(newrect->width), ", height = "_s, $$str(newrect->height)}));
	}
	if (((int32_t)(weightFlags & (uint32_t)SunGraphicsCallback::TWO_PASSES)) != 0) {
		for (int32_t i = ncomponents - 1; i >= 0; --i) {
			runOneComponent(comps->get(i), nullptr, g, clip, SunGraphicsCallback::LIGHTWEIGHTS);
		}
		for (int32_t i = ncomponents - 1; i >= 0; --i) {
			runOneComponent(comps->get(i), nullptr, g, clip, SunGraphicsCallback::HEAVYWEIGHTS);
		}
	} else {
		for (int32_t i = ncomponents - 1; i >= 0; --i) {
			runOneComponent(comps->get(i), nullptr, g, clip, weightFlags);
		}
	}
}

void clinit$SunGraphicsCallback($Class* class$) {
	$assignStatic(SunGraphicsCallback::log, $PlatformLogger::getLogger("sun.awt.SunGraphicsCallback"_s));
}

SunGraphicsCallback::SunGraphicsCallback() {
}

$Class* SunGraphicsCallback::load$($String* name, bool initialize) {
	$loadClass(SunGraphicsCallback, name, initialize, &_SunGraphicsCallback_ClassInfo_, clinit$SunGraphicsCallback, allocate$SunGraphicsCallback);
	return class$;
}

$Class* SunGraphicsCallback::class$ = nullptr;

	} // awt
} // sun