#include <javax/swing/plaf/basic/BasicTextUI$BasicCaret.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextUI$BasicCaret_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextUI$BasicCaret::*)()>(&BasicTextUI$BasicCaret::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$BasicCaret_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$BasicCaret", "javax.swing.plaf.basic.BasicTextUI", "BasicCaret", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicTextUI$BasicCaret_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$BasicCaret",
	"javax.swing.text.DefaultCaret",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicTextUI$BasicCaret_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$BasicCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$BasicCaret($Class* clazz) {
	return $of($alloc(BasicTextUI$BasicCaret));
}

bool BasicTextUI$BasicCaret::equals(Object$* obj) {
	 return this->$DefaultCaret::equals(obj);
}

$String* BasicTextUI$BasicCaret::toString() {
	 return this->$DefaultCaret::toString();
}

int32_t BasicTextUI$BasicCaret::hashCode() {
	 return this->$DefaultCaret::hashCode();
}

$Object* BasicTextUI$BasicCaret::clone() {
	 return this->$DefaultCaret::clone();
}

void BasicTextUI$BasicCaret::finalize() {
	this->$DefaultCaret::finalize();
}

void BasicTextUI$BasicCaret::init$() {
	$DefaultCaret::init$();
}

BasicTextUI$BasicCaret::BasicTextUI$BasicCaret() {
}

$Class* BasicTextUI$BasicCaret::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$BasicCaret, name, initialize, &_BasicTextUI$BasicCaret_ClassInfo_, allocate$BasicTextUI$BasicCaret);
	return class$;
}

$Class* BasicTextUI$BasicCaret::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax