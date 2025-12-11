#include <javax/swing/text/StyledEditorKit$StyledViewFactory.h>

#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/IconView.h>
#include <javax/swing/text/LabelView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef Y_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $ComponentView = ::javax::swing::text::ComponentView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $GlyphView = ::javax::swing::text::GlyphView;
using $IconView = ::javax::swing::text::IconView;
using $LabelView = ::javax::swing::text::LabelView;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyledEditorKit$StyledViewFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StyledEditorKit$StyledViewFactory::*)()>(&StyledEditorKit$StyledViewFactory::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyledEditorKit$StyledViewFactory_InnerClassesInfo_[] = {
	{"javax.swing.text.StyledEditorKit$StyledViewFactory", "javax.swing.text.StyledEditorKit", "StyledViewFactory", $STATIC},
	{}
};

$ClassInfo _StyledEditorKit$StyledViewFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.StyledEditorKit$StyledViewFactory",
	"java.lang.Object",
	"javax.swing.text.ViewFactory",
	nullptr,
	_StyledEditorKit$StyledViewFactory_MethodInfo_,
	nullptr,
	nullptr,
	_StyledEditorKit$StyledViewFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StyledEditorKit"
};

$Object* allocate$StyledEditorKit$StyledViewFactory($Class* clazz) {
	return $of($alloc(StyledEditorKit$StyledViewFactory));
}

void StyledEditorKit$StyledViewFactory::init$() {
}

$View* StyledEditorKit$StyledViewFactory::create($Element* elem) {
	$var($String, kind, $nc(elem)->getName());
	if (kind != nullptr) {
		$init($AbstractDocument);
		if (kind->equals($AbstractDocument::ContentElementName)) {
			return $new($LabelView, elem);
		} else {
			if (kind->equals($AbstractDocument::ParagraphElementName)) {
				return $new($ParagraphView, elem);
			} else {
				if (kind->equals($AbstractDocument::SectionElementName)) {
					return $new($BoxView, elem, $View::Y_AXIS);
				} else {
					$init($StyleConstants);
					if (kind->equals($StyleConstants::ComponentElementName)) {
						return $new($ComponentView, elem);
					} else {
						if (kind->equals($StyleConstants::IconElementName)) {
							return $new($IconView, elem);
						}
					}
				}
			}
		}
	}
	return $new($LabelView, elem);
}

StyledEditorKit$StyledViewFactory::StyledEditorKit$StyledViewFactory() {
}

$Class* StyledEditorKit$StyledViewFactory::load$($String* name, bool initialize) {
	$loadClass(StyledEditorKit$StyledViewFactory, name, initialize, &_StyledEditorKit$StyledViewFactory_ClassInfo_, allocate$StyledEditorKit$StyledViewFactory);
	return class$;
}

$Class* StyledEditorKit$StyledViewFactory::class$ = nullptr;

		} // text
	} // swing
} // javax