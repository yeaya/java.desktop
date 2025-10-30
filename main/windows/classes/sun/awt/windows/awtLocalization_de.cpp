#include <sun/awt/windows/awtLocalization_de.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_de::*)()>(&awtLocalization_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_de_MethodInfo_
};

$Object* allocate$awtLocalization_de($Class* clazz) {
	return $of($alloc(awtLocalization_de));
}

void awtLocalization_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("Alle Dateien"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_de::awtLocalization_de() {
}

$Class* awtLocalization_de::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_de, name, initialize, &_awtLocalization_de_ClassInfo_, allocate$awtLocalization_de);
	return class$;
}

$Class* awtLocalization_de::class$ = nullptr;

		} // windows
	} // awt
} // sun