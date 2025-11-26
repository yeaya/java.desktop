#include <sun/font/lookup/JDKFontLookup.h>

#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {
		namespace lookup {

$MethodInfo _JDKFontLookup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDKFontLookup::*)()>(&JDKFontLookup::init$))},
	{"getJDKFontDir", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)()>(&JDKFontLookup::getJDKFontDir))},
	{}
};

$ClassInfo _JDKFontLookup_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.lookup.JDKFontLookup",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JDKFontLookup_MethodInfo_
};

$Object* allocate$JDKFontLookup($Class* clazz) {
	return $of($alloc(JDKFontLookup));
}

void JDKFontLookup::init$() {
}

$String* JDKFontLookup::getJDKFontDir() {
	return $SunFontManager::getJDKFontDir();
}

JDKFontLookup::JDKFontLookup() {
}

$Class* JDKFontLookup::load$($String* name, bool initialize) {
	$loadClass(JDKFontLookup, name, initialize, &_JDKFontLookup_ClassInfo_, allocate$JDKFontLookup);
	return class$;
}

$Class* JDKFontLookup::class$ = nullptr;

		} // lookup
	} // font
} // sun