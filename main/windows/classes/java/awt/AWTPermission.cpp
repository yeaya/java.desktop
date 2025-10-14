#include <java/awt/AWTPermission.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace awt {

$FieldInfo _AWTPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTPermission, serialVersionUID)},
	{}
};

$MethodInfo _AWTPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTPermission::*)($String*)>(&AWTPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AWTPermission::*)($String*,$String*)>(&AWTPermission::init$))},
	{}
};

$ClassInfo _AWTPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.AWTPermission",
	"java.security.BasicPermission",
	nullptr,
	_AWTPermission_FieldInfo_,
	_AWTPermission_MethodInfo_
};

$Object* allocate$AWTPermission($Class* clazz) {
	return $of($alloc(AWTPermission));
}

void AWTPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void AWTPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

AWTPermission::AWTPermission() {
}

$Class* AWTPermission::load$($String* name, bool initialize) {
	$loadClass(AWTPermission, name, initialize, &_AWTPermission_ClassInfo_, allocate$AWTPermission);
	return class$;
}

$Class* AWTPermission::class$ = nullptr;

	} // awt
} // java