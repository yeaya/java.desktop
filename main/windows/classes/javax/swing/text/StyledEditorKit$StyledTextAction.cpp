#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyledEditorKit$StyledTextAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StyledEditorKit$StyledTextAction::*)($String*)>(&StyledEditorKit$StyledTextAction::init$))},
	{"getEditor", "(Ljava/awt/event/ActionEvent;)Ljavax/swing/JEditorPane;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$JEditorPane*(StyledEditorKit$StyledTextAction::*)($ActionEvent*)>(&StyledEditorKit$StyledTextAction::getEditor))},
	{"getStyledDocument", "(Ljavax/swing/JEditorPane;)Ljavax/swing/text/StyledDocument;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$StyledDocument*(StyledEditorKit$StyledTextAction::*)($JEditorPane*)>(&StyledEditorKit$StyledTextAction::getStyledDocument))},
	{"getStyledEditorKit", "(Ljavax/swing/JEditorPane;)Ljavax/swing/text/StyledEditorKit;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$StyledEditorKit*(StyledEditorKit$StyledTextAction::*)($JEditorPane*)>(&StyledEditorKit$StyledTextAction::getStyledEditorKit))},
	{"setCharacterAttributes", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/AttributeSet;Z)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(StyledEditorKit$StyledTextAction::*)($JEditorPane*,$AttributeSet*,bool)>(&StyledEditorKit$StyledTextAction::setCharacterAttributes))},
	{"setParagraphAttributes", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/AttributeSet;Z)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(StyledEditorKit$StyledTextAction::*)($JEditorPane*,$AttributeSet*,bool)>(&StyledEditorKit$StyledTextAction::setParagraphAttributes))},
	{}
};

$InnerClassInfo _StyledEditorKit$StyledTextAction_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledEditorKit$StyledTextAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.StyledEditorKit$StyledTextAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_StyledEditorKit$StyledTextAction_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$StyledTextAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$StyledTextAction($Class* clazz) {
	return $of($alloc(StyledEditorKit$StyledTextAction));
}

void StyledEditorKit$StyledTextAction::init$($String* nm) {
	$TextAction::init$(nm);
}

$JEditorPane* StyledEditorKit$StyledTextAction::getEditor($ActionEvent* e) {
	$var($JTextComponent, tcomp, getTextComponent(e));
	if ($instanceOf($JEditorPane, tcomp)) {
		return $cast($JEditorPane, tcomp);
	}
	return nullptr;
}

$StyledDocument* StyledEditorKit$StyledTextAction::getStyledDocument($JEditorPane* e) {
	$var($Document, d, $nc(e)->getDocument());
	if ($instanceOf($StyledDocument, d)) {
		return $cast($StyledDocument, d);
	}
	$throwNew($IllegalArgumentException, "document must be StyledDocument"_s);
}

$StyledEditorKit* StyledEditorKit$StyledTextAction::getStyledEditorKit($JEditorPane* e) {
	$var($EditorKit, k, $nc(e)->getEditorKit());
	if ($instanceOf($StyledEditorKit, k)) {
		return $cast($StyledEditorKit, k);
	}
	$throwNew($IllegalArgumentException, "EditorKit must be StyledEditorKit"_s);
}

void StyledEditorKit$StyledTextAction::setCharacterAttributes($JEditorPane* editor, $AttributeSet* attr, bool replace) {
	$useLocalCurrentObjectStackCache();
	int32_t p0 = $nc(editor)->getSelectionStart();
	int32_t p1 = editor->getSelectionEnd();
	if (p0 != p1) {
		$var($StyledDocument, doc, getStyledDocument(editor));
		$nc(doc)->setCharacterAttributes(p0, p1 - p0, attr, replace);
	}
	$var($StyledEditorKit, k, getStyledEditorKit(editor));
	$var($MutableAttributeSet, inputAttributes, $nc(k)->getInputAttributes());
	if (replace) {
		$nc(inputAttributes)->removeAttributes(static_cast<$AttributeSet*>(inputAttributes));
	}
	$nc(inputAttributes)->addAttributes(attr);
}

void StyledEditorKit$StyledTextAction::setParagraphAttributes($JEditorPane* editor, $AttributeSet* attr, bool replace) {
	int32_t p0 = $nc(editor)->getSelectionStart();
	int32_t p1 = editor->getSelectionEnd();
	$var($StyledDocument, doc, getStyledDocument(editor));
	$nc(doc)->setParagraphAttributes(p0, p1 - p0, attr, replace);
}

StyledEditorKit$StyledTextAction::StyledEditorKit$StyledTextAction() {
}

$Class* StyledEditorKit$StyledTextAction::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$StyledTextAction, name, initialize, &_StyledEditorKit$StyledTextAction_ClassInfo_, allocate$StyledEditorKit$StyledTextAction);
	return class$;
}

$Class* StyledEditorKit$StyledTextAction::class$ = nullptr;

		} // text
	} // swing
} // javax