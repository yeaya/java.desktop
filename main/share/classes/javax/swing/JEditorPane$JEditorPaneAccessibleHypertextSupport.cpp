#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/accessibility/AccessibleHyperlink.h>
#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$1.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef A
#undef HREF

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AccessibleHyperlink = ::javax::accessibility::AccessibleHyperlink;
using $AccessibleHypertext = ::javax::accessibility::AccessibleHypertext;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$AccessibleJEditorPane = ::javax::swing::JEditorPane$AccessibleJEditorPane;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport$1 = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport$1;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport, this$0)},
	{"hyperlinks", "Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector;", nullptr, 0, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport, hyperlinks)},
	{"linksValid", "Z", nullptr, 0, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport, linksValid)},
	{}
};

$MethodInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getCaretPosition", "()I", nullptr, $PUBLIC},
	{"*getCharCount", "()I", nullptr, $PUBLIC},
	{"*getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"*getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"*getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"*getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"*getSelectionStart", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JEditorPane;)V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane$JEditorPaneAccessibleHypertextSupport::*)($JEditorPane*)>(&JEditorPane$JEditorPaneAccessibleHypertextSupport::init$))},
	{"buildLinkTable", "()V", nullptr, $PRIVATE, $method(static_cast<void(JEditorPane$JEditorPaneAccessibleHypertextSupport::*)()>(&JEditorPane$JEditorPaneAccessibleHypertextSupport::buildLinkTable))},
	{"getLink", "(I)Ljavax/accessibility/AccessibleHyperlink;", nullptr, $PUBLIC},
	{"getLinkCount", "()I", nullptr, $PUBLIC},
	{"getLinkIndex", "(I)I", nullptr, $PUBLIC},
	{"getLinkText", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "javax.swing.JEditorPane", "JEditorPaneAccessibleHypertextSupport", $PROTECTED},
	{"javax.swing.JEditorPane$AccessibleJEditorPane", "javax.swing.JEditorPane", "AccessibleJEditorPane", $PROTECTED},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector", "javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "LinkVector", $PRIVATE},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink", "javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "HTMLLink", $PUBLIC},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport",
	"javax.swing.JEditorPane$AccessibleJEditorPane",
	"javax.accessibility.AccessibleHypertext",
	_JEditorPane$JEditorPaneAccessibleHypertextSupport_FieldInfo_,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport($Class* clazz) {
	return $of($alloc(JEditorPane$JEditorPaneAccessibleHypertextSupport));
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getIndexAtPoint($Point* p) {
	 return this->$JEditorPane$AccessibleJEditorPane::getIndexAtPoint(p);
}

$Rectangle* JEditorPane$JEditorPaneAccessibleHypertextSupport::getCharacterBounds(int32_t i) {
	 return this->$JEditorPane$AccessibleJEditorPane::getCharacterBounds(i);
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getCharCount() {
	 return this->$JEditorPane$AccessibleJEditorPane::getCharCount();
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getCaretPosition() {
	 return this->$JEditorPane$AccessibleJEditorPane::getCaretPosition();
}

$AttributeSet* JEditorPane$JEditorPaneAccessibleHypertextSupport::getCharacterAttribute(int32_t i) {
	 return this->$JEditorPane$AccessibleJEditorPane::getCharacterAttribute(i);
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getSelectionStart() {
	 return this->$JEditorPane$AccessibleJEditorPane::getSelectionStart();
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getSelectionEnd() {
	 return this->$JEditorPane$AccessibleJEditorPane::getSelectionEnd();
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport::getSelectedText() {
	 return this->$JEditorPane$AccessibleJEditorPane::getSelectedText();
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport::getAtIndex(int32_t part, int32_t index) {
	 return this->$JEditorPane$AccessibleJEditorPane::getAtIndex(part, index);
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport::getAfterIndex(int32_t part, int32_t index) {
	 return this->$JEditorPane$AccessibleJEditorPane::getAfterIndex(part, index);
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport::getBeforeIndex(int32_t part, int32_t index) {
	 return this->$JEditorPane$AccessibleJEditorPane::getBeforeIndex(part, index);
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::hashCode() {
	 return this->$JEditorPane$AccessibleJEditorPane::hashCode();
}

bool JEditorPane$JEditorPaneAccessibleHypertextSupport::equals(Object$* arg0) {
	 return this->$JEditorPane$AccessibleJEditorPane::equals(arg0);
}

$Object* JEditorPane$JEditorPaneAccessibleHypertextSupport::clone() {
	 return this->$JEditorPane$AccessibleJEditorPane::clone();
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport::toString() {
	 return this->$JEditorPane$AccessibleJEditorPane::toString();
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport::finalize() {
	this->$JEditorPane$AccessibleJEditorPane::finalize();
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport::buildLinkTable() {
	$useLocalCurrentObjectStackCache();
	$nc(this->hyperlinks)->removeAllElements();
	$var($Document, d, this->this$0->getDocument());
	if (d != nullptr) {
		$var($ElementIterator, ei, $new($ElementIterator, d));
		$var($Element, e, nullptr);
		$var($AttributeSet, as, nullptr);
		$var($AttributeSet, anchor, nullptr);
		$var($String, href, nullptr);
		while (($assign(e, ei->next())) != nullptr) {
			if ($nc(e)->isLeaf()) {
				$assign(as, e->getAttributes());
				$init($HTML$Tag);
				$assign(anchor, $cast($AttributeSet, $nc(as)->getAttribute($HTML$Tag::A)));
				$init($HTML$Attribute);
				$assign(href, (anchor != nullptr) ? $cast($String, $nc(anchor)->getAttribute($HTML$Attribute::HREF)) : ($String*)nullptr);
				if (href != nullptr) {
					$nc(this->hyperlinks)->addElement($$new($JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, this, e));
				}
			}
		}
	}
	this->linksValid = true;
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport::init$($JEditorPane* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JEditorPane$AccessibleJEditorPane::init$(this$0);
	this->linksValid = false;
	$set(this, hyperlinks, $new($JEditorPane$JEditorPaneAccessibleHypertextSupport$LinkVector, this));
	$var($Document, d, this$0->getDocument());
	if (d != nullptr) {
		d->addDocumentListener($$new($JEditorPane$JEditorPaneAccessibleHypertextSupport$1, this, this$0));
	}
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getLinkCount() {
	if (this->linksValid == false) {
		buildLinkTable();
	}
	return $nc(this->hyperlinks)->size();
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport::getLinkIndex(int32_t charIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->linksValid == false) {
		buildLinkTable();
	}
	$var($Element, e, nullptr);
	$var($Document, doc, this->this$0->getDocument());
	if (doc != nullptr) {
		for ($assign(e, doc->getDefaultRootElement()); !$nc(e)->isLeaf();) {
			int32_t index = $nc(e)->getElementIndex(charIndex);
			$assign(e, e->getElement(index));
		}
	}
	return $nc(this->hyperlinks)->baseElementIndex(e);
}

$AccessibleHyperlink* JEditorPane$JEditorPaneAccessibleHypertextSupport::getLink(int32_t linkIndex) {
	if (this->linksValid == false) {
		buildLinkTable();
	}
	if (linkIndex >= 0 && linkIndex < $nc(this->hyperlinks)->size()) {
		return $cast($AccessibleHyperlink, $nc(this->hyperlinks)->elementAt(linkIndex));
	} else {
		return nullptr;
	}
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport::getLinkText(int32_t linkIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->linksValid == false) {
		buildLinkTable();
	}
	$var($Element, e, $cast($Element, $nc(this->hyperlinks)->elementAt(linkIndex)));
	if (e != nullptr) {
		$var($Document, d, this->this$0->getDocument());
		if (d != nullptr) {
			try {
				int32_t var$0 = e->getStartOffset();
				int32_t var$1 = e->getEndOffset();
				return d->getText(var$0, var$1 - e->getStartOffset());
			} catch ($BadLocationException& exception) {
				return nullptr;
			}
		}
	}
	return nullptr;
}

JEditorPane$JEditorPaneAccessibleHypertextSupport::JEditorPane$JEditorPaneAccessibleHypertextSupport() {
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$JEditorPaneAccessibleHypertextSupport, name, initialize, &_JEditorPane$JEditorPaneAccessibleHypertextSupport_ClassInfo_, allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport);
	return class$;
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport::class$ = nullptr;

	} // swing
} // javax