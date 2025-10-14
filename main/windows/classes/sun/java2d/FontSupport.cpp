#include <sun/java2d/FontSupport.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/FontConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontConfiguration = ::sun::awt::FontConfiguration;

namespace sun {
	namespace java2d {

$MethodInfo _FontSupport_MethodInfo_[] = {
	{"getFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FontSupport_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.FontSupport",
	nullptr,
	nullptr,
	nullptr,
	_FontSupport_MethodInfo_
};

$Object* allocate$FontSupport($Class* clazz) {
	return $of($alloc(FontSupport));
}

$Class* FontSupport::load$($String* name, bool initialize) {
	$loadClass(FontSupport, name, initialize, &_FontSupport_ClassInfo_, allocate$FontSupport);
	return class$;
}

$Class* FontSupport::class$ = nullptr;

	} // java2d
} // sun