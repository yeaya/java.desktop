#include <sun/awt/windows/awtLocalization_es.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_es::*)()>(&awtLocalization_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_es_MethodInfo_
};

$Object* allocate$awtLocalization_es($Class* clazz) {
	return $of($alloc(awtLocalization_es));
}

void awtLocalization_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of("Todos los Archivos"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_es::awtLocalization_es() {
}

$Class* awtLocalization_es::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_es, name, initialize, &_awtLocalization_es_ClassInfo_, allocate$awtLocalization_es);
	return class$;
}

$Class* awtLocalization_es::class$ = nullptr;

		} // windows
	} // awt
} // sun