#include <javax/swing/plaf/DimensionUIResource.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _DimensionUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DimensionUIResource::*)(int32_t,int32_t)>(&DimensionUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DimensionUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.DimensionUIResource",
	"java.awt.Dimension",
	"javax.swing.plaf.UIResource",
	nullptr,
	_DimensionUIResource_MethodInfo_
};

$Object* allocate$DimensionUIResource($Class* clazz) {
	return $of($alloc(DimensionUIResource));
}

bool DimensionUIResource::equals(Object$* obj) {
	 return this->$Dimension::equals(obj);
}

int32_t DimensionUIResource::hashCode() {
	 return this->$Dimension::hashCode();
}

$String* DimensionUIResource::toString() {
	 return this->$Dimension::toString();
}

$Object* DimensionUIResource::clone() {
	 return this->$Dimension::clone();
}

void DimensionUIResource::finalize() {
	this->$Dimension::finalize();
}

void DimensionUIResource::init$(int32_t width, int32_t height) {
	$Dimension::init$(width, height);
}

DimensionUIResource::DimensionUIResource() {
}

$Class* DimensionUIResource::load$($String* name, bool initialize) {
	$loadClass(DimensionUIResource, name, initialize, &_DimensionUIResource_ClassInfo_, allocate$DimensionUIResource);
	return class$;
}

$Class* DimensionUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax