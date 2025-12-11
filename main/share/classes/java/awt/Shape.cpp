#include <java/awt/Shape.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _Shape_MethodInfo_[] = {
	{"contains", "(DD)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/awt/geom/Point2D;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(DDDD)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds2D", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathIterator", "(Ljava/awt/geom/AffineTransform;D)Ljava/awt/geom/PathIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"intersects", "(DDDD)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"intersects", "(Ljava/awt/geom/Rectangle2D;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Shape_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.Shape",
	nullptr,
	nullptr,
	nullptr,
	_Shape_MethodInfo_
};

$Object* allocate$Shape($Class* clazz) {
	return $of($alloc(Shape));
}

$Class* Shape::load$($String* name, bool initialize) {
	$loadClass(Shape, name, initialize, &_Shape_ClassInfo_, allocate$Shape);
	return class$;
}

$Class* Shape::class$ = nullptr;

	} // awt
} // java