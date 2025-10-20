#include <sun/awt/windows/awtLocalization_fr.h>

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

$MethodInfo _awtLocalization_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_fr::*)()>(&awtLocalization_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_fr_MethodInfo_
};

$Object* allocate$awtLocalization_fr($Class* clazz) {
	return $of($alloc(awtLocalization_fr));
}

void awtLocalization_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("Tous les fichiers"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_fr::awtLocalization_fr() {
}

$Class* awtLocalization_fr::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_fr, name, initialize, &_awtLocalization_fr_ClassInfo_, allocate$awtLocalization_fr);
	return class$;
}

$Class* awtLocalization_fr::class$ = nullptr;

		} // windows
	} // awt
} // sun