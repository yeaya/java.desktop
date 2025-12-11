#include <javax/swing/plaf/basic/BasicComboBoxEditor$BorderlessTextField.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $Border = ::javax::swing::border::Border;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicComboBoxEditor$BorderlessTextField_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxEditor$BorderlessTextField::*)($String*,int32_t)>(&BasicComboBoxEditor$BorderlessTextField::init$))},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxEditor$BorderlessTextField_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxEditor$BorderlessTextField", "javax.swing.plaf.basic.BasicComboBoxEditor", "BorderlessTextField", $STATIC},
	{}
};

$ClassInfo _BasicComboBoxEditor$BorderlessTextField_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxEditor$BorderlessTextField",
	"javax.swing.JTextField",
	nullptr,
	nullptr,
	_BasicComboBoxEditor$BorderlessTextField_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxEditor$BorderlessTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxEditor"
};

$Object* allocate$BasicComboBoxEditor$BorderlessTextField($Class* clazz) {
	return $of($alloc(BasicComboBoxEditor$BorderlessTextField));
}

void BasicComboBoxEditor$BorderlessTextField::init$($String* value, int32_t n) {
	$JTextField::init$(value, n);
}

void BasicComboBoxEditor$BorderlessTextField::setText($String* s) {
	if ($nc($(getText()))->equals(s)) {
		return;
	}
	$JTextField::setText(s);
}

void BasicComboBoxEditor$BorderlessTextField::setBorder($Border* b) {
	if (!($instanceOf($BasicComboBoxEditor$UIResource, b))) {
		$JTextField::setBorder(b);
	}
}

BasicComboBoxEditor$BorderlessTextField::BasicComboBoxEditor$BorderlessTextField() {
}

$Class* BasicComboBoxEditor$BorderlessTextField::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxEditor$BorderlessTextField, name, initialize, &_BasicComboBoxEditor$BorderlessTextField_ClassInfo_, allocate$BasicComboBoxEditor$BorderlessTextField);
	return class$;
}

$Class* BasicComboBoxEditor$BorderlessTextField::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax