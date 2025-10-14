#include <sun/awt/windows/awtLocalization_it.h>

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

$MethodInfo _awtLocalization_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_it::*)()>(&awtLocalization_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_it_MethodInfo_
};

$Object* allocate$awtLocalization_it($Class* clazz) {
	return $of($alloc(awtLocalization_it));
}

void awtLocalization_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_it::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("Tutti i file"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_it::awtLocalization_it() {
}

$Class* awtLocalization_it::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_it, name, initialize, &_awtLocalization_it_ClassInfo_, allocate$awtLocalization_it);
	return class$;
}

$Class* awtLocalization_it::class$ = nullptr;

		} // windows
	} // awt
} // sun