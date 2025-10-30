#include <javax/swing/plaf/UIResource.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace swing {
		namespace plaf {

$ClassInfo _UIResource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.plaf.UIResource"
};

$Object* allocate$UIResource($Class* clazz) {
	return $of($alloc(UIResource));
}

$Class* UIResource::load$($String* name, bool initialize) {
	$loadClass(UIResource, name, initialize, &_UIResource_ClassInfo_, allocate$UIResource);
	return class$;
}

$Class* UIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax