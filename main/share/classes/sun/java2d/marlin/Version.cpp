#include <sun/java2d/marlin/Version.h>

#include <jcpp.h>

#undef VERSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _Version_FieldInfo_[] = {
	{"VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Version, VERSION)},
	{}
};

$MethodInfo _Version_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Version::*)()>(&Version::init$))},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&Version::getVersion))},
	{}
};

$ClassInfo _Version_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.Version",
	"java.lang.Object",
	nullptr,
	_Version_FieldInfo_,
	_Version_MethodInfo_
};

$Object* allocate$Version($Class* clazz) {
	return $of($alloc(Version));
}

$String* Version::VERSION = nullptr;

$String* Version::getVersion() {
	$init(Version);
	return Version::VERSION;
}

void Version::init$() {
}

Version::Version() {
}

void clinit$Version($Class* class$) {
	$assignStatic(Version::VERSION, "marlin-0.9.1.4-Unsafe-OpenJDK"_s);
}

$Class* Version::load$($String* name, bool initialize) {
	$loadClass(Version, name, initialize, &_Version_ClassInfo_, clinit$Version, allocate$Version);
	return class$;
}

$Class* Version::class$ = nullptr;

		} // marlin
	} // java2d
} // sun