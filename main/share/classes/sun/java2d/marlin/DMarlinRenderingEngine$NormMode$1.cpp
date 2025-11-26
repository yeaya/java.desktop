#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$1.h>

#include <java/awt/geom/PathIterator.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine$NormMode = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode;
using $DMarlinRenderingEngine$NormalizingPathIterator = ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _DMarlinRenderingEngine$NormMode$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(DMarlinRenderingEngine$NormMode$1::*)($String*,int32_t)>(&DMarlinRenderingEngine$NormMode$1::init$))},
	{"getNormalizingPathIterator", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/geom/PathIterator;)Ljava/awt/geom/PathIterator;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _DMarlinRenderingEngine$NormMode$1_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	nullptr,
	nullptr
};

$InnerClassInfo _DMarlinRenderingEngine$NormMode$1_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode", "sun.java2d.marlin.DMarlinRenderingEngine", "NormMode", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormMode$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$1",
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormMode$1_MethodInfo_,
	nullptr,
	&_DMarlinRenderingEngine$NormMode$1_EnclosingMethodInfo_,
	_DMarlinRenderingEngine$NormMode$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormMode$1($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormMode$1));
}

void DMarlinRenderingEngine$NormMode$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$DMarlinRenderingEngine$NormMode::init$($enum$name, $enum$ordinal);
}

$PathIterator* DMarlinRenderingEngine$NormMode$1::getNormalizingPathIterator($RendererContext* rdrCtx, $PathIterator* src) {
	return $nc($nc(rdrCtx)->nPCPathIterator)->init(src);
}

DMarlinRenderingEngine$NormMode$1::DMarlinRenderingEngine$NormMode$1() {
}

$Class* DMarlinRenderingEngine$NormMode$1::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormMode$1, name, initialize, &_DMarlinRenderingEngine$NormMode$1_ClassInfo_, allocate$DMarlinRenderingEngine$NormMode$1);
	return class$;
}

$Class* DMarlinRenderingEngine$NormMode$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun