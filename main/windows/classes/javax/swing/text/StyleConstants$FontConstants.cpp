#include <javax/swing/text/StyleConstants$FontConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet$CharacterAttribute = ::javax::swing::text::AttributeSet$CharacterAttribute;
using $AttributeSet$FontAttribute = ::javax::swing::text::AttributeSet$FontAttribute;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyleConstants$FontConstants_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleConstants$FontConstants::*)($String*)>(&StyleConstants$FontConstants::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleConstants$FontConstants_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleConstants$FontConstants", "javax.swing.text.StyleConstants", "FontConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.AttributeSet$FontAttribute", "javax.swing.text.AttributeSet", "FontAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StyleConstants$FontConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleConstants$FontConstants",
	"javax.swing.text.StyleConstants",
	"javax.swing.text.AttributeSet$FontAttribute,javax.swing.text.AttributeSet$CharacterAttribute",
	nullptr,
	_StyleConstants$FontConstants_MethodInfo_,
	nullptr,
	nullptr,
	_StyleConstants$FontConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleConstants"
};

$Object* allocate$StyleConstants$FontConstants($Class* clazz) {
	return $of($alloc(StyleConstants$FontConstants));
}

$String* StyleConstants$FontConstants::toString() {
	 return this->$StyleConstants::toString();
}

int32_t StyleConstants$FontConstants::hashCode() {
	 return this->$StyleConstants::hashCode();
}

bool StyleConstants$FontConstants::equals(Object$* arg0) {
	 return this->$StyleConstants::equals(arg0);
}

$Object* StyleConstants$FontConstants::clone() {
	 return this->$StyleConstants::clone();
}

void StyleConstants$FontConstants::finalize() {
	this->$StyleConstants::finalize();
}

void StyleConstants$FontConstants::init$($String* representation) {
	$StyleConstants::init$(representation);
}

StyleConstants$FontConstants::StyleConstants$FontConstants() {
}

$Class* StyleConstants$FontConstants::load$($String* name, bool initialize) {
	$loadClass(StyleConstants$FontConstants, name, initialize, &_StyleConstants$FontConstants_ClassInfo_, allocate$StyleConstants$FontConstants);
	return class$;
}

$Class* StyleConstants$FontConstants::class$ = nullptr;

		} // text
	} // swing
} // javax