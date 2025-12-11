#include <sun/font/CStrikeDisposer.h>

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

$FieldInfo _CStrikeDisposer_FieldInfo_[] = {
	{"pNativeScalerContext", "J", nullptr, 0, $field(CStrikeDisposer, pNativeScalerContext)},
	{}
};

$MethodInfo _CStrikeDisposer_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[I)V", nullptr, $PUBLIC, $method(static_cast<void(CStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t,$ints*)>(&CStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[J)V", nullptr, $PUBLIC, $method(static_cast<void(CStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t,$longs*)>(&CStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J)V", nullptr, $PUBLIC, $method(static_cast<void(CStrikeDisposer::*)($Font2D*,$FontStrikeDesc*,int64_t)>(&CStrikeDisposer::init$))},
	{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;)V", nullptr, $PUBLIC, $method(static_cast<void(CStrikeDisposer::*)($Font2D*,$FontStrikeDesc*)>(&CStrikeDisposer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"freeNativeScalerContext", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CStrikeDisposer::*)(int64_t)>(&CStrikeDisposer::freeNativeScalerContext))},
	{"removeGlyphInfoFromCache", "(J)V", nullptr, $PROTECTED | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&CStrikeDisposer::removeGlyphInfoFromCache))},
	{}
};

#define _METHOD_INDEX_freeNativeScalerContext 5
#define _METHOD_INDEX_removeGlyphInfoFromCache 6

$ClassInfo _CStrikeDisposer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CStrikeDisposer",
	"sun.font.FontStrikeDisposer",
	nullptr,
	_CStrikeDisposer_FieldInfo_,
	_CStrikeDisposer_MethodInfo_
};

$Object* allocate$CStrikeDisposer($Class* clazz) {
	return $of($alloc(CStrikeDisposer));
}

void CStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $ints* images) {
	$FontStrikeDisposer::init$(font2D, desc, (int64_t)0, images);
	this->pNativeScalerContext = pContext;
}

void CStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $longs* images) {
	$FontStrikeDisposer::init$(font2D, desc, (int64_t)0, images);
	this->pNativeScalerContext = pContext;
}

void CStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext) {
	$FontStrikeDisposer::init$(font2D, desc, 0);
	this->pNativeScalerContext = pContext;
}

void CStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc) {
	$FontStrikeDisposer::init$(font2D, desc);
}

void CStrikeDisposer::dispose() {
	$synchronized(this) {
		if (!this->disposed) {
			if (this->pNativeScalerContext != (int64_t)0) {
				freeNativeScalerContext(this->pNativeScalerContext);
			}
			$FontStrikeDisposer::dispose();
		}
	}
}

void CStrikeDisposer::freeNativeScalerContext(int64_t pContext) {
	$prepareNative(CStrikeDisposer, freeNativeScalerContext, void, int64_t pContext);
	$invokeNative(pContext);
	$finishNative();
}

void CStrikeDisposer::removeGlyphInfoFromCache(int64_t glyphInfo) {
	$init(CStrikeDisposer);
	$prepareNativeStatic(CStrikeDisposer, removeGlyphInfoFromCache, void, int64_t glyphInfo);
	$invokeNativeStatic(glyphInfo);
	$finishNativeStatic();
}

CStrikeDisposer::CStrikeDisposer() {
}

$Class* CStrikeDisposer::load$($String* name, bool initialize) {
	$loadClass(CStrikeDisposer, name, initialize, &_CStrikeDisposer_ClassInfo_, allocate$CStrikeDisposer);
	return class$;
}

$Class* CStrikeDisposer::class$ = nullptr;

	} // font
} // sun