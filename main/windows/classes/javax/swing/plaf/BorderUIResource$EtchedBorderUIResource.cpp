#include <javax/swing/plaf/BorderUIResource$EtchedBorderUIResource.h>

#include <java/awt/Color.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EtchedBorder = ::javax::swing::border::EtchedBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute BorderUIResource$EtchedBorderUIResource_Attribute_var$1[] = {
	{'s', "etchType"},
	{'s', "highlightColor"},
	{'s', "shadowColor"},
	{'-'}
};

$NamedAttribute BorderUIResource$EtchedBorderUIResource_Attribute_var$0[] = {
	{"value", '[', BorderUIResource$EtchedBorderUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _BorderUIResource$EtchedBorderUIResource_MethodAnnotations_init$3[] = {
	{"Ljava/beans/ConstructorProperties;", BorderUIResource$EtchedBorderUIResource_Attribute_var$0},
	{}
};

$MethodInfo _BorderUIResource$EtchedBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$EtchedBorderUIResource::*)()>(&BorderUIResource$EtchedBorderUIResource::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$EtchedBorderUIResource::*)(int32_t)>(&BorderUIResource$EtchedBorderUIResource::init$))},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$EtchedBorderUIResource::*)($Color*,$Color*)>(&BorderUIResource$EtchedBorderUIResource::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$EtchedBorderUIResource::*)(int32_t,$Color*,$Color*)>(&BorderUIResource$EtchedBorderUIResource::init$)), nullptr, nullptr, _BorderUIResource$EtchedBorderUIResource_MethodAnnotations_init$3},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$EtchedBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$EtchedBorderUIResource", "javax.swing.plaf.BorderUIResource", "EtchedBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$EtchedBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$EtchedBorderUIResource",
	"javax.swing.border.EtchedBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$EtchedBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$EtchedBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$EtchedBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$EtchedBorderUIResource));
}

int32_t BorderUIResource$EtchedBorderUIResource::hashCode() {
	 return this->$EtchedBorder::hashCode();
}

bool BorderUIResource$EtchedBorderUIResource::equals(Object$* arg0) {
	 return this->$EtchedBorder::equals(arg0);
}

$Object* BorderUIResource$EtchedBorderUIResource::clone() {
	 return this->$EtchedBorder::clone();
}

$String* BorderUIResource$EtchedBorderUIResource::toString() {
	 return this->$EtchedBorder::toString();
}

void BorderUIResource$EtchedBorderUIResource::finalize() {
	this->$EtchedBorder::finalize();
}

void BorderUIResource$EtchedBorderUIResource::init$() {
	$EtchedBorder::init$();
}

void BorderUIResource$EtchedBorderUIResource::init$(int32_t etchType) {
	$EtchedBorder::init$(etchType);
}

void BorderUIResource$EtchedBorderUIResource::init$($Color* highlight, $Color* shadow) {
	$EtchedBorder::init$(highlight, shadow);
}

void BorderUIResource$EtchedBorderUIResource::init$(int32_t etchType, $Color* highlight, $Color* shadow) {
	$EtchedBorder::init$(etchType, highlight, shadow);
}

BorderUIResource$EtchedBorderUIResource::BorderUIResource$EtchedBorderUIResource() {
}

$Class* BorderUIResource$EtchedBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$EtchedBorderUIResource, name, initialize, &_BorderUIResource$EtchedBorderUIResource_ClassInfo_, allocate$BorderUIResource$EtchedBorderUIResource);
	return class$;
}

$Class* BorderUIResource$EtchedBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax