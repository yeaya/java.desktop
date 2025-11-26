#include <javax/swing/UIClientPropertyKey.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace swing {

$ClassInfo _UIClientPropertyKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.UIClientPropertyKey"
};

$Object* allocate$UIClientPropertyKey($Class* clazz) {
	return $of($alloc(UIClientPropertyKey));
}

$Class* UIClientPropertyKey::load$($String* name, bool initialize) {
	$loadClass(UIClientPropertyKey, name, initialize, &_UIClientPropertyKey_ClassInfo_, allocate$UIClientPropertyKey);
	return class$;
}

$Class* UIClientPropertyKey::class$ = nullptr;

	} // swing
} // javax