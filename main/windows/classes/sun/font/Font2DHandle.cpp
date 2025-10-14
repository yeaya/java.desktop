#include <sun/font/Font2DHandle.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Font2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;

namespace sun {
	namespace font {

$FieldInfo _Font2DHandle_FieldInfo_[] = {
	{"font2D", "Lsun/font/Font2D;", nullptr, $PUBLIC, $field(Font2DHandle, font2D)},
	{}
};

$MethodInfo _Font2DHandle_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Font2D;)V", nullptr, $PUBLIC, $method(static_cast<void(Font2DHandle::*)($Font2D*)>(&Font2DHandle::init$))},
	{}
};

$ClassInfo _Font2DHandle_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.Font2DHandle",
	"java.lang.Object",
	nullptr,
	_Font2DHandle_FieldInfo_,
	_Font2DHandle_MethodInfo_
};

$Object* allocate$Font2DHandle($Class* clazz) {
	return $of($alloc(Font2DHandle));
}

void Font2DHandle::init$($Font2D* font) {
	$set(this, font2D, font);
}

Font2DHandle::Font2DHandle() {
}

$Class* Font2DHandle::load$($String* name, bool initialize) {
	$loadClass(Font2DHandle, name, initialize, &_Font2DHandle_ClassInfo_, allocate$Font2DHandle);
	return class$;
}

$Class* Font2DHandle::class$ = nullptr;

	} // font
} // sun