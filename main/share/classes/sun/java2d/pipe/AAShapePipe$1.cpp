#include <sun/java2d/pipe/AAShapePipe$1.h>

#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <sun/java2d/pipe/AAShapePipe$TileState.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;
using $AAShapePipe$TileState = ::sun::java2d::pipe::AAShapePipe$TileState;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _AAShapePipe$1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AAShapePipe$1::*)(int32_t)>(&AAShapePipe$1::init$))},
	{"newContext", "()Lsun/java2d/pipe/AAShapePipe$TileState;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AAShapePipe$1_EnclosingMethodInfo_ = {
	"sun.java2d.pipe.AAShapePipe",
	nullptr,
	nullptr
};

$InnerClassInfo _AAShapePipe$1_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.AAShapePipe$1", nullptr, nullptr, 0},
	{"sun.java2d.pipe.AAShapePipe$TileState", "sun.java2d.pipe.AAShapePipe", "TileState", $STATIC | $FINAL},
	{}
};

$ClassInfo _AAShapePipe$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.AAShapePipe$1",
	"sun.java2d.ReentrantContextProviderTL",
	nullptr,
	nullptr,
	_AAShapePipe$1_MethodInfo_,
	"Lsun/java2d/ReentrantContextProviderTL<Lsun/java2d/pipe/AAShapePipe$TileState;>;",
	&_AAShapePipe$1_EnclosingMethodInfo_,
	_AAShapePipe$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.AAShapePipe"
};

$Object* allocate$AAShapePipe$1($Class* clazz) {
	return $of($alloc(AAShapePipe$1));
}

void AAShapePipe$1::init$(int32_t refType) {
	$ReentrantContextProviderTL::init$(refType);
}

$ReentrantContext* AAShapePipe$1::newContext() {
	return $new($AAShapePipe$TileState);
}

AAShapePipe$1::AAShapePipe$1() {
}

$Class* AAShapePipe$1::load$($String* name, bool initialize) {
	$loadClass(AAShapePipe$1, name, initialize, &_AAShapePipe$1_ClassInfo_, allocate$AAShapePipe$1);
	return class$;
}

$Class* AAShapePipe$1::class$ = nullptr;

		} // pipe
	} // java2d
} // sun