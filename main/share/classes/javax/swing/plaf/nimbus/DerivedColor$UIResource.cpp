#include <javax/swing/plaf/nimbus/DerivedColor$UIResource.h>

#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerivedColor = ::javax::swing::plaf::nimbus::DerivedColor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _DerivedColor$UIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;FFFI)V", nullptr, 0, $method(static_cast<void(DerivedColor$UIResource::*)($String*,float,float,float,int32_t)>(&DerivedColor$UIResource::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DerivedColor$UIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.DerivedColor$UIResource", "javax.swing.plaf.nimbus.DerivedColor", "UIResource", $STATIC},
	{}
};

$ClassInfo _DerivedColor$UIResource_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.DerivedColor$UIResource",
	"javax.swing.plaf.nimbus.DerivedColor",
	"javax.swing.plaf.UIResource",
	nullptr,
	_DerivedColor$UIResource_MethodInfo_,
	nullptr,
	nullptr,
	_DerivedColor$UIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.DerivedColor"
};

$Object* allocate$DerivedColor$UIResource($Class* clazz) {
	return $of($alloc(DerivedColor$UIResource));
}

$String* DerivedColor$UIResource::toString() {
	 return this->$DerivedColor::toString();
}

$Object* DerivedColor$UIResource::clone() {
	 return this->$DerivedColor::clone();
}

void DerivedColor$UIResource::finalize() {
	this->$DerivedColor::finalize();
}

void DerivedColor$UIResource::init$($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset) {
	$DerivedColor::init$(uiDefaultParentName, hOffset, sOffset, bOffset, aOffset);
}

bool DerivedColor$UIResource::equals(Object$* o) {
	return ($instanceOf(DerivedColor$UIResource, o)) && $DerivedColor::equals(o);
}

int32_t DerivedColor$UIResource::hashCode() {
	return $DerivedColor::hashCode() + 7;
}

DerivedColor$UIResource::DerivedColor$UIResource() {
}

$Class* DerivedColor$UIResource::load$($String* name, bool initialize) {
	$loadClass(DerivedColor$UIResource, name, initialize, &_DerivedColor$UIResource_ClassInfo_, allocate$DerivedColor$UIResource);
	return class$;
}

$Class* DerivedColor$UIResource::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax