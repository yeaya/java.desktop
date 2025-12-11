#include <sun/java2d/pipe/AAShapePipe$TileState.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/Rectangle2D$Double.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/pipe/AAShapePipe.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Double = ::java::awt::geom::Rectangle2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _AAShapePipe$TileState_FieldInfo_[] = {
	{"theTile", "[B", nullptr, $PRIVATE, $field(AAShapePipe$TileState, theTile)},
	{"abox", "[I", nullptr, $FINAL, $field(AAShapePipe$TileState, abox)},
	{"dev", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(AAShapePipe$TileState, dev)},
	{"bbox2D", "Ljava/awt/geom/Rectangle2D$Double;", nullptr, $PRIVATE | $FINAL, $field(AAShapePipe$TileState, bbox2D)},
	{}
};

$MethodInfo _AAShapePipe$TileState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AAShapePipe$TileState::*)()>(&AAShapePipe$TileState::init$))},
	{"computeBBox", "(DDDD)Ljava/awt/geom/Rectangle2D;", nullptr, 0, $method(static_cast<$Rectangle2D*(AAShapePipe$TileState::*)(double,double,double,double)>(&AAShapePipe$TileState::computeBBox))},
	{"computeDevBox", "([I)Ljava/awt/Rectangle;", nullptr, 0, $method(static_cast<$Rectangle*(AAShapePipe$TileState::*)($ints*)>(&AAShapePipe$TileState::computeDevBox))},
	{"getAlphaTile", "(I)[B", nullptr, 0, $method(static_cast<$bytes*(AAShapePipe$TileState::*)(int32_t)>(&AAShapePipe$TileState::getAlphaTile))},
	{}
};

$InnerClassInfo _AAShapePipe$TileState_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.AAShapePipe$TileState", "sun.java2d.pipe.AAShapePipe", "TileState", $STATIC | $FINAL},
	{}
};

$ClassInfo _AAShapePipe$TileState_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.java2d.pipe.AAShapePipe$TileState",
	"sun.java2d.ReentrantContext",
	nullptr,
	_AAShapePipe$TileState_FieldInfo_,
	_AAShapePipe$TileState_MethodInfo_,
	nullptr,
	nullptr,
	_AAShapePipe$TileState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.AAShapePipe"
};

$Object* allocate$AAShapePipe$TileState($Class* clazz) {
	return $of($alloc(AAShapePipe$TileState));
}

void AAShapePipe$TileState::init$() {
	$ReentrantContext::init$();
	$set(this, theTile, $new($bytes, 32 * 32));
	$set(this, abox, $new($ints, 4));
	$set(this, dev, $new($Rectangle));
	$set(this, bbox2D, $new($Rectangle2D$Double));
}

$bytes* AAShapePipe$TileState::getAlphaTile(int32_t len) {
	$var($bytes, t, this->theTile);
	if ($nc(t)->length < len) {
		$set(this, theTile, ($assign(t, $new($bytes, len))));
	}
	return t;
}

$Rectangle* AAShapePipe$TileState::computeDevBox($ints* abox) {
	$var($Rectangle, box, this->dev);
	$nc(box)->x = $nc(abox)->get(0);
	box->y = abox->get(1);
	box->width = abox->get(2) - abox->get(0);
	box->height = abox->get(3) - abox->get(1);
	return box;
}

$Rectangle2D* AAShapePipe$TileState::computeBBox(double ux1, double uy1, double ux2, double uy2) {
	if ((ux2 -= ux1) < 0.0) {
		ux1 += ux2;
		ux2 = -ux2;
	}
	if ((uy2 -= uy1) < 0.0) {
		uy1 += uy2;
		uy2 = -uy2;
	}
	$var($Rectangle2D$Double, box, this->bbox2D);
	$nc(box)->x = ux1;
	box->y = uy1;
	box->width = ux2;
	box->height = uy2;
	return box;
}

AAShapePipe$TileState::AAShapePipe$TileState() {
}

$Class* AAShapePipe$TileState::load$($String* name, bool initialize) {
	$loadClass(AAShapePipe$TileState, name, initialize, &_AAShapePipe$TileState_ClassInfo_, allocate$AAShapePipe$TileState);
	return class$;
}

$Class* AAShapePipe$TileState::class$ = nullptr;

		} // pipe
	} // java2d
} // sun