#include <sun/awt/SubRegionShowable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _SubRegionShowable_MethodInfo_[] = {
	{"show", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"showIfNotLost", "(IIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SubRegionShowable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.SubRegionShowable",
	nullptr,
	nullptr,
	nullptr,
	_SubRegionShowable_MethodInfo_
};

$Object* allocate$SubRegionShowable($Class* clazz) {
	return $of($alloc(SubRegionShowable));
}

$Class* SubRegionShowable::load$($String* name, bool initialize) {
	$loadClass(SubRegionShowable, name, initialize, &_SubRegionShowable_ClassInfo_, allocate$SubRegionShowable);
	return class$;
}

$Class* SubRegionShowable::class$ = nullptr;

	} // awt
} // sun