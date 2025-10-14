#include <sun/font/CMap$NullCMapClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

$MethodInfo _CMap$NullCMapClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CMap$NullCMapClass::*)()>(&CMap$NullCMapClass::init$))},
	{"getGlyph", "(I)C", nullptr, 0},
	{}
};

$InnerClassInfo _CMap$NullCMapClass_InnerClassesInfo_[] = {
	{"sun.font.CMap$NullCMapClass", "sun.font.CMap", "NullCMapClass", $STATIC},
	{}
};

$ClassInfo _CMap$NullCMapClass_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CMap$NullCMapClass",
	"sun.font.CMap",
	nullptr,
	nullptr,
	_CMap$NullCMapClass_MethodInfo_,
	nullptr,
	nullptr,
	_CMap$NullCMapClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CMap"
};

$Object* allocate$CMap$NullCMapClass($Class* clazz) {
	return $of($alloc(CMap$NullCMapClass));
}

void CMap$NullCMapClass::init$() {
	$CMap::init$();
}

char16_t CMap$NullCMapClass::getGlyph(int32_t charCode) {
	return (char16_t)0;
}

CMap$NullCMapClass::CMap$NullCMapClass() {
}

$Class* CMap$NullCMapClass::load$($String* name, bool initialize) {
	$loadClass(CMap$NullCMapClass, name, initialize, &_CMap$NullCMapClass_ClassInfo_, allocate$CMap$NullCMapClass);
	return class$;
}

$Class* CMap$NullCMapClass::class$ = nullptr;

	} // font
} // sun