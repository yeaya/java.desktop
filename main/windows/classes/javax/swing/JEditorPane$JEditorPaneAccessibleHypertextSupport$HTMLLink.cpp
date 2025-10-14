#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/accessibility/AccessibleHyperlink.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef A
#undef ACTIVATED
#undef HREF

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $AccessibleHyperlink = ::javax::accessibility::AccessibleHyperlink;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, this$1)},
	{"element", "Ljavax/swing/text/Element;", nullptr, 0, $field(JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, element)},
	{}
};

$MethodInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::*)($JEditorPane$JEditorPaneAccessibleHypertextSupport*,$Element*)>(&JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::init$))},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC},
	{"getAccessibleActionAnchor", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleActionObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getEndIndex", "()I", nullptr, $PUBLIC},
	{"getStartIndex", "()I", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "javax.swing.JEditorPane", "JEditorPaneAccessibleHypertextSupport", $PROTECTED},
	{"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink", "javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport", "HTMLLink", $PUBLIC},
	{}
};

$ClassInfo _JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink",
	"javax.accessibility.AccessibleHyperlink",
	nullptr,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_FieldInfo_,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink($Class* clazz) {
	return $of($alloc(JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink));
}

void JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::init$($JEditorPane$JEditorPaneAccessibleHypertextSupport* this$1, $Element* e) {
	$set(this, this$1, this$1);
	$AccessibleHyperlink::init$();
	$set(this, element, e);
}

bool JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::isValid() {
	return this->this$1->linksValid;
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::getAccessibleActionCount() {
	return 1;
}

bool JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::doAccessibleAction(int32_t i) {
	if (i == 0 && isValid() == true) {
		$var($URL, u, $cast($URL, getAccessibleActionObject(i)));
		if (u != nullptr) {
			$init($HyperlinkEvent$EventType);
			$var($HyperlinkEvent, linkEvent, $new($HyperlinkEvent, this->this$1->this$0, $HyperlinkEvent$EventType::ACTIVATED, u));
			$nc(this->this$1->this$0)->fireHyperlinkUpdate(linkEvent);
			return true;
		}
	}
	return false;
}

$String* JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::getAccessibleActionDescription(int32_t i) {
	if (i == 0 && isValid() == true) {
		$var($Document, d, $nc(this->this$1->this$0)->getDocument());
		if (d != nullptr) {
			try {
				int32_t var$0 = getStartIndex();
				int32_t var$1 = getEndIndex();
				return d->getText(var$0, var$1 - getStartIndex());
			} catch ($BadLocationException&) {
				$var($BadLocationException, exception, $catch());
				return nullptr;
			}
		}
	}
	return nullptr;
}

$Object* JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::getAccessibleActionObject(int32_t i) {
	if (i == 0 && isValid() == true) {
		$var($AttributeSet, as, $nc(this->element)->getAttributes());
		$init($HTML$Tag);
		$var($AttributeSet, anchor, $cast($AttributeSet, $nc(as)->getAttribute($HTML$Tag::A)));
		$init($HTML$Attribute);
		$var($String, href, (anchor != nullptr) ? $cast($String, $nc(anchor)->getAttribute($HTML$Attribute::HREF)) : ($String*)nullptr);
		if (href != nullptr) {
			$var($URL, u, nullptr);
			try {
				$assign(u, $new($URL, $($nc(this->this$1->this$0)->getPage()), href));
			} catch ($MalformedURLException&) {
				$var($MalformedURLException, m, $catch());
				$assign(u, nullptr);
			}
			return $of(u);
		}
	}
	return $of(nullptr);
}

$Object* JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::getAccessibleActionAnchor(int32_t i) {
	return $of(getAccessibleActionDescription(i));
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::getStartIndex() {
	return $nc(this->element)->getStartOffset();
}

int32_t JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::getEndIndex() {
	return $nc(this->element)->getEndOffset();
}

JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink() {
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink, name, initialize, &_JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink_ClassInfo_, allocate$JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink);
	return class$;
}

$Class* JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink::class$ = nullptr;

	} // swing
} // javax