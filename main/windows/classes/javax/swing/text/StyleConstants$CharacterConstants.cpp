#include <javax/swing/text/StyleConstants$CharacterConstants.h>

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
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyleConstants$CharacterConstants_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleConstants$CharacterConstants::*)($String*)>(&StyleConstants$CharacterConstants::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleConstants$CharacterConstants_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleConstants$CharacterConstants", "javax.swing.text.StyleConstants", "CharacterConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StyleConstants$CharacterConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleConstants$CharacterConstants",
	"javax.swing.text.StyleConstants",
	"javax.swing.text.AttributeSet$CharacterAttribute",
	nullptr,
	_StyleConstants$CharacterConstants_MethodInfo_,
	nullptr,
	nullptr,
	_StyleConstants$CharacterConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleConstants"
};

$Object* allocate$StyleConstants$CharacterConstants($Class* clazz) {
	return $of($alloc(StyleConstants$CharacterConstants));
}

$String* StyleConstants$CharacterConstants::toString() {
	 return this->$StyleConstants::toString();
}

int32_t StyleConstants$CharacterConstants::hashCode() {
	 return this->$StyleConstants::hashCode();
}

bool StyleConstants$CharacterConstants::equals(Object$* arg0) {
	 return this->$StyleConstants::equals(arg0);
}

$Object* StyleConstants$CharacterConstants::clone() {
	 return this->$StyleConstants::clone();
}

void StyleConstants$CharacterConstants::finalize() {
	this->$StyleConstants::finalize();
}

void StyleConstants$CharacterConstants::init$($String* representation) {
	$StyleConstants::init$(representation);
}

StyleConstants$CharacterConstants::StyleConstants$CharacterConstants() {
}

$Class* StyleConstants$CharacterConstants::load$($String* name, bool initialize) {
	$loadClass(StyleConstants$CharacterConstants, name, initialize, &_StyleConstants$CharacterConstants_ClassInfo_, allocate$StyleConstants$CharacterConstants);
	return class$;
}

$Class* StyleConstants$CharacterConstants::class$ = nullptr;

		} // text
	} // swing
} // javax