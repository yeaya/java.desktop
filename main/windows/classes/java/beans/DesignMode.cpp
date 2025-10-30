#include <java/beans/DesignMode.h>

#include <jcpp.h>

#undef PROPERTYNAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$FieldInfo _DesignMode_FieldInfo_[] = {
	{"PROPERTYNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DesignMode, PROPERTYNAME)},
	{}
};

$MethodInfo _DesignMode_MethodInfo_[] = {
	{"isDesignTime", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setDesignTime", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DesignMode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.DesignMode",
	nullptr,
	nullptr,
	_DesignMode_FieldInfo_,
	_DesignMode_MethodInfo_
};

$Object* allocate$DesignMode($Class* clazz) {
	return $of($alloc(DesignMode));
}

$String* DesignMode::PROPERTYNAME = nullptr;

void clinit$DesignMode($Class* class$) {
	$assignStatic(DesignMode::PROPERTYNAME, "designTime"_s);
}

$Class* DesignMode::load$($String* name, bool initialize) {
	$loadClass(DesignMode, name, initialize, &_DesignMode_ClassInfo_, clinit$DesignMode, allocate$DesignMode);
	return class$;
}

$Class* DesignMode::class$ = nullptr;

	} // beans
} // java