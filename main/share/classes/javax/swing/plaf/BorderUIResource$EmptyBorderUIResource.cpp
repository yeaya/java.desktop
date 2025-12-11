#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>

#include <java/awt/Insets.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute BorderUIResource$EmptyBorderUIResource_Attribute_var$1[] = {
	{'s', "borderInsets"},
	{'-'}
};

$NamedAttribute BorderUIResource$EmptyBorderUIResource_Attribute_var$0[] = {
	{"value", '[', BorderUIResource$EmptyBorderUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _BorderUIResource$EmptyBorderUIResource_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", BorderUIResource$EmptyBorderUIResource_Attribute_var$0},
	{}
};

$MethodInfo _BorderUIResource$EmptyBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$EmptyBorderUIResource::*)(int32_t,int32_t,int32_t,int32_t)>(&BorderUIResource$EmptyBorderUIResource::init$))},
	{"<init>", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$EmptyBorderUIResource::*)($Insets*)>(&BorderUIResource$EmptyBorderUIResource::init$)), nullptr, nullptr, _BorderUIResource$EmptyBorderUIResource_MethodAnnotations_init$1},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$EmptyBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$EmptyBorderUIResource", "javax.swing.plaf.BorderUIResource", "EmptyBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$EmptyBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$EmptyBorderUIResource",
	"javax.swing.border.EmptyBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$EmptyBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$EmptyBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$EmptyBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$EmptyBorderUIResource));
}

int32_t BorderUIResource$EmptyBorderUIResource::hashCode() {
	 return this->$EmptyBorder::hashCode();
}

bool BorderUIResource$EmptyBorderUIResource::equals(Object$* arg0) {
	 return this->$EmptyBorder::equals(arg0);
}

$Object* BorderUIResource$EmptyBorderUIResource::clone() {
	 return this->$EmptyBorder::clone();
}

$String* BorderUIResource$EmptyBorderUIResource::toString() {
	 return this->$EmptyBorder::toString();
}

void BorderUIResource$EmptyBorderUIResource::finalize() {
	this->$EmptyBorder::finalize();
}

void BorderUIResource$EmptyBorderUIResource::init$(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$EmptyBorder::init$(top, left, bottom, right);
}

void BorderUIResource$EmptyBorderUIResource::init$($Insets* insets) {
	$EmptyBorder::init$(insets);
}

BorderUIResource$EmptyBorderUIResource::BorderUIResource$EmptyBorderUIResource() {
}

$Class* BorderUIResource$EmptyBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$EmptyBorderUIResource, name, initialize, &_BorderUIResource$EmptyBorderUIResource_ClassInfo_, allocate$BorderUIResource$EmptyBorderUIResource);
	return class$;
}

$Class* BorderUIResource$EmptyBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax