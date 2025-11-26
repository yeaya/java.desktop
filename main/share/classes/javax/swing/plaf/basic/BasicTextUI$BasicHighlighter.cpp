#include <javax/swing/plaf/basic/BasicTextUI$BasicHighlighter.h>

#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextUI$BasicHighlighter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextUI$BasicHighlighter::*)()>(&BasicTextUI$BasicHighlighter::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$BasicHighlighter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$BasicHighlighter", "javax.swing.plaf.basic.BasicTextUI", "BasicHighlighter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicTextUI$BasicHighlighter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$BasicHighlighter",
	"javax.swing.text.DefaultHighlighter",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicTextUI$BasicHighlighter_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$BasicHighlighter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$BasicHighlighter($Class* clazz) {
	return $of($alloc(BasicTextUI$BasicHighlighter));
}

int32_t BasicTextUI$BasicHighlighter::hashCode() {
	 return this->$DefaultHighlighter::hashCode();
}

bool BasicTextUI$BasicHighlighter::equals(Object$* arg0) {
	 return this->$DefaultHighlighter::equals(arg0);
}

$Object* BasicTextUI$BasicHighlighter::clone() {
	 return this->$DefaultHighlighter::clone();
}

$String* BasicTextUI$BasicHighlighter::toString() {
	 return this->$DefaultHighlighter::toString();
}

void BasicTextUI$BasicHighlighter::finalize() {
	this->$DefaultHighlighter::finalize();
}

void BasicTextUI$BasicHighlighter::init$() {
	$DefaultHighlighter::init$();
}

BasicTextUI$BasicHighlighter::BasicTextUI$BasicHighlighter() {
}

$Class* BasicTextUI$BasicHighlighter::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$BasicHighlighter, name, initialize, &_BasicTextUI$BasicHighlighter_ClassInfo_, allocate$BasicTextUI$BasicHighlighter);
	return class$;
}

$Class* BasicTextUI$BasicHighlighter::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax