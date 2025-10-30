#include <sun/awt/geom/Crossings.h>

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/Crossings$EvenOdd.h>
#include <sun/awt/geom/Crossings$NonZero.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef WIND_EVEN_ODD

using $PathIterator = ::java::awt::geom::PathIterator;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $Crossings$EvenOdd = ::sun::awt::geom::Crossings$EvenOdd;
using $Crossings$NonZero = ::sun::awt::geom::Crossings$NonZero;
using $Curve = ::sun::awt::geom::Curve;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Crossings_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Crossings, debug)},
	{"limit", "I", nullptr, 0, $field(Crossings, limit)},
	{"yranges", "[D", nullptr, 0, $field(Crossings, yranges)},
	{"xlo", "D", nullptr, 0, $field(Crossings, xlo)},
	{"ylo", "D", nullptr, 0, $field(Crossings, ylo)},
	{"xhi", "D", nullptr, 0, $field(Crossings, xhi)},
	{"yhi", "D", nullptr, 0, $field(Crossings, yhi)},
	{"tmp", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/geom/Curve;>;", $PRIVATE, $field(Crossings, tmp)},
	{}
};

$MethodInfo _Crossings_MethodInfo_[] = {
	{"<init>", "(DDDD)V", nullptr, $PUBLIC, $method(static_cast<void(Crossings::*)(double,double,double,double)>(&Crossings::init$))},
	{"accumulateCubic", "(DD[D)Z", nullptr, $PUBLIC},
	{"accumulateLine", "(DDDD)Z", nullptr, $PUBLIC},
	{"accumulateLine", "(DDDDI)Z", nullptr, $PUBLIC},
	{"accumulateQuad", "(DD[D)Z", nullptr, $PUBLIC},
	{"covers", "(DD)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"findCrossings", "(Ljava/util/Vector;DDDD)Lsun/awt/geom/Crossings;", "(Ljava/util/Vector<+Lsun/awt/geom/Curve;>;DDDD)Lsun/awt/geom/Crossings;", $PUBLIC | $STATIC, $method(static_cast<Crossings*(*)($Vector*,double,double,double,double)>(&Crossings::findCrossings))},
	{"findCrossings", "(Ljava/awt/geom/PathIterator;DDDD)Lsun/awt/geom/Crossings;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Crossings*(*)($PathIterator*,double,double,double,double)>(&Crossings::findCrossings))},
	{"getXHi", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Crossings::*)()>(&Crossings::getXHi))},
	{"getXLo", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Crossings::*)()>(&Crossings::getXLo))},
	{"getYHi", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Crossings::*)()>(&Crossings::getYHi))},
	{"getYLo", "()D", nullptr, $PUBLIC | $FINAL, $method(static_cast<double(Crossings::*)()>(&Crossings::getYLo))},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Crossings::*)()>(&Crossings::isEmpty))},
	{"print", "()V", nullptr, $PUBLIC},
	{"record", "(DDI)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Crossings_InnerClassesInfo_[] = {
	{"sun.awt.geom.Crossings$NonZero", "sun.awt.geom.Crossings", "NonZero", $PUBLIC | $STATIC | $FINAL},
	{"sun.awt.geom.Crossings$EvenOdd", "sun.awt.geom.Crossings", "EvenOdd", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Crossings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.geom.Crossings",
	"java.lang.Object",
	nullptr,
	_Crossings_FieldInfo_,
	_Crossings_MethodInfo_,
	nullptr,
	nullptr,
	_Crossings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.geom.Crossings$NonZero,sun.awt.geom.Crossings$EvenOdd"
};

$Object* allocate$Crossings($Class* clazz) {
	return $of($alloc(Crossings));
}

void Crossings::init$(double xlo, double ylo, double xhi, double yhi) {
	this->limit = 0;
	$set(this, yranges, $new($doubles, 10));
	$set(this, tmp, $new($Vector));
	this->xlo = xlo;
	this->ylo = ylo;
	this->xhi = xhi;
	this->yhi = yhi;
}

double Crossings::getXLo() {
	return this->xlo;
}

double Crossings::getYLo() {
	return this->ylo;
}

double Crossings::getXHi() {
	return this->xhi;
}

double Crossings::getYHi() {
	return this->yhi;
}

void Crossings::print() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Crossings ["_s);
	$nc($System::out)->println($$str({"  bounds = ["_s, $$str(this->ylo), ", "_s, $$str(this->yhi), "]"_s}));
	for (int32_t i = 0; i < this->limit; i += 2) {
		$nc($System::out)->println($$str({"  ["_s, $$str($nc(this->yranges)->get(i)), ", "_s, $$str($nc(this->yranges)->get(i + 1)), "]"_s}));
	}
	$nc($System::out)->println("]"_s);
}

bool Crossings::isEmpty() {
	return (this->limit == 0);
}

Crossings* Crossings::findCrossings($Vector* curves, double xlo, double ylo, double xhi, double yhi) {
	$useLocalCurrentObjectStackCache();
	$var(Crossings, cross, $new($Crossings$EvenOdd, xlo, ylo, xhi, yhi));
	$var($Enumeration, enum_, $nc(curves)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($Curve, c, $cast($Curve, enum_->nextElement()));
		if ($nc(c)->accumulateCrossings(cross)) {
			return nullptr;
		}
	}
	return cross;
}

Crossings* Crossings::findCrossings($PathIterator* pi, double xlo, double ylo, double xhi, double yhi) {
	$useLocalCurrentObjectStackCache();
	$var(Crossings, cross, nullptr);
	if ($nc(pi)->getWindingRule() == $PathIterator::WIND_EVEN_ODD) {
		$assign(cross, $new($Crossings$EvenOdd, xlo, ylo, xhi, yhi));
	} else {
		$assign(cross, $new($Crossings$NonZero, xlo, ylo, xhi, yhi));
	}
	$var($doubles, coords, $new($doubles, 23));
	double movx = (double)0;
	double movy = (double)0;
	double curx = (double)0;
	double cury = (double)0;
	double newx = 0.0;
	double newy = 0.0;
	while (!$nc(pi)->isDone()) {
		int32_t type = pi->currentSegment(coords);
		switch (type) {
		case $PathIterator::SEG_MOVETO:
			{
				if (movy != cury && $nc(cross)->accumulateLine(curx, cury, movx, movy)) {
					return nullptr;
				}
				movx = (curx = coords->get(0));
				movy = (cury = coords->get(1));
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				newx = coords->get(0);
				newy = coords->get(1);
				if ($nc(cross)->accumulateLine(curx, cury, newx, newy)) {
					return nullptr;
				}
				curx = newx;
				cury = newy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				newx = coords->get(2);
				newy = coords->get(3);
				if ($nc(cross)->accumulateQuad(curx, cury, coords)) {
					return nullptr;
				}
				curx = newx;
				cury = newy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				newx = coords->get(4);
				newy = coords->get(5);
				if ($nc(cross)->accumulateCubic(curx, cury, coords)) {
					return nullptr;
				}
				curx = newx;
				cury = newy;
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (movy != cury && $nc(cross)->accumulateLine(curx, cury, movx, movy)) {
					return nullptr;
				}
				curx = movx;
				cury = movy;
				break;
			}
		}
		pi->next();
	}
	if (movy != cury) {
		if ($nc(cross)->accumulateLine(curx, cury, movx, movy)) {
			return nullptr;
		}
	}
	return cross;
}

bool Crossings::accumulateLine(double x0, double y0, double x1, double y1) {
	if (y0 <= y1) {
		return accumulateLine(x0, y0, x1, y1, 1);
	} else {
		return accumulateLine(x1, y1, x0, y0, -1);
	}
}

bool Crossings::accumulateLine(double x0, double y0, double x1, double y1, int32_t direction) {
	if (this->yhi <= y0 || this->ylo >= y1) {
		return false;
	}
	if (x0 >= this->xhi && x1 >= this->xhi) {
		return false;
	}
	if (y0 == y1) {
		return (x0 >= this->xlo || x1 >= this->xlo);
	}
	double xstart = 0.0;
	double ystart = 0.0;
	double xend = 0.0;
	double yend = 0.0;
	double dx = (x1 - x0);
	double dy = (y1 - y0);
	if (y0 < this->ylo) {
		xstart = x0 + (this->ylo - y0) * dx / dy;
		ystart = this->ylo;
	} else {
		xstart = x0;
		ystart = y0;
	}
	if (this->yhi < y1) {
		xend = x0 + (this->yhi - y0) * dx / dy;
		yend = this->yhi;
	} else {
		xend = x1;
		yend = y1;
	}
	if (xstart >= this->xhi && xend >= this->xhi) {
		return false;
	}
	if (xstart > this->xlo || xend > this->xlo) {
		return true;
	}
	record(ystart, yend, direction);
	return false;
}

bool Crossings::accumulateQuad(double x0, double y0, $doubles* coords) {
	$useLocalCurrentObjectStackCache();
	if (y0 < this->ylo && $nc(coords)->get(1) < this->ylo && coords->get(3) < this->ylo) {
		return false;
	}
	if (y0 > this->yhi && $nc(coords)->get(1) > this->yhi && coords->get(3) > this->yhi) {
		return false;
	}
	if (x0 > this->xhi && $nc(coords)->get(0) > this->xhi && coords->get(2) > this->xhi) {
		return false;
	}
	if (x0 < this->xlo && $nc(coords)->get(0) < this->xlo && coords->get(2) < this->xlo) {
		if (y0 < coords->get(3)) {
			double var$0 = $Math::max(y0, this->ylo);
			record(var$0, $Math::min(coords->get(3), this->yhi), 1);
		} else if (y0 > coords->get(3)) {
			double var$1 = $Math::max(coords->get(3), this->ylo);
			record(var$1, $Math::min(y0, this->yhi), -1);
		}
		return false;
	}
	$Curve::insertQuad(this->tmp, x0, y0, coords);
	$var($Enumeration, enum_, $nc(this->tmp)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($Curve, c, $cast($Curve, enum_->nextElement()));
		if ($nc(c)->accumulateCrossings(this)) {
			return true;
		}
	}
	$nc(this->tmp)->clear();
	return false;
}

bool Crossings::accumulateCubic(double x0, double y0, $doubles* coords) {
	$useLocalCurrentObjectStackCache();
	if (y0 < this->ylo && $nc(coords)->get(1) < this->ylo && coords->get(3) < this->ylo && coords->get(5) < this->ylo) {
		return false;
	}
	if (y0 > this->yhi && $nc(coords)->get(1) > this->yhi && coords->get(3) > this->yhi && coords->get(5) > this->yhi) {
		return false;
	}
	if (x0 > this->xhi && $nc(coords)->get(0) > this->xhi && coords->get(2) > this->xhi && coords->get(4) > this->xhi) {
		return false;
	}
	if (x0 < this->xlo && $nc(coords)->get(0) < this->xlo && coords->get(2) < this->xlo && coords->get(4) < this->xlo) {
		if (y0 <= coords->get(5)) {
			double var$0 = $Math::max(y0, this->ylo);
			record(var$0, $Math::min(coords->get(5), this->yhi), 1);
		} else {
			double var$1 = $Math::max(coords->get(5), this->ylo);
			record(var$1, $Math::min(y0, this->yhi), -1);
		}
		return false;
	}
	$Curve::insertCubic(this->tmp, x0, y0, coords);
	$var($Enumeration, enum_, $nc(this->tmp)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($Curve, c, $cast($Curve, enum_->nextElement()));
		if ($nc(c)->accumulateCrossings(this)) {
			return true;
		}
	}
	$nc(this->tmp)->clear();
	return false;
}

Crossings::Crossings() {
}

$Class* Crossings::load$($String* name, bool initialize) {
	$loadClass(Crossings, name, initialize, &_Crossings_ClassInfo_, allocate$Crossings);
	return class$;
}

$Class* Crossings::class$ = nullptr;

		} // geom
	} // awt
} // sun