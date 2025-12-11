#include <sun/java2d/pipe/ShapeSpanIterator.h>

#include <java/awt/Rectangle.h>
#include <java/awt/geom/PathIterator.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/SpanIterator.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::sun::java2d::pipe::Region;
using $SpanIterator = ::sun::java2d::pipe::SpanIterator;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _ShapeSpanIterator_FieldInfo_[] = {
	{"pData", "J", nullptr, 0, $field(ShapeSpanIterator, pData)},
	{}
};

$MethodInfo _ShapeSpanIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ShapeSpanIterator::*)(bool)>(&ShapeSpanIterator::init$))},
	{"addSegment", "(I[F)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(ShapeSpanIterator::*)(int32_t,$floats*)>(&ShapeSpanIterator::addSegment))},
	{"appendPath", "(Ljava/awt/geom/PathIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(ShapeSpanIterator::*)($PathIterator*)>(&ShapeSpanIterator::appendPath))},
	{"appendPoly", "([I[IIII)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(ShapeSpanIterator::*)($ints*,$ints*,int32_t,int32_t,int32_t)>(&ShapeSpanIterator::appendPoly))},
	{"closePath", "()V", nullptr, $PUBLIC | $NATIVE},
	{"curveTo", "(FFFFFF)V", nullptr, $PUBLIC | $NATIVE},
	{"dispose", "()V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(ShapeSpanIterator::*)()>(&ShapeSpanIterator::dispose))},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getNativeIterator", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getPathBox", "([I)V", nullptr, $PUBLIC | $NATIVE},
	{"initIDs", "()V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ShapeSpanIterator::initIDs))},
	{"intersectClipBox", "(IIII)V", nullptr, $PUBLIC | $NATIVE},
	{"lineTo", "(FF)V", nullptr, $PUBLIC | $NATIVE},
	{"moveTo", "(FF)V", nullptr, $PUBLIC | $NATIVE},
	{"nextSpan", "([I)Z", nullptr, $PUBLIC | $NATIVE},
	{"pathDone", "()V", nullptr, $PUBLIC | $NATIVE},
	{"quadTo", "(FFFF)V", nullptr, $PUBLIC | $NATIVE},
	{"setNormalize", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(ShapeSpanIterator::*)(bool)>(&ShapeSpanIterator::setNormalize))},
	{"setOutputArea", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(ShapeSpanIterator::*)($Rectangle*)>(&ShapeSpanIterator::setOutputArea))},
	{"setOutputArea", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC, $method(static_cast<void(ShapeSpanIterator::*)($Region*)>(&ShapeSpanIterator::setOutputArea))},
	{"setOutputAreaXYWH", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(ShapeSpanIterator::*)(int32_t,int32_t,int32_t,int32_t)>(&ShapeSpanIterator::setOutputAreaXYWH))},
	{"setOutputAreaXYXY", "(IIII)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(ShapeSpanIterator::*)(int32_t,int32_t,int32_t,int32_t)>(&ShapeSpanIterator::setOutputAreaXYXY))},
	{"setRule", "(I)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(ShapeSpanIterator::*)(int32_t)>(&ShapeSpanIterator::setRule))},
	{"skipDownTo", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_addSegment 5
#define _METHOD_INDEX_appendPoly 7
#define _METHOD_INDEX_closePath 8
#define _METHOD_INDEX_curveTo 9
#define _METHOD_INDEX_dispose 10
#define _METHOD_INDEX_getNativeConsumer 11
#define _METHOD_INDEX_getNativeIterator 12
#define _METHOD_INDEX_getPathBox 13
#define _METHOD_INDEX_initIDs 14
#define _METHOD_INDEX_intersectClipBox 15
#define _METHOD_INDEX_lineTo 16
#define _METHOD_INDEX_moveTo 17
#define _METHOD_INDEX_nextSpan 18
#define _METHOD_INDEX_pathDone 19
#define _METHOD_INDEX_quadTo 20
#define _METHOD_INDEX_setNormalize 21
#define _METHOD_INDEX_setOutputAreaXYXY 25
#define _METHOD_INDEX_setRule 26
#define _METHOD_INDEX_skipDownTo 27

$ClassInfo _ShapeSpanIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.pipe.ShapeSpanIterator",
	"java.lang.Object",
	"sun.java2d.pipe.SpanIterator,sun.awt.geom.PathConsumer2D",
	_ShapeSpanIterator_FieldInfo_,
	_ShapeSpanIterator_MethodInfo_
};

$Object* allocate$ShapeSpanIterator($Class* clazz) {
	return $of($alloc(ShapeSpanIterator));
}

int32_t ShapeSpanIterator::hashCode() {
	 return this->$SpanIterator::hashCode();
}

bool ShapeSpanIterator::equals(Object$* arg0) {
	 return this->$SpanIterator::equals(arg0);
}

$Object* ShapeSpanIterator::clone() {
	 return this->$SpanIterator::clone();
}

$String* ShapeSpanIterator::toString() {
	 return this->$SpanIterator::toString();
}

void ShapeSpanIterator::finalize() {
	this->$SpanIterator::finalize();
}

void ShapeSpanIterator::initIDs() {
	$init(ShapeSpanIterator);
	$prepareNativeStatic(ShapeSpanIterator, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void ShapeSpanIterator::init$(bool adjust) {
	setNormalize(adjust);
}

void ShapeSpanIterator::appendPath($PathIterator* pi) {
	$var($floats, coords, $new($floats, 6));
	setRule($nc(pi)->getWindingRule());
	while (!$nc(pi)->isDone()) {
		addSegment(pi->currentSegment(coords), coords);
		pi->next();
	}
	pathDone();
}

void ShapeSpanIterator::appendPoly($ints* xPoints, $ints* yPoints, int32_t nPoints, int32_t xoff, int32_t yoff) {
	$prepareNative(ShapeSpanIterator, appendPoly, void, $ints* xPoints, $ints* yPoints, int32_t nPoints, int32_t xoff, int32_t yoff);
	$invokeNative(xPoints, yPoints, nPoints, xoff, yoff);
	$finishNative();
}

void ShapeSpanIterator::setNormalize(bool adjust) {
	$prepareNative(ShapeSpanIterator, setNormalize, void, bool adjust);
	$invokeNative(adjust);
	$finishNative();
}

void ShapeSpanIterator::setOutputAreaXYWH(int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t var$0 = x;
	int32_t var$1 = y;
	int32_t var$2 = $Region::dimAdd(x, w);
	setOutputAreaXYXY(var$0, var$1, var$2, $Region::dimAdd(y, h));
}

void ShapeSpanIterator::setOutputAreaXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	$prepareNative(ShapeSpanIterator, setOutputAreaXYXY, void, int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	$invokeNative(lox, loy, hix, hiy);
	$finishNative();
}

void ShapeSpanIterator::setOutputArea($Rectangle* r) {
	setOutputAreaXYWH($nc(r)->x, r->y, r->width, r->height);
}

void ShapeSpanIterator::setOutputArea($Region* r) {
	int32_t var$0 = $nc(r)->getLoX();
	int32_t var$1 = r->getLoY();
	int32_t var$2 = r->getHiX();
	setOutputAreaXYXY(var$0, var$1, var$2, r->getHiY());
}

void ShapeSpanIterator::setRule(int32_t rule) {
	$prepareNative(ShapeSpanIterator, setRule, void, int32_t rule);
	$invokeNative(rule);
	$finishNative();
}

void ShapeSpanIterator::addSegment(int32_t type, $floats* coords) {
	$prepareNative(ShapeSpanIterator, addSegment, void, int32_t type, $floats* coords);
	$invokeNative(type, coords);
	$finishNative();
}

void ShapeSpanIterator::getPathBox($ints* pathbox) {
	$prepareNative(ShapeSpanIterator, getPathBox, void, $ints* pathbox);
	$invokeNative(pathbox);
	$finishNative();
}

void ShapeSpanIterator::intersectClipBox(int32_t lox, int32_t loy, int32_t hix, int32_t hiy) {
	$prepareNative(ShapeSpanIterator, intersectClipBox, void, int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	$invokeNative(lox, loy, hix, hiy);
	$finishNative();
}

bool ShapeSpanIterator::nextSpan($ints* spanbox) {
	bool $ret = false;
	$prepareNative(ShapeSpanIterator, nextSpan, bool, $ints* spanbox);
	$ret = $invokeNative(spanbox);
	$finishNative();
	return $ret;
}

void ShapeSpanIterator::skipDownTo(int32_t y) {
	$prepareNative(ShapeSpanIterator, skipDownTo, void, int32_t y);
	$invokeNative(y);
	$finishNative();
}

int64_t ShapeSpanIterator::getNativeIterator() {
	int64_t $ret = 0;
	$prepareNative(ShapeSpanIterator, getNativeIterator, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void ShapeSpanIterator::dispose() {
	$prepareNative(ShapeSpanIterator, dispose, void);
	$invokeNative();
	$finishNative();
}

void ShapeSpanIterator::moveTo(float x, float y) {
	$prepareNative(ShapeSpanIterator, moveTo, void, float x, float y);
	$invokeNative(x, y);
	$finishNative();
}

void ShapeSpanIterator::lineTo(float x, float y) {
	$prepareNative(ShapeSpanIterator, lineTo, void, float x, float y);
	$invokeNative(x, y);
	$finishNative();
}

void ShapeSpanIterator::quadTo(float x1, float y1, float x2, float y2) {
	$prepareNative(ShapeSpanIterator, quadTo, void, float x1, float y1, float x2, float y2);
	$invokeNative(x1, y1, x2, y2);
	$finishNative();
}

void ShapeSpanIterator::curveTo(float x1, float y1, float x2, float y2, float x3, float y3) {
	$prepareNative(ShapeSpanIterator, curveTo, void, float x1, float y1, float x2, float y2, float x3, float y3);
	$invokeNative(x1, y1, x2, y2, x3, y3);
	$finishNative();
}

void ShapeSpanIterator::closePath() {
	$prepareNative(ShapeSpanIterator, closePath, void);
	$invokeNative();
	$finishNative();
}

void ShapeSpanIterator::pathDone() {
	$prepareNative(ShapeSpanIterator, pathDone, void);
	$invokeNative();
	$finishNative();
}

int64_t ShapeSpanIterator::getNativeConsumer() {
	int64_t $ret = 0;
	$prepareNative(ShapeSpanIterator, getNativeConsumer, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void clinit$ShapeSpanIterator($Class* class$) {
	{
		ShapeSpanIterator::initIDs();
	}
}

ShapeSpanIterator::ShapeSpanIterator() {
}

$Class* ShapeSpanIterator::load$($String* name, bool initialize) {
	$loadClass(ShapeSpanIterator, name, initialize, &_ShapeSpanIterator_ClassInfo_, clinit$ShapeSpanIterator, allocate$ShapeSpanIterator);
	return class$;
}

$Class* ShapeSpanIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun