#include <sun/java2d/d3d/D3DRenderQueue$1.h>

#include <sun/java2d/d3d/D3DRenderQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DRenderQueue = ::sun::java2d::d3d::D3DRenderQueue;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DRenderQueue$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3DRenderQueue$1::*)()>(&D3DRenderQueue$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DRenderQueue$1_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DRenderQueue",
	"getInstance",
	"()Lsun/java2d/d3d/D3DRenderQueue;"
};

$InnerClassInfo _D3DRenderQueue$1_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DRenderQueue$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DRenderQueue$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DRenderQueue$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_D3DRenderQueue$1_MethodInfo_,
	nullptr,
	&_D3DRenderQueue$1_EnclosingMethodInfo_,
	_D3DRenderQueue$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DRenderQueue"
};

$Object* allocate$D3DRenderQueue$1($Class* clazz) {
	return $of($alloc(D3DRenderQueue$1));
}

void D3DRenderQueue$1::init$() {
}

void D3DRenderQueue$1::run() {
	$init($D3DRenderQueue);
	$assignStatic($D3DRenderQueue::rqThread, $Thread::currentThread());
}

D3DRenderQueue$1::D3DRenderQueue$1() {
}

$Class* D3DRenderQueue$1::load$($String* name, bool initialize) {
	$loadClass(D3DRenderQueue$1, name, initialize, &_D3DRenderQueue$1_ClassInfo_, allocate$D3DRenderQueue$1);
	return class$;
}

$Class* D3DRenderQueue$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun