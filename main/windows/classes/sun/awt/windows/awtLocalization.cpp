#include <sun/awt/windows/awtLocalization.h>

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

$MethodInfo _awtLocalization_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization::*)()>(&awtLocalization::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_MethodInfo_
};

$Object* allocate$awtLocalization($Class* clazz) {
	return $of($alloc(awtLocalization));
}

void awtLocalization::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("All Files"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization::awtLocalization() {
}

$Class* awtLocalization::load$($String* name, bool initialize) {
	$loadClass(awtLocalization, name, initialize, &_awtLocalization_ClassInfo_, allocate$awtLocalization);
	return class$;
}

$Class* awtLocalization::class$ = nullptr;

		} // windows
	} // awt
} // sun