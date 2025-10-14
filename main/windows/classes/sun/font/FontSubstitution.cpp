#include <sun/font/FontSubstitution.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CompositeFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeFont = ::sun::font::CompositeFont;

namespace sun {
	namespace font {

$MethodInfo _FontSubstitution_MethodInfo_[] = {
	{"getCompositeFont2D", "()Lsun/font/CompositeFont;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FontSubstitution_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.FontSubstitution",
	nullptr,
	nullptr,
	nullptr,
	_FontSubstitution_MethodInfo_
};

$Object* allocate$FontSubstitution($Class* clazz) {
	return $of($alloc(FontSubstitution));
}

$Class* FontSubstitution::load$($String* name, bool initialize) {
	$loadClass(FontSubstitution, name, initialize, &_FontSubstitution_ClassInfo_, allocate$FontSubstitution);
	return class$;
}

$Class* FontSubstitution::class$ = nullptr;

	} // font
} // sun