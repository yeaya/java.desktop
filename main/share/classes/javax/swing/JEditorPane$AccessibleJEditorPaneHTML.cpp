#include <javax/swing/JEditorPane$AccessibleJEditorPaneHTML.h>

#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Point.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$AccessibleJEditorPane = ::javax::swing::JEditorPane$AccessibleJEditorPane;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$AccessibleJEditorPaneHTML_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$AccessibleJEditorPaneHTML, this$0)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(JEditorPane$AccessibleJEditorPaneHTML, accessibleContext)},
	{}
};

$MethodInfo _JEditorPane$AccessibleJEditorPaneHTML_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane;)V", nullptr, $PROTECTED, $method(static_cast<void(JEditorPane$AccessibleJEditorPaneHTML::*)($JEditorPane*)>(&JEditorPane$AccessibleJEditorPaneHTML::init$))},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JEditorPane$AccessibleJEditorPaneHTML_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$AccessibleJEditorPaneHTML", "javax.swing.JEditorPane", "AccessibleJEditorPaneHTML", $PROTECTED},
	{"javax.swing.JEditorPane$AccessibleJEditorPane", "javax.swing.JEditorPane", "AccessibleJEditorPane", $PROTECTED},
	{}
};

$ClassInfo _JEditorPane$AccessibleJEditorPaneHTML_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JEditorPane$AccessibleJEditorPaneHTML",
	"javax.swing.JEditorPane$AccessibleJEditorPane",
	nullptr,
	_JEditorPane$AccessibleJEditorPaneHTML_FieldInfo_,
	_JEditorPane$AccessibleJEditorPaneHTML_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$AccessibleJEditorPaneHTML_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$AccessibleJEditorPaneHTML($Class* clazz) {
	return $of($alloc(JEditorPane$AccessibleJEditorPaneHTML));
}

$AccessibleText* JEditorPane$AccessibleJEditorPaneHTML::getAccessibleText() {
	return static_cast<$AccessibleText*>(static_cast<$AccessibleEditableText*>(static_cast<$JTextComponent$AccessibleJTextComponent*>(static_cast<$JEditorPane$AccessibleJEditorPane*>($new($JEditorPane$JEditorPaneAccessibleHypertextSupport, this->this$0)))));
}

void JEditorPane$AccessibleJEditorPaneHTML::init$($JEditorPane* this$0) {
	$set(this, this$0, this$0);
	$JEditorPane$AccessibleJEditorPane::init$(this$0);
	$var($HTMLEditorKit, kit, $cast($HTMLEditorKit, this$0->getEditorKit()));
	$set(this, accessibleContext, $nc(kit)->getAccessibleContext());
}

int32_t JEditorPane$AccessibleJEditorPaneHTML::getAccessibleChildrenCount() {
	if (this->accessibleContext != nullptr) {
		return $nc(this->accessibleContext)->getAccessibleChildrenCount();
	} else {
		return 0;
	}
}

$Accessible* JEditorPane$AccessibleJEditorPaneHTML::getAccessibleChild(int32_t i) {
	if (this->accessibleContext != nullptr) {
		return $nc(this->accessibleContext)->getAccessibleChild(i);
	} else {
		return nullptr;
	}
}

$Accessible* JEditorPane$AccessibleJEditorPaneHTML::getAccessibleAt($Point* p) {
	if (this->accessibleContext != nullptr && p != nullptr) {
		try {
			$var($AccessibleComponent, acomp, $nc(this->accessibleContext)->getAccessibleComponent());
			if (acomp != nullptr) {
				return acomp->getAccessibleAt(p);
			} else {
				return nullptr;
			}
		} catch ($IllegalComponentStateException& e) {
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

JEditorPane$AccessibleJEditorPaneHTML::JEditorPane$AccessibleJEditorPaneHTML() {
}

$Class* JEditorPane$AccessibleJEditorPaneHTML::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$AccessibleJEditorPaneHTML, name, initialize, &_JEditorPane$AccessibleJEditorPaneHTML_ClassInfo_, allocate$JEditorPane$AccessibleJEditorPaneHTML);
	return class$;
}

$Class* JEditorPane$AccessibleJEditorPaneHTML::class$ = nullptr;

	} // swing
} // javax