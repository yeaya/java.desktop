#include <javax/swing/plaf/basic/BasicTextAreaUI.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI$PlainParagraph.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

#undef CONSTANT_ASCENT
#undef TRUE
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicTextAreaUI$PlainParagraph = ::javax::swing::plaf::basic::BasicTextAreaUI$PlainParagraph;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextAreaUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextAreaUI::*)()>(&BasicTextAreaUI::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createI18N", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTextAreaUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicTextAreaUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph", "javax.swing.plaf.basic.BasicTextAreaUI", "PlainParagraph", $STATIC},
	{}
};

$ClassInfo _BasicTextAreaUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextAreaUI",
	"javax.swing.plaf.basic.BasicTextUI",
	nullptr,
	nullptr,
	_BasicTextAreaUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextAreaUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph,javax.swing.plaf.basic.BasicTextAreaUI$PlainParagraph$LogicalView"
};

$Object* allocate$BasicTextAreaUI($Class* clazz) {
	return $of($alloc(BasicTextAreaUI));
}

$ComponentUI* BasicTextAreaUI::createUI($JComponent* ta) {
	$init(BasicTextAreaUI);
	return $new(BasicTextAreaUI);
}

void BasicTextAreaUI::init$() {
	$BasicTextUI::init$();
}

$String* BasicTextAreaUI::getPropertyPrefix() {
	return "TextArea"_s;
}

void BasicTextAreaUI::installDefaults() {
	$BasicTextUI::installDefaults();
}

void BasicTextAreaUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$BasicTextUI::propertyChange(evt);
	bool var$1 = $nc($($nc(evt)->getPropertyName()))->equals("lineWrap"_s);
	bool var$0 = var$1 || $nc($($nc(evt)->getPropertyName()))->equals("wrapStyleWord"_s);
	if (var$0 || $nc($($nc(evt)->getPropertyName()))->equals("tabSize"_s)) {
		modelChanged();
	} else if ("editable"_s->equals($(evt->getPropertyName()))) {
		updateFocusTraversalKeys();
	}
}

$Dimension* BasicTextAreaUI::getPreferredSize($JComponent* c) {
	return $BasicTextUI::getPreferredSize(c);
}

$Dimension* BasicTextAreaUI::getMinimumSize($JComponent* c) {
	return $BasicTextUI::getMinimumSize(c);
}

$View* BasicTextAreaUI::create($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(elem)->getDocument());
	$var($Object, i18nFlag, $nc(doc)->getProperty("i18n"_s));
	$init($Boolean);
	if ((i18nFlag != nullptr) && $of(i18nFlag)->equals($Boolean::TRUE)) {
		return createI18N(elem);
	} else {
		$var($JTextComponent, c, getComponent());
		if ($instanceOf($JTextArea, c)) {
			$var($JTextArea, area, $cast($JTextArea, c));
			$var($View, v, nullptr);
			if ($nc(area)->getLineWrap()) {
				$assign(v, $new($WrappedPlainView, elem, area->getWrapStyleWord()));
			} else {
				$assign(v, $new($PlainView, elem));
			}
			return v;
		}
	}
	return nullptr;
}

$View* BasicTextAreaUI::createI18N($Element* elem) {
	$var($String, kind, $nc(elem)->getName());
	if (kind != nullptr) {
		$init($AbstractDocument);
		if (kind->equals($AbstractDocument::ContentElementName)) {
			return $new($BasicTextAreaUI$PlainParagraph, elem);
		} else {
			if (kind->equals($AbstractDocument::ParagraphElementName)) {
				return $new($BoxView, elem, $View::Y_AXIS);
			}
		}
	}
	return nullptr;
}

int32_t BasicTextAreaUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$BasicTextUI::getBaseline(c, width, height);
	$var($Object, i18nFlag, $nc($($nc(($cast($JTextComponent, c)))->getDocument()))->getProperty("i18n"_s));
	$var($Insets, insets, $nc(c)->getInsets());
	$init($Boolean);
	if ($nc($Boolean::TRUE)->equals(i18nFlag)) {
		$var($View, rootView, getRootView($cast($JTextComponent, c)));
		if ($nc(rootView)->getViewCount() > 0) {
			height = height - $nc(insets)->top - insets->bottom;
			int32_t baseline = insets->top;
			int32_t fieldBaseline = $BasicHTML::getBaseline($(rootView->getView(0)), width - insets->left - insets->right, height);
			if (fieldBaseline < 0) {
				return -1;
			}
			return baseline + fieldBaseline;
		}
		return -1;
	}
	$var($FontMetrics, fm, c->getFontMetrics($(c->getFont())));
	return $nc(insets)->top + $nc(fm)->getAscent();
}

$Component$BaselineResizeBehavior* BasicTextAreaUI::getBaselineResizeBehavior($JComponent* c) {
	$BasicTextUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
}

BasicTextAreaUI::BasicTextAreaUI() {
}

$Class* BasicTextAreaUI::load$($String* name, bool initialize) {
	$loadClass(BasicTextAreaUI, name, initialize, &_BasicTextAreaUI_ClassInfo_, allocate$BasicTextAreaUI);
	return class$;
}

$Class* BasicTextAreaUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax