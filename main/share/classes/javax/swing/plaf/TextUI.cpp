#include <javax/swing/plaf/TextUI.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Point = ::java::awt::Point;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace plaf {

$NamedAttribute TextUI_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TextUI_MethodAnnotations_getToolTipText6[] = {
	{"Ljava/lang/Deprecated;", TextUI_Attribute_var$0},
	{}
};

$NamedAttribute TextUI_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TextUI_MethodAnnotations_modelToView8[] = {
	{"Ljava/lang/Deprecated;", TextUI_Attribute_var$1},
	{}
};

$NamedAttribute TextUI_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TextUI_MethodAnnotations_modelToView9[] = {
	{"Ljava/lang/Deprecated;", TextUI_Attribute_var$2},
	{}
};

$NamedAttribute TextUI_Attribute_var$3[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TextUI_MethodAnnotations_viewToModel11[] = {
	{"Ljava/lang/Deprecated;", TextUI_Attribute_var$3},
	{}
};

$NamedAttribute TextUI_Attribute_var$4[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _TextUI_MethodAnnotations_viewToModel12[] = {
	{"Ljava/lang/Deprecated;", TextUI_Attribute_var$4},
	{}
};

$MethodInfo _TextUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TextUI::*)()>(&TextUI::init$))},
	{"damageRange", "(Ljavax/swing/text/JTextComponent;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"damageRange", "(Ljavax/swing/text/JTextComponent;IILjavax/swing/text/Position$Bias;Ljavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getEditorKit", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{"getRootView", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/View;", nullptr, $PUBLIC | $ABSTRACT},
	{"getToolTipText", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextUI_MethodAnnotations_getToolTipText6},
	{"getToolTipText2D", "(Ljavax/swing/text/JTextComponent;Ljava/awt/geom/Point2D;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _TextUI_MethodAnnotations_modelToView8},
	{"modelToView", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _TextUI_MethodAnnotations_modelToView9},
	{"modelToView2D", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;)I", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _TextUI_MethodAnnotations_viewToModel11},
	{"viewToModel", "(Ljavax/swing/text/JTextComponent;Ljava/awt/Point;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _TextUI_MethodAnnotations_viewToModel12},
	{"viewToModel2D", "(Ljavax/swing/text/JTextComponent;Ljava/awt/geom/Point2D;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TextUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.TextUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_TextUI_MethodInfo_
};

$Object* allocate$TextUI($Class* clazz) {
	return $of($alloc(TextUI));
}

void TextUI::init$() {
	$ComponentUI::init$();
}

$Rectangle2D* TextUI::modelToView2D($JTextComponent* t, int32_t pos, $Position$Bias* bias) {
	return modelToView(t, pos, bias);
}

int32_t TextUI::viewToModel2D($JTextComponent* t, $Point2D* pt, $Position$BiasArray* biasReturn) {
	int32_t var$0 = $cast(int32_t, $nc(pt)->getX());
	return viewToModel(t, $$new($Point, var$0, $cast(int32_t, pt->getY())), biasReturn);
}

$String* TextUI::getToolTipText($JTextComponent* t, $Point* pt) {
	return nullptr;
}

$String* TextUI::getToolTipText2D($JTextComponent* t, $Point2D* pt) {
	int32_t var$0 = $cast(int32_t, $nc(pt)->getX());
	return getToolTipText(t, $$new($Point, var$0, $cast(int32_t, pt->getY())));
}

TextUI::TextUI() {
}

$Class* TextUI::load$($String* name, bool initialize) {
	$loadClass(TextUI, name, initialize, &_TextUI_ClassInfo_, allocate$TextUI);
	return class$;
}

$Class* TextUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax