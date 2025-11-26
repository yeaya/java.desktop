#include <sun/awt/RepaintArea.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef MAX_BENEFIT_RATIO
#undef PAINT
#undef RECT_COUNT
#undef UPDATE
#undef VERTICAL

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _RepaintArea_FieldInfo_[] = {
	{"MAX_BENEFIT_RATIO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintArea, MAX_BENEFIT_RATIO)},
	{"HORIZONTAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintArea, HORIZONTAL)},
	{"VERTICAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintArea, VERTICAL)},
	{"UPDATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintArea, UPDATE)},
	{"RECT_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintArea, RECT_COUNT)},
	{"paintRects", "[Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(RepaintArea, paintRects)},
	{}
};

$MethodInfo _RepaintArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RepaintArea::*)()>(&RepaintArea::init$))},
	{"<init>", "(Lsun/awt/RepaintArea;)V", nullptr, $PRIVATE, $method(static_cast<void(RepaintArea::*)(RepaintArea*)>(&RepaintArea::init$))},
	{"add", "(Ljava/awt/Rectangle;I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"cloneAndReset", "()Lsun/awt/RepaintArea;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<RepaintArea*(RepaintArea::*)()>(&RepaintArea::cloneAndReset))},
	{"constrain", "(IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"subtract", "(IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"subtract", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Rectangle*,$Rectangle*)>(&RepaintArea::subtract))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateComponent", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _RepaintArea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.RepaintArea",
	"java.lang.Object",
	nullptr,
	_RepaintArea_FieldInfo_,
	_RepaintArea_MethodInfo_
};

$Object* allocate$RepaintArea($Class* clazz) {
	return $of($alloc(RepaintArea));
}

void RepaintArea::init$() {
	$set(this, paintRects, $new($RectangleArray, RepaintArea::RECT_COUNT));
}

void RepaintArea::init$(RepaintArea* ra) {
	$set(this, paintRects, $new($RectangleArray, RepaintArea::RECT_COUNT));
	for (int32_t i = 0; i < RepaintArea::RECT_COUNT; ++i) {
		$nc(this->paintRects)->set(i, $nc($nc(ra)->paintRects)->get(i));
	}
}

void RepaintArea::add($Rectangle* r, int32_t id) {
	$synchronized(this) {
		if ($nc(r)->isEmpty()) {
			return;
		}
		int32_t addTo = RepaintArea::UPDATE;
		if (id == $PaintEvent::PAINT) {
			addTo = ($nc(r)->width > r->height) ? RepaintArea::HORIZONTAL : RepaintArea::VERTICAL;
		}
		if ($nc(this->paintRects)->get(addTo) != nullptr) {
			$nc($nc(this->paintRects)->get(addTo))->add(r);
		} else {
			$nc(this->paintRects)->set(addTo, $$new($Rectangle, r));
		}
	}
}

RepaintArea* RepaintArea::cloneAndReset() {
	$synchronized(this) {
		$var(RepaintArea, ra, $new(RepaintArea, this));
		for (int32_t i = 0; i < RepaintArea::RECT_COUNT; ++i) {
			$nc(this->paintRects)->set(i, nullptr);
		}
		return ra;
	}
}

bool RepaintArea::isEmpty() {
	for (int32_t i = 0; i < RepaintArea::RECT_COUNT; ++i) {
		if ($nc(this->paintRects)->get(i) != nullptr) {
			return false;
		}
	}
	return true;
}

void RepaintArea::constrain(int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		for (int32_t i = 0; i < RepaintArea::RECT_COUNT; ++i) {
			$var($Rectangle, rect, $nc(this->paintRects)->get(i));
			if (rect != nullptr) {
				if (rect->x < x) {
					rect->width -= (x - rect->x);
					rect->x = x;
				}
				if (rect->y < y) {
					rect->height -= (y - rect->y);
					rect->y = y;
				}
				int32_t xDelta = rect->x + rect->width - x - w;
				if (xDelta > 0) {
					rect->width -= xDelta;
				}
				int32_t yDelta = rect->y + rect->height - y - h;
				if (yDelta > 0) {
					rect->height -= yDelta;
				}
				if (rect->width <= 0 || rect->height <= 0) {
					$nc(this->paintRects)->set(i, nullptr);
				}
			}
		}
	}
}

void RepaintArea::subtract(int32_t x, int32_t y, int32_t w, int32_t h) {
	$synchronized(this) {
		$var($Rectangle, subtract, $new($Rectangle, x, y, w, h));
		for (int32_t i = 0; i < RepaintArea::RECT_COUNT; ++i) {
			if (RepaintArea::subtract($nc(this->paintRects)->get(i), subtract)) {
				if ($nc(this->paintRects)->get(i) != nullptr && $nc($nc(this->paintRects)->get(i))->isEmpty()) {
					$nc(this->paintRects)->set(i, nullptr);
				}
			}
		}
	}
}

void RepaintArea::paint(Object$* target, bool shouldClearRectBeforePaint) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, $cast($Component, target));
	if (isEmpty()) {
		return;
	}
	if (!$nc(comp)->isVisible()) {
		return;
	}
	$var(RepaintArea, ra, this->cloneAndReset());
	if (!subtract($nc($nc(ra)->paintRects)->get(RepaintArea::VERTICAL), $nc(ra->paintRects)->get(RepaintArea::HORIZONTAL))) {
		subtract($nc($nc(ra)->paintRects)->get(RepaintArea::HORIZONTAL), $nc(ra->paintRects)->get(RepaintArea::VERTICAL));
	}
	if ($nc($nc(ra)->paintRects)->get(RepaintArea::HORIZONTAL) != nullptr && $nc(ra->paintRects)->get(RepaintArea::VERTICAL) != nullptr) {
		$var($Rectangle, paintRect, $nc($nc(ra->paintRects)->get(RepaintArea::HORIZONTAL))->union$($nc(ra->paintRects)->get(RepaintArea::VERTICAL)));
		int32_t square = $nc(paintRect)->width * paintRect->height;
		int32_t benefit = square - $nc($nc(ra->paintRects)->get(RepaintArea::HORIZONTAL))->width * $nc($nc(ra->paintRects)->get(RepaintArea::HORIZONTAL))->height - $nc($nc(ra->paintRects)->get(RepaintArea::VERTICAL))->width * $nc($nc(ra->paintRects)->get(RepaintArea::VERTICAL))->height;
		if (RepaintArea::MAX_BENEFIT_RATIO * benefit < square) {
			$nc(ra->paintRects)->set(RepaintArea::HORIZONTAL, paintRect);
			$nc(ra->paintRects)->set(RepaintArea::VERTICAL, nullptr);
		}
	}
	for (int32_t i = 0; i < $nc(this->paintRects)->length; ++i) {
		if ($nc($nc(ra)->paintRects)->get(i) != nullptr && !$nc($nc(ra->paintRects)->get(i))->isEmpty()) {
			$var($Graphics, g, $nc(comp)->getGraphics());
			if (g != nullptr) {
				{
					$var($Throwable, var$0, nullptr);
					try {
						g->setClip($nc(ra->paintRects)->get(i));
						if (i == RepaintArea::UPDATE) {
							updateComponent(comp, g);
						} else {
							if (shouldClearRectBeforePaint) {
								g->clearRect($nc($nc(ra->paintRects)->get(i))->x, $nc($nc(ra->paintRects)->get(i))->y, $nc($nc(ra->paintRects)->get(i))->width, $nc($nc(ra->paintRects)->get(i))->height);
							}
							paintComponent(comp, g);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						g->dispose();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

void RepaintArea::updateComponent($Component* comp, $Graphics* g) {
	if (comp != nullptr) {
		comp->update(g);
	}
}

void RepaintArea::paintComponent($Component* comp, $Graphics* g) {
	if (comp != nullptr) {
		comp->paint(g);
	}
}

bool RepaintArea::subtract($Rectangle* rect, $Rectangle* subtr) {
	if (rect == nullptr || subtr == nullptr) {
		return true;
	}
	$var($Rectangle, common, $nc(rect)->intersection(subtr));
	if ($nc(common)->isEmpty()) {
		return true;
	}
	if (rect->x == $nc(common)->x && rect->y == common->y) {
		if (rect->width == common->width) {
			rect->y += common->height;
			rect->height -= common->height;
			return true;
		} else if (rect->height == common->height) {
			rect->x += common->width;
			rect->width -= common->width;
			return true;
		}
	} else if (rect->x + rect->width == common->x + common->width && rect->y + rect->height == common->y + common->height) {
		if (rect->width == common->width) {
			rect->height -= common->height;
			return true;
		} else if (rect->height == common->height) {
			rect->width -= common->width;
			return true;
		}
	}
	return false;
}

$String* RepaintArea::toString() {
	return $str({$($Object::toString()), "[ horizontal="_s, $nc(this->paintRects)->get(0), " vertical="_s, $nc(this->paintRects)->get(1), " update="_s, $nc(this->paintRects)->get(2), "]"_s});
}

RepaintArea::RepaintArea() {
}

$Class* RepaintArea::load$($String* name, bool initialize) {
	$loadClass(RepaintArea, name, initialize, &_RepaintArea_ClassInfo_, allocate$RepaintArea);
	return class$;
}

$Class* RepaintArea::class$ = nullptr;

	} // awt
} // sun