#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <jcpp.h>

#undef SAFE_NO_FOCUS_BORDER

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxRenderer_FieldInfo_[] = {
	{"noFocusBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED | $STATIC, $staticField(BasicComboBoxRenderer, noFocusBorder)},
	{"SAFE_NO_FOCUS_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxRenderer, SAFE_NO_FOCUS_BORDER)},
	{}
};

$MethodInfo _BasicComboBoxRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxRenderer::*)()>(&BasicComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getNoFocusBorder", "()Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Border*(*)()>(&BasicComboBoxRenderer::getNoFocusBorder))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource", "javax.swing.plaf.basic.BasicComboBoxRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicComboBoxRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxRenderer",
	"javax.swing.JLabel",
	"javax.swing.ListCellRenderer",
	_BasicComboBoxRenderer_FieldInfo_,
	_BasicComboBoxRenderer_MethodInfo_,
	"Ljavax/swing/JLabel;Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;Ljava/io/Serializable;",
	nullptr,
	_BasicComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource"
};

$Object* allocate$BasicComboBoxRenderer($Class* clazz) {
	return $of($alloc(BasicComboBoxRenderer));
}

$String* BasicComboBoxRenderer::toString() {
	 return this->$JLabel::toString();
}

int32_t BasicComboBoxRenderer::hashCode() {
	 return this->$JLabel::hashCode();
}

bool BasicComboBoxRenderer::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* BasicComboBoxRenderer::clone() {
	 return this->$JLabel::clone();
}

void BasicComboBoxRenderer::finalize() {
	this->$JLabel::finalize();
}

$Border* BasicComboBoxRenderer::noFocusBorder = nullptr;
$Border* BasicComboBoxRenderer::SAFE_NO_FOCUS_BORDER = nullptr;

void BasicComboBoxRenderer::init$() {
	$JLabel::init$();
	setOpaque(true);
	setBorder($(getNoFocusBorder()));
}

$Border* BasicComboBoxRenderer::getNoFocusBorder() {
	$init(BasicComboBoxRenderer);
	if ($System::getSecurityManager() != nullptr) {
		return BasicComboBoxRenderer::SAFE_NO_FOCUS_BORDER;
	} else {
		return BasicComboBoxRenderer::noFocusBorder;
	}
}

$Dimension* BasicComboBoxRenderer::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	bool var$0 = this->getText() == nullptr;
	if (var$0 || $nc($(this->getText()))->isEmpty()) {
		setText(" "_s);
		$assign(size, $JLabel::getPreferredSize());
		setText(""_s);
	} else {
		$assign(size, $JLabel::getPreferredSize());
	}
	return size;
}

$Component* BasicComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	if (isSelected) {
		setBackground($($nc(list)->getSelectionBackground()));
		setForeground($($nc(list)->getSelectionForeground()));
	} else {
		setBackground($($nc(list)->getBackground()));
		setForeground($($nc(list)->getForeground()));
	}
	setFont($($nc(list)->getFont()));
	if ($instanceOf($Icon, value)) {
		setIcon($cast($Icon, value));
	} else {
		setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
	}
	return this;
}

void clinit$BasicComboBoxRenderer($Class* class$) {
	$assignStatic(BasicComboBoxRenderer::noFocusBorder, $new($EmptyBorder, 1, 1, 1, 1));
	$assignStatic(BasicComboBoxRenderer::SAFE_NO_FOCUS_BORDER, $new($EmptyBorder, 1, 1, 1, 1));
}

BasicComboBoxRenderer::BasicComboBoxRenderer() {
}

$Class* BasicComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxRenderer, name, initialize, &_BasicComboBoxRenderer_ClassInfo_, clinit$BasicComboBoxRenderer, allocate$BasicComboBoxRenderer);
	return class$;
}

$Class* BasicComboBoxRenderer::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax