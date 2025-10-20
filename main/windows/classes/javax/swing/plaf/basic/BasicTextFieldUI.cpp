#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI$1.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI$I18nFieldView.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef TRUE
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicTextFieldUI$1 = ::javax::swing::plaf::basic::BasicTextFieldUI$1;
using $BasicTextFieldUI$I18nFieldView = ::javax::swing::plaf::basic::BasicTextFieldUI$I18nFieldView;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $FlowView = ::javax::swing::text::FlowView;
using $GlyphView = ::javax::swing::text::GlyphView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextFieldUI::*)()>(&BasicTextFieldUI::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTextFieldUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicTextFieldUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView", "javax.swing.plaf.basic.BasicTextFieldUI", "I18nFieldView", $STATIC},
	{"javax.swing.plaf.basic.BasicTextFieldUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextFieldUI",
	"javax.swing.plaf.basic.BasicTextUI",
	nullptr,
	nullptr,
	_BasicTextFieldUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextFieldUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView,javax.swing.plaf.basic.BasicTextFieldUI$1"
};

$Object* allocate$BasicTextFieldUI($Class* clazz) {
	return $of($alloc(BasicTextFieldUI));
}

$ComponentUI* BasicTextFieldUI::createUI($JComponent* c) {
	$init(BasicTextFieldUI);
	return $new(BasicTextFieldUI);
}

void BasicTextFieldUI::init$() {
	$BasicTextUI::init$();
}

$String* BasicTextFieldUI::getPropertyPrefix() {
	return "TextField"_s;
}

$View* BasicTextFieldUI::create($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(elem)->getDocument());
	$var($Object, i18nFlag, $nc(doc)->getProperty("i18n"_s));
	$init($Boolean);
	if ($nc($Boolean::TRUE)->equals(i18nFlag)) {
		$var($String, kind, elem->getName());
		if (kind != nullptr) {
			$init($AbstractDocument);
			if (kind->equals($AbstractDocument::ContentElementName)) {
				return $new($BasicTextFieldUI$1, this, elem);
			} else {
				if (kind->equals($AbstractDocument::ParagraphElementName)) {
					return $new($BasicTextFieldUI$I18nFieldView, elem);
				}
			}
		}
	}
	return $new($FieldView, elem);
}

int32_t BasicTextFieldUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$BasicTextUI::getBaseline(c, width, height);
	$var($View, rootView, getRootView($cast($JTextComponent, c)));
	if ($nc(rootView)->getViewCount() > 0) {
		$var($Insets, insets, $nc(c)->getInsets());
		height = height - $nc(insets)->top - insets->bottom;
		if (height > 0) {
			int32_t baseline = insets->top;
			$var($View, fieldView, rootView->getView(0));
			int32_t vspan = $cast(int32_t, $nc(fieldView)->getPreferredSpan($View::Y_AXIS));
			if (height != vspan) {
				int32_t slop = height - vspan;
				baseline += slop / 2;
			}
			if ($instanceOf($BasicTextFieldUI$I18nFieldView, fieldView)) {
				int32_t fieldBaseline = $BasicHTML::getBaseline(fieldView, width - insets->left - insets->right, height);
				if (fieldBaseline < 0) {
					return -1;
				}
				baseline += fieldBaseline;
			} else {
				$var($FontMetrics, fm, c->getFontMetrics($(c->getFont())));
				baseline += $nc(fm)->getAscent();
			}
			return baseline;
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* BasicTextFieldUI::getBaselineResizeBehavior($JComponent* c) {
	$BasicTextUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CENTER_OFFSET;
}

BasicTextFieldUI::BasicTextFieldUI() {
}

$Class* BasicTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(BasicTextFieldUI, name, initialize, &_BasicTextFieldUI_ClassInfo_, allocate$BasicTextFieldUI);
	return class$;
}

$Class* BasicTextFieldUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax