#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph$LogicalView.h>
#include <javax/swing/JEditorPane$PlainEditorKit.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef MAX_VALUE

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane$PlainEditorKit$PlainParagraph$LogicalView = ::javax::swing::JEditorPane$PlainEditorKit$PlainParagraph$LogicalView;
using $JTextArea = ::javax::swing::JTextArea;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {

$MethodInfo _JEditorPane$PlainEditorKit$PlainParagraph_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(JEditorPane$PlainEditorKit$PlainParagraph::*)($Element*)>(&JEditorPane$PlainEditorKit$PlainParagraph::init$))},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"getFlowSpan", "(I)I", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _JEditorPane$PlainEditorKit$PlainParagraph_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$PlainEditorKit", "javax.swing.JEditorPane", "PlainEditorKit", $STATIC},
	{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "javax.swing.JEditorPane$PlainEditorKit", "PlainParagraph", $STATIC},
	{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph$LogicalView", "javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "LogicalView", $STATIC},
	{}
};

$ClassInfo _JEditorPane$PlainEditorKit$PlainParagraph_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph",
	"javax.swing.text.ParagraphView",
	nullptr,
	nullptr,
	_JEditorPane$PlainEditorKit$PlainParagraph_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$PlainEditorKit$PlainParagraph_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$PlainEditorKit$PlainParagraph($Class* clazz) {
	return $of($alloc(JEditorPane$PlainEditorKit$PlainParagraph));
}

void JEditorPane$PlainEditorKit$PlainParagraph::init$($Element* elem) {
	$ParagraphView::init$(elem);
	$set(this, layoutPool, $new($JEditorPane$PlainEditorKit$PlainParagraph$LogicalView, elem));
	$nc(this->layoutPool)->setParent(this);
}

void JEditorPane$PlainEditorKit$PlainParagraph::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getContainer());
	if ((c != nullptr) && (!$nc($(c->getComponentOrientation()))->isLeftToRight())) {
		setJustification($StyleConstants::ALIGN_RIGHT);
	} else {
		setJustification($StyleConstants::ALIGN_LEFT);
	}
}

int32_t JEditorPane$PlainEditorKit$PlainParagraph::getFlowSpan(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getContainer());
	if ($instanceOf($JTextArea, c)) {
		$var($JTextArea, area, $cast($JTextArea, c));
		if (!$nc(area)->getLineWrap()) {
			return $Integer::MAX_VALUE;
		}
	}
	return $ParagraphView::getFlowSpan(index);
}

$SizeRequirements* JEditorPane$PlainEditorKit$PlainParagraph::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, req, $ParagraphView::calculateMinorAxisRequirements(axis, r));
	$var($Component, c, getContainer());
	if ($instanceOf($JTextArea, c)) {
		$var($JTextArea, area, $cast($JTextArea, c));
		if (!$nc(area)->getLineWrap()) {
			$nc(req)->minimum = req->preferred;
		}
	}
	return req;
}

JEditorPane$PlainEditorKit$PlainParagraph::JEditorPane$PlainEditorKit$PlainParagraph() {
}

$Class* JEditorPane$PlainEditorKit$PlainParagraph::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$PlainEditorKit$PlainParagraph, name, initialize, &_JEditorPane$PlainEditorKit$PlainParagraph_ClassInfo_, allocate$JEditorPane$PlainEditorKit$PlainParagraph);
	return class$;
}

$Class* JEditorPane$PlainEditorKit$PlainParagraph::class$ = nullptr;

	} // swing
} // javax