#include <com/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape$RoundishRectIterator.h>

#include <com/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Math.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef BOTTOM_LEFT
#undef BOTTOM_RIGHT
#undef PI
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef TOP_LEFT
#undef TOP_RIGHT
#undef WIND_NON_ZERO

using $doubleArray2 = $Array<double, 2>;
using $Metacity$RoundRectClipShape = ::com::sun::java::swing::plaf::gtk::Metacity$RoundRectClipShape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$RoundRectClipShape$RoundishRectIterator_FieldInfo_[] = {
	{"x", "D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, x)},
	{"y", "D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, y)},
	{"w", "D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, w)},
	{"h", "D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, h)},
	{"aw", "D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, aw)},
	{"ah", "D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, ah)},
	{"affine", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, affine)},
	{"index", "I", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, index)},
	{"ctrlpts", "[[D", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, ctrlpts)},
	{"types", "[I", nullptr, 0, $field(Metacity$RoundRectClipShape$RoundishRectIterator, types)},
	{"angle", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, angle)},
	{"a", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, a)},
	{"b", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, b)},
	{"c", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, c)},
	{"cv", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, cv)},
	{"acv", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, acv)},
	{"CtrlPtTemplate", "[[D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, CtrlPtTemplate)},
	{"CornerFlags", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Metacity$RoundRectClipShape$RoundishRectIterator, CornerFlags)},
	{}
};

$MethodInfo _Metacity$RoundRectClipShape$RoundishRectIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/Metacity$RoundRectClipShape;Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $method(static_cast<void(Metacity$RoundRectClipShape$RoundishRectIterator::*)($Metacity$RoundRectClipShape*,$AffineTransform*)>(&Metacity$RoundRectClipShape$RoundishRectIterator::init$))},
	{"currentSegment", "([F)I", nullptr, $PUBLIC},
	{"currentSegment", "([D)I", nullptr, $PUBLIC},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Metacity$RoundRectClipShape$RoundishRectIterator_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape", "com.sun.java.swing.plaf.gtk.Metacity", "RoundRectClipShape", $STATIC},
	{"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape$RoundishRectIterator", "com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape", "RoundishRectIterator", $STATIC},
	{}
};

$ClassInfo _Metacity$RoundRectClipShape$RoundishRectIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$RoundRectClipShape$RoundishRectIterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_Metacity$RoundRectClipShape$RoundishRectIterator_FieldInfo_,
	_Metacity$RoundRectClipShape$RoundishRectIterator_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity$RoundRectClipShape$RoundishRectIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$RoundRectClipShape$RoundishRectIterator($Class* clazz) {
	return $of($alloc(Metacity$RoundRectClipShape$RoundishRectIterator));
}

double Metacity$RoundRectClipShape$RoundishRectIterator::angle = 0.0;
double Metacity$RoundRectClipShape$RoundishRectIterator::a = 0.0;
double Metacity$RoundRectClipShape$RoundishRectIterator::b = 0.0;
double Metacity$RoundRectClipShape$RoundishRectIterator::c = 0.0;
double Metacity$RoundRectClipShape$RoundishRectIterator::cv = 0.0;
double Metacity$RoundRectClipShape$RoundishRectIterator::acv = 0.0;
$doubleArray2* Metacity$RoundRectClipShape$RoundishRectIterator::CtrlPtTemplate = nullptr;
$ints* Metacity$RoundRectClipShape$RoundishRectIterator::CornerFlags = nullptr;

void Metacity$RoundRectClipShape$RoundishRectIterator::init$($Metacity$RoundRectClipShape* rr, $AffineTransform* at) {
	this->x = $nc(rr)->getX();
	this->y = rr->getY();
	this->w = rr->getWidth();
	this->h = rr->getHeight();
	this->aw = $Math::min(this->w, $Math::abs(rr->getArcWidth()));
	this->ah = $Math::min(this->h, $Math::abs(rr->getArcHeight()));
	$set(this, affine, at);
	if (this->w < 0 || this->h < 0) {
		$set(this, ctrlpts, $new($doubleArray2, 0));
		$set(this, types, $new($ints, 0));
	} else {
		int32_t corners = rr->getCornerFlags();
		int32_t numedges = 5;
		for (int32_t i = 1; i < 16; i <<= 1) {
			if (((int32_t)(corners & (uint32_t)i)) != 0) {
				++numedges;
			}
		}
		$set(this, ctrlpts, $new($doubleArray2, numedges));
		$set(this, types, $new($ints, numedges));
		int32_t j = 0;
		for (int32_t i = 0; i < 4; ++i) {
			$nc(this->types)->set(j, $PathIterator::SEG_LINETO);
			if (((int32_t)(corners & (uint32_t)$nc(Metacity$RoundRectClipShape$RoundishRectIterator::CornerFlags)->get(i))) == 0) {
				$nc(this->ctrlpts)->set(j++, $nc(Metacity$RoundRectClipShape$RoundishRectIterator::CtrlPtTemplate)->get(i * 3 + 0));
			} else {
				$nc(this->ctrlpts)->set(j++, $nc(Metacity$RoundRectClipShape$RoundishRectIterator::CtrlPtTemplate)->get(i * 3 + 1));
				$nc(this->types)->set(j, $PathIterator::SEG_CUBICTO);
				$nc(this->ctrlpts)->set(j++, $nc(Metacity$RoundRectClipShape$RoundishRectIterator::CtrlPtTemplate)->get(i * 3 + 2));
			}
		}
		$nc(this->types)->set(j, $PathIterator::SEG_CLOSE);
		$nc(this->ctrlpts)->set(j++, $nc(Metacity$RoundRectClipShape$RoundishRectIterator::CtrlPtTemplate)->get(12));
		$nc(this->types)->set(0, $PathIterator::SEG_MOVETO);
	}
}

int32_t Metacity$RoundRectClipShape$RoundishRectIterator::getWindingRule() {
	return $PathIterator::WIND_NON_ZERO;
}

bool Metacity$RoundRectClipShape$RoundishRectIterator::isDone() {
	return this->index >= $nc(this->ctrlpts)->length;
}

void Metacity$RoundRectClipShape$RoundishRectIterator::next() {
	++this->index;
}

int32_t Metacity$RoundRectClipShape$RoundishRectIterator::currentSegment($floats* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "roundrect iterator out of bounds"_s);
	}
	$var($doubles, ctrls, $nc(this->ctrlpts)->get(this->index));
	int32_t nc = 0;
	for (int32_t i = 0; i < $nc(ctrls)->length; i += 4) {
		$nc(coords)->set(nc++, (float)(this->x + ctrls->get(i + 0) * this->w + ctrls->get(i + 1) * this->aw));
		coords->set(nc++, (float)(this->y + ctrls->get(i + 2) * this->h + ctrls->get(i + 3) * this->ah));
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, nc / 2);
	}
	return $nc(this->types)->get(this->index);
}

int32_t Metacity$RoundRectClipShape$RoundishRectIterator::currentSegment($doubles* coords) {
	if (isDone()) {
		$throwNew($NoSuchElementException, "roundrect iterator out of bounds"_s);
	}
	$var($doubles, ctrls, $nc(this->ctrlpts)->get(this->index));
	int32_t nc = 0;
	for (int32_t i = 0; i < $nc(ctrls)->length; i += 4) {
		$nc(coords)->set(nc++, this->x + ctrls->get(i + 0) * this->w + ctrls->get(i + 1) * this->aw);
		coords->set(nc++, this->y + ctrls->get(i + 2) * this->h + ctrls->get(i + 3) * this->ah);
	}
	if (this->affine != nullptr) {
		$nc(this->affine)->transform(coords, 0, coords, 0, nc / 2);
	}
	return $nc(this->types)->get(this->index);
}

void clinit$Metacity$RoundRectClipShape$RoundishRectIterator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Math);
	Metacity$RoundRectClipShape$RoundishRectIterator::angle = $Math::PI / 4.0;
	Metacity$RoundRectClipShape$RoundishRectIterator::a = 1.0 - $Math::cos(Metacity$RoundRectClipShape$RoundishRectIterator::angle);
	Metacity$RoundRectClipShape$RoundishRectIterator::b = $Math::tan(Metacity$RoundRectClipShape$RoundishRectIterator::angle);
	Metacity$RoundRectClipShape$RoundishRectIterator::c = $Math::sqrt(1.0 + Metacity$RoundRectClipShape$RoundishRectIterator::b * Metacity$RoundRectClipShape$RoundishRectIterator::b) - 1 + Metacity$RoundRectClipShape$RoundishRectIterator::a;
	Metacity$RoundRectClipShape$RoundishRectIterator::cv = 4.0 / 3.0 * Metacity$RoundRectClipShape$RoundishRectIterator::a * Metacity$RoundRectClipShape$RoundishRectIterator::b / Metacity$RoundRectClipShape$RoundishRectIterator::c;
	Metacity$RoundRectClipShape$RoundishRectIterator::acv = (1.0 - Metacity$RoundRectClipShape$RoundishRectIterator::cv) / 2.0;
	$assignStatic(Metacity$RoundRectClipShape$RoundishRectIterator::CtrlPtTemplate, $new($doubleArray2, {
		$$new($doubles, {
			0.0,
			0.0,
			1.0,
			0.0
		}),
		$$new($doubles, {
			0.0,
			0.0,
			1.0,
			-0.5
		}),
		$$new($doubles, {
			0.0,
			0.0,
			1.0,
			-Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			0.0,
			Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			1.0,
			0.0,
			0.0,
			0.5,
			1.0,
			0.0
		}),
		$$new($doubles, {
			1.0,
			0.0,
			1.0,
			0.0
		}),
		$$new($doubles, {
			1.0,
			-0.5,
			1.0,
			0.0
		}),
		$$new($doubles, {
			1.0,
			-Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			1.0,
			0.0,
			1.0,
			0.0,
			1.0,
			-Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			1.0,
			0.0,
			1.0,
			-0.5
		}),
		$$new($doubles, {
			1.0,
			0.0,
			0.0,
			0.0
		}),
		$$new($doubles, {
			1.0,
			0.0,
			0.0,
			0.5
		}),
		$$new($doubles, {
			1.0,
			0.0,
			0.0,
			Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			1.0,
			-Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			0.0,
			0.0,
			1.0,
			-0.5,
			0.0,
			0.0
		}),
		$$new($doubles, {
			0.0,
			0.0,
			0.0,
			0.0
		}),
		$$new($doubles, {
			0.0,
			0.5,
			0.0,
			0.0
		}),
		$$new($doubles, {
			0.0,
			Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			0.0,
			0.0,
			0.0,
			0.0,
			0.0,
			Metacity$RoundRectClipShape$RoundishRectIterator::acv,
			0.0,
			0.0,
			0.0,
			0.5
		}),
		$$new($doubles, 0)
	}));
	$assignStatic(Metacity$RoundRectClipShape$RoundishRectIterator::CornerFlags, $new($ints, {
		$Metacity$RoundRectClipShape::BOTTOM_LEFT,
		$Metacity$RoundRectClipShape::BOTTOM_RIGHT,
		$Metacity$RoundRectClipShape::TOP_RIGHT,
		$Metacity$RoundRectClipShape::TOP_LEFT
	}));
}

Metacity$RoundRectClipShape$RoundishRectIterator::Metacity$RoundRectClipShape$RoundishRectIterator() {
}

$Class* Metacity$RoundRectClipShape$RoundishRectIterator::load$($String* name, bool initialize) {
	$loadClass(Metacity$RoundRectClipShape$RoundishRectIterator, name, initialize, &_Metacity$RoundRectClipShape$RoundishRectIterator_ClassInfo_, clinit$Metacity$RoundRectClipShape$RoundishRectIterator, allocate$Metacity$RoundRectClipShape$RoundishRectIterator);
	return class$;
}

$Class* Metacity$RoundRectClipShape$RoundishRectIterator::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com