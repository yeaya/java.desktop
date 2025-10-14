#include <javax/swing/plaf/BorderUIResource$BevelBorderUIResource.h>

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
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute BorderUIResource$BevelBorderUIResource_Attribute_var$1[] = {
	{'s', "bevelType"},
	{'s', "highlightOuterColor"},
	{'s', "highlightInnerColor"},
	{'s', "shadowOuterColor"},
	{'s', "shadowInnerColor"},
	{'-'}
};

$NamedAttribute BorderUIResource$BevelBorderUIResource_Attribute_var$0[] = {
	{"value", '[', BorderUIResource$BevelBorderUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _BorderUIResource$BevelBorderUIResource_MethodAnnotations_init$2[] = {
	{"Ljava/beans/ConstructorProperties;", BorderUIResource$BevelBorderUIResource_Attribute_var$0},
	{}
};

$MethodInfo _BorderUIResource$BevelBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$BevelBorderUIResource::*)(int32_t)>(&BorderUIResource$BevelBorderUIResource::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$BevelBorderUIResource::*)(int32_t,$Color*,$Color*)>(&BorderUIResource$BevelBorderUIResource::init$))},
	{"<init>", "(ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$BevelBorderUIResource::*)(int32_t,$Color*,$Color*,$Color*,$Color*)>(&BorderUIResource$BevelBorderUIResource::init$)), nullptr, nullptr, _BorderUIResource$BevelBorderUIResource_MethodAnnotations_init$2},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$BevelBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$BevelBorderUIResource", "javax.swing.plaf.BorderUIResource", "BevelBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$BevelBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$BevelBorderUIResource",
	"javax.swing.border.BevelBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$BevelBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$BevelBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$BevelBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$BevelBorderUIResource));
}

int32_t BorderUIResource$BevelBorderUIResource::hashCode() {
	 return this->$BevelBorder::hashCode();
}

bool BorderUIResource$BevelBorderUIResource::equals(Object$* arg0) {
	 return this->$BevelBorder::equals(arg0);
}

$Object* BorderUIResource$BevelBorderUIResource::clone() {
	 return this->$BevelBorder::clone();
}

$String* BorderUIResource$BevelBorderUIResource::toString() {
	 return this->$BevelBorder::toString();
}

void BorderUIResource$BevelBorderUIResource::finalize() {
	this->$BevelBorder::finalize();
}

void BorderUIResource$BevelBorderUIResource::init$(int32_t bevelType) {
	$BevelBorder::init$(bevelType);
}

void BorderUIResource$BevelBorderUIResource::init$(int32_t bevelType, $Color* highlight, $Color* shadow) {
	$BevelBorder::init$(bevelType, highlight, shadow);
}

void BorderUIResource$BevelBorderUIResource::init$(int32_t bevelType, $Color* highlightOuter, $Color* highlightInner, $Color* shadowOuter, $Color* shadowInner) {
	$BevelBorder::init$(bevelType, highlightOuter, highlightInner, shadowOuter, shadowInner);
}

BorderUIResource$BevelBorderUIResource::BorderUIResource$BevelBorderUIResource() {
}

$Class* BorderUIResource$BevelBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$BevelBorderUIResource, name, initialize, &_BorderUIResource$BevelBorderUIResource_ClassInfo_, allocate$BorderUIResource$BevelBorderUIResource);
	return class$;
}

$Class* BorderUIResource$BevelBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax