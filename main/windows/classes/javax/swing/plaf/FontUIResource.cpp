#include <javax/swing/plaf/FontUIResource.h>

#include <java/awt/Font.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _FontUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(FontUIResource::*)($String*,int32_t,int32_t)>(&FontUIResource::init$))},
	{"<init>", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(FontUIResource::*)($Font*)>(&FontUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.FontUIResource",
	"java.awt.Font",
	"javax.swing.plaf.UIResource",
	nullptr,
	_FontUIResource_MethodInfo_
};

$Object* allocate$FontUIResource($Class* clazz) {
	return $of($alloc(FontUIResource));
}

int32_t FontUIResource::hashCode() {
	 return this->$Font::hashCode();
}

bool FontUIResource::equals(Object$* obj) {
	 return this->$Font::equals(obj);
}

$String* FontUIResource::toString() {
	 return this->$Font::toString();
}

$Object* FontUIResource::clone() {
	 return this->$Font::clone();
}

void FontUIResource::finalize() {
	this->$Font::finalize();
}

void FontUIResource::init$($String* name, int32_t style, int32_t size) {
	$Font::init$(name, style, size);
}

void FontUIResource::init$($Font* font) {
	$Font::init$(font);
}

FontUIResource::FontUIResource() {
}

$Class* FontUIResource::load$($String* name, bool initialize) {
	$loadClass(FontUIResource, name, initialize, &_FontUIResource_ClassInfo_, allocate$FontUIResource);
	return class$;
}

$Class* FontUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax