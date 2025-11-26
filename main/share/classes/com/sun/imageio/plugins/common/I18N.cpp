#include <com/sun/imageio/plugins/common/I18N.h>

#include <com/sun/imageio/plugins/common/I18NImpl.h>
#include <jcpp.h>

using $I18NImpl = ::com::sun::imageio::plugins::common::I18NImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _I18N_FieldInfo_[] = {
	{"resource_name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(I18N, resource_name)},
	{}
};

$MethodInfo _I18N_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(I18N::*)()>(&I18N::init$))},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&I18N::getString))},
	{}
};

$ClassInfo _I18N_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.imageio.plugins.common.I18N",
	"com.sun.imageio.plugins.common.I18NImpl",
	nullptr,
	_I18N_FieldInfo_,
	_I18N_MethodInfo_
};

$Object* allocate$I18N($Class* clazz) {
	return $of($alloc(I18N));
}

$String* I18N::resource_name = nullptr;

void I18N::init$() {
	$I18NImpl::init$();
}

$String* I18N::getString($String* key) {
	$init(I18N);
	return $I18NImpl::getString("com.sun.imageio.plugins.common.I18N"_s, I18N::resource_name, key);
}

I18N::I18N() {
}

void clinit$I18N($Class* class$) {
	$assignStatic(I18N::resource_name, "iio-plugin.properties"_s);
}

$Class* I18N::load$($String* name, bool initialize) {
	$loadClass(I18N, name, initialize, &_I18N_ClassInfo_, clinit$I18N, allocate$I18N);
	return class$;
}

$Class* I18N::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com