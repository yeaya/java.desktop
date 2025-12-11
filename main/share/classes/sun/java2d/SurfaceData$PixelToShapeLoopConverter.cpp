#include <sun/java2d/SurfaceData$PixelToShapeLoopConverter.h>

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/PixelToShapeConverter.h>
#include <sun/java2d/pipe/ShapeDrawPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelToShapeConverter = ::sun::java2d::pipe::PixelToShapeConverter;
using $ShapeDrawPipe = ::sun::java2d::pipe::ShapeDrawPipe;

namespace sun {
	namespace java2d {

$MethodInfo _SurfaceData$PixelToShapeLoopConverter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/pipe/ShapeDrawPipe;)V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceData$PixelToShapeLoopConverter::*)($ShapeDrawPipe*)>(&SurfaceData$PixelToShapeLoopConverter::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SurfaceData$PixelToShapeLoopConverter_InnerClassesInfo_[] = {
	{"sun.java2d.SurfaceData$PixelToShapeLoopConverter", "sun.java2d.SurfaceData", "PixelToShapeLoopConverter", $STATIC},
	{}
};

$ClassInfo _SurfaceData$PixelToShapeLoopConverter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.SurfaceData$PixelToShapeLoopConverter",
	"sun.java2d.pipe.PixelToShapeConverter",
	"sun.java2d.pipe.LoopBasedPipe",
	nullptr,
	_SurfaceData$PixelToShapeLoopConverter_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceData$PixelToShapeLoopConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.SurfaceData"
};

$Object* allocate$SurfaceData$PixelToShapeLoopConverter($Class* clazz) {
	return $of($alloc(SurfaceData$PixelToShapeLoopConverter));
}

int32_t SurfaceData$PixelToShapeLoopConverter::hashCode() {
	 return this->$PixelToShapeConverter::hashCode();
}

bool SurfaceData$PixelToShapeLoopConverter::equals(Object$* arg0) {
	 return this->$PixelToShapeConverter::equals(arg0);
}

$Object* SurfaceData$PixelToShapeLoopConverter::clone() {
	 return this->$PixelToShapeConverter::clone();
}

$String* SurfaceData$PixelToShapeLoopConverter::toString() {
	 return this->$PixelToShapeConverter::toString();
}

void SurfaceData$PixelToShapeLoopConverter::finalize() {
	this->$PixelToShapeConverter::finalize();
}

void SurfaceData$PixelToShapeLoopConverter::init$($ShapeDrawPipe* pipe) {
	$PixelToShapeConverter::init$(pipe);
}

SurfaceData$PixelToShapeLoopConverter::SurfaceData$PixelToShapeLoopConverter() {
}

$Class* SurfaceData$PixelToShapeLoopConverter::load$($String* name, bool initialize) {
	$loadClass(SurfaceData$PixelToShapeLoopConverter, name, initialize, &_SurfaceData$PixelToShapeLoopConverter_ClassInfo_, allocate$SurfaceData$PixelToShapeLoopConverter);
	return class$;
}

$Class* SurfaceData$PixelToShapeLoopConverter::class$ = nullptr;

	} // java2d
} // sun