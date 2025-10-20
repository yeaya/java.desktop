#include <java/awt/geom/Path2D.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/FlatteningPathIterator.h>
#include <java/awt/geom/Path2D$Double.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef EXPAND_MAX
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
#undef SERIAL_PATH_END
#undef SERIAL_SEG_CLOSE
#undef SERIAL_SEG_DBL_CUBICTO
#undef SERIAL_SEG_DBL_LINETO
#undef SERIAL_SEG_DBL_MOVETO
#undef SERIAL_SEG_DBL_QUADTO
#undef SERIAL_SEG_FLT_CUBICTO
#undef SERIAL_SEG_FLT_LINETO
#undef SERIAL_SEG_FLT_MOVETO
#undef SERIAL_SEG_FLT_QUADTO
#undef SERIAL_STORAGE_DBL_ARRAY
#undef SERIAL_STORAGE_FLT_ARRAY
#undef WIND_EVEN_ODD
#undef WIND_NON_ZERO

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $FlatteningPathIterator = ::java::awt::geom::FlatteningPathIterator;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Arrays = ::java::util::Arrays;
using $Curve = ::sun::awt::geom::Curve;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Path2D_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Path2D, $assertionsDisabled)},
	{"WIND_EVEN_ODD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Path2D, WIND_EVEN_ODD)},
	{"WIND_NON_ZERO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Path2D, WIND_NON_ZERO)},
	{"SEG_MOVETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SEG_MOVETO)},
	{"SEG_LINETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SEG_LINETO)},
	{"SEG_QUADTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SEG_QUADTO)},
	{"SEG_CUBICTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SEG_CUBICTO)},
	{"SEG_CLOSE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SEG_CLOSE)},
	{"pointTypes", "[B", nullptr, $TRANSIENT, $field(Path2D, pointTypes)},
	{"numTypes", "I", nullptr, $TRANSIENT, $field(Path2D, numTypes)},
	{"numCoords", "I", nullptr, $TRANSIENT, $field(Path2D, numCoords)},
	{"windingRule", "I", nullptr, $TRANSIENT, $field(Path2D, windingRule)},
	{"INIT_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Path2D, INIT_SIZE)},
	{"EXPAND_MAX", "I", nullptr, $STATIC | $FINAL, $constField(Path2D, EXPAND_MAX)},
	{"EXPAND_MAX_COORDS", "I", nullptr, $STATIC | $FINAL, $constField(Path2D, EXPAND_MAX_COORDS)},
	{"EXPAND_MIN", "I", nullptr, $STATIC | $FINAL, $constField(Path2D, EXPAND_MIN)},
	{"SERIAL_STORAGE_FLT_ARRAY", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_STORAGE_FLT_ARRAY)},
	{"SERIAL_STORAGE_DBL_ARRAY", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_STORAGE_DBL_ARRAY)},
	{"SERIAL_SEG_FLT_MOVETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_FLT_MOVETO)},
	{"SERIAL_SEG_FLT_LINETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_FLT_LINETO)},
	{"SERIAL_SEG_FLT_QUADTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_FLT_QUADTO)},
	{"SERIAL_SEG_FLT_CUBICTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_FLT_CUBICTO)},
	{"SERIAL_SEG_DBL_MOVETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_DBL_MOVETO)},
	{"SERIAL_SEG_DBL_LINETO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_DBL_LINETO)},
	{"SERIAL_SEG_DBL_QUADTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_DBL_QUADTO)},
	{"SERIAL_SEG_DBL_CUBICTO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_DBL_CUBICTO)},
	{"SERIAL_SEG_CLOSE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_SEG_CLOSE)},
	{"SERIAL_PATH_END", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Path2D, SERIAL_PATH_END)},
	{}
};

$MethodInfo _Path2D_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Path2D::*)()>(&Path2D::init$))},
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(Path2D::*)(int32_t,int32_t)>(&Path2D::init$))},
	{"append", "(FF)V", nullptr, $ABSTRACT},
	{"append", "(DD)V", nullptr, $ABSTRACT},
	{"append", "(Ljava/awt/Shape;Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Path2D::*)($Shape*,bool)>(&Path2D::append))},
	{"append", "(Ljava/awt/geom/PathIterator;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"cloneCoordsDouble", "(Ljava/awt/geom/AffineTransform;)[D", nullptr, $ABSTRACT},
	{"cloneCoordsFloat", "(Ljava/awt/geom/AffineTransform;)[F", nullptr, $ABSTRACT},
	{"closePath", "()V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Path2D::*)()>(&Path2D::closePath))},
	{"contains", "(Ljava/awt/geom/PathIterator;DD)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PathIterator*,double,double)>(&Path2D::contains))},
	{"contains", "(Ljava/awt/geom/PathIterator;Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PathIterator*,$Point2D*)>(&Path2D::contains))},
	{"contains", "(DD)Z", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/awt/geom/PathIterator;DDDD)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PathIterator*,double,double,double,double)>(&Path2D::contains))},
	{"contains", "(Ljava/awt/geom/PathIterator;Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PathIterator*,$Rectangle2D*)>(&Path2D::contains))},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC | $FINAL},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $FINAL},
	{"createTransformedShape", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Shape;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Shape*(Path2D::*)($AffineTransform*)>(&Path2D::createTransformedShape))},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"expandPointTypes", "([BI)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&Path2D::expandPointTypes))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $FINAL},
	{"getCurrentPoint", "()Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<$Point2D*(Path2D::*)()>(&Path2D::getCurrentPoint))},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $FINAL},
	{"getPoint", "(I)Ljava/awt/geom/Point2D;", nullptr, $ABSTRACT},
	{"getWindingRule", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int32_t(Path2D::*)()>(&Path2D::getWindingRule))},
	{"intersects", "(Ljava/awt/geom/PathIterator;DDDD)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PathIterator*,double,double,double,double)>(&Path2D::intersects))},
	{"intersects", "(Ljava/awt/geom/PathIterator;Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($PathIterator*,$Rectangle2D*)>(&Path2D::intersects))},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC | $FINAL},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $FINAL},
	{"lineTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"moveTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"needRoom", "(ZI)V", nullptr, $ABSTRACT},
	{"pointCrossings", "(DD)I", nullptr, $ABSTRACT},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"readObject", "(Ljava/io/ObjectInputStream;Z)V", nullptr, $FINAL, $method(static_cast<void(Path2D::*)($ObjectInputStream*,bool)>(&Path2D::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"rectCrossings", "(DDDD)I", nullptr, $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(static_cast<void(Path2D::*)()>(&Path2D::reset))},
	{"setWindingRule", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Path2D::*)(int32_t)>(&Path2D::setWindingRule))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"trimToSize", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeObject", "(Ljava/io/ObjectOutputStream;Z)V", nullptr, $FINAL, $method(static_cast<void(Path2D::*)($ObjectOutputStream*,bool)>(&Path2D::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Path2D_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Iterator", "java.awt.geom.Path2D", "Iterator", $STATIC | $ABSTRACT},
	{"java.awt.geom.Path2D$Double", "java.awt.geom.Path2D", "Double", $PUBLIC | $STATIC},
	{"java.awt.geom.Path2D$Float", "java.awt.geom.Path2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Path2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Path2D",
	"java.lang.Object",
	"java.awt.Shape,java.lang.Cloneable",
	_Path2D_FieldInfo_,
	_Path2D_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D$Iterator,java.awt.geom.Path2D$Double,java.awt.geom.Path2D$Double$TxIterator,java.awt.geom.Path2D$Double$CopyIterator,java.awt.geom.Path2D$Float,java.awt.geom.Path2D$Float$TxIterator,java.awt.geom.Path2D$Float$CopyIterator"
};

$Object* allocate$Path2D($Class* clazz) {
	return $of($alloc(Path2D));
}

$Object* Path2D::clone() {
	 return this->$Shape::clone();
}

int32_t Path2D::hashCode() {
	 return this->$Shape::hashCode();
}

bool Path2D::equals(Object$* arg0) {
	 return this->$Shape::equals(arg0);
}

$String* Path2D::toString() {
	 return this->$Shape::toString();
}

void Path2D::finalize() {
	this->$Shape::finalize();
}

bool Path2D::$assertionsDisabled = false;

void Path2D::init$() {
}

void Path2D::init$(int32_t rule, int32_t initialTypes) {
	setWindingRule(rule);
	$set(this, pointTypes, $new($bytes, initialTypes));
}

$bytes* Path2D::expandPointTypes($bytes* oldPointTypes, int32_t needed) {
	$init(Path2D);
	$useLocalCurrentObjectStackCache();
	int32_t oldSize = $nc(oldPointTypes)->length;
	int32_t newSizeMin = oldSize + needed;
	if (newSizeMin < oldSize) {
		$throwNew($ArrayIndexOutOfBoundsException, "pointTypes exceeds maximum capacity !"_s);
	}
	int32_t grow = oldSize;
	if (grow > Path2D::EXPAND_MAX) {
		grow = $Math::max(Path2D::EXPAND_MAX, oldSize >> 3);
	} else if (grow < Path2D::EXPAND_MIN) {
		grow = Path2D::EXPAND_MIN;
	}
	if (!Path2D::$assertionsDisabled && !(grow > 0)) {
		$throwNew($AssertionError);
	}
	int32_t newSize = oldSize + grow;
	if (newSize < newSizeMin) {
		newSize = $Integer::MAX_VALUE;
	}
	while (true) {
		try {
			return $Arrays::copyOf(oldPointTypes, newSize);
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

void Path2D::closePath() {
	$synchronized(this) {
		if (this->numTypes == 0 || $nc(this->pointTypes)->get(this->numTypes - 1) != Path2D::SEG_CLOSE) {
			needRoom(true, 0);
			$nc(this->pointTypes)->set(this->numTypes++, Path2D::SEG_CLOSE);
		}
	}
}

void Path2D::append($Shape* s, bool connect) {
	append($($nc(s)->getPathIterator(nullptr)), connect);
}

int32_t Path2D::getWindingRule() {
	$synchronized(this) {
		return this->windingRule;
	}
}

void Path2D::setWindingRule(int32_t rule) {
	if (rule != Path2D::WIND_EVEN_ODD && rule != Path2D::WIND_NON_ZERO) {
		$throwNew($IllegalArgumentException, "winding rule must be WIND_EVEN_ODD or WIND_NON_ZERO"_s);
	}
	this->windingRule = rule;
}

$Point2D* Path2D::getCurrentPoint() {
	$synchronized(this) {
		int32_t index = this->numCoords;
		if (this->numTypes < 1 || index < 1) {
			return nullptr;
		}
		if ($nc(this->pointTypes)->get(this->numTypes - 1) == Path2D::SEG_CLOSE) {
			bool loop$break = false;
			for (int32_t i = this->numTypes - 2; i > 0; --i) {
				switch ($nc(this->pointTypes)->get(i)) {
				case Path2D::SEG_MOVETO:
					{
						loop$break = true;
						break;
					}
				case Path2D::SEG_LINETO:
					{
						index -= 2;
						break;
					}
				case Path2D::SEG_QUADTO:
					{
						index -= 4;
						break;
					}
				case Path2D::SEG_CUBICTO:
					{
						index -= 6;
						break;
					}
				case Path2D::SEG_CLOSE:
					{
						break;
					}
				}

				if (loop$break) {
					break;
				}			}
		}
		return getPoint(index - 2);
	}
}

void Path2D::reset() {
	$synchronized(this) {
		this->numTypes = (this->numCoords = 0);
	}
}

$Shape* Path2D::createTransformedShape($AffineTransform* at) {
	$synchronized(this) {
		$var(Path2D, p2d, $cast(Path2D, clone()));
		if (at != nullptr) {
			$nc(p2d)->transform(at);
		}
		return p2d;
	}
}

$Rectangle* Path2D::getBounds() {
	return $nc($(getBounds2D()))->getBounds();
}

bool Path2D::contains($PathIterator* pi, double x, double y) {
	$init(Path2D);
	if (x * 0.0 + y * 0.0 == 0.0) {
		int32_t mask = ($nc(pi)->getWindingRule() == Path2D::WIND_NON_ZERO ? -1 : 1);
		int32_t cross = $Curve::pointCrossingsForPath(pi, x, y);
		return (((int32_t)(cross & (uint32_t)mask)) != 0);
	} else {
		return false;
	}
}

bool Path2D::contains($PathIterator* pi, $Point2D* p) {
	$init(Path2D);
	$var($PathIterator, var$0, pi);
	double var$1 = $nc(p)->getX();
	return contains(var$0, var$1, p->getY());
}

bool Path2D::contains(double x, double y) {
	if (x * 0.0 + y * 0.0 == 0.0) {
		if (this->numTypes < 2) {
			return false;
		}
		int32_t mask = (this->windingRule == Path2D::WIND_NON_ZERO ? -1 : 1);
		return (((int32_t)(pointCrossings(x, y) & (uint32_t)mask)) != 0);
	} else {
		return false;
	}
}

bool Path2D::contains($Point2D* p) {
	double var$0 = $nc(p)->getX();
	return contains(var$0, p->getY());
}

bool Path2D::contains($PathIterator* pi, double x, double y, double w, double h) {
	$init(Path2D);
	bool var$0 = $Double::isNaN(x + w);
	if (var$0 || $Double::isNaN(y + h)) {
		return false;
	}
	if (w <= 0 || h <= 0) {
		return false;
	}
	int32_t mask = ($nc(pi)->getWindingRule() == Path2D::WIND_NON_ZERO ? -1 : 2);
	int32_t crossings = $Curve::rectCrossingsForPath(pi, x, y, x + w, y + h);
	return (crossings != $Curve::RECT_INTERSECTS && ((int32_t)(crossings & (uint32_t)mask)) != 0);
}

bool Path2D::contains($PathIterator* pi, $Rectangle2D* r) {
	$init(Path2D);
	$var($PathIterator, var$0, pi);
	double var$1 = $nc(r)->getX();
	double var$2 = r->getY();
	double var$3 = r->getWidth();
	return contains(var$0, var$1, var$2, var$3, r->getHeight());
}

bool Path2D::contains(double x, double y, double w, double h) {
	bool var$0 = $Double::isNaN(x + w);
	if (var$0 || $Double::isNaN(y + h)) {
		return false;
	}
	if (w <= 0 || h <= 0) {
		return false;
	}
	int32_t mask = (this->windingRule == Path2D::WIND_NON_ZERO ? -1 : 2);
	int32_t crossings = rectCrossings(x, y, x + w, y + h);
	return (crossings != $Curve::RECT_INTERSECTS && ((int32_t)(crossings & (uint32_t)mask)) != 0);
}

bool Path2D::contains($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return contains(var$0, var$1, var$2, r->getHeight());
}

bool Path2D::intersects($PathIterator* pi, double x, double y, double w, double h) {
	$init(Path2D);
	bool var$0 = $Double::isNaN(x + w);
	if (var$0 || $Double::isNaN(y + h)) {
		return false;
	}
	if (w <= 0 || h <= 0) {
		return false;
	}
	int32_t mask = ($nc(pi)->getWindingRule() == Path2D::WIND_NON_ZERO ? -1 : 2);
	int32_t crossings = $Curve::rectCrossingsForPath(pi, x, y, x + w, y + h);
	return (crossings == $Curve::RECT_INTERSECTS || ((int32_t)(crossings & (uint32_t)mask)) != 0);
}

bool Path2D::intersects($PathIterator* pi, $Rectangle2D* r) {
	$init(Path2D);
	$var($PathIterator, var$0, pi);
	double var$1 = $nc(r)->getX();
	double var$2 = r->getY();
	double var$3 = r->getWidth();
	return intersects(var$0, var$1, var$2, var$3, r->getHeight());
}

bool Path2D::intersects(double x, double y, double w, double h) {
	bool var$0 = $Double::isNaN(x + w);
	if (var$0 || $Double::isNaN(y + h)) {
		return false;
	}
	if (w <= 0 || h <= 0) {
		return false;
	}
	int32_t mask = (this->windingRule == Path2D::WIND_NON_ZERO ? -1 : 2);
	int32_t crossings = rectCrossings(x, y, x + w, y + h);
	return (crossings == $Curve::RECT_INTERSECTS || ((int32_t)(crossings & (uint32_t)mask)) != 0);
}

bool Path2D::intersects($Rectangle2D* r) {
	double var$0 = $nc(r)->getX();
	double var$1 = r->getY();
	double var$2 = r->getWidth();
	return intersects(var$0, var$1, var$2, r->getHeight());
}

$PathIterator* Path2D::getPathIterator($AffineTransform* at, double flatness) {
	return $new($FlatteningPathIterator, $(getPathIterator(at)), flatness);
}

void Path2D::writeObject($ObjectOutputStream* s, bool isdbl) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	$var($floats, fCoords, nullptr);
	$var($doubles, dCoords, nullptr);
	if (isdbl) {
		$assign(dCoords, $nc(($cast($Path2D$Double, this)))->doubleCoords);
		$assign(fCoords, nullptr);
	} else {
		$assign(fCoords, $nc(($cast($Path2D$Float, this)))->floatCoords);
		$assign(dCoords, nullptr);
	}
	int32_t numTypes = this->numTypes;
	s->writeByte(isdbl ? Path2D::SERIAL_STORAGE_DBL_ARRAY : Path2D::SERIAL_STORAGE_FLT_ARRAY);
	s->writeInt(numTypes);
	s->writeInt(this->numCoords);
	s->writeByte((int8_t)this->windingRule);
	int32_t cindex = 0;
	for (int32_t i = 0; i < numTypes; ++i) {
		int32_t npoints = 0;
		int8_t serialtype = 0;
		switch ($nc(this->pointTypes)->get(i)) {
		case Path2D::SEG_MOVETO:
			{
				npoints = 1;
				serialtype = (isdbl ? Path2D::SERIAL_SEG_DBL_MOVETO : Path2D::SERIAL_SEG_FLT_MOVETO);
				break;
			}
		case Path2D::SEG_LINETO:
			{
				npoints = 1;
				serialtype = (isdbl ? Path2D::SERIAL_SEG_DBL_LINETO : Path2D::SERIAL_SEG_FLT_LINETO);
				break;
			}
		case Path2D::SEG_QUADTO:
			{
				npoints = 2;
				serialtype = (isdbl ? Path2D::SERIAL_SEG_DBL_QUADTO : Path2D::SERIAL_SEG_FLT_QUADTO);
				break;
			}
		case Path2D::SEG_CUBICTO:
			{
				npoints = 3;
				serialtype = (isdbl ? Path2D::SERIAL_SEG_DBL_CUBICTO : Path2D::SERIAL_SEG_FLT_CUBICTO);
				break;
			}
		case Path2D::SEG_CLOSE:
			{
				npoints = 0;
				serialtype = Path2D::SERIAL_SEG_CLOSE;
				break;
			}
		default:
			{
				$throwNew($InternalError, "unrecognized path type"_s);
			}
		}
		s->writeByte(serialtype);
		while (--npoints >= 0) {
			if (isdbl) {
				s->writeDouble($nc(dCoords)->get(cindex++));
				s->writeDouble($nc(dCoords)->get(cindex++));
			} else {
				s->writeFloat($nc(fCoords)->get(cindex++));
				s->writeFloat($nc(fCoords)->get(cindex++));
			}
		}
	}
	s->writeByte(Path2D::SERIAL_PATH_END);
}

void Path2D::readObject($ObjectInputStream* s, bool storedbl) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	s->readByte();
	int32_t nT = s->readInt();
	int32_t nC = s->readInt();
	try {
		setWindingRule(s->readByte());
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$throwNew($InvalidObjectException, $(iae->getMessage()));
	}
	$set(this, pointTypes, $new($bytes, (nT < 0 || nT > Path2D::INIT_SIZE) ? Path2D::INIT_SIZE : nT));
	int32_t initX2 = Path2D::INIT_SIZE * 2;
	if (nC < 0 || nC > initX2) {
		nC = initX2;
	}
	if (storedbl) {
		$set($nc($cast($Path2D$Double, this)), doubleCoords, $new($doubles, nC));
	} else {
		$set($nc($cast($Path2D$Float, this)), floatCoords, $new($floats, nC));
	}
	bool PATHDONE$break = false;
	for (int32_t i = 0; nT < 0 || i < nT; ++i) {
		bool isdbl = false;
		int32_t npoints = 0;
		int8_t segtype = 0;
		int8_t serialtype = s->readByte();
		switch (serialtype) {
		case Path2D::SERIAL_SEG_FLT_MOVETO:
			{
				isdbl = false;
				npoints = 1;
				segtype = Path2D::SEG_MOVETO;
				break;
			}
		case Path2D::SERIAL_SEG_FLT_LINETO:
			{
				isdbl = false;
				npoints = 1;
				segtype = Path2D::SEG_LINETO;
				break;
			}
		case Path2D::SERIAL_SEG_FLT_QUADTO:
			{
				isdbl = false;
				npoints = 2;
				segtype = Path2D::SEG_QUADTO;
				break;
			}
		case Path2D::SERIAL_SEG_FLT_CUBICTO:
			{
				isdbl = false;
				npoints = 3;
				segtype = Path2D::SEG_CUBICTO;
				break;
			}
		case Path2D::SERIAL_SEG_DBL_MOVETO:
			{
				isdbl = true;
				npoints = 1;
				segtype = Path2D::SEG_MOVETO;
				break;
			}
		case Path2D::SERIAL_SEG_DBL_LINETO:
			{
				isdbl = true;
				npoints = 1;
				segtype = Path2D::SEG_LINETO;
				break;
			}
		case Path2D::SERIAL_SEG_DBL_QUADTO:
			{
				isdbl = true;
				npoints = 2;
				segtype = Path2D::SEG_QUADTO;
				break;
			}
		case Path2D::SERIAL_SEG_DBL_CUBICTO:
			{
				isdbl = true;
				npoints = 3;
				segtype = Path2D::SEG_CUBICTO;
				break;
			}
		case Path2D::SERIAL_SEG_CLOSE:
			{
				isdbl = false;
				npoints = 0;
				segtype = Path2D::SEG_CLOSE;
				break;
			}
		case Path2D::SERIAL_PATH_END:
			{
				if (nT < 0) {
					PATHDONE$break = true;
					break;
				}
				$throwNew($StreamCorruptedException, "unexpected PATH_END"_s);
			}
		default:
			{
				$throwNew($StreamCorruptedException, "unrecognized path type"_s);
			}
		}

		if (PATHDONE$break) {
			break;
		}		needRoom(segtype != Path2D::SEG_MOVETO, npoints * 2);
		if (isdbl) {
			while (--npoints >= 0) {
				double var$0 = s->readDouble();
				append(var$0, s->readDouble());
			}
		} else {
			while (--npoints >= 0) {
				float var$1 = s->readFloat();
				append(var$1, s->readFloat());
			}
		}
		$nc(this->pointTypes)->set(this->numTypes++, segtype);
	}
	if (nT >= 0 && s->readByte() != Path2D::SERIAL_PATH_END) {
		$throwNew($StreamCorruptedException, "missing PATH_END"_s);
	}
}

void clinit$Path2D($Class* class$) {
	Path2D::$assertionsDisabled = !Path2D::class$->desiredAssertionStatus();
}

Path2D::Path2D() {
}

$Class* Path2D::load$($String* name, bool initialize) {
	$loadClass(Path2D, name, initialize, &_Path2D_ClassInfo_, clinit$Path2D, allocate$Path2D);
	return class$;
}

$Class* Path2D::class$ = nullptr;

		} // geom
	} // awt
} // java