#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative$1.h>

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceData$D3DDataBufferNative = ::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$D3DDataBufferNative$1_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$1, this$0)},
	{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$1, val$y)},
	{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$1, val$x)},
	{"val$sData", "Lsun/java2d/SurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$1, val$sData)},
	{}
};

$MethodInfo _D3DSurfaceData$D3DDataBufferNative$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative;Lsun/java2d/SurfaceData;II)V", "()V", 0, $method(static_cast<void(D3DSurfaceData$D3DDataBufferNative$1::*)($D3DSurfaceData$D3DDataBufferNative*,$SurfaceData*,int32_t,int32_t)>(&D3DSurfaceData$D3DDataBufferNative$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DSurfaceData$D3DDataBufferNative$1_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative",
	"getElem",
	"(IILsun/java2d/SurfaceData;)I"
};

$InnerClassInfo _D3DSurfaceData$D3DDataBufferNative$1_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative", "sun.java2d.d3d.D3DSurfaceData", "D3DDataBufferNative", $STATIC},
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DSurfaceData$D3DDataBufferNative$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DSurfaceData$D3DDataBufferNative$1_FieldInfo_,
	_D3DSurfaceData$D3DDataBufferNative$1_MethodInfo_,
	nullptr,
	&_D3DSurfaceData$D3DDataBufferNative$1_EnclosingMethodInfo_,
	_D3DSurfaceData$D3DDataBufferNative$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$D3DDataBufferNative$1($Class* clazz) {
	return $of($alloc(D3DSurfaceData$D3DDataBufferNative$1));
}

void D3DSurfaceData$D3DDataBufferNative$1::init$($D3DSurfaceData$D3DDataBufferNative* this$0, $SurfaceData* val$sData, int32_t val$x, int32_t val$y) {
	$set(this, this$0, this$0);
	$set(this, val$sData, val$sData);
	this->val$x = val$x;
	this->val$y = val$y;
}

void D3DSurfaceData$D3DDataBufferNative$1::run() {
	this->this$0->pixel = $D3DSurfaceData::dbGetPixelNative($nc(this->val$sData)->getNativeOps(), this->val$x, this->val$y);
}

D3DSurfaceData$D3DDataBufferNative$1::D3DSurfaceData$D3DDataBufferNative$1() {
}

$Class* D3DSurfaceData$D3DDataBufferNative$1::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$D3DDataBufferNative$1, name, initialize, &_D3DSurfaceData$D3DDataBufferNative$1_ClassInfo_, allocate$D3DSurfaceData$D3DDataBufferNative$1);
	return class$;
}

$Class* D3DSurfaceData$D3DDataBufferNative$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun