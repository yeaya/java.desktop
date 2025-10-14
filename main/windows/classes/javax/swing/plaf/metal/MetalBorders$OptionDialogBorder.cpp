#include <javax/swing/plaf/metal/MetalBorders$OptionDialogBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef ERROR_MESSAGE
#undef INFORMATION_MESSAGE
#undef PLAIN_MESSAGE
#undef QUESTION_MESSAGE
#undef WARNING_MESSAGE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalBorders$OptionDialogBorder_FieldInfo_[] = {
	{"titleHeight", "I", nullptr, 0, $field(MetalBorders$OptionDialogBorder, titleHeight)},
	{}
};

$MethodInfo _MetalBorders$OptionDialogBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$OptionDialogBorder::*)()>(&MetalBorders$OptionDialogBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$OptionDialogBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$OptionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "OptionDialogBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$OptionDialogBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$OptionDialogBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_MetalBorders$OptionDialogBorder_FieldInfo_,
	_MetalBorders$OptionDialogBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$OptionDialogBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$OptionDialogBorder($Class* clazz) {
	return $of($alloc(MetalBorders$OptionDialogBorder));
}

int32_t MetalBorders$OptionDialogBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$OptionDialogBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$OptionDialogBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$OptionDialogBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$OptionDialogBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$OptionDialogBorder::init$() {
	$AbstractBorder::init$();
	this->titleHeight = 0;
}

void MetalBorders$OptionDialogBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->translate(x, y);
	int32_t messageType = $JOptionPane::PLAIN_MESSAGE;
	if ($instanceOf($JInternalFrame, c)) {
		$var($Object, obj, $nc(($cast($JInternalFrame, c)))->getClientProperty("JInternalFrame.messageType"_s));
		if ($instanceOf($Integer, obj)) {
			messageType = $nc(($cast($Integer, obj)))->intValue();
		}
	}
	$var($Color, borderColor, nullptr);
	do {
		if (messageType == ($JOptionPane::ERROR_MESSAGE)) {
			goto case$0;
		}
		if (messageType == ($JOptionPane::QUESTION_MESSAGE)) {
			goto case$1;
		}
		if (messageType == ($JOptionPane::WARNING_MESSAGE)) {
			goto case$2;
		}
		if (messageType == ($JOptionPane::INFORMATION_MESSAGE)) {
			goto case$3;
		}
		if (messageType == ($JOptionPane::PLAIN_MESSAGE)) {
			goto case$4;
		}
		goto case$5;
case$0:
		// (JOptionPane.ERROR_MESSAGE)
		{
			$assign(borderColor, $UIManager::getColor("OptionPane.errorDialog.border.background"_s));
			break;
		}
case$1:
		// (JOptionPane.QUESTION_MESSAGE)
		{
			$assign(borderColor, $UIManager::getColor("OptionPane.questionDialog.border.background"_s));
			break;
		}
case$2:
		// (JOptionPane.WARNING_MESSAGE)
		{
			$assign(borderColor, $UIManager::getColor("OptionPane.warningDialog.border.background"_s));
			break;
		}
case$3:
		// (JOptionPane.INFORMATION_MESSAGE)
		{
		}
case$4:
		// (JOptionPane.PLAIN_MESSAGE)
		{
		}
case$5:
		// default
		{
			$assign(borderColor, $MetalLookAndFeel::getPrimaryControlDarkShadow());
			break;
		}
	} while (false);
	g->setColor(borderColor);
	g->drawLine(1, 0, w - 2, 0);
	g->drawLine(0, 1, 0, h - 2);
	g->drawLine(w - 1, 1, w - 1, h - 2);
	g->drawLine(1, h - 1, w - 2, h - 1);
	for (int32_t i = 1; i < 3; ++i) {
		g->drawRect(i, i, w - (i * 2) - 1, h - (i * 2) - 1);
	}
	g->translate(-x, -y);
}

$Insets* MetalBorders$OptionDialogBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(3, 3, 3, 3);
	return newInsets;
}

MetalBorders$OptionDialogBorder::MetalBorders$OptionDialogBorder() {
}

$Class* MetalBorders$OptionDialogBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$OptionDialogBorder, name, initialize, &_MetalBorders$OptionDialogBorder_ClassInfo_, allocate$MetalBorders$OptionDialogBorder);
	return class$;
}

$Class* MetalBorders$OptionDialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax