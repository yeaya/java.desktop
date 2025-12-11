#include <sun/font/NativeStrikeDisposer.h>

#include <sun/font/Font2D.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;

namespace sun {
	namespace font {

$FieldInfo _NativeStrikeDisposer_FieldInfo_[] = {
	{"pNativeScalerContext", "J", nullptr, 0, $field(NativeStrikeDisposer, pNativeScalerContext)},
	{}
};

$MethodInfo _NativeStrikeDisposer_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[I)V", nullptr, $PUBLIC, $method(static_cast<void(NativeStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t,$ints*)>(&NativeStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[J)V", nullptr, $PUBLIC, $method(static_cast<void(NativeStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t,$longs*)>(&NativeStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J)V", nullptr, $PUBLIC, $method(static_cast<void(NativeStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t)>(&NativeStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;)V", nullptr, $PUBLIC, $method(static_cast<void(NativeStrikeDisposer::*)($Font2D*,$FontStrikeDesc*)>(&NativeStrikeDisposer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"freeNativeScalerContext", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(NativeStrikeDisposer::*)(int64_t)>(&NativeStrikeDisposer::freeNativeScalerContext))},
	{}
};

#define _METHOD_INDEX_freeNativeScalerContext 5

$ClassInfo _NativeStrikeDisposer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.NativeStrikeDisposer",
	"sun.font.FontStrikeDisposer",
	nullptr,
	_NativeStrikeDisposer_FieldInfo_,
	_NativeStrikeDisposer_MethodInfo_
};

$Object* allocate$NativeStrikeDisposer($Class* clazz) {
	return $of($alloc(NativeStrikeDisposer));
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $ints* images) {
	$FontStrikeDisposer::init$(font2D, desc, (int64_t)0, images);
	this->pNativeScalerContext = pContext;
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $longs* images) {
	$FontStrikeDisposer::init$(font2D, desc, (int64_t)0, images);
	this->pNativeScalerContext = pContext;
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext) {
	$FontStrikeDisposer::init$(font2D, desc, 0);
	this->pNativeScalerContext = pContext;
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc) {
	$FontStrikeDisposer::init$(font2D, desc);
}

void NativeStrikeDisposer::dispose() {
	$synchronized(this) {
		if (!this->disposed) {
			if (this->pNativeScalerContext != (int64_t)0) {
				freeNativeScalerContext(this->pNativeScalerContext);
			}
			$FontStrikeDisposer::dispose();
		}
	}
}

void NativeStrikeDisposer::freeNativeScalerContext(int64_t pContext) {
	$prepareNative(NativeStrikeDisposer, freeNativeScalerContext, void, int64_t pContext);
	$invokeNative(pContext);
	$finishNative();
}

NativeStrikeDisposer::NativeStrikeDisposer() {
}

$Class* NativeStrikeDisposer::load$($String* name, bool initialize) {
	$loadClass(NativeStrikeDisposer, name, initialize, &_NativeStrikeDisposer_ClassInfo_, allocate$NativeStrikeDisposer);
	return class$;
}

$Class* NativeStrikeDisposer::class$ = nullptr;

	} // font
} // sun