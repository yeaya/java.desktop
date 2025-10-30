#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative$2.h>

#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $D3DSurfaceData$D3DDataBufferNative = ::sun::java2d::d3d::D3DSurfaceData$D3DDataBufferNative;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceData$D3DDataBufferNative$2_FieldInfo_[] = {
	{"this$0", "Lsun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$2, this$0)},
	{"val$pixel", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$2, val$pixel)},
	{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$2, val$y)},
	{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$2, val$x)},
	{"val$sData", "Lsun/java2d/SurfaceData;", nullptr, $FINAL | $SYNTHETIC, $field(D3DSurfaceData$D3DDataBufferNative$2, val$sData)},
	{}
};

$MethodInfo _D3DSurfaceData$D3DDataBufferNative$2_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DSurfaceData$D3DDataBufferNative;Lsun/java2d/SurfaceData;III)V", "()V", 0, $method(static_cast<void(D3DSurfaceData$D3DDataBufferNative$2::*)($D3DSurfaceData$D3DDataBufferNative*,$SurfaceData*,int32_t,int32_t,int32_t)>(&D3DSurfaceData$D3DDataBufferNative$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DSurfaceData$D3DDataBufferNative$2_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative",
	"setElem",
	"(IIILsun/java2d/SurfaceData;)V"
};

$InnerClassInfo _D3DSurfaceData$D3DDataBufferNative$2_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative", "sun.java2d.d3d.D3DSurfaceData", "D3DDataBufferNative", $STATIC},
	{"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DSurfaceData$D3DDataBufferNative$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceData$D3DDataBufferNative$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_D3DSurfaceData$D3DDataBufferNative$2_FieldInfo_,
	_D3DSurfaceData$D3DDataBufferNative$2_MethodInfo_,
	nullptr,
	&_D3DSurfaceData$D3DDataBufferNative$2_EnclosingMethodInfo_,
	_D3DSurfaceData$D3DDataBufferNative$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DSurfaceData"
};

$Object* allocate$D3DSurfaceData$D3DDataBufferNative$2($Class* clazz) {
	return $of($alloc(D3DSurfaceData$D3DDataBufferNative$2));
}

void D3DSurfaceData$D3DDataBufferNative$2::init$($D3DSurfaceData$D3DDataBufferNative* this$0, $SurfaceData* val$sData, int32_t val$x, int32_t val$y, int32_t val$pixel) {
	$set(this, this$0, this$0);
	$set(this, val$sData, val$sData);
	this->val$x = val$x;
	this->val$y = val$y;
	this->val$pixel = val$pixel;
}

void D3DSurfaceData$D3DDataBufferNative$2::run() {
	$D3DSurfaceData::dbSetPixelNative($nc(this->val$sData)->getNativeOps(), this->val$x, this->val$y, this->val$pixel);
}

D3DSurfaceData$D3DDataBufferNative$2::D3DSurfaceData$D3DDataBufferNative$2() {
}

$Class* D3DSurfaceData$D3DDataBufferNative$2::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceData$D3DDataBufferNative$2, name, initialize, &_D3DSurfaceData$D3DDataBufferNative$2_ClassInfo_, allocate$D3DSurfaceData$D3DDataBufferNative$2);
	return class$;
}

$Class* D3DSurfaceData$D3DDataBufferNative$2::class$ = nullptr;

		} // d3d
	} // java2d
} // sun