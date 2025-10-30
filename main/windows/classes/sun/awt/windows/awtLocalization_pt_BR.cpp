#include <sun/awt/windows/awtLocalization_pt_BR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_pt_BR::*)()>(&awtLocalization_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_pt_BR_MethodInfo_
};

$Object* allocate$awtLocalization_pt_BR($Class* clazz) {
	return $of($alloc(awtLocalization_pt_BR));
}

void awtLocalization_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("Todos os Arquivos"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_pt_BR::awtLocalization_pt_BR() {
}

$Class* awtLocalization_pt_BR::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_pt_BR, name, initialize, &_awtLocalization_pt_BR_ClassInfo_, allocate$awtLocalization_pt_BR);
	return class$;
}

$Class* awtLocalization_pt_BR::class$ = nullptr;

		} // windows
	} // awt
} // sun