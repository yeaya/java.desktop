#include <javax/swing/plaf/ColorUIResource.h>

#include <java/awt/Color.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace swing {
		namespace plaf {

$Attribute ColorUIResource_Attribute_var$1[] = {
	{'s', "red"},
	{'s', "green"},
	{'s', "blue"},
	{'-'}
};

$NamedAttribute ColorUIResource_Attribute_var$0[] = {
	{"value", '[', ColorUIResource_Attribute_var$1},
	{}
};

$CompoundAttribute _ColorUIResource_MethodAnnotations_init$0[] = {
	{"Ljava/beans/ConstructorProperties;", ColorUIResource_Attribute_var$0},
	{}
};

$MethodInfo _ColorUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(ColorUIResource::*)(int32_t,int32_t,int32_t)>(&ColorUIResource::init$)), nullptr, nullptr, _ColorUIResource_MethodAnnotations_init$0},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ColorUIResource::*)(int32_t)>(&ColorUIResource::init$))},
	{"<init>", "(FFF)V", nullptr, $PUBLIC, $method(static_cast<void(ColorUIResource::*)(float,float,float)>(&ColorUIResource::init$))},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(ColorUIResource::*)($Color*)>(&ColorUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ColorUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.ColorUIResource",
	"java.awt.Color",
	"javax.swing.plaf.UIResource",
	nullptr,
	_ColorUIResource_MethodInfo_
};

$Object* allocate$ColorUIResource($Class* clazz) {
	return $of($alloc(ColorUIResource));
}

int32_t ColorUIResource::hashCode() {
	 return this->$Color::hashCode();
}

bool ColorUIResource::equals(Object$* obj) {
	 return this->$Color::equals(obj);
}

$String* ColorUIResource::toString() {
	 return this->$Color::toString();
}

$Object* ColorUIResource::clone() {
	 return this->$Color::clone();
}

void ColorUIResource::finalize() {
	this->$Color::finalize();
}

void ColorUIResource::init$(int32_t r, int32_t g, int32_t b) {
	$Color::init$(r, g, b);
}

void ColorUIResource::init$(int32_t rgb) {
	$Color::init$(rgb);
}

void ColorUIResource::init$(float r, float g, float b) {
	$Color::init$(r, g, b);
}

void ColorUIResource::init$($Color* c) {
	int32_t var$0 = $nc(c)->getRGB();
	$Color::init$(var$0, ((int32_t)(c->getRGB() & (uint32_t)(int32_t)0xFF000000)) != (int32_t)0xFF000000);
}

ColorUIResource::ColorUIResource() {
}

$Class* ColorUIResource::load$($String* name, bool initialize) {
	$loadClass(ColorUIResource, name, initialize, &_ColorUIResource_ClassInfo_, allocate$ColorUIResource);
	return class$;
}

$Class* ColorUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax