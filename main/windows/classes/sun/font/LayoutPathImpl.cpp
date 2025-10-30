#include <sun/font/LayoutPathImpl.h>

#include <java/awt/Shape.h>
#include <java/awt/font/LayoutPath.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/util/Formatter.h>
#include <sun/font/LayoutPathImpl$EndType.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <jcpp.h>

#undef LOG
#undef LOGMAP

using $Shape = ::java::awt::Shape;
using $LayoutPath = ::java::awt::font::LayoutPath;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;
using $LayoutPathImpl$EndType = ::sun::font::LayoutPathImpl$EndType;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;

namespace sun {
	namespace font {

$FieldInfo _LayoutPathImpl_FieldInfo_[] = {
	{"LOGMAP", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LayoutPathImpl, LOGMAP)},
	{"LOG", "Ljava/util/Formatter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LayoutPathImpl, LOG)},
	{}
};

$MethodInfo _LayoutPathImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LayoutPathImpl::*)()>(&LayoutPathImpl::init$))},
	{"end", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getPath", "(Lsun/font/LayoutPathImpl$EndType;[D)Lsun/font/LayoutPathImpl;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<LayoutPathImpl*(*)($LayoutPathImpl$EndType*,$doubles*)>(&LayoutPathImpl::getPath))},
	{"length", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"mapShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"pathToPoint", "(DDZ)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"pathToPoint", "(DDZLjava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"pointToPath", "(DD)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"pointToPath", "(DDLjava/awt/geom/Point2D;)V", nullptr, $PUBLIC},
	{"start", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LayoutPathImpl_InnerClassesInfo_[] = {
	{"sun.font.LayoutPathImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.font.LayoutPathImpl$EmptyPath", "sun.font.LayoutPathImpl", "EmptyPath", $PUBLIC | $STATIC},
	{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.LayoutPathImpl$SegmentPathBuilder", "sun.font.LayoutPathImpl", "SegmentPathBuilder", $PUBLIC | $STATIC | $FINAL},
	{"sun.font.LayoutPathImpl$EndType", "sun.font.LayoutPathImpl", "EndType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LayoutPathImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.LayoutPathImpl",
	"java.awt.font.LayoutPath",
	nullptr,
	_LayoutPathImpl_FieldInfo_,
	_LayoutPathImpl_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutPathImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.LayoutPathImpl$1,sun.font.LayoutPathImpl$EmptyPath,sun.font.LayoutPathImpl$SegmentPath,sun.font.LayoutPathImpl$SegmentPath$Mapper,sun.font.LayoutPathImpl$SegmentPath$Segment,sun.font.LayoutPathImpl$SegmentPath$LineInfo,sun.font.LayoutPathImpl$SegmentPathBuilder,sun.font.LayoutPathImpl$EndType"
};

$Object* allocate$LayoutPathImpl($Class* clazz) {
	return $of($alloc(LayoutPathImpl));
}

$Formatter* LayoutPathImpl::LOG = nullptr;

void LayoutPathImpl::init$() {
	$LayoutPath::init$();
}

$Point2D* LayoutPathImpl::pointToPath(double x, double y) {
	$var($Point2D$Double, pt, $new($Point2D$Double, x, y));
	pointToPath(pt, pt);
	return pt;
}

$Point2D* LayoutPathImpl::pathToPoint(double a, double o, bool preceding) {
	$var($Point2D$Double, pt, $new($Point2D$Double, a, o));
	pathToPoint(pt, preceding, pt);
	return pt;
}

void LayoutPathImpl::pointToPath(double x, double y, $Point2D* pt) {
	$nc(pt)->setLocation(x, y);
	pointToPath(pt, pt);
}

void LayoutPathImpl::pathToPoint(double a, double o, bool preceding, $Point2D* pt) {
	$nc(pt)->setLocation(a, o);
	pathToPoint(pt, preceding, pt);
}

LayoutPathImpl* LayoutPathImpl::getPath($LayoutPathImpl$EndType* etype, $doubles* coords) {
	$init(LayoutPathImpl);
	if (((int32_t)($nc(coords)->length & (uint32_t)1)) != 0) {
		$throwNew($IllegalArgumentException, "odd number of points not allowed"_s);
	}
	return $LayoutPathImpl$SegmentPath::get(etype, coords);
}

void clinit$LayoutPathImpl($Class* class$) {
	$assignStatic(LayoutPathImpl::LOG, $new($Formatter, $System::out));
}

LayoutPathImpl::LayoutPathImpl() {
}

$Class* LayoutPathImpl::load$($String* name, bool initialize) {
	$loadClass(LayoutPathImpl, name, initialize, &_LayoutPathImpl_ClassInfo_, clinit$LayoutPathImpl, allocate$LayoutPathImpl);
	return class$;
}

$Class* LayoutPathImpl::class$ = nullptr;

	} // font
} // sun