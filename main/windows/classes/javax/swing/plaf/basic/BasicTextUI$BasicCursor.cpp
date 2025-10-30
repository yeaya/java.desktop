#include <javax/swing/plaf/basic/BasicTextUI$BasicCursor.h>

#include <java/awt/Cursor.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextUI$BasicCursor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(BasicTextUI$BasicCursor::*)(int32_t)>(&BasicTextUI$BasicCursor::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicTextUI$BasicCursor::*)($String*)>(&BasicTextUI$BasicCursor::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$BasicCursor_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$BasicCursor", "javax.swing.plaf.basic.BasicTextUI", "BasicCursor", $STATIC},
	{}
};

$ClassInfo _BasicTextUI$BasicCursor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$BasicCursor",
	"java.awt.Cursor",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicTextUI$BasicCursor_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$BasicCursor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$BasicCursor($Class* clazz) {
	return $of($alloc(BasicTextUI$BasicCursor));
}

$String* BasicTextUI$BasicCursor::toString() {
	 return this->$Cursor::toString();
}

int32_t BasicTextUI$BasicCursor::hashCode() {
	 return this->$Cursor::hashCode();
}

bool BasicTextUI$BasicCursor::equals(Object$* arg0) {
	 return this->$Cursor::equals(arg0);
}

$Object* BasicTextUI$BasicCursor::clone() {
	 return this->$Cursor::clone();
}

void BasicTextUI$BasicCursor::finalize() {
	this->$Cursor::finalize();
}

void BasicTextUI$BasicCursor::init$(int32_t type) {
	$Cursor::init$(type);
}

void BasicTextUI$BasicCursor::init$($String* name) {
	$Cursor::init$(name);
}

BasicTextUI$BasicCursor::BasicTextUI$BasicCursor() {
}

$Class* BasicTextUI$BasicCursor::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$BasicCursor, name, initialize, &_BasicTextUI$BasicCursor_ClassInfo_, allocate$BasicTextUI$BasicCursor);
	return class$;
}

$Class* BasicTextUI$BasicCursor::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax