#include <javax/swing/text/StyleConstants$ColorConstants.h>

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
using $AttributeSet$ColorAttribute = ::javax::swing::text::AttributeSet$ColorAttribute;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyleConstants$ColorConstants_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleConstants$ColorConstants::*)($String*)>(&StyleConstants$ColorConstants::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleConstants$ColorConstants_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleConstants$ColorConstants", "javax.swing.text.StyleConstants", "ColorConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.AttributeSet$ColorAttribute", "javax.swing.text.AttributeSet", "ColorAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StyleConstants$ColorConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleConstants$ColorConstants",
	"javax.swing.text.StyleConstants",
	"javax.swing.text.AttributeSet$ColorAttribute,javax.swing.text.AttributeSet$CharacterAttribute",
	nullptr,
	_StyleConstants$ColorConstants_MethodInfo_,
	nullptr,
	nullptr,
	_StyleConstants$ColorConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleConstants"
};

$Object* allocate$StyleConstants$ColorConstants($Class* clazz) {
	return $of($alloc(StyleConstants$ColorConstants));
}

$String* StyleConstants$ColorConstants::toString() {
	 return this->$StyleConstants::toString();
}

int32_t StyleConstants$ColorConstants::hashCode() {
	 return this->$StyleConstants::hashCode();
}

bool StyleConstants$ColorConstants::equals(Object$* arg0) {
	 return this->$StyleConstants::equals(arg0);
}

$Object* StyleConstants$ColorConstants::clone() {
	 return this->$StyleConstants::clone();
}

void StyleConstants$ColorConstants::finalize() {
	this->$StyleConstants::finalize();
}

void StyleConstants$ColorConstants::init$($String* representation) {
	$StyleConstants::init$(representation);
}

StyleConstants$ColorConstants::StyleConstants$ColorConstants() {
}

$Class* StyleConstants$ColorConstants::load$($String* name, bool initialize) {
	$loadClass(StyleConstants$ColorConstants, name, initialize, &_StyleConstants$ColorConstants_ClassInfo_, allocate$StyleConstants$ColorConstants);
	return class$;
}

$Class* StyleConstants$ColorConstants::class$ = nullptr;

		} // text
	} // swing
} // javax