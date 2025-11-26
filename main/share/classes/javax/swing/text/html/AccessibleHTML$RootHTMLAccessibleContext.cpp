#include <javax/swing/text/html/AccessibleHTML$RootHTMLAccessibleContext.h>

#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

#undef TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JEditorPane = ::javax::swing::JEditorPane;
using $Document = ::javax::swing::text::Document;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$RootHTMLAccessibleContext_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$RootHTMLAccessibleContext, this$0)},
	{}
};

$MethodInfo _AccessibleHTML$RootHTMLAccessibleContext_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleHTML$RootHTMLAccessibleContext::*)($AccessibleHTML*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$RootHTMLAccessibleContext::init$))},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$RootHTMLAccessibleContext_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "RootHTMLAccessibleContext", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleHTML$RootHTMLAccessibleContext_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$RootHTMLAccessibleContext",
	"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext",
	nullptr,
	_AccessibleHTML$RootHTMLAccessibleContext_FieldInfo_,
	_AccessibleHTML$RootHTMLAccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$RootHTMLAccessibleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$RootHTMLAccessibleContext($Class* clazz) {
	return $of($alloc(AccessibleHTML$RootHTMLAccessibleContext));
}

void AccessibleHTML$RootHTMLAccessibleContext::init$($AccessibleHTML* this$0, $AccessibleHTML$ElementInfo* elementInfo) {
	$set(this, this$0, this$0);
	$AccessibleHTML$HTMLAccessibleContext::init$(this$0, elementInfo);
}

$String* AccessibleHTML$RootHTMLAccessibleContext::getAccessibleName() {
	if (this->this$0->model != nullptr) {
		$init($Document);
		return $cast($String, $nc(this->this$0->model)->getProperty($Document::TitleProperty));
	} else {
		return nullptr;
	}
}

$String* AccessibleHTML$RootHTMLAccessibleContext::getAccessibleDescription() {
	return $nc(this->this$0->editor)->getContentType();
}

$AccessibleRole* AccessibleHTML$RootHTMLAccessibleContext::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TEXT;
}

AccessibleHTML$RootHTMLAccessibleContext::AccessibleHTML$RootHTMLAccessibleContext() {
}

$Class* AccessibleHTML$RootHTMLAccessibleContext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$RootHTMLAccessibleContext, name, initialize, &_AccessibleHTML$RootHTMLAccessibleContext_ClassInfo_, allocate$AccessibleHTML$RootHTMLAccessibleContext);
	return class$;
}

$Class* AccessibleHTML$RootHTMLAccessibleContext::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax