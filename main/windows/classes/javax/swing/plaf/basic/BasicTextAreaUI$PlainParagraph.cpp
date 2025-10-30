#include <javax/swing/plaf/basic/BasicTextAreaUI$PlainParagraph.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI$PlainParagraph$LogicalView.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
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
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextArea = ::javax::swing::JTextArea;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $BasicTextAreaUI$PlainParagraph$LogicalView = ::javax::swing::plaf::basic::BasicTextAreaUI$PlainParagraph$LogicalView;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextAreaUI$PlainParagraph_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(BasicTextAreaUI$PlainParagraph::*)($Element*)>(&BasicTextAreaUI$PlainParagraph::init$))},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"getFlowSpan", "(I)I", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextAreaUI$PlainParagraph_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph", "javax.swing.plaf.basic.BasicTextAreaUI", "PlainParagraph", $STATIC},
	{"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph$LogicalView", "javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph", "LogicalView", $STATIC},
	{}
};

$ClassInfo _BasicTextAreaUI$PlainParagraph_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph",
	"javax.swing.text.ParagraphView",
	nullptr,
	nullptr,
	_BasicTextAreaUI$PlainParagraph_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextAreaUI$PlainParagraph_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextAreaUI"
};

$Object* allocate$BasicTextAreaUI$PlainParagraph($Class* clazz) {
	return $of($alloc(BasicTextAreaUI$PlainParagraph));
}

void BasicTextAreaUI$PlainParagraph::init$($Element* elem) {
	$ParagraphView::init$(elem);
	$set(this, layoutPool, $new($BasicTextAreaUI$PlainParagraph$LogicalView, elem));
	$nc(this->layoutPool)->setParent(this);
}

void BasicTextAreaUI$PlainParagraph::setParent($View* parent) {
	$ParagraphView::setParent(parent);
	if (parent != nullptr) {
		setPropertiesFromAttributes();
	}
}

void BasicTextAreaUI$PlainParagraph::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getContainer());
	if ((c != nullptr) && (!$nc($(c->getComponentOrientation()))->isLeftToRight())) {
		setJustification($StyleConstants::ALIGN_RIGHT);
	} else {
		setJustification($StyleConstants::ALIGN_LEFT);
	}
}

int32_t BasicTextAreaUI$PlainParagraph::getFlowSpan(int32_t index) {
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

$SizeRequirements* BasicTextAreaUI$PlainParagraph::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, req, $ParagraphView::calculateMinorAxisRequirements(axis, r));
	$var($Component, c, getContainer());
	if ($instanceOf($JTextArea, c)) {
		$var($JTextArea, area, $cast($JTextArea, c));
		if (!$nc(area)->getLineWrap()) {
			$nc(req)->minimum = req->preferred;
		} else {
			$nc(req)->minimum = 0;
			req->preferred = getWidth();
			if (req->preferred == $Integer::MAX_VALUE) {
				req->preferred = 100;
			}
		}
	}
	return req;
}

void BasicTextAreaUI$PlainParagraph::setSize(float width, float height) {
	if ($cast(int32_t, width) != getWidth()) {
		preferenceChanged(nullptr, true, true);
	}
	$ParagraphView::setSize(width, height);
}

BasicTextAreaUI$PlainParagraph::BasicTextAreaUI$PlainParagraph() {
}

$Class* BasicTextAreaUI$PlainParagraph::load$($String* name, bool initialize) {
	$loadClass(BasicTextAreaUI$PlainParagraph, name, initialize, &_BasicTextAreaUI$PlainParagraph_ClassInfo_, allocate$BasicTextAreaUI$PlainParagraph);
	return class$;
}

$Class* BasicTextAreaUI$PlainParagraph::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax