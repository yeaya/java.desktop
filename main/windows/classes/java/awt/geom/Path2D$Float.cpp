#include <java/awt/geom/Path2D$Float.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/IllegalPathStateException.h>
#include <java/awt/geom/Path2D$Float$CopyIterator.h>
#include <java/awt/geom/Path2D$Float$TxIterator.h>
#include <java/awt/geom/Path2D$Iterator.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
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
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $IllegalPathStateException = ::java::awt::geom::IllegalPathStateException;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float$CopyIterator = ::java::awt::geom::Path2D$Float$CopyIterator;
using $Path2D$Float$TxIterator = ::java::awt::geom::Path2D$Float$TxIterator;
using $Path2D$Iterator = ::java::awt::geom::Path2D$Iterator;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
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

$FieldInfo _Path2D$Float_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Path2D$Float, $assertionsDisabled)},
	{"floatCoords", "[F", nullptr, $TRANSIENT, $field(Path2D$Float, floatCoords)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D$Float, serialVersionUID)},
	{}
};

$MethodInfo _Path2D$Float_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Float::*)()>(&Path2D$Float::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Float::*)(int32_t)>(&Path2D$Float::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Float::*)(int32_t,int32_t)>(&Path2D$Float::init$))},
	{"<init>", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Float::*)($Shape*)>(&Path2D$Float::init$))},
	{"<init>", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(Path2D$Float::*)($Shape*,$AffineTransform*)>(&Path2D$Float::init$))},
	{"append", "(FF)V", nullptr, 0},
	{"append", "(DD)V", nullptr, 0},
	{"append", "(Ljava/awt/geom/PathIterator;Z)V", nullptr, $PUBLIC | $FINAL},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"cloneCoordsDouble", "(Ljava/awt/geom/AffineTransform;)[D", nullptr, 0},
	{"cloneCoordsFloat", "(Ljava/awt/geom/AffineTransform;)[F", nullptr, 0},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"curveTo", "(FFFFFF)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Path2D$Float::*)(float,float,float,float,float,float)>(&Path2D$Float::curveTo))},
	{"expandCoords", "([FI)[F", nullptr, $STATIC, $method(static_cast<$floats*(*)($floats*,int32_t)>(&Path2D$Float::expandCoords))},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $FINAL},
	{"getPoint", "(I)Ljava/awt/geom/Point2D;", nullptr, 0},
	{"lineTo", "(DD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"lineTo", "(FF)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Path2D$Float::*)(float,float)>(&Path2D$Float::lineTo))},
	{"moveTo", "(DD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"moveTo", "(FF)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Path2D$Float::*)(float,float)>(&Path2D$Float::moveTo))},
	{"needRoom", "(ZI)V", nullptr, 0},
	{"pointCrossings", "(DD)I", nullptr, 0},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"quadTo", "(FFFF)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Path2D$Float::*)(float,float,float,float)>(&Path2D$Float::quadTo))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Path2D$Float::*)($ObjectInputStream*)>(&Path2D$Float::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"rectCrossings", "(DDDD)I", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $FINAL},
	{"trimToSize", "()V", nullptr, $PUBLIC | $FINAL},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Path2D$Float::*)($ObjectOutputStream*)>(&Path2D$Float::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Path2D$Float_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Float", "java.awt.geom.Path2D", "Float", $PUBLIC | $STATIC},
	{"java.awt.geom.Path2D$Float$TxIterator", "java.awt.geom.Path2D$Float", "TxIterator", $STATIC},
	{"java.awt.geom.Path2D$Float$CopyIterator", "java.awt.geom.Path2D$Float", "CopyIterator", $STATIC},
	{}
};

$ClassInfo _Path2D$Float_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.Path2D$Float",
	"java.awt.geom.Path2D",
	"java.io.Serializable",
	_Path2D$Float_FieldInfo_,
	_Path2D$Float_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D$Float_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D"
};

$Object* allocate$Path2D$Float($Class* clazz) {
	return $of($alloc(Path2D$Float));
}

int32_t Path2D$Float::hashCode() {
	 return this->$Path2D::hashCode();
}

bool Path2D$Float::equals(Object$* arg0) {
	 return this->$Path2D::equals(arg0);
}

$String* Path2D$Float::toString() {
	 return this->$Path2D::toString();
}

void Path2D$Float::finalize() {
	this->$Path2D::finalize();
}

bool Path2D$Float::$assertionsDisabled = false;

void Path2D$Float::init$() {
	Path2D$Float::init$($Path2D::WIND_NON_ZERO, $Path2D::INIT_SIZE);
}

void Path2D$Float::init$(int32_t rule) {
	Path2D$Float::init$(rule, $Path2D::INIT_SIZE);
}

void Path2D$Float::init$(int32_t rule, int32_t initialCapacity) {
	$Path2D::init$(rule, initialCapacity);
	$set(this, floatCoords, $new($floats, initialCapacity * 2));
}

void Path2D$Float::init$($Shape* s) {
	Path2D$Float::init$(s, ($AffineTransform*)nullptr);
}

void Path2D$Float::init$($Shape* s, $AffineTransform* at) {
	$Path2D::init$();
	if ($instanceOf($Path2D, s)) {
		$var($Path2D, p2d, $cast($Path2D, s));
		setWindingRule($nc(p2d)->windingRule);
		this->numTypes = $nc(p2d)->numTypes;
		$set(this, pointTypes, $Arrays::copyOf(p2d->pointTypes, p2d->numTypes));
		this->numCoords = p2d->numCoords;
		$set(this, floatCoords, p2d->cloneCoordsFloat(at));
	} else {
		$var($PathIterator, pi, $nc(s)->getPathIterator(at));
		setWindingRule($nc(pi)->getWindingRule());
		$set(this, pointTypes, $new($bytes, $Path2D::INIT_SIZE));
		$set(this, floatCoords, $new($floats, $Path2D::INIT_SIZE * 2));
		append(pi, false);
	}
}

void Path2D$Float::trimToSize() {
	if (this->numTypes < $nc(this->pointTypes)->length) {
		$set(this, pointTypes, $Arrays::copyOf(this->pointTypes, this->numTypes));
	}
	if (this->numCoords < $nc(this->floatCoords)->length) {
		$set(this, floatCoords, $Arrays::copyOf(this->floatCoords, this->numCoords));
	}
}

$floats* Path2D$Float::cloneCoordsFloat($AffineTransform* at) {
	$var($floats, ret, nullptr);
	if (at == nullptr) {
		$assign(ret, $Arrays::copyOf(this->floatCoords, this->numCoords));
	} else {
		$assign(ret, $new($floats, this->numCoords));
		$nc(at)->transform(this->floatCoords, 0, ret, 0, this->numCoords / 2);
	}
	return ret;
}

$doubles* Path2D$Float::cloneCoordsDouble($AffineTransform* at) {
	$var($doubles, ret, $new($doubles, this->numCoords));
	if (at == nullptr) {
		for (int32_t i = 0; i < this->numCoords; ++i) {
			ret->set(i, $nc(this->floatCoords)->get(i));
		}
	} else {
		$nc(at)->transform(this->floatCoords, 0, ret, 0, this->numCoords / 2);
	}
	return ret;
}

void Path2D$Float::append(float x, float y) {
	$nc(this->floatCoords)->set(this->numCoords++, x);
	$nc(this->floatCoords)->set(this->numCoords++, y);
}

void Path2D$Float::append(double x, double y) {
	$nc(this->floatCoords)->set(this->numCoords++, (float)x);
	$nc(this->floatCoords)->set(this->numCoords++, (float)y);
}

$Point2D* Path2D$Float::getPoint(int32_t coordindex) {
	return $new($Point2D$Float, $nc(this->floatCoords)->get(coordindex), $nc(this->floatCoords)->get(coordindex + 1));
}

void Path2D$Float::needRoom(bool needMove, int32_t newCoords) {
	if ((this->numTypes == 0) && needMove) {
		$throwNew($IllegalPathStateException, "missing initial moveto in path definition"_s);
	}
	if (this->numTypes >= $nc(this->pointTypes)->length) {
		$set(this, pointTypes, expandPointTypes(this->pointTypes, 1));
	}
	if (this->numCoords > ($nc(this->floatCoords)->length - newCoords)) {
		$set(this, floatCoords, expandCoords(this->floatCoords, newCoords));
	}
}

$floats* Path2D$Float::expandCoords($floats* oldCoords, int32_t needed) {
	$init(Path2D$Float);
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
	if (!Path2D$Float::$assertionsDisabled && !(grow > needed)) {
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

void Path2D$Float::moveTo(double x, double y) {
	$synchronized(this) {
		if (this->numTypes > 0 && $nc(this->pointTypes)->get(this->numTypes - 1) == (int8_t)0) {
			$nc(this->floatCoords)->set(this->numCoords - 2, (float)x);
			$nc(this->floatCoords)->set(this->numCoords - 1, (float)y);
		} else {
			needRoom(false, 2);
			$nc(this->pointTypes)->set(this->numTypes++, (int8_t)0);
			$nc(this->floatCoords)->set(this->numCoords++, (float)x);
			$nc(this->floatCoords)->set(this->numCoords++, (float)y);
		}
	}
}

void Path2D$Float::moveTo(float x, float y) {
	$synchronized(this) {
		if (this->numTypes > 0 && $nc(this->pointTypes)->get(this->numTypes - 1) == (int8_t)0) {
			$nc(this->floatCoords)->set(this->numCoords - 2, x);
			$nc(this->floatCoords)->set(this->numCoords - 1, y);
		} else {
			needRoom(false, 2);
			$nc(this->pointTypes)->set(this->numTypes++, (int8_t)0);
			$nc(this->floatCoords)->set(this->numCoords++, x);
			$nc(this->floatCoords)->set(this->numCoords++, y);
		}
	}
}

void Path2D$Float::lineTo(double x, double y) {
	$synchronized(this) {
		needRoom(true, 2);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)1);
		$nc(this->floatCoords)->set(this->numCoords++, (float)x);
		$nc(this->floatCoords)->set(this->numCoords++, (float)y);
	}
}

void Path2D$Float::lineTo(float x, float y) {
	$synchronized(this) {
		needRoom(true, 2);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)1);
		$nc(this->floatCoords)->set(this->numCoords++, x);
		$nc(this->floatCoords)->set(this->numCoords++, y);
	}
}

void Path2D$Float::quadTo(double x1, double y1, double x2, double y2) {
	$synchronized(this) {
		needRoom(true, 4);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)2);
		$nc(this->floatCoords)->set(this->numCoords++, (float)x1);
		$nc(this->floatCoords)->set(this->numCoords++, (float)y1);
		$nc(this->floatCoords)->set(this->numCoords++, (float)x2);
		$nc(this->floatCoords)->set(this->numCoords++, (float)y2);
	}
}

void Path2D$Float::quadTo(float x1, float y1, float x2, float y2) {
	$synchronized(this) {
		needRoom(true, 4);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)2);
		$nc(this->floatCoords)->set(this->numCoords++, x1);
		$nc(this->floatCoords)->set(this->numCoords++, y1);
		$nc(this->floatCoords)->set(this->numCoords++, x2);
		$nc(this->floatCoords)->set(this->numCoords++, y2);
	}
}

void Path2D$Float::curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {
	$synchronized(this) {
		needRoom(true, 6);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)3);
		$nc(this->floatCoords)->set(this->numCoords++, (float)x1);
		$nc(this->floatCoords)->set(this->numCoords++, (float)y1);
		$nc(this->floatCoords)->set(this->numCoords++, (float)x2);
		$nc(this->floatCoords)->set(this->numCoords++, (float)y2);
		$nc(this->floatCoords)->set(this->numCoords++, (float)x3);
		$nc(this->floatCoords)->set(this->numCoords++, (float)y3);
	}
}

void Path2D$Float::curveTo(float x1, float y1, float x2, float y2, float x3, float y3) {
	$synchronized(this) {
		needRoom(true, 6);
		$nc(this->pointTypes)->set(this->numTypes++, (int8_t)3);
		$nc(this->floatCoords)->set(this->numCoords++, x1);
		$nc(this->floatCoords)->set(this->numCoords++, y1);
		$nc(this->floatCoords)->set(this->numCoords++, x2);
		$nc(this->floatCoords)->set(this->numCoords++, y2);
		$nc(this->floatCoords)->set(this->numCoords++, x3);
		$nc(this->floatCoords)->set(this->numCoords++, y3);
	}
}

int32_t Path2D$Float::pointCrossings(double px, double py) {
	if (this->numTypes == 0) {
		return 0;
	}
	double movx = 0.0;
	double movy = 0.0;
	double curx = 0.0;
	double cury = 0.0;
	double endx = 0.0;
	double endy = 0.0;
	$var($floats, coords, this->floatCoords);
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
				double var$9 = (double)coords->get(ci++);
				double var$10 = (double)coords->get(ci++);
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
				double var$16 = (double)coords->get(ci++);
				double var$17 = (double)coords->get(ci++);
				double var$18 = (double)coords->get(ci++);
				double var$19 = (double)coords->get(ci++);
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

int32_t Path2D$Float::rectCrossings(double rxmin, double rymin, double rxmax, double rymax) {
	if (this->numTypes == 0) {
		return 0;
	}
	$var($floats, coords, this->floatCoords);
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
				int32_t var$0 = crossings;
				double var$1 = rxmin;
				double var$2 = rymin;
				double var$3 = rxmax;
				double var$4 = rymax;
				double var$5 = curx;
				double var$6 = cury;
				double var$7 = endx = coords->get(ci++);
				crossings = $Curve::rectCrossingsForLine(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, endy = coords->get(ci++));
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				int32_t var$8 = crossings;
				double var$9 = rxmin;
				double var$10 = rymin;
				double var$11 = rxmax;
				double var$12 = rymax;
				double var$13 = curx;
				double var$14 = cury;
				double var$15 = (double)coords->get(ci++);
				double var$16 = (double)coords->get(ci++);
				double var$17 = endx = coords->get(ci++);
				crossings = $Curve::rectCrossingsForQuad(var$8, var$9, var$10, var$11, var$12, var$13, var$14, var$15, var$16, var$17, endy = coords->get(ci++), 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				int32_t var$18 = crossings;
				double var$19 = rxmin;
				double var$20 = rymin;
				double var$21 = rxmax;
				double var$22 = rymax;
				double var$23 = curx;
				double var$24 = cury;
				double var$25 = (double)coords->get(ci++);
				double var$26 = (double)coords->get(ci++);
				double var$27 = (double)coords->get(ci++);
				double var$28 = (double)coords->get(ci++);
				double var$29 = endx = coords->get(ci++);
				crossings = $Curve::rectCrossingsForCubic(var$18, var$19, var$20, var$21, var$22, var$23, var$24, var$25, var$26, var$27, var$28, var$29, endy = coords->get(ci++), 0);
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

void Path2D$Float::append($PathIterator* pi, bool connect) {
	$var($floats, coords, $new($floats, 6));
	while (!$nc(pi)->isDone()) {
		switch (pi->currentSegment(coords)) {
		case 0:
			{
				if (!connect || this->numTypes < 1 || this->numCoords < 1) {
					moveTo(coords->get(0), coords->get(1));
					break;
				}
				if ($nc(this->pointTypes)->get(this->numTypes - 1) != (int8_t)4 && $nc(this->floatCoords)->get(this->numCoords - 2) == coords->get(0) && $nc(this->floatCoords)->get(this->numCoords - 1) == coords->get(1)) {
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

void Path2D$Float::transform($AffineTransform* at) {
	$nc(at)->transform(this->floatCoords, 0, this->floatCoords, 0, this->numCoords / 2);
}

$Rectangle2D* Path2D$Float::getBounds2D() {
	$synchronized(this) {
		float x1 = 0.0;
		float y1 = 0.0;
		float x2 = 0.0;
		float y2 = 0.0;
		int32_t i = this->numCoords;
		if (i > 0) {
			y1 = (y2 = $nc(this->floatCoords)->get(--i));
			x1 = (x2 = $nc(this->floatCoords)->get(--i));
			while (i > 0) {
				float y = $nc(this->floatCoords)->get(--i);
				float x = $nc(this->floatCoords)->get(--i);
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
			x1 = (y1 = (x2 = (y2 = 0.0f)));
		}
		return $new($Rectangle2D$Float, x1, y1, x2 - x1, y2 - y1);
	}
}

$PathIterator* Path2D$Float::getPathIterator($AffineTransform* at) {
	if (at == nullptr) {
		return $new($Path2D$Float$CopyIterator, this);
	} else {
		return $new($Path2D$Float$TxIterator, this, at);
	}
}

$Object* Path2D$Float::clone() {
	if ($instanceOf($GeneralPath, this)) {
		return $of($new($GeneralPath, static_cast<$Shape*>(this)));
	} else {
		return $of($new(Path2D$Float, static_cast<$Shape*>(this)));
	}
}

void Path2D$Float::writeObject($ObjectOutputStream* s) {
	$Path2D::writeObject(s, false);
}

void Path2D$Float::readObject($ObjectInputStream* s) {
	$Path2D::readObject(s, false);
}

void clinit$Path2D$Float($Class* class$) {
	$load($Path2D);
	Path2D$Float::$assertionsDisabled = !$Path2D::class$->desiredAssertionStatus();
}

Path2D$Float::Path2D$Float() {
}

$Class* Path2D$Float::load$($String* name, bool initialize) {
	$loadClass(Path2D$Float, name, initialize, &_Path2D$Float_ClassInfo_, clinit$Path2D$Float, allocate$Path2D$Float);
	return class$;
}

$Class* Path2D$Float::class$ = nullptr;

		} // geom
	} // awt
} // java