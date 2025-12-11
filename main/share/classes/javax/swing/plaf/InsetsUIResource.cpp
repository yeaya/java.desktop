#include <javax/swing/plaf/InsetsUIResource.h>

#include <java/awt/Insets.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _InsetsUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(InsetsUIResource::*)(int32_t,int32_t,int32_t,int32_t)>(&InsetsUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InsetsUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.InsetsUIResource",
	"java.awt.Insets",
	"javax.swing.plaf.UIResource",
	nullptr,
	_InsetsUIResource_MethodInfo_
};

$Object* allocate$InsetsUIResource($Class* clazz) {
	return $of($alloc(InsetsUIResource));
}

bool InsetsUIResource::equals(Object$* obj) {
	 return this->$Insets::equals(obj);
}

int32_t InsetsUIResource::hashCode() {
	 return this->$Insets::hashCode();
}

$String* InsetsUIResource::toString() {
	 return this->$Insets::toString();
}

$Object* InsetsUIResource::clone() {
	 return this->$Insets::clone();
}

void InsetsUIResource::finalize() {
	this->$Insets::finalize();
}

void InsetsUIResource::init$(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$Insets::init$(top, left, bottom, right);
}

InsetsUIResource::InsetsUIResource() {
}

$Class* InsetsUIResource::load$($String* name, bool initialize) {
	$loadClass(InsetsUIResource, name, initialize, &_InsetsUIResource_ClassInfo_, allocate$InsetsUIResource);
	return class$;
}

$Class* InsetsUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax