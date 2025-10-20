#include <javax/swing/text/html/HTMLEditorKit$InsertHRAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLTextAction.h>
#include <javax/swing/text/html/HTMLEditorKit$InsertHTMLTextAction.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef IMPLIED

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$HTMLTextAction = ::javax::swing::text::html::HTMLEditorKit$HTMLTextAction;
using $HTMLEditorKit$InsertHTMLTextAction = ::javax::swing::text::html::HTMLEditorKit$InsertHTMLTextAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLEditorKit$InsertHRAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HTMLEditorKit$InsertHRAction::*)()>(&HTMLEditorKit$InsertHRAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLEditorKit$InsertHRAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$InsertHRAction", "javax.swing.text.html.HTMLEditorKit", "InsertHRAction", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction", "javax.swing.text.html.HTMLEditorKit", "InsertHTMLTextAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HTMLEditorKit$InsertHRAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$InsertHRAction",
	"javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction",
	nullptr,
	nullptr,
	_HTMLEditorKit$InsertHRAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$InsertHRAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$InsertHRAction($Class* clazz) {
	return $of($alloc(HTMLEditorKit$InsertHRAction));
}

void HTMLEditorKit$InsertHRAction::init$() {
	$init($HTML$Tag);
	$HTMLEditorKit$InsertHTMLTextAction::init$("InsertHR"_s, "<hr>"_s, nullptr, $HTML$Tag::IMPLIED, nullptr, nullptr, false);
}

void HTMLEditorKit$InsertHRAction::actionPerformed($ActionEvent* ae) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(ae));
	if (editor != nullptr) {
		$var($HTMLDocument, doc, getHTMLDocument(editor));
		int32_t offset = editor->getSelectionStart();
		$var($Element, paragraph, $nc(doc)->getParagraphElement(offset));
		if ($nc(paragraph)->getParentElement() != nullptr) {
			$init($StyleConstants);
			$set(this, parentTag, $cast($HTML$Tag, $nc($($nc($(paragraph->getParentElement()))->getAttributes()))->getAttribute($StyleConstants::NameAttribute)));
			$HTMLEditorKit$InsertHTMLTextAction::actionPerformed(ae);
		}
	}
}

HTMLEditorKit$InsertHRAction::HTMLEditorKit$InsertHRAction() {
}

$Class* HTMLEditorKit$InsertHRAction::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$InsertHRAction, name, initialize, &_HTMLEditorKit$InsertHRAction_ClassInfo_, allocate$HTMLEditorKit$InsertHRAction);
	return class$;
}

$Class* HTMLEditorKit$InsertHRAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax