#include <sun/awt/XSettings.h>

#include <java/util/Map.h>
#include <sun/awt/XSettings$Update.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $XSettings$Update = ::sun::awt::XSettings$Update;

namespace sun {
	namespace awt {

$FieldInfo _XSettings_FieldInfo_[] = {
	{"serial", "J", nullptr, $PRIVATE, $field(XSettings, serial)},
	{}
};

$MethodInfo _XSettings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XSettings::*)()>(&XSettings::init$))},
	{"update", "([B)Ljava/util/Map;", "([B)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC},
	{}
};

$InnerClassInfo _XSettings_InnerClassesInfo_[] = {
	{"sun.awt.XSettings$Update", "sun.awt.XSettings", "Update", 0},
	{}
};

$ClassInfo _XSettings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.XSettings",
	"java.lang.Object",
	nullptr,
	_XSettings_FieldInfo_,
	_XSettings_MethodInfo_,
	nullptr,
	nullptr,
	_XSettings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.XSettings$Update"
};

$Object* allocate$XSettings($Class* clazz) {
	return $of($alloc(XSettings));
}

void XSettings::init$() {
	this->serial = -1;
}

$Map* XSettings::update($bytes* data) {
	return ($$new($XSettings$Update, this, data))->update();
}

XSettings::XSettings() {
}

$Class* XSettings::load$($String* name, bool initialize) {
	$loadClass(XSettings, name, initialize, &_XSettings_ClassInfo_, allocate$XSettings);
	return class$;
}

$Class* XSettings::class$ = nullptr;

	} // awt
} // sun