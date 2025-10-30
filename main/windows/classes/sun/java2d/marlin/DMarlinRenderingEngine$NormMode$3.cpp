#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$3.h>

#include <java/awt/geom/PathIterator.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine$NormMode = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _DMarlinRenderingEngine$NormMode$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(DMarlinRenderingEngine$NormMode$3::*)($String*,int32_t)>(&DMarlinRenderingEngine$NormMode$3::init$))},
	{"getNormalizingPathIterator", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/geom/PathIterator;)Ljava/awt/geom/PathIterator;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _DMarlinRenderingEngine$NormMode$3_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	nullptr,
	nullptr
};

$InnerClassInfo _DMarlinRenderingEngine$NormMode$3_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode", "sun.java2d.marlin.DMarlinRenderingEngine", "NormMode", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormMode$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$3",
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormMode$3_MethodInfo_,
	nullptr,
	&_DMarlinRenderingEngine$NormMode$3_EnclosingMethodInfo_,
	_DMarlinRenderingEngine$NormMode$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormMode$3($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormMode$3));
}

void DMarlinRenderingEngine$NormMode$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$DMarlinRenderingEngine$NormMode::init$($enum$name, $enum$ordinal);
}

$PathIterator* DMarlinRenderingEngine$NormMode$3::getNormalizingPathIterator($RendererContext* rdrCtx, $PathIterator* src) {
	return src;
}

DMarlinRenderingEngine$NormMode$3::DMarlinRenderingEngine$NormMode$3() {
}

$Class* DMarlinRenderingEngine$NormMode$3::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormMode$3, name, initialize, &_DMarlinRenderingEngine$NormMode$3_ClassInfo_, allocate$DMarlinRenderingEngine$NormMode$3);
	return class$;
}

$Class* DMarlinRenderingEngine$NormMode$3::class$ = nullptr;

		} // marlin
	} // java2d
} // sun