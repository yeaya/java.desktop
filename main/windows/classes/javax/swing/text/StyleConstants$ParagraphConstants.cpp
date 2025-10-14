#include <javax/swing/text/StyleConstants$ParagraphConstants.h>

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
using $AttributeSet$ParagraphAttribute = ::javax::swing::text::AttributeSet$ParagraphAttribute;
using $StyleConstants = ::javax::swing::text::StyleConstants;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyleConstants$ParagraphConstants_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(StyleConstants$ParagraphConstants::*)($String*)>(&StyleConstants$ParagraphConstants::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleConstants$ParagraphConstants_InnerClassesInfo_[] = {
	{"javax.swing.text.StyleConstants$ParagraphConstants", "javax.swing.text.StyleConstants", "ParagraphConstants", $PUBLIC | $STATIC},
	{"javax.swing.text.AttributeSet$ParagraphAttribute", "javax.swing.text.AttributeSet", "ParagraphAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StyleConstants$ParagraphConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.StyleConstants$ParagraphConstants",
	"javax.swing.text.StyleConstants",
	"javax.swing.text.AttributeSet$ParagraphAttribute",
	nullptr,
	_StyleConstants$ParagraphConstants_MethodInfo_,
	nullptr,
	nullptr,
	_StyleConstants$ParagraphConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyleConstants"
};

$Object* allocate$StyleConstants$ParagraphConstants($Class* clazz) {
	return $of($alloc(StyleConstants$ParagraphConstants));
}

$String* StyleConstants$ParagraphConstants::toString() {
	 return this->$StyleConstants::toString();
}

int32_t StyleConstants$ParagraphConstants::hashCode() {
	 return this->$StyleConstants::hashCode();
}

bool StyleConstants$ParagraphConstants::equals(Object$* arg0) {
	 return this->$StyleConstants::equals(arg0);
}

$Object* StyleConstants$ParagraphConstants::clone() {
	 return this->$StyleConstants::clone();
}

void StyleConstants$ParagraphConstants::finalize() {
	this->$StyleConstants::finalize();
}

void StyleConstants$ParagraphConstants::init$($String* representation) {
	$StyleConstants::init$(representation);
}

StyleConstants$ParagraphConstants::StyleConstants$ParagraphConstants() {
}

$Class* StyleConstants$ParagraphConstants::load$($String* name, bool initialize) {
	$loadClass(StyleConstants$ParagraphConstants, name, initialize, &_StyleConstants$ParagraphConstants_ClassInfo_, allocate$StyleConstants$ParagraphConstants);
	return class$;
}

$Class* StyleConstants$ParagraphConstants::class$ = nullptr;

		} // text
	} // swing
} // javax