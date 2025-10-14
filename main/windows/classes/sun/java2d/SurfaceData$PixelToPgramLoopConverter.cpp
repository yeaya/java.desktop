#include <sun/java2d/SurfaceData$PixelToPgramLoopConverter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <sun/java2d/pipe/PixelToParallelogramConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LoopBasedPipe = ::sun::java2d::pipe::LoopBasedPipe;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;
using $PixelToParallelogramConverter = ::sun::java2d::pipe::PixelToParallelogramConverter;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {

$MethodInfo _SurfaceData$PixelToPgramLoopConverter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/pipe/ShapeDrawPipe;Lsun/java2d/pipe/ParallelogramPipe;DDZ)V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceData$PixelToPgramLoopConverter::*)($ShapeDrawPipe*,$ParallelogramPipe*,double,double,bool)>(&SurfaceData$PixelToPgramLoopConverter::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SurfaceData$PixelToPgramLoopConverter_InnerClassesInfo_[] = {
	{"sun.java2d.SurfaceData$PixelToPgramLoopConverter", "sun.java2d.SurfaceData", "PixelToPgramLoopConverter", $STATIC},
	{}
};

$ClassInfo _SurfaceData$PixelToPgramLoopConverter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.SurfaceData$PixelToPgramLoopConverter",
	"sun.java2d.pipe.PixelToParallelogramConverter",
	"sun.java2d.pipe.LoopBasedPipe",
	nullptr,
	_SurfaceData$PixelToPgramLoopConverter_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceData$PixelToPgramLoopConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.SurfaceData"
};

$Object* allocate$SurfaceData$PixelToPgramLoopConverter($Class* clazz) {
	return $of($alloc(SurfaceData$PixelToPgramLoopConverter));
}

int32_t SurfaceData$PixelToPgramLoopConverter::hashCode() {
	 return this->$PixelToParallelogramConverter::hashCode();
}

bool SurfaceData$PixelToPgramLoopConverter::equals(Object$* arg0) {
	 return this->$PixelToParallelogramConverter::equals(arg0);
}

$Object* SurfaceData$PixelToPgramLoopConverter::clone() {
	 return this->$PixelToParallelogramConverter::clone();
}

$String* SurfaceData$PixelToPgramLoopConverter::toString() {
	 return this->$PixelToParallelogramConverter::toString();
}

void SurfaceData$PixelToPgramLoopConverter::finalize() {
	this->$PixelToParallelogramConverter::finalize();
}

void SurfaceData$PixelToPgramLoopConverter::init$($ShapeDrawPipe* shapepipe, $ParallelogramPipe* pgrampipe, double minPenSize, double normPosition, bool adjustfill) {
	$PixelToParallelogramConverter::init$(shapepipe, pgrampipe, minPenSize, normPosition, adjustfill);
}

SurfaceData$PixelToPgramLoopConverter::SurfaceData$PixelToPgramLoopConverter() {
}

$Class* SurfaceData$PixelToPgramLoopConverter::load$($String* name, bool initialize) {
	$loadClass(SurfaceData$PixelToPgramLoopConverter, name, initialize, &_SurfaceData$PixelToPgramLoopConverter_ClassInfo_, allocate$SurfaceData$PixelToPgramLoopConverter);
	return class$;
}

$Class* SurfaceData$PixelToPgramLoopConverter::class$ = nullptr;

	} // java2d
} // sun