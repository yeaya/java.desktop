#include <javax/swing/text/html/HTMLEditorKit$InsertHTMLTextAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLTextAction.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$HTMLTextAction = ::javax::swing::text::html::HTMLEditorKit$HTMLTextAction;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$CompoundAttribute _HTMLEditorKit$InsertHTMLTextAction_MethodAnnotations_insertAtBoundry6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _HTMLEditorKit$InsertHTMLTextAction_FieldInfo_[] = {
	{"html", "Ljava/lang/String;", nullptr, $PROTECTED, $field(HTMLEditorKit$InsertHTMLTextAction, html)},
	{"parentTag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PROTECTED, $field(HTMLEditorKit$InsertHTMLTextAction, parentTag)},
	{"addTag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PROTECTED, $field(HTMLEditorKit$InsertHTMLTextAction, addTag)},
	{"alternateParentTag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PROTECTED, $field(HTMLEditorKit$InsertHTMLTextAction, alternateParentTag)},
	{"alternateAddTag", "Ljavax/swing/text/html/HTML$Tag;", nullptr, $PROTECTED, $field(HTMLEditorKit$InsertHTMLTextAction, alternateAddTag)},
	{"adjustSelection", "Z", nullptr, 0, $field(HTMLEditorKit$InsertHTMLTextAction, adjustSelection$)},
	{}
};

$MethodInfo _HTMLEditorKit$InsertHTMLTextAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$InsertHTMLTextAction::*)($String*,$String*,$HTML$Tag*,$HTML$Tag*)>(&HTMLEditorKit$InsertHTMLTextAction::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKit$InsertHTMLTextAction::*)($String*,$String*,$HTML$Tag*,$HTML$Tag*,$HTML$Tag*,$HTML$Tag*)>(&HTMLEditorKit$InsertHTMLTextAction::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;Z)V", nullptr, 0, $method(static_cast<void(HTMLEditorKit$InsertHTMLTextAction::*)($String*,$String*,$HTML$Tag*,$HTML$Tag*,$HTML$Tag*,$HTML$Tag*,bool)>(&HTMLEditorKit$InsertHTMLTextAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"adjustSelection", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;II)V", nullptr, 0},
	{"insertAtBoundary", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;ILjavax/swing/text/Element;Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PROTECTED},
	{"insertAtBoundry", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;ILjavax/swing/text/Element;Ljava/lang/String;Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _HTMLEditorKit$InsertHTMLTextAction_MethodAnnotations_insertAtBoundry6},
	{"insertHTML", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;ILjava/lang/String;IILjavax/swing/text/html/HTML$Tag;)V", nullptr, $PROTECTED},
	{"insertIntoTag", "(Ljavax/swing/JEditorPane;Ljavax/swing/text/html/HTMLDocument;ILjavax/swing/text/html/HTML$Tag;Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _HTMLEditorKit$InsertHTMLTextAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction", "javax.swing.text.html.HTMLEditorKit", "InsertHTMLTextAction", $PUBLIC | $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$HTMLTextAction", "javax.swing.text.html.HTMLEditorKit", "HTMLTextAction", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HTMLEditorKit$InsertHTMLTextAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLEditorKit$InsertHTMLTextAction",
	"javax.swing.text.html.HTMLEditorKit$HTMLTextAction",
	nullptr,
	_HTMLEditorKit$InsertHTMLTextAction_FieldInfo_,
	_HTMLEditorKit$InsertHTMLTextAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLEditorKit$InsertHTMLTextAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLEditorKit"
};

$Object* allocate$HTMLEditorKit$InsertHTMLTextAction($Class* clazz) {
	return $of($alloc(HTMLEditorKit$InsertHTMLTextAction));
}

void HTMLEditorKit$InsertHTMLTextAction::init$($String* name, $String* html, $HTML$Tag* parentTag, $HTML$Tag* addTag) {
	HTMLEditorKit$InsertHTMLTextAction::init$(name, html, parentTag, addTag, nullptr, nullptr);
}

void HTMLEditorKit$InsertHTMLTextAction::init$($String* name, $String* html, $HTML$Tag* parentTag, $HTML$Tag* addTag, $HTML$Tag* alternateParentTag, $HTML$Tag* alternateAddTag) {
	HTMLEditorKit$InsertHTMLTextAction::init$(name, html, parentTag, addTag, alternateParentTag, alternateAddTag, true);
}

void HTMLEditorKit$InsertHTMLTextAction::init$($String* name, $String* html, $HTML$Tag* parentTag, $HTML$Tag* addTag, $HTML$Tag* alternateParentTag, $HTML$Tag* alternateAddTag, bool adjustSelection) {
	$HTMLEditorKit$HTMLTextAction::init$(name);
	$set(this, html, html);
	$set(this, parentTag, parentTag);
	$set(this, addTag, addTag);
	$set(this, alternateParentTag, alternateParentTag);
	$set(this, alternateAddTag, alternateAddTag);
	this->adjustSelection$ = adjustSelection;
}

void HTMLEditorKit$InsertHTMLTextAction::insertHTML($JEditorPane* editor, $HTMLDocument* doc, int32_t offset, $String* html, int32_t popDepth, int32_t pushDepth, $HTML$Tag* addTag) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($(getHTMLEditorKit(editor)))->insertHTML(doc, offset, html, popDepth, pushDepth, addTag);
	} catch ($IOException& ioe) {
		$throwNew($RuntimeException, $$str({"Unable to insert: "_s, ioe}));
	} catch ($BadLocationException& ble) {
		$throwNew($RuntimeException, $$str({"Unable to insert: "_s, ble}));
	}
}

void HTMLEditorKit$InsertHTMLTextAction::insertAtBoundary($JEditorPane* editor, $HTMLDocument* doc, int32_t offset, $Element* insertElement, $String* html, $HTML$Tag* parentTag, $HTML$Tag* addTag) {
	insertAtBoundry(editor, doc, offset, insertElement, html, parentTag, addTag);
}

void HTMLEditorKit$InsertHTMLTextAction::insertAtBoundry($JEditorPane* editor, $HTMLDocument* doc, int32_t offset, $Element* insertElement, $String* html, $HTML$Tag* parentTag, $HTML$Tag* addTag) {
	$useLocalCurrentObjectStackCache();
	$var($Element, e, nullptr);
	$var($Element, commonParent, nullptr);
	bool isFirst = (offset == 0);
	if (offset > 0 || insertElement == nullptr) {
		$assign(e, $nc(doc)->getDefaultRootElement());
		while (true) {
			bool var$0 = e != nullptr && e->getStartOffset() != offset;
			if (!(var$0 && !e->isLeaf())) {
				break;
			}
			{
				$assign(e, e->getElement(e->getElementIndex(offset)));
			}
		}
		$assign(commonParent, (e != nullptr) ? $nc(e)->getParentElement() : ($Element*)nullptr);
	} else {
		$assign(commonParent, insertElement);
	}
	if (commonParent != nullptr) {
		int32_t pops = 0;
		int32_t pushes = 0;
		if (isFirst && insertElement != nullptr) {
			$assign(e, commonParent);
			while (e != nullptr && !e->isLeaf()) {
				$assign(e, e->getElement(e->getElementIndex(offset)));
				++pops;
			}
		} else {
			$assign(e, commonParent);
			--offset;
			while (e != nullptr && !e->isLeaf()) {
				$assign(e, e->getElement(e->getElementIndex(offset)));
				++pops;
			}
			$assign(e, commonParent);
			++offset;
			while (e != nullptr && e != insertElement) {
				$assign(e, e->getElement(e->getElementIndex(offset)));
				++pushes;
			}
		}
		pops = $Math::max(0, pops - 1);
		insertHTML(editor, doc, offset, html, pops, pushes, addTag);
	}
}

bool HTMLEditorKit$InsertHTMLTextAction::insertIntoTag($JEditorPane* editor, $HTMLDocument* doc, int32_t offset, $HTML$Tag* tag, $HTML$Tag* addTag) {
	$var($Element, e, findElementMatchingTag(doc, offset, tag));
	if (e != nullptr && e->getStartOffset() == offset) {
		insertAtBoundary(editor, doc, offset, e, this->html, tag, addTag);
		return true;
	} else if (offset > 0) {
		int32_t depth = elementCountToTag(doc, offset - 1, tag);
		if (depth != -1) {
			insertHTML(editor, doc, offset, this->html, depth, 0, addTag);
			return true;
		}
	}
	return false;
}

void HTMLEditorKit$InsertHTMLTextAction::adjustSelection($JEditorPane* pane, $HTMLDocument* doc, int32_t startOffset, int32_t oldLength) {
	int32_t newLength = $nc(doc)->getLength();
	if (newLength != oldLength && startOffset < newLength) {
		if (startOffset > 0) {
			$var($String, text, nullptr);
			try {
				$assign(text, doc->getText(startOffset - 1, 1));
			} catch ($BadLocationException& ble) {
				$assign(text, nullptr);
			}
			bool var$0 = text != nullptr && text->length() > 0;
			if (var$0 && text->charAt(0) == u'\n') {
				$nc(pane)->select(startOffset, startOffset);
			} else {
				$nc(pane)->select(startOffset + 1, startOffset + 1);
			}
		} else {
			$nc(pane)->select(1, 1);
		}
	}
}

void HTMLEditorKit$InsertHTMLTextAction::actionPerformed($ActionEvent* ae) {
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, editor, getEditor(ae));
	if (editor != nullptr) {
		$var($HTMLDocument, doc, getHTMLDocument(editor));
		int32_t offset = editor->getSelectionStart();
		int32_t length = $nc(doc)->getLength();
		bool inserted = false;
		if (!insertIntoTag(editor, doc, offset, this->parentTag, this->addTag) && this->alternateParentTag != nullptr) {
			inserted = insertIntoTag(editor, doc, offset, this->alternateParentTag, this->alternateAddTag);
		} else {
			inserted = true;
		}
		if (this->adjustSelection$ && inserted) {
			adjustSelection(editor, doc, offset, length);
		}
	}
}

HTMLEditorKit$InsertHTMLTextAction::HTMLEditorKit$InsertHTMLTextAction() {
}

$Class* HTMLEditorKit$InsertHTMLTextAction::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKit$InsertHTMLTextAction, name, initialize, &_HTMLEditorKit$InsertHTMLTextAction_ClassInfo_, allocate$HTMLEditorKit$InsertHTMLTextAction);
	return class$;
}

$Class* HTMLEditorKit$InsertHTMLTextAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax