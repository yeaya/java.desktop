#include <sun/java2d/pipe/AlphaColorPipe.h>

#include <java/awt/Composite.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/MaskFill.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MaskFill = ::sun::java2d::loops::MaskFill;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _AlphaColorPipe_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlphaColorPipe::*)()>(&AlphaColorPipe::init$))},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{"needTile", "(Ljava/lang/Object;IIII)Z", nullptr, $PUBLIC},
	{"renderPathTile", "(Ljava/lang/Object;[BIIIIII)V", nullptr, $PUBLIC},
	{"skipTile", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AlphaColorPipe_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.AlphaColorPipe",
	"java.lang.Object",
	"sun.java2d.pipe.CompositePipe,sun.java2d.pipe.ParallelogramPipe",
	nullptr,
	_AlphaColorPipe_MethodInfo_
};

$Object* allocate$AlphaColorPipe($Class* clazz) {
	return $of($alloc(AlphaColorPipe));
}

int32_t AlphaColorPipe::hashCode() {
	 return this->$CompositePipe::hashCode();
}

bool AlphaColorPipe::equals(Object$* arg0) {
	 return this->$CompositePipe::equals(arg0);
}

$Object* AlphaColorPipe::clone() {
	 return this->$CompositePipe::clone();
}

$String* AlphaColorPipe::toString() {
	 return this->$CompositePipe::toString();
}

void AlphaColorPipe::finalize() {
	this->$CompositePipe::finalize();
}

void AlphaColorPipe::init$() {
}

$Object* AlphaColorPipe::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* dev, $ints* abox) {
	return $of(sg);
}

bool AlphaColorPipe::needTile(Object$* context, int32_t x, int32_t y, int32_t w, int32_t h) {
	return true;
}

void AlphaColorPipe::renderPathTile(Object$* context, $bytes* atile, int32_t offset, int32_t tilesize, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($SunGraphics2D, sg, $cast($SunGraphics2D, context));
	$nc($nc(sg)->alphafill)->MaskFill$(sg, $(sg->getSurfaceData()), sg->composite, x, y, w, h, atile, offset, tilesize);
}

void AlphaColorPipe::skipTile(Object$* context, int32_t x, int32_t y) {
	return;
}

void AlphaColorPipe::endSequence(Object$* context) {
	return;
}

void AlphaColorPipe::fillParallelogram($SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$nc($nc(sg)->alphafill)->FillAAPgram(sg, $(sg->getSurfaceData()), sg->composite, x, y, dx1, dy1, dx2, dy2);
}

void AlphaColorPipe::drawParallelogram($SunGraphics2D* sg, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$nc($nc(sg)->alphafill)->DrawAAPgram(sg, $(sg->getSurfaceData()), sg->composite, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

AlphaColorPipe::AlphaColorPipe() {
}

$Class* AlphaColorPipe::load$($String* name, bool initialize) {
	$loadClass(AlphaColorPipe, name, initialize, &_AlphaColorPipe_ClassInfo_, allocate$AlphaColorPipe);
	return class$;
}

$Class* AlphaColorPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun