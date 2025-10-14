#include <java/awt/geom/Path2D$Double.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/IllegalPathStateException.h>
#include <java/awt/geom/Path2D$Double$CopyIterator.h>
#include <java/awt/geom/Path2D$Double$TxIterator.h>
#include <java/awt/geom/Path2D$Iterator.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef EXPAND_MAX_COORDS
#undef EXPAND_MIN
#undef INIT_SIZE
#undef MAX_VALUE
#undef RECT_INTERSECTS
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef WIND_NON_ZERO

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $IllegalPathStateException = ::java::awt::geom::IllegalPathStateException;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Double$CopyIterator = ::java::awt::geom::Path2D$Double$CopyIterator;
using $Path2D$Double$TxIterator = ::java::awt::geom::Path2D$Double$TxIterator;
using $Path2D$Iterator = ::java::awt::geom::Path2D$Iterator;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Arrays = ::java::util::Arrays;
using $Curve = ::sun::awt::geom::Curve;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Path2D$Double_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Path2D$Double, $assertionsDisabled)},
	{"doubleCoords", "[D", nullptr, $TRANSIENT, $field(Path2D$Double, doubleCoords)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D$Double, serialVersionUID)},
	{}
};

$MethodInfo _Path2D$Double_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Double::*)()>(&Path2D$Double::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Double::*)(int32_t)>(&Path2D$Double::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Double::*)(int32_t,int32_t)>(&Path2D$Double::init$))},
	{"<init>", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Double::*)($Shape*)>(&Path2D$Double::init$))},
	{"<init>", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Double::*)($Shape*,$AffineTransform*)>(&Path2D$Double::init$))},
	{"append", "(FF)V", nullptr, 0},
	{"append", "(DD)V", nullptr, 0},
	{"append", "(Ljava/awt/geom/PathIterator;Z)V", nullptr, $PUBLIC | $FINAL},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"cloneCoordsDouble", "(Ljava/awt/geom/AffineTransform;)[D", nullptr, 0},
	{"cloneCoordsFloat", "(Ljava/awt/geom/AffineTransform;)[F", nullptr, 0},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"expandCoords", "([DI)[D", nullptr, $STATIC, $method(static_cast<$doubles*(*)($doubles*,int32_t)>(&Path2D$Double::expandCoords))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $FINAL},
	{"getPoint", "(I)Ljava/awt/geom/Point2D;", nullptr, 0},
	{"lineTo", "(DD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"moveTo", "(DD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"needRoom", "(ZI)V", nullptr, 0},
	{"pointCrossings", "(DD)I", nullptr, 0},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Path2D$Double::*)($ObjectInputStream*)>(&Path2D$Double::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"rectCrossings", "(DDDD)I", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $FINAL},
	{"trimToSize", "()V", nullptr, $PUBLIC | $FINAL},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Path2D$Double::*)($ObjectOutputStream*)>(&Path2D$Double::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Path2D$Double_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Double", "java.awt.geom.Path2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Path2D$Double$TxIterator", "java.awt.geom.Path2D$Double", "TxIterator", $STATIC},
	{"java.awt.geom.Path2D$Double$CopyIterator", "java.awt.geom.Path2D$Double", "CopyIterator", $STATIC},
	{}
};

$ClassInfo _Path2D$Double_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Path2D$Double",
	"java.awt.geom.Path2D",
	"java.io.Serializable",
	_Path2D$Double_FieldInfo_,
	_Path2D$Double_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D$Double_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D"
};

$Object* allocate$Path2D$Double($Class* clazz) {
	return $of($alloc(Path2D$Double));
}

int32_t Path2D$Double::hashCode() {
	 return this->$Path2D::hashCode();
}

bool Path2D$Double::equals(Object$* arg0) {
	 return this->$Path2D::equals(arg0);
}

$String* Path2D$Double::toString() {
	 return this->$Path2D::toString();
}

void Path2D$Double::finalize() {
	this->$Path2D::finalize();
}

bool Path2D$Double::$assertionsDisabled = false;

void Path2D$Double::init$() {
	Path2D$Double::init$($Path2D::WIND_NON_ZERO, $Path2D::INIT_SIZE);
}

void Path2D$Double::init$(int32_t rule) {
	Path2D$Double::init$(rule, $Path2D::INIT_SIZE);
}

void Path2D$Double::init$(int32_t rule, int32_t initialCapacity) {
	$Path2D::init$(rule, initialCapacity);
	$set(this, doubleCoords, $new($doubles, initialCapacity * 2));
}

void Path2D$Double::init$($Shape* s) {
	Path2D$Double::init$(s, ($AffineTransform*)nullptr);
}

void Path2D$Double::init$($Shape* s, $AffineTransform* at) {
	$Path2D::init$();
	if ($instanceOf($Path2D, s)) {
		$var($Path2D, p2d, $cast($Path2D, s));
		setWindingRule($nc(p2d)->windingRule);
		this->numTypes = $nc(p2d)->numTypes;
		$set(this, pointTypes, $Arrays::copyOf(p2d->pointTypes, p2d->numTypes));
		this->numCoords = p2d->numCoords;
		$set(this, doubleCoords, p2d->cloneCoordsDouble(at));
	} else {
		$var($PathIterator, pi, $nc(s)->getPathIterator(at));
		setWindingRule($nc(pi)->getWindingRule());
		$set(this, pointTypes, $new($bytes, $Path2D::INIT_SIZE));
		$set(this, doubleCoords, $new($doubles, $Path2D::INIT_SIZE * 2));
		append(pi, false);
	}
}

void Path2D$Double::trimToSize() {
	if (this->numTypes < $nc(this->pointTypes)->length) {
		$set(this, pointTypes, $Arrays::copyOf(this->pointTypes, this->numTypes));
	}
	if (this->numCoords < $nc(this->doubleCoords)->length) {
		$set(this, doubleCoords, $Arrays::copyOf(this->doubleCoords, this->numCoords));
	}
}

$floats* Path2D$Double::cloneCoordsFloat($AffineTransform* at) {
	$var($floats, ret, $new($floats, this->numCoords));
	if (at == nullptr) {
		for (int32_t i = 0; i < this->numCoords; ++i) {
			ret->set(i, (float)$nc(this->doubleCoords)->get(i));
		}
	} else {
		$nc(at)->transform(this->doubleCoords, 0, ret, 0, this->numCoords / 2);
	}
	return ret;
}

$doubles* Path2D$Double::cloneCoordsDouble($AffineTransform* at) {
	$var($doubles, ret, nullptr);
	if (at == nullptr) {
		$assign(ret, $Arrays::copyOf(this->doubleCoords, this->numCoords));
	} else {
		$assign(ret, $new($doubles, this->numCoords));
		$nc(at)->transform(this->doubleCoords, 0, ret, 0, this->numCoords / 2);
	}
	return ret;
}

void Path2D$Double::append(float x, float y) {
	$nc(this->doubleCoords)->set(this->numCoords++, x);
	$nc(this->doubleCoords)->set(this->numCoords++, y);
}

void Path2D$Double::append(double x, double y) {
	$nc(this->doubleCoords)->set(this->numCoords++, x);
	$nc(this->doubleCoords)->set(this->numCoords++, y);
}

$Point2D* Path2D$Double::getPoint(int32_t coordindex) {
	return $new($Point2D$Double, $nc(this->doubleCoords)->get(coordindex), $nc(this->doubleCoords)->get(coordindex + 1));
}

void Path2D$Double::needRoom(bool needMove, int32_t newCoords) {
	if ((this->numTypes == 0) && needMove) {
		$throwNew($IllegalPathStateException, "missing initial moveto in path definition"_s);
	}
	if (this->numTypes >= $nc(this->pointTypes)->length) {
		$set(this, pointTypes, expandPointTypes(this->pointTypes, 1));
	}
	if (this->numCoords > ($nc(this->doubleCoords)->length - newCoords)) {
		$set(this, doubleCoords, expandCoords(this->doubleCoords, newCoords));
	}
}

$doubles* Path2D$Double::expandCoords($doubles* oldCoords, int32_t needed) {
	$init(Path2D$Double);
	int32_t oldSize = $nc(oldCoords)->length;
	int32_t newSizeMin = oldSize + needed;
	if (newSizeMin < oldSize) {
		$throwNew($ArrayIndexOutOfBoundsException, "coords exceeds maximum capacity !"_s);
	}
	int32_t grow = oldSize;
	if (grow > $Path2D::EXPAND_MAX_COORDS) {
		grow = $Math::max($Path2D::EXPAND_MAX_COORDS, oldSize >> 3);
	} else if (grow < $Path2D::EXPAND_MIN) {
		grow = $Path2D::EXPAND_MIN;
	}
	if (!Path2D$Double::$assertionsDisabled && !(grow > needed)) {
		$throwNew($AssertionError);
	}
	int32_t newSize = oldSize + grow;
	if (newSize < newSizeMin) {
		newSize = $Integer::MAX_VALUE;
	}
	while (true) {
		try {
			return $Arrays::copyOf(oldCoords, newSize);
		} catch ($OutOfMemoryError&) {
			$var($OutOfMemoryError, oome, $catch());
			if (newSize == newSizeMin) {
				$throw(oome);
			}
		}
		newSize = newSizeMin + (newSize - newSizeMin) / 2;
	}
	$shouldNotReachHere();
}

void Path2D$Double::moveTo(double x, double y) {
	$synchronized(this) {
		if (this->numTypes > 0 && $nc(this->pointTypes)->get(this->numTypes - 1) == (int8_t)0) {
			$nc(this->doubleCoords)->set(this->numCoords - 2, x);
			$nc(this->doubleCoords)->set(this->numCoords - 1, y);
		} else {
			needRoom(false, 2);
			$nc(this->pointTypes)->set(this->numTypes++, (int8_t)0);
			$nc(this->doubleCoords)->set(this->numCoords++, x);
			$nc(this->doubleCoords)->set(this->numCoords++, y);
		}
	}
}

void Path2D$Double::lineTo(double x, double y) {
	$synchronized(this) {
		needRoom(true, 2);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)1);
		$nc(this->doubleCoords)->set(this->numCoords++, x);
		$nc(this->doubleCoords)->set(this->numCoords++, y);
	}
}

void Path2D$Double::quadTo(double x1, double y1, double x2, double y2) {
	$synchronized(this) {
		needRoom(true, 4);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)2);
		$nc(this->doubleCoords)->set(this->numCoords++, x1);
		$nc(this->doubleCoords)->set(this->numCoords++, y1);
		$nc(this->doubleCoords)->set(this->numCoords++, x2);
		$nc(this->doubleCoords)->set(this->numCoords++, y2);
	}
}

void Path2D$Double::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$synchronized(this) {
		needRoom(true, 6);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)3);
		$nc(this->doubleCoords)->set(this->numCoords++, x1);
		$nc(this->doubleCoords)->set(this->numCoords++, y1);
		$nc(this->doubleCoords)->set(this->numCoords++, x2);
		$nc(this->doubleCoords)->set(this->numCoords++, y2);
		$nc(this->doubleCoords)->set(this->numCoords++, x3);
		$nc(this->doubleCoords)->set(this->numCoords++, y3);
	}
}

int32_t Path2D$Double::pointCrossings(double px, double py) {
	if (this->numTypes == 0) {
		return 0;
	}
	double movx = 0.0;
	double movy = 0.0;
	double curx = 0.0;
	double cury = 0.0;
	double endx = 0.0;
	double endy = 0.0;
	$var($doubles, coords, this->doubleCoords);
	curx = (movx = $nc(coords)->get(0));
	cury = (movy = coords->get(1));
	int32_t crossings = 0;
	int32_t ci = 2;
	for (int32_t i = 1; i < this->numTypes; ++i) {
		switch ($nc(this->pointTypes)->get(i)) {
		case $PathIterator::SEG_MOVETO:
			{
				if (cury != movy) {
					crossings += $Curve::pointCrossingsForLine(px, py, curx, cury, movx, movy);
				}
				movx = (curx = coords->get(ci++));
				movy = (cury = coords->get(ci++));
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				double var$0 = px;
				double var$1 = py;
				double var$2 = curx;
				double var$3 = cury;
				double var$4 = endx = coords->get(ci++);
				crossings += $Curve::pointCrossingsForLine(var$0, var$1, var$2, var$3, var$4, endy = coords->get(ci++));
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				double var$5 = px;
				double var$6 = py;
				double var$7 = curx;
				double var$8 = cury;
				double var$9 = coords->get(ci++);
				double var$10 = coords->get(ci++);
				double var$11 = endx = coords->get(ci++);
				crossings += $Curve::pointCrossingsForQuad(var$5, var$6, var$7, var$8, var$9, var$10, var$11, endy = coords->get(ci++), 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				double var$12 = px;
				double var$13 = py;
				double var$14 = curx;
				double var$15 = cury;
				double var$16 = coords->get(ci++);
				double var$17 = coords->get(ci++);
				double var$18 = coords->get(ci++);
				double var$19 = coords->get(ci++);
				double var$20 = endx = coords->get(ci++);
				crossings += $Curve::pointCrossingsForCubic(var$12, var$13, var$14, var$15, var$16, var$17, var$18, var$19, var$20, endy = coords->get(ci++), 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (cury != movy) {
					crossings += $Curve::pointCrossingsForLine(px, py, curx, cury, movx, movy);
				}
				curx = movx;
				cury = movy;
				break;
			}
		}
	}
	if (cury != movy) {
		crossings += $Curve::pointCrossingsForLine(px, py, curx, cury, movx, movy);
	}
	return crossings;
}

int32_t Path2D$Double::rectCrossings(double rxmin, double rymin, double rxmax, double rymax) {
	if (this->numTypes == 0) {
		return 0;
	}
	$var($doubles, coords, this->doubleCoords);
	double curx = 0.0;
	double cury = 0.0;
	double movx = 0.0;
	double movy = 0.0;
	double endx = 0.0;
	double endy = 0.0;
	curx = (movx = $nc(coords)->get(0));
	cury = (movy = coords->get(1));
	int32_t crossings = 0;
	int32_t ci = 2;
	for (int32_t i = 1; crossings != $Curve::RECT_INTERSECTS && i < this->numTypes; ++i) {
		switch ($nc(this->pointTypes)->get(i)) {
		case $PathIterator::SEG_MOVETO:
			{
				if (curx != movx || cury != movy) {
					crossings = $Curve::rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, movx, movy);
				}
				movx = (curx = coords->get(ci++));
				movy = (cury = coords->get(ci++));
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				endx = coords->get(ci++);
				endy = coords->get(ci++);
				crossings = $Curve::rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, endx, endy);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				int32_t var$0 = crossings;
				double var$1 = rxmin;
				double var$2 = rymin;
				double var$3 = rxmax;
				double var$4 = rymax;
				double var$5 = curx;
				double var$6 = cury;
				double var$7 = coords->get(ci++);
				double var$8 = coords->get(ci++);
				double var$9 = endx = coords->get(ci++);
				crossings = $Curve::rectCrossingsForQuad(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, endy = coords->get(ci++), 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				int32_t var$10 = crossings;
				double var$11 = rxmin;
				double var$12 = rymin;
				double var$13 = rxmax;
				double var$14 = rymax;
				double var$15 = curx;
				double var$16 = cury;
				double var$17 = coords->get(ci++);
				double var$18 = coords->get(ci++);
				double var$19 = coords->get(ci++);
				double var$20 = coords->get(ci++);
				double var$21 = endx = coords->get(ci++);
				crossings = $Curve::rectCrossingsForCubic(var$10, var$11, var$12, var$13, var$14, var$15, var$16, var$17, var$18, var$19, var$20, var$21, endy = coords->get(ci++), 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (curx != movx || cury != movy) {
					crossings = $Curve::rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, movx, movy);
				}
				curx = movx;
				cury = movy;
				break;
			}
		}
	}
	if (crossings != $Curve::RECT_INTERSECTS && (curx != movx || cury != movy)) {
		crossings = $Curve::rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, movx, movy);
	}
	return crossings;
}

void Path2D$Double::append($PathIterator* pi, bool connect) {
	$var($doubles, coords, $new($doubles, 6));
	while (!$nc(pi)->isDone()) {
		switch (pi->currentSegment(coords)) {
		case 0:
			{
				if (!connect || this->numTypes < 1 || this->numCoords < 1) {
					moveTo(coords->get(0), coords->get(1));
					break;
				}
				if ($nc(this->pointTypes)->get(this->numTypes - 1) != (int8_t)4 && $nc(this->doubleCoords)->get(this->numCoords - 2) == coords->get(0) && $nc(this->doubleCoords)->get(this->numCoords - 1) == coords->get(1)) {
					break;
				}
				lineTo(coords->get(0), coords->get(1));
				break;
			}
		case 1:
			{
				lineTo(coords->get(0), coords->get(1));
				break;
			}
		case 2:
			{
				quadTo(coords->get(0), coords->get(1), coords->get(2), coords->get(3));
				break;
			}
		case 3:
			{
				curveTo(coords->get(0), coords->get(1), coords->get(2), coords->get(3), coords->get(4), coords->get(5));
				break;
			}
		case 4:
			{
				closePath();
				break;
			}
		}
		pi->next();
		connect = false;
	}
}

void Path2D$Double::transform($AffineTransform* at) {
	$nc(at)->transform(this->doubleCoords, 0, this->doubleCoords, 0, this->numCoords / 2);
}

$Rectangle2D* Path2D$Double::getBounds2D() {
	$synchronized(this) {
		double x1 = 0.0;
		double y1 = 0.0;
		double x2 = 0.0;
		double y2 = 0.0;
		int32_t i = this->numCoords;
		if (i > 0) {
			y1 = (y2 = $nc(this->doubleCoords)->get(--i));
			x1 = (x2 = $nc(this->doubleCoords)->get(--i));
			while (i > 0) {
				double y = $nc(this->doubleCoords)->get(--i);
				double x = $nc(this->doubleCoords)->get(--i);
				if (x < x1) {
					x1 = x;
				}
				if (y < y1) {
					y1 = y;
				}
				if (x > x2) {
					x2 = x;
				}
				if (y > y2) {
					y2 = y;
				}
			}
		} else {
			x1 = (y1 = (x2 = (y2 = 0.0)));
		}
		return $new($Rectangle2D$Double, x1, y1, x2 - x1, y2 - y1);
	}
}

$PathIterator* Path2D$Double::getPathIterator($AffineTransform* at) {
	if (at == nullptr) {
		return $new($Path2D$Double$CopyIterator, this);
	} else {
		return $new($Path2D$Double$TxIterator, this, at);
	}
}

$Object* Path2D$Double::clone() {
	return $of($new(Path2D$Double, static_cast<$Shape*>(this)));
}

void Path2D$Double::writeObject($ObjectOutputStream* s) {
	$Path2D::writeObject(s, true);
}

void Path2D$Double::readObject($ObjectInputStream* s) {
	$Path2D::readObject(s, true);
}

void clinit$Path2D$Double($Class* class$) {
	$load($Path2D);
	Path2D$Double::$assertionsDisabled = !$Path2D::class$->desiredAssertionStatus();
}

Path2D$Double::Path2D$Double() {
}

$Class* Path2D$Double::load$($String* name, bool initialize) {
	$loadClass(Path2D$Double, name, initialize, &_Path2D$Double_ClassInfo_, clinit$Path2D$Double, allocate$Path2D$Double);
	return class$;
}

$Class* Path2D$Double::class$ = nullptr;

		} // geom
	} // awt
} // java