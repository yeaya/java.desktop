#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>

#include <java/awt/Color.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute BorderUIResource$LineBorderUIResource_Attribute_var$1[] = {
	{'s', "lineColor"},
	{'s', "thickness"},
	{'-'}
};

$NamedAttribute BorderUIResource$LineBorderUIResource_Attribute_var$0[] = {
	{"value", '[', BorderUIResource$LineBorderUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _BorderUIResource$LineBorderUIResource_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", BorderUIResource$LineBorderUIResource_Attribute_var$0},
	{}
};

$MethodInfo _BorderUIResource$LineBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$LineBorderUIResource::*)($Color*)>(&BorderUIResource$LineBorderUIResource::init$))},
	{"<init>", "(Ljava/awt/Color;I)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$LineBorderUIResource::*)($Color*,int32_t)>(&BorderUIResource$LineBorderUIResource::init$)), nullptr, nullptr, _BorderUIResource$LineBorderUIResource_MethodAnnotations_init$1},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$LineBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$LineBorderUIResource", "javax.swing.plaf.BorderUIResource", "LineBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$LineBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$LineBorderUIResource",
	"javax.swing.border.LineBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$LineBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$LineBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$LineBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$LineBorderUIResource));
}

int32_t BorderUIResource$LineBorderUIResource::hashCode() {
	 return this->$LineBorder::hashCode();
}

bool BorderUIResource$LineBorderUIResource::equals(Object$* arg0) {
	 return this->$LineBorder::equals(arg0);
}

$Object* BorderUIResource$LineBorderUIResource::clone() {
	 return this->$LineBorder::clone();
}

$String* BorderUIResource$LineBorderUIResource::toString() {
	 return this->$LineBorder::toString();
}

void BorderUIResource$LineBorderUIResource::finalize() {
	this->$LineBorder::finalize();
}

void BorderUIResource$LineBorderUIResource::init$($Color* color) {
	$LineBorder::init$(color);
}

void BorderUIResource$LineBorderUIResource::init$($Color* color, int32_t thickness) {
	$LineBorder::init$(color, thickness);
}

BorderUIResource$LineBorderUIResource::BorderUIResource$LineBorderUIResource() {
}

$Class* BorderUIResource$LineBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$LineBorderUIResource, name, initialize, &_BorderUIResource$LineBorderUIResource_ClassInfo_, allocate$BorderUIResource$LineBorderUIResource);
	return class$;
}

$Class* BorderUIResource$LineBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax