#include <sun/java2d/marlin/DMarlinRenderingEngine$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;
using $DMarlinRenderingEngine = ::sun::java2d::marlin::DMarlinRenderingEngine;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

$MethodInfo _DMarlinRenderingEngine$1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(DMarlinRenderingEngine$1::*)(int32_t)>(&DMarlinRenderingEngine$1::init$))},
	{"newContext", "()Lsun/java2d/marlin/RendererContext;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _DMarlinRenderingEngine$1_EnclosingMethodInfo_ = {
	"sun.java2d.marlin.DMarlinRenderingEngine",
	nullptr,
	nullptr
};

$InnerClassInfo _DMarlinRenderingEngine$1_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.DMarlinRenderingEngine$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DMarlinRenderingEngine$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.marlin.DMarlinRenderingEngine$1",
	"sun.java2d.ReentrantContextProviderTL",
	nullptr,
	nullptr,
	_DMarlinRenderingEngine$1_MethodInfo_,
	"Lsun/java2d/ReentrantContextProviderTL<Lsun/java2d/marlin/RendererContext;>;",
	&_DMarlinRenderingEngine$1_EnclosingMethodInfo_,
	_DMarlinRenderingEngine$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.marlin.DMarlinRenderingEngine"
};

$Object* allocate$DMarlinRenderingEngine$1($Class* clazz) {
	return $of($alloc(DMarlinRenderingEngine$1));
}

void DMarlinRenderingEngine$1::init$(int32_t refType) {
	$ReentrantContextProviderTL::init$(refType);
}

$ReentrantContext* DMarlinRenderingEngine$1::newContext() {
	return $RendererContext::createContext();
}

DMarlinRenderingEngine$1::DMarlinRenderingEngine$1() {
}

$Class* DMarlinRenderingEngine$1::load$($String* name, bool initialize) {
	$loadClass(DMarlinRenderingEngine$1, name, initialize, &_DMarlinRenderingEngine$1_ClassInfo_, allocate$DMarlinRenderingEngine$1);
	return class$;
}

$Class* DMarlinRenderingEngine$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun