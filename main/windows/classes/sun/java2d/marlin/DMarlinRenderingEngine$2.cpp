#include <sun/java2d/marlin/DMarlinRenderingEngine$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProviderCLQ.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProviderCLQ = ::sun::java2d::ReentrantContextProviderCLQ;
using $DMarlinRenderingEngine = ::sun::java2d::marlin::DMarlinRenderingEngine;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _DMarlinRenderingEngine$2_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine$2::*)(int32_t)>(&DMarlinRenderingEngine$2::init$))},
	{"newContext", "()Lsun/java2d/marlin/RendererContext;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _DMarlinRenderingEngine$2_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.DMarlinRenderingEngine",
	nullptr,
	nullptr
};

$InnerClassInfo _DMarlinRenderingEngine$2_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DMarlinRenderingEngine$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.marlin.DMarlinRenderingEngine$2",
	"sun.java2d.ReentrantContextProviderCLQ",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$2_MethodInfo_,
	"Lsun/java2d/ReentrantContextProviderCLQ<Lsun/java2d/marlin/RendererContext;>;",
	&_DMarlinRenderingEngine$2_EnclosingMethodInfo_,
	_DMarlinRenderingEngine$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$2($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$2));
}

void DMarlinRenderingEngine$2::init$(int32_t refType) {
	$ReentrantContextProviderCLQ::init$(refType);
}

$ReentrantContext* DMarlinRenderingEngine$2::newContext() {
	return $RendererContext::createContext();
}

DMarlinRenderingEngine$2::DMarlinRenderingEngine$2() {
}

$Class* DMarlinRenderingEngine$2::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$2, name, initialize, &_DMarlinRenderingEngine$2_ClassInfo_, allocate$DMarlinRenderingEngine$2);
	return class$;
}

$Class* DMarlinRenderingEngine$2::class$ = nullptr;

		} // marlin
	} // java2d
} // sun