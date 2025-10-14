#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$2.h>

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _DMarlinRenderingEngine$NormMode$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(DMarlinRenderingEngine$NormMode$2::*)($String*,int32_t)>(&DMarlinRenderingEngine$NormMode$2::init$))},
	{"getNormalizingPathIterator", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/geom/PathIterator;)Ljava/awt/geom/PathIterator;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _DMarlinRenderingEngine$NormMode$2_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	nullptr,
	nullptr
};

$InnerClassInfo _DMarlinRenderingEngine$NormMode$2_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode", "sun.java2d.marlin.DMarlinRenderingEngine", "NormMode", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
	{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _DMarlinRenderingEngine$NormMode$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$2",
	"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$NormMode$2_MethodInfo_,
	nullptr,
	&_DMarlinRenderingEngine$NormMode$2_EnclosingMethodInfo_,
	_DMarlinRenderingEngine$NormMode$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$NormMode$2($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$NormMode$2));
}

void DMarlinRenderingEngine$NormMode$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$DMarlinRenderingEngine$NormMode::init$($enum$name, $enum$ordinal);
}

$PathIterator* DMarlinRenderingEngine$NormMode$2::getNormalizingPathIterator($RendererContext* rdrCtx, $PathIterator* src) {
	return $nc($nc(rdrCtx)->nPQPathIterator)->init(src);
}

DMarlinRenderingEngine$NormMode$2::DMarlinRenderingEngine$NormMode$2() {
}

$Class* DMarlinRenderingEngine$NormMode$2::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$NormMode$2, name, initialize, &_DMarlinRenderingEngine$NormMode$2_ClassInfo_, allocate$DMarlinRenderingEngine$NormMode$2);
	return class$;
}

$Class* DMarlinRenderingEngine$NormMode$2::class$ = nullptr;

		} // marlin
	} // java2d
} // sun