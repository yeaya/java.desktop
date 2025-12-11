#include <javax/swing/text/StyleContext$FontKey.h>

#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StyleContext$FontKey_FieldInfo_[] = {
	{"family", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StyleContext$FontKey, family)},
	{"style", "I", nullptr, $PRIVATE, $field(StyleContext$FontKey, style)},
	{"size", "I", nullptr, $PRIVATE, $field(StyleContext$FontKey, size)},
	{}
};

$MethodInfo _StyleContext$FontKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(StyleContext$FontKey::*)($String*,int32_t,int32_t)>(&StyleContext$FontKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleContext$FontKey_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleContext$FontKey", "javax.swing.text.StyleContext", "FontKey", $STATIC},
	{}
};

$ClassInfo _StyleContext$FontKey_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyleContext$FontKey",
	"java.lang.Object",
	nullptr,
	_StyleContext$FontKey_FieldInfo_,
	_StyleContext$FontKey_MethodInfo_,
	nullptr,
	nullptr,
	_StyleContext$FontKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleContext"
};

$Object* allocate$StyleContext$FontKey($Class* clazz) {
	return $of($alloc(StyleContext$FontKey));
}

void StyleContext$FontKey::init$($String* family, int32_t style, int32_t size) {
	setValue(family, style, size);
}

void StyleContext$FontKey::setValue($String* family, int32_t style, int32_t size) {
	$set(this, family, (family != nullptr) ? $nc(family)->intern() : ($String*)nullptr);
	this->style = style;
	this->size = size;
}

int32_t StyleContext$FontKey::hashCode() {
	int32_t fhash = (this->family != nullptr) ? $nc(this->family)->hashCode() : 0;
	return (fhash ^ this->style) ^ this->size;
}

bool StyleContext$FontKey::equals(Object$* obj) {
	if ($instanceOf(StyleContext$FontKey, obj)) {
		$var(StyleContext$FontKey, font, $cast(StyleContext$FontKey, obj));
		return (this->size == $nc(font)->size) && (this->style == font->style) && (this->family == font->family);
	}
	return false;
}

StyleContext$FontKey::StyleContext$FontKey() {
}

$Class* StyleContext$FontKey::load$($String* name, bool initialize) {
	$loadClass(StyleContext$FontKey, name, initialize, &_StyleContext$FontKey_ClassInfo_, allocate$StyleContext$FontKey);
	return class$;
}

$Class* StyleContext$FontKey::class$ = nullptr;

		} // text
	} // swing
} // javax