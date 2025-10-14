#include <javax/swing/plaf/BorderUIResource$TitledBorderUIResource.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
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
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute BorderUIResource$TitledBorderUIResource_Attribute_var$1[] = {
	{'s', "border"},
	{'s', "title"},
	{'s', "titleJustification"},
	{'s', "titlePosition"},
	{'s', "titleFont"},
	{'s', "titleColor"},
	{'-'}
};

$NamedAttribute BorderUIResource$TitledBorderUIResource_Attribute_var$0[] = {
	{"value", '[', BorderUIResource$TitledBorderUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _BorderUIResource$TitledBorderUIResource_MethodAnnotations_init$5[] = {
	{"Ljava/beans/ConstructorProperties;", BorderUIResource$TitledBorderUIResource_Attribute_var$0},
	{}
};

$MethodInfo _BorderUIResource$TitledBorderUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$TitledBorderUIResource::*)($String*)>(&BorderUIResource$TitledBorderUIResource::init$))},
	{"<init>", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$TitledBorderUIResource::*)($Border*)>(&BorderUIResource$TitledBorderUIResource::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$TitledBorderUIResource::*)($Border*,$String*)>(&BorderUIResource$TitledBorderUIResource::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$TitledBorderUIResource::*)($Border*,$String*,int32_t,int32_t)>(&BorderUIResource$TitledBorderUIResource::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$TitledBorderUIResource::*)($Border*,$String*,int32_t,int32_t,$Font*)>(&BorderUIResource$TitledBorderUIResource::init$))},
	{"<init>", "(Ljavax/swing/border/Border;Ljava/lang/String;IILjava/awt/Font;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(BorderUIResource$TitledBorderUIResource::*)($Border*,$String*,int32_t,int32_t,$Font*,$Color*)>(&BorderUIResource$TitledBorderUIResource::init$)), nullptr, nullptr, _BorderUIResource$TitledBorderUIResource_MethodAnnotations_init$5},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BorderUIResource$TitledBorderUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.BorderUIResource$TitledBorderUIResource", "javax.swing.plaf.BorderUIResource", "TitledBorderUIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BorderUIResource$TitledBorderUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.BorderUIResource$TitledBorderUIResource",
	"javax.swing.border.TitledBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BorderUIResource$TitledBorderUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BorderUIResource$TitledBorderUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.BorderUIResource"
};

$Object* allocate$BorderUIResource$TitledBorderUIResource($Class* clazz) {
	return $of($alloc(BorderUIResource$TitledBorderUIResource));
}

int32_t BorderUIResource$TitledBorderUIResource::hashCode() {
	 return this->$TitledBorder::hashCode();
}

bool BorderUIResource$TitledBorderUIResource::equals(Object$* arg0) {
	 return this->$TitledBorder::equals(arg0);
}

$Object* BorderUIResource$TitledBorderUIResource::clone() {
	 return this->$TitledBorder::clone();
}

$String* BorderUIResource$TitledBorderUIResource::toString() {
	 return this->$TitledBorder::toString();
}

void BorderUIResource$TitledBorderUIResource::finalize() {
	this->$TitledBorder::finalize();
}

void BorderUIResource$TitledBorderUIResource::init$($String* title) {
	$TitledBorder::init$(title);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border) {
	$TitledBorder::init$(border);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title) {
	$TitledBorder::init$(border, title);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition) {
	$TitledBorder::init$(border, title, titleJustification, titlePosition);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont) {
	$TitledBorder::init$(border, title, titleJustification, titlePosition, titleFont);
}

void BorderUIResource$TitledBorderUIResource::init$($Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, $Font* titleFont, $Color* titleColor) {
	$TitledBorder::init$(border, title, titleJustification, titlePosition, titleFont, titleColor);
}

BorderUIResource$TitledBorderUIResource::BorderUIResource$TitledBorderUIResource() {
}

$Class* BorderUIResource$TitledBorderUIResource::load$($String* name, bool initialize) {
	$loadClass(BorderUIResource$TitledBorderUIResource, name, initialize, &_BorderUIResource$TitledBorderUIResource_ClassInfo_, allocate$BorderUIResource$TitledBorderUIResource);
	return class$;
}

$Class* BorderUIResource$TitledBorderUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax