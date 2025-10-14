#include <sun/awt/windows/awtLocalization_sv.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_sv::*)()>(&awtLocalization_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_sv_MethodInfo_
};

$Object* allocate$awtLocalization_sv($Class* clazz) {
	return $of($alloc(awtLocalization_sv));
}

void awtLocalization_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_sv::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("Alla filer"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_sv::awtLocalization_sv() {
}

$Class* awtLocalization_sv::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_sv, name, initialize, &_awtLocalization_sv_ClassInfo_, allocate$awtLocalization_sv);
	return class$;
}

$Class* awtLocalization_sv::class$ = nullptr;

		} // windows
	} // awt
} // sun