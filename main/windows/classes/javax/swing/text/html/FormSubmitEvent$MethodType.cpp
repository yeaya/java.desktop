#include <javax/swing/text/html/FormSubmitEvent$MethodType.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/FormSubmitEvent.h>
#include <jcpp.h>

#undef GET
#undef POST

using $FormSubmitEvent$MethodTypeArray = $Array<::javax::swing::text::html::FormSubmitEvent$MethodType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FormSubmitEvent = ::javax::swing::text::html::FormSubmitEvent;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _FormSubmitEvent$MethodType_FieldInfo_[] = {
	{"GET", "Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormSubmitEvent$MethodType, GET)},
	{"POST", "Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(FormSubmitEvent$MethodType, POST)},
	{"$VALUES", "[Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(FormSubmitEvent$MethodType, $VALUES)},
	{}
};

$MethodInfo _FormSubmitEvent$MethodType_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$FormSubmitEvent$MethodTypeArray*(*)()>(&FormSubmitEvent$MethodType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(FormSubmitEvent$MethodType::*)($String*,int32_t)>(&FormSubmitEvent$MethodType::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FormSubmitEvent$MethodType*(*)($String*)>(&FormSubmitEvent$MethodType::valueOf))},
	{"values", "()[Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FormSubmitEvent$MethodTypeArray*(*)()>(&FormSubmitEvent$MethodType::values))},
	{}
};

$InnerClassInfo _FormSubmitEvent$MethodType_InnerClassesInfo_[] = {
	{"javax.swing.text.html.FormSubmitEvent$MethodType", "javax.swing.text.html.FormSubmitEvent", "MethodType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FormSubmitEvent$MethodType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.text.html.FormSubmitEvent$MethodType",
	"java.lang.Enum",
	nullptr,
	_FormSubmitEvent$MethodType_FieldInfo_,
	_FormSubmitEvent$MethodType_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/text/html/FormSubmitEvent$MethodType;>;",
	nullptr,
	_FormSubmitEvent$MethodType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.FormSubmitEvent"
};

$Object* allocate$FormSubmitEvent$MethodType($Class* clazz) {
	return $of($alloc(FormSubmitEvent$MethodType));
}


FormSubmitEvent$MethodType* FormSubmitEvent$MethodType::GET = nullptr;

FormSubmitEvent$MethodType* FormSubmitEvent$MethodType::POST = nullptr;
$FormSubmitEvent$MethodTypeArray* FormSubmitEvent$MethodType::$VALUES = nullptr;

$FormSubmitEvent$MethodTypeArray* FormSubmitEvent$MethodType::$values() {
	$init(FormSubmitEvent$MethodType);
	return $new($FormSubmitEvent$MethodTypeArray, {
		FormSubmitEvent$MethodType::GET,
		FormSubmitEvent$MethodType::POST
	});
}

$FormSubmitEvent$MethodTypeArray* FormSubmitEvent$MethodType::values() {
	$init(FormSubmitEvent$MethodType);
	return $cast($FormSubmitEvent$MethodTypeArray, FormSubmitEvent$MethodType::$VALUES->clone());
}

FormSubmitEvent$MethodType* FormSubmitEvent$MethodType::valueOf($String* name) {
	$init(FormSubmitEvent$MethodType);
	return $cast(FormSubmitEvent$MethodType, $Enum::valueOf(FormSubmitEvent$MethodType::class$, name));
}

void FormSubmitEvent$MethodType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$FormSubmitEvent$MethodType($Class* class$) {
	$assignStatic(FormSubmitEvent$MethodType::GET, $new(FormSubmitEvent$MethodType, "GET"_s, 0));
	$assignStatic(FormSubmitEvent$MethodType::POST, $new(FormSubmitEvent$MethodType, "POST"_s, 1));
	$assignStatic(FormSubmitEvent$MethodType::$VALUES, FormSubmitEvent$MethodType::$values());
}

FormSubmitEvent$MethodType::FormSubmitEvent$MethodType() {
}

$Class* FormSubmitEvent$MethodType::load$($String* name, bool initialize) {
	$loadClass(FormSubmitEvent$MethodType, name, initialize, &_FormSubmitEvent$MethodType_ClassInfo_, clinit$FormSubmitEvent$MethodType, allocate$FormSubmitEvent$MethodType);
	return class$;
}

$Class* FormSubmitEvent$MethodType::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax