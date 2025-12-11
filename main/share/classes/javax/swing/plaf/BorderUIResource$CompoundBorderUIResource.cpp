#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>

#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute BorderUIResource$CompoundBorderUIResource_Attribute_var$1[] = {
	{'s', "outsideBorder"},
	{'s', "insideBorder"},
	{'-'}
};

$NamedAttribute BorderUIResource$CompoundBorderUIResource_Attribute_var$0[] = {
	{"value", '[', BorderUIResource$CompoundBorderUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _BorderUIResource$CompoundBorderUIResource_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", BorderUIResource$CompoundBorderUIResource_Attribute_var$0},
	{}
};

$MethodInfo _BorderUIResource$CompoundBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$CompoundBorderUIResource::*)($Border*,$Border*)>(&BorderUIResource$CompoundBorderUIResource::init$)), nullptr, nullptr, _BorderUIResource$CompoundBorderUIResource_MethodAnnotations_init$0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$CompoundBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$CompoundBorderUIResource", "javax.swing.plaf.BorderUIResource", "CompoundBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$CompoundBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$CompoundBorderUIResource",
	"javax.swing.border.CompoundBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$CompoundBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$CompoundBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$CompoundBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$CompoundBorderUIResource));
}

int32_t BorderUIResource$CompoundBorderUIResource::hashCode() {
	 return this->$CompoundBorder::hashCode();
}

bool BorderUIResource$CompoundBorderUIResource::equals(Object$* arg0) {
	 return this->$CompoundBorder::equals(arg0);
}

$Object* BorderUIResource$CompoundBorderUIResource::clone() {
	 return this->$CompoundBorder::clone();
}

$String* BorderUIResource$CompoundBorderUIResource::toString() {
	 return this->$CompoundBorder::toString();
}

void BorderUIResource$CompoundBorderUIResource::finalize() {
	this->$CompoundBorder::finalize();
}

void BorderUIResource$CompoundBorderUIResource::init$($Border* outsideBorder, $Border* insideBorder) {
	$CompoundBorder::init$(outsideBorder, insideBorder);
}

BorderUIResource$CompoundBorderUIResource::BorderUIResource$CompoundBorderUIResource() {
}

$Class* BorderUIResource$CompoundBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$CompoundBorderUIResource, name, initialize, &_BorderUIResource$CompoundBorderUIResource_ClassInfo_, allocate$BorderUIResource$CompoundBorderUIResource);
	return class$;
}

$Class* BorderUIResource$CompoundBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax